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

import GoogleDataTransport

class FirelogTestMessageHolder: NSObject, GDTCOREventDataObject {
  public var root: FirelogTestMessage = FirelogTestMessage()

  func transportBytes() -> Data {
    do {
      let data: Data? = try root.serializedData()
      return data!
    } catch {
      print("There was an error producing proto bytes.")
      return Data()
    }
  }
}
