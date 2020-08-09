/*
 * Copyright 2019 The Firebase SDK Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import CommandLineKit
import Foundation
import MetricsLib

var flags = Flags()
let coveragePath = flags.string("c",
                                "coverage",
                                description: "Required - The path of the JSON coverage report generated by XCov.")
let pullRequest = flags.int("p",
                            "pull_request",
                            description: "Required - The number of the pull request that corresponds to this coverage run.")

/// Returns the current UTC time in a string format.
func currentTime() -> String {
  let formatter = DateFormatter()
  formatter.dateFormat = "yyyy-MM-dd HH:mm:ss"
  formatter.timeZone = TimeZone(identifier: "UTC")
  return formatter.string(from: Date())
}

do {
  try flags.parse()
  if !coveragePath.wasSet {
    print("Please specify the path of the JSON coverage report from XCov. -c or --coverage")
    exit(1)
  }
  if !pullRequest.wasSet {
    print("Please specify the corresponding pull request number. -p or --pull_request")
    exit(1)
  }
  let coverageReport = try CoverageReport.load(path: coveragePath.value!)
  let coverageTable = TableUpdate.createFrom(coverage: coverageReport,
                                             pullRequest: pullRequest.value!,
                                             currentTime: currentTime())
  let metrics = UploadMetrics(tables: [coverageTable])
  try Uploader.upload(metrics: metrics)
} catch {
  print("Error occurred: \(error)")
  exit(1)
}
