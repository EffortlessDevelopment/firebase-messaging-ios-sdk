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

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** @class FIRAuthSettings
    @brief Determines settings related to an auth object.
 */
NS_SWIFT_NAME(AuthSettings)
@interface FIRAuthSettings : NSObject

/** @property appVerificationDisabledForTesting
    @brief Flag to determine whether app verification should be disabled for testing or not.
 */
@property(nonatomic, assign, getter=isAppVerificationDisabledForTesting)
    BOOL appVerificationDisabledForTesting;

@end

NS_ASSUME_NONNULL_END
