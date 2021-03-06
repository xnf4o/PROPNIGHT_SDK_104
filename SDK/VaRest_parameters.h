#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function VaRest.VaRestJsonObject.WriteToFilePath
struct UVaRestJsonObject_WriteToFilePath_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRelativeToProjectDir;                                   // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetStringField
struct UVaRestJsonObject_SetStringField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringValue;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetStringArrayField
struct UVaRestJsonObject_SetStringArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StringArray;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetObjectField
struct UVaRestJsonObject_SetObjectField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           JsonObject;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetObjectArrayField
struct UVaRestJsonObject_SetObjectArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonObject*>                   ObjectArray;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetNumberField
struct UVaRestJsonObject_SetNumberField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Number;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetNumberArrayField
struct UVaRestJsonObject_SetNumberArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      NumberArray;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetMapFields_uint8
struct UVaRestJsonObject_SetMapFields_uint8_Params
{
	TMap<struct FString, unsigned char>                Fields;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetMapFields_string
struct UVaRestJsonObject_SetMapFields_string_Params
{
	TMap<struct FString, struct FString>               Fields;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetMapFields_int64
struct UVaRestJsonObject_SetMapFields_int64_Params
{
	TMap<struct FString, int64_t>                      Fields;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetMapFields_int32
struct UVaRestJsonObject_SetMapFields_int32_Params
{
	TMap<struct FString, int>                          Fields;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetMapFields_bool
struct UVaRestJsonObject_SetMapFields_bool_Params
{
	TMap<struct FString, bool>                         Fields;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetIntegerField
struct UVaRestJsonObject_SetIntegerField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Number;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetInt64Field
struct UVaRestJsonObject_SetInt64Field_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Number;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetField
struct UVaRestJsonObject_SetField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            JsonValue;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetBoolField
struct UVaRestJsonObject_SetBoolField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetBoolArrayField
struct UVaRestJsonObject_SetBoolArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       BoolArray;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.SetArrayField
struct UVaRestJsonObject_SetArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>                    inArray;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.Reset
struct UVaRestJsonObject_Reset_Params
{
};

// Function VaRest.VaRestJsonObject.RemoveField
struct UVaRestJsonObject_RemoveField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.MergeJsonObject
struct UVaRestJsonObject_MergeJsonObject_Params
{
	class UVaRestJsonObject*                           InJsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Overwrite;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.HasField
struct UVaRestJsonObject_HasField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetStringField
struct UVaRestJsonObject_GetStringField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetStringArrayField
struct UVaRestJsonObject_GetStringArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetObjectField
struct UVaRestJsonObject_GetObjectField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetObjectArrayField
struct UVaRestJsonObject_GetObjectArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonObject*>                   ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetNumberField
struct UVaRestJsonObject_GetNumberField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetNumberArrayField
struct UVaRestJsonObject_GetNumberArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetIntegerField
struct UVaRestJsonObject_GetIntegerField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetIntegerArrayField
struct UVaRestJsonObject_GetIntegerArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetInt64Field
struct UVaRestJsonObject_GetInt64Field_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetFieldNames
struct UVaRestJsonObject_GetFieldNames_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetField
struct UVaRestJsonObject_GetField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetBoolField
struct UVaRestJsonObject_GetBoolField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetBoolArrayField
struct UVaRestJsonObject_GetBoolArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.GetArrayField
struct UVaRestJsonObject_GetArrayField_Params
{
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>                    ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
struct UVaRestJsonObject_EncodeJsonToSingleString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.EncodeJson
struct UVaRestJsonObject_EncodeJson_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonObject.DecodeJson
struct UVaRestJsonObject_DecodeJson_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseIncrementalParser;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.Reset
struct UVaRestJsonValue_Reset_Params
{
};

// Function VaRest.VaRestJsonValue.IsNull
struct UVaRestJsonValue_IsNull_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.GetTypeString
struct UVaRestJsonValue_GetTypeString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.GetType
struct UVaRestJsonValue_GetType_Params
{
	VaRest_EVaJson                                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsString
struct UVaRestJsonValue_AsString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsObject
struct UVaRestJsonValue_AsObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsNumber
struct UVaRestJsonValue_AsNumber_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsInt64
struct UVaRestJsonValue_AsInt64_Params
{
	int64_t                                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsInt32
struct UVaRestJsonValue_AsInt32_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsBool
struct UVaRestJsonValue_AsBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestJsonValue.AsArray
struct UVaRestJsonValue_AsArray_Params
{
	TArray<class UVaRestJsonValue*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.StringToSha1
struct UVaRestLibrary_StringToSha1_Params
{
	struct FString                                     StringToHash;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.StringToMd5
struct UVaRestLibrary_StringToMd5_Params
{
	struct FString                                     StringToHash;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.PercentEncode
struct UVaRestLibrary_PercentEncode_Params
{
	struct FString                                     Source;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
struct UVaRestLibrary_HTTPStatusIntToEnum_Params
{
	int                                                StatusCode;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<VaRest_EVaRestHttpStatusCode>          ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.GetWorldURL
struct UVaRestLibrary_GetWorldURL_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVaRestURL                                  ReturnValue;                                               // 0x0008(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.GetVaRestVersion
struct UVaRestLibrary_GetVaRestVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.GetVaRestSettings
struct UVaRestLibrary_GetVaRestSettings_Params
{
	class UVaRestSettings*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.Base64EncodeData
struct UVaRestLibrary_Base64EncodeData_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Dest;                                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.Base64Encode
struct UVaRestLibrary_Base64Encode_Params
{
	struct FString                                     Source;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.Base64DecodeData
struct UVaRestLibrary_Base64DecodeData_Params
{
	struct FString                                     Source;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Dest;                                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestLibrary.Base64Decode
struct UVaRestLibrary_Base64Decode_Params
{
	struct FString                                     Source;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Dest;                                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetVerb
struct UVaRestRequestJSON_SetVerb_Params
{
	VaRest_EVaRestRequestVerb                          Verb;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetURL
struct UVaRestRequestJSON_SetURL_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetStringRequestContent
struct UVaRestRequestJSON_SetStringRequestContent_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetResponseObject
struct UVaRestRequestJSON_SetResponseObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetRequestObject
struct UVaRestRequestJSON_SetRequestObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetHeader
struct UVaRestRequestJSON_SetHeader_Params
{
	struct FString                                     HeaderName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeaderValue;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetCustomVerb
struct UVaRestRequestJSON_SetCustomVerb_Params
{
	struct FString                                     Verb;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetContentType
struct UVaRestRequestJSON_SetContentType_Params
{
	VaRest_EVaRestRequestContentType                   ContentType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
struct UVaRestRequestJSON_SetBinaryRequestContent_Params
{
	TArray<unsigned char>                              Content;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.SetBinaryContentType
struct UVaRestRequestJSON_SetBinaryContentType_Params
{
	struct FString                                     ContentType;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.ResetResponseData
struct UVaRestRequestJSON_ResetResponseData_Params
{
};

// Function VaRest.VaRestRequestJSON.ResetRequestData
struct UVaRestRequestJSON_ResetRequestData_Params
{
};

// Function VaRest.VaRestRequestJSON.ResetData
struct UVaRestRequestJSON_ResetData_Params
{
};

// Function VaRest.VaRestRequestJSON.RemoveTag
struct UVaRestRequestJSON_RemoveTag_Params
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.ProcessURL
struct UVaRestRequestJSON_ProcessURL_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.HasTag
struct UVaRestRequestJSON_HasTag_Params
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetVerb
struct UVaRestRequestJSON_GetVerb_Params
{
	VaRest_EVaRestRequestVerb                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetURL
struct UVaRestRequestJSON_GetURL_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetStatus
struct UVaRestRequestJSON_GetStatus_Params
{
	VaRest_EVaRestRequestStatus                        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetResponseValue
struct UVaRestRequestJSON_GetResponseValue_Params
{
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetResponseObject
struct UVaRestRequestJSON_GetResponseObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetResponseHeader
struct UVaRestRequestJSON_GetResponseHeader_Params
{
	struct FString                                     HeaderName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetResponseContentAsString
struct UVaRestRequestJSON_GetResponseContentAsString_Params
{
	bool                                               bCacheResponseContent;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetResponseCode
struct UVaRestRequestJSON_GetResponseCode_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetRequestObject
struct UVaRestRequestJSON_GetRequestObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
struct UVaRestRequestJSON_GetAllResponseHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
struct UVaRestRequestJSON_ExecuteProcessRequest_Params
{
};

// Function VaRest.VaRestRequestJSON.Cancel
struct UVaRestRequestJSON_Cancel_Params
{
};

// Function VaRest.VaRestRequestJSON.ApplyURL
struct UVaRestRequestJSON_ApplyURL_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           Result;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0020(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestRequestJSON.AddTag
struct UVaRestRequestJSON_AddTag_Params
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
struct UVaRestSubsystem_StaticConstructVaRestJsonObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.LoadJsonFromFile
struct UVaRestSubsystem_LoadJsonFromFile_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRelativeToContentDir;                                   // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.DecodeJsonValue
struct UVaRestSubsystem_DecodeJsonValue_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.DecodeJsonObject
struct UVaRestSubsystem_DecodeJsonObject_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
struct UVaRestSubsystem_ConstructVaRestRequestExt_Params
{
	VaRest_EVaRestRequestVerb                          Verb;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRest_EVaRestRequestContentType                   ContentType;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestRequestJSON*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructVaRestRequest
struct UVaRestSubsystem_ConstructVaRestRequest_Params
{
	class UVaRestRequestJSON*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
struct UVaRestSubsystem_ConstructVaRestJsonObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructJsonValueString
struct UVaRestSubsystem_ConstructJsonValueString_Params
{
	struct FString                                     StringValue;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructJsonValueObject
struct UVaRestSubsystem_ConstructJsonValueObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
struct UVaRestSubsystem_ConstructJsonValueNumber_Params
{
	float                                              Number;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructJsonValueBool
struct UVaRestSubsystem_ConstructJsonValueBool_Params
{
	bool                                               InValue;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.ConstructJsonValueArray
struct UVaRestSubsystem_ConstructJsonValueArray_Params
{
	TArray<class UVaRestJsonValue*>                    inArray;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRest.VaRestSubsystem.CallURL
struct UVaRestSubsystem_CallURL_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRest_EVaRestRequestVerb                          Verb;                                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRest_EVaRestRequestContentType                   ContentType;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           VaRestJson;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
