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

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.5 */

#ifndef PB_LOGS_PROTO_MOBILESDK_IOS_FIREBASECORE_NANOPB_H_INCLUDED
#define PB_LOGS_PROTO_MOBILESDK_IOS_FIREBASECORE_NANOPB_H_INCLUDED
#include <nanopb/pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Enum definitions */
typedef enum _logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType {
    logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_UNKNOWN_CONFIGURATION_TYPE = 0,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_CORE = 1,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_SDK = 2
} logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType;
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_MIN logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_UNKNOWN_CONFIGURATION_TYPE
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_MAX logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_SDK
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_ARRAYSIZE ((logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType)(logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_SDK+1))

typedef enum _logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType {
    logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_UNKNOWN_BUILD_TYPE = 0,
    logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_INTERNAL = 1,
    logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_EAP = 2,
    logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_PROD = 3
} logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType;
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_MIN logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_UNKNOWN_BUILD_TYPE
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_MAX logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_PROD
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_ARRAYSIZE ((logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType)(logs_proto_mobilesdk_ios_ICoreConfiguration_BuildType_PROD+1))

typedef enum _logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType {
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_UNKNOWN_SDK_SERVICE = 0,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ICORE = 1,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ADMOB = 2,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_APP_INVITE = 3,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_SIGN_IN = 5,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_GCM = 6,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MAPS = 7,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_SCION = 8,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ANALYTICS = 9,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_APP_INDEXING = 10,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_CONFIG = 11,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_DURABLE_DEEP_LINKS = 12,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_CRASH = 13,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_AUTH = 14,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_DATABASE = 15,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_STORAGE = 16,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MESSAGING = 17,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MEASUREMENT = 18,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_REMOTE_CONFIG = 19,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_DYNAMIC_LINKS = 20,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_INVITES = 21,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_AUTH_UI = 22,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_FIRESTORE = 23,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_PERFORMANCE = 24,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_FACE = 26,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_BARCODE = 27,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_TEXT = 28,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_LABEL = 29,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_MODEL_INTERPRETER = 30,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_IN_APP_MESSAGING = 31,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_FUNCTIONS = 32,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_NATURAL_LANGUAGE = 33,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_AUTOML = 34,
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_OBJECT_DETECTION = 35
} logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType;
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MIN logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_UNKNOWN_SDK_SERVICE
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MAX logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_OBJECT_DETECTION
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ARRAYSIZE ((logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType)(logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_ML_VISION_ON_DEVICE_OBJECT_DETECTION+1))

typedef enum _logs_proto_mobilesdk_ios_ICoreConfiguration_PodName {
    logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_UNKNOWN_POD_NAME = 0,
    logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_GOOGLE = 1,
    logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_FIREBASE = 2
} logs_proto_mobilesdk_ios_ICoreConfiguration_PodName;
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_MIN logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_UNKNOWN_POD_NAME
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_MAX logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_FIREBASE
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_ARRAYSIZE ((logs_proto_mobilesdk_ios_ICoreConfiguration_PodName)(logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_FIREBASE+1))

typedef enum _logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType {
    logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_UNKNOWN = 0,
    logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_COCOAPODS = 1,
    logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_ZIP_FILE = 2,
    logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_CARTHAGE = 3,
    logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_SPM = 4
} logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType;
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_MIN logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_UNKNOWN
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_MAX logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_SPM
#define _logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_ARRAYSIZE ((logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType)(logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_SPM+1))

/* Struct definitions */
typedef struct _logs_proto_mobilesdk_ios_ICoreConfiguration {
    bool has_configuration_type;
    logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType configuration_type;
    pb_size_t sdk_service_installed_count;
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType *sdk_service_installed;
    pb_bytes_array_t *device_model;
    pb_bytes_array_t *app_id;
    pb_bytes_array_t *bundle_id;
    bool has_pod_name;
    logs_proto_mobilesdk_ios_ICoreConfiguration_PodName pod_name;
    pb_bytes_array_t *icore_version;
    pb_bytes_array_t *sdk_version;
    bool has_sdk_name;
    logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType sdk_name;
    bool has_app_count;
    int32_t app_count;
    pb_bytes_array_t *os_version;
    pb_bytes_array_t *min_supported_ios_version;
    bool has_use_default_app;
    bool use_default_app;
    bool has_deployed_in_app_store;
    bool deployed_in_app_store;
    bool has_dynamic_framework_count;
    int32_t dynamic_framework_count;
    pb_bytes_array_t *apple_framework_version;
    bool has_using_zip_file;
    bool using_zip_file;
    bool has_deployment_type;
    logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType deployment_type;
    pb_bytes_array_t *platform_info;
    bool has_swizzling_enabled;
    bool swizzling_enabled;
    bool has_using_gdt;
    bool using_gdt;
/* @@protoc_insertion_point(struct:logs_proto_mobilesdk_ios_ICoreConfiguration) */
} logs_proto_mobilesdk_ios_ICoreConfiguration;

