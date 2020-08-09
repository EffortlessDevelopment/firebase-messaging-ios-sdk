/*
 * Copyright 2018 The Firebase SDK Authors
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

#ifndef FIRESTORE_CORE_TEST_UNIT_UTIL_EXECUTOR_TEST_H_
#define FIRESTORE_CORE_TEST_UNIT_UTIL_EXECUTOR_TEST_H_

#include <memory>

#include "Firestore/core/src/util/executor.h"
#include "Firestore/core/test/unit/testutil/async_testing.h"
#include "gtest/gtest.h"

namespace firebase {
namespace firestore {
namespace util {

using FactoryFunc = std::unique_ptr<Executor> (*)(int threads);

class ExecutorTest : public ::testing::TestWithParam<FactoryFunc>,
                     public testutil::AsyncTest {
 public:
  // `GetParam()` must return a factory function.
  ExecutorTest() : executor{GetParam()(/*threads=*/1)} {
  }

  std::unique_ptr<Executor> executor;
};
}  // namespace util
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_TEST_UNIT_UTIL_EXECUTOR_TEST_H_
