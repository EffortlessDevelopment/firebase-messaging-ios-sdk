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

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.5 */

#ifndef PB_GOOGLE_PROTOBUF_STRUCT_NANOPB_H_INCLUDED
#define PB_GOOGLE_PROTOBUF_STRUCT_NANOPB_H_INCLUDED
#include <pb.h>

#include <string>

namespace firebase {
namespace firestore {

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Enum definitions */
typedef enum _google_protobuf_NullValue {
    google_protobuf_NullValue_NULL_VALUE = 0
} google_protobuf_NullValue;
#define _google_protobuf_NullValue_MIN google_protobuf_NullValue_NULL_VALUE
#define _google_protobuf_NullValue_MAX google_protobuf_NullValue_NULL_VALUE
#define _google_protobuf_NullValue_ARRAYSIZE ((google_protobuf_NullValue)(google_protobuf_NullValue_NULL_VALUE+1))

/* Struct definitions */
typedef struct _google_protobuf_ListValue {
    pb_size_t values_count;
    struct _google_protobuf_Value *values;

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:google_protobuf_ListValue) */
} google_protobuf_ListValue;

typedef struct _google_protobuf_Struct {
    pb_size_t fields_count;
    struct _google_protobuf_Struct_FieldsEntry *fields;

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:google_protobuf_Struct) */
} google_protobuf_Struct;

typedef struct _google_protobuf_Value {
    pb_size_t which_kind;
    union {
        google_protobuf_NullValue null_value;
        double number_value;
        pb_bytes_array_t *string_value;
        bool bool_value;
        google_protobuf_Struct struct_value;
        google_protobuf_ListValue list_value;
    };

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:google_protobuf_Value) */
} google_protobuf_Value;

typedef struct _google_protobuf_Struct_FieldsEntry {
    pb_bytes_array_t *key;
    google_protobuf_Value value;

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:google_protobuf_Struct_FieldsEntry) */
} google_protobuf_Struct_FieldsEntry;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_protobuf_Struct_init_default      {0, NULL}
#define google_protobuf_Struct_FieldsEntry_init_default {NULL, google_protobuf_Value_init_default}
#define google_protobuf_Value_init_default       {0, {_google_protobuf_NullValue_MIN}}
#define google_protobuf_ListValue_init_default   {0, NULL}
#define google_protobuf_Struct_init_zero         {0, NULL}
#define google_protobuf_Struct_FieldsEntry_init_zero {NULL, google_protobuf_Value_init_zero}
#define google_protobuf_Value_init_zero          {0, {_google_protobuf_NullValue_MIN}}
#define google_protobuf_ListValue_init_zero      {0, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define google_protobuf_ListValue_values_tag     1
#define google_protobuf_Struct_fields_tag        1
#define google_protobuf_Value_null_value_tag     1
#define google_protobuf_Value_number_value_tag   2
#define google_protobuf_Value_string_value_tag   3
#define google_protobuf_Value_bool_value_tag     4
#define google_protobuf_Value_struct_value_tag   5
#define google_protobuf_Value_list_value_tag     6
#define google_protobuf_Struct_FieldsEntry_key_tag 1
#define google_protobuf_Struct_FieldsEntry_value_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_protobuf_Struct_fields[2];
extern const pb_field_t google_protobuf_Struct_FieldsEntry_fields[3];
extern const pb_field_t google_protobuf_Value_fields[7];
extern const pb_field_t google_protobuf_ListValue_fields[2];

/* Maximum encoded size of messages (where known) */
/* google_protobuf_Struct_size depends on runtime parameters */
/* google_protobuf_Struct_FieldsEntry_size depends on runtime parameters */
/* google_protobuf_Value_size depends on runtime parameters */
/* google_protobuf_ListValue_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define STRUCT_MESSAGES \


#endif

const char* EnumToString(google_protobuf_NullValue value);
}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */

#endif