/* Default values for struct fields */

/* Initializer values for message structs */
#define logs_proto_mobilesdk_ios_ICoreConfiguration_init_default {false, _logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_MIN, 0, NULL, NULL, NULL, NULL, false, _logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_MIN, NULL, NULL, false, _logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MIN, false, 0, NULL, NULL, false, 0, false, 0, false, 0, NULL, false, 0, false, _logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_MIN, NULL, false, 0, false, 0}
#define logs_proto_mobilesdk_ios_ICoreConfiguration_init_zero {false, _logs_proto_mobilesdk_ios_ICoreConfiguration_ConfigurationType_MIN, 0, NULL, NULL, NULL, NULL, false, _logs_proto_mobilesdk_ios_ICoreConfiguration_PodName_MIN, NULL, NULL, false, _logs_proto_mobilesdk_ios_ICoreConfiguration_ServiceType_MIN, false, 0, NULL, NULL, false, 0, false, 0, false, 0, NULL, false, 0, false, _logs_proto_mobilesdk_ios_ICoreConfiguration_DeploymentType_MIN, NULL, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define logs_proto_mobilesdk_ios_ICoreConfiguration_pod_name_tag 16
#define logs_proto_mobilesdk_ios_ICoreConfiguration_configuration_type_tag 1
#define logs_proto_mobilesdk_ios_ICoreConfiguration_icore_version_tag 18
#define logs_proto_mobilesdk_ios_ICoreConfiguration_sdk_version_tag 19
#define logs_proto_mobilesdk_ios_ICoreConfiguration_sdk_service_installed_tag 7
#define logs_proto_mobilesdk_ios_ICoreConfiguration_sdk_name_tag 20
#define logs_proto_mobilesdk_ios_ICoreConfiguration_device_model_tag 9
#define logs_proto_mobilesdk_ios_ICoreConfiguration_os_version_tag 22
#define logs_proto_mobilesdk_ios_ICoreConfiguration_app_id_tag 10
#define logs_proto_mobilesdk_ios_ICoreConfiguration_bundle_id_tag 12
#define logs_proto_mobilesdk_ios_ICoreConfiguration_min_supported_ios_version_tag 24
#define logs_proto_mobilesdk_ios_ICoreConfiguration_use_default_app_tag 25
#define logs_proto_mobilesdk_ios_ICoreConfiguration_app_count_tag 21
#define logs_proto_mobilesdk_ios_ICoreConfiguration_deployed_in_app_store_tag 26
#define logs_proto_mobilesdk_ios_ICoreConfiguration_dynamic_framework_count_tag 27
#define logs_proto_mobilesdk_ios_ICoreConfiguration_apple_framework_version_tag 28
#define logs_proto_mobilesdk_ios_ICoreConfiguration_using_zip_file_tag 29
#define logs_proto_mobilesdk_ios_ICoreConfiguration_deployment_type_tag 30
#define logs_proto_mobilesdk_ios_ICoreConfiguration_platform_info_tag 31
#define logs_proto_mobilesdk_ios_ICoreConfiguration_swizzling_enabled_tag 33
#define logs_proto_mobilesdk_ios_ICoreConfiguration_using_gdt_tag 36

/* Struct field encoding specification for nanopb */
extern const pb_field_t logs_proto_mobilesdk_ios_ICoreConfiguration_fields[22];

/* Maximum encoded size of messages (where known) */
/* logs_proto_mobilesdk_ios_ICoreConfiguration_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define FIREBASECORE_MESSAGES \


#endif

/* @@protoc_insertion_point(eof) */

#endif
