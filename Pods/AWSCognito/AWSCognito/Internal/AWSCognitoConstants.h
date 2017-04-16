//
// Copyright 2014-2016 Amazon.com,
// Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Amazon Software License (the "License").
// You may not use this file except in compliance with the
// License. A copy of the License is located at
//
//     http://aws.amazon.com/asl/
//
// or in the "license" file accompanying this file. This file is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, express or implied. See the License
// for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const AWSCognitoDefaultSqliteDataTableName;
FOUNDATION_EXPORT NSString *const AWSCognitoTableIdentityKeyName;
FOUNDATION_EXPORT NSString *const AWSCognitoTableDatasetKeyName;
FOUNDATION_EXPORT NSString *const AWSCognitoTableRecordKeyName;
FOUNDATION_EXPORT NSString *const AWSCognitoUnknownIdentity;
FOUNDATION_EXPORT NSString *const AWSCognitoRecordValueName;
FOUNDATION_EXPORT NSString *const AWSCognitoDataFieldKeyName;
FOUNDATION_EXPORT NSString *const AWSCognitoTypeFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoLastModifiedFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoModifiedByFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoRecordCountFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoDataStorageFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoDatasetCreationDateFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoDirtyFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoSyncCountFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoDefaultSqliteMetadataTableName;
FOUNDATION_EXPORT NSString *const AWSCognitoDatasetFieldName;
FOUNDATION_EXPORT NSString *const AWSCognitoLastSyncCount;

FOUNDATION_EXPORT NSString* const AWSCognitoDeletedRecord;
FOUNDATION_EXPORT int64_t const AWSCognitoNotSyncedDeletedRecordDirty;
FOUNDATION_EXPORT NSString *const AWSCognitoUserDefaultsUserAgentPrefix;

FOUNDATION_EXPORT uint32_t const AWSCognitoMaxSyncRetries;
FOUNDATION_EXPORT BOOL const AWSCognitoSynchronizeOnWiFiOnly;

FOUNDATION_EXPORT uint32_t const AWSCognitoMaxDatasetSize;
FOUNDATION_EXPORT uint32_t const AWSCognitoMinKeySize;
FOUNDATION_EXPORT uint32_t const AWSCognitoMaxKeySize;
FOUNDATION_EXPORT uint32_t const AWSCognitoMaxRecordValueSize;
FOUNDATION_EXPORT uint32_t const AWSCognitoMaxNumRecords;

FOUNDATION_EXPORT NSString *const AWSCognitoSyncPushApns;
FOUNDATION_EXPORT NSString *const AWSCognitoSyncPushApnsSandbox;

#pragma mark - Standard error messages

FOUNDATION_EXPORT NSString *const AWSCognitoErrorRemoteDataStorageFailedDescription;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorRemoteDataStorageFailedRecoverySuggestion;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorInvalidDataValueDescription;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorInvalidDataValueRecoverySuggestion;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorUserDataSizeLimitExceededDescription;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorUserDataSizeLimitExceededRecoverySuggestion;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorLocalDataStorageFailedDescription;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorLocalDataStorageFailedRecoverySuggestion;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorIllegalArgumentDescription;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorIllegalArgumentRecoverySuggestion;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorUnknownDataTypeDescription;
FOUNDATION_EXPORT NSString *const AWSCognitoErrorUnknownDataTypeRecoverySuggestion;
