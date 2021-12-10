// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.WriteToFilePath
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsRelativeToProjectDir                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::WriteToFilePath(const struct FString& Path, bool bIsRelativeToProjectDir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.WriteToFilePath");

	UVaRestJsonObject_WriteToFilePath_Params params {};
	params.Path = Path;
	params.bIsRelativeToProjectDir = bIsRelativeToProjectDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetStringField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetStringField(const struct FString& FieldName, const struct FString& StringValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetStringField");

	UVaRestJsonObject_SetStringField_Params params {};
	params.FieldName = FieldName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetStringArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetStringArrayField");

	UVaRestJsonObject_SetStringArrayField_Params params {};
	params.FieldName = FieldName;
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetObjectField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetObjectField");

	UVaRestJsonObject_SetObjectField_Params params {};
	params.FieldName = FieldName;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetObjectArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UVaRestJsonObject*>                   ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetObjectArrayField");

	UVaRestJsonObject_SetObjectArrayField_Params params {};
	params.FieldName = FieldName;
	params.ObjectArray = ObjectArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetNumberField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetNumberField(const struct FString& FieldName, float Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetNumberField");

	UVaRestJsonObject_SetNumberField_Params params {};
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetNumberArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      NumberArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetNumberArrayField");

	UVaRestJsonObject_SetNumberArrayField_Params params {};
	params.FieldName = FieldName;
	params.NumberArray = NumberArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_uint8
//		Flags  -> ()
// Parameters:
//		TMap<struct FString, unsigned char>                Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetMapFields_uint8(TMap<struct FString, unsigned char> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_uint8");

	UVaRestJsonObject_SetMapFields_uint8_Params params {};
	params.Fields = Fields;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_string
//		Flags  -> ()
// Parameters:
//		TMap<struct FString, struct FString>               Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetMapFields_string(TMap<struct FString, struct FString> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_string");

	UVaRestJsonObject_SetMapFields_string_Params params {};
	params.Fields = Fields;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_int64
//		Flags  -> ()
// Parameters:
//		TMap<struct FString, int64_t>                      Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetMapFields_int64(TMap<struct FString, int64_t> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_int64");

	UVaRestJsonObject_SetMapFields_int64_Params params {};
	params.Fields = Fields;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_int32
//		Flags  -> ()
// Parameters:
//		TMap<struct FString, int>                          Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetMapFields_int32(TMap<struct FString, int> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_int32");

	UVaRestJsonObject_SetMapFields_int32_Params params {};
	params.Fields = Fields;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_bool
//		Flags  -> ()
// Parameters:
//		TMap<struct FString, bool>                         Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetMapFields_bool(TMap<struct FString, bool> Fields)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_bool");

	UVaRestJsonObject_SetMapFields_bool_Params params {};
	params.Fields = Fields;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetIntegerField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetIntegerField(const struct FString& FieldName, int Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetIntegerField");

	UVaRestJsonObject_SetIntegerField_Params params {};
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetInt64Field
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetInt64Field(const struct FString& FieldName, int64_t Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetInt64Field");

	UVaRestJsonObject_SetInt64Field_Params params {};
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            JsonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetField");

	UVaRestJsonObject_SetField_Params params {};
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetBoolField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetBoolField(const struct FString& FieldName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetBoolField");

	UVaRestJsonObject_SetBoolField_Params params {};
	params.FieldName = FieldName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetBoolArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<bool>                                       BoolArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetBoolArrayField");

	UVaRestJsonObject_SetBoolArrayField_Params params {};
	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.SetArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UVaRestJsonValue*>                    inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetArrayField");

	UVaRestJsonObject_SetArrayField_Params params {};
	params.FieldName = FieldName;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.Reset
//		Flags  -> ()
void UVaRestJsonObject::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.Reset");

	UVaRestJsonObject_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.RemoveField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::RemoveField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.RemoveField");

	UVaRestJsonObject_RemoveField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.MergeJsonObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           InJsonObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Overwrite                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.MergeJsonObject");

	UVaRestJsonObject_MergeJsonObject_Params params {};
	params.InJsonObject = InJsonObject;
	params.Overwrite = Overwrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.HasField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::HasField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.HasField");

	UVaRestJsonObject_HasField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetStringField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::GetStringField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetStringField");

	UVaRestJsonObject_GetStringField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetStringArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestJsonObject::GetStringArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetStringArrayField");

	UVaRestJsonObject_GetStringArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetObjectField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetObjectField");

	UVaRestJsonObject_GetObjectField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetObjectArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UVaRestJsonObject*>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetObjectArrayField");

	UVaRestJsonObject_GetObjectArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetNumberField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVaRestJsonObject::GetNumberField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetNumberField");

	UVaRestJsonObject_GetNumberField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetNumberArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UVaRestJsonObject::GetNumberArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetNumberArrayField");

	UVaRestJsonObject_GetNumberArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetIntegerField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestJsonObject::GetIntegerField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetIntegerField");

	UVaRestJsonObject_GetIntegerField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetIntegerArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> UVaRestJsonObject::GetIntegerArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetIntegerArrayField");

	UVaRestJsonObject_GetIntegerArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetInt64Field
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UVaRestJsonObject::GetInt64Field(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetInt64Field");

	UVaRestJsonObject_GetInt64Field_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetFieldNames
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestJsonObject::GetFieldNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetFieldNames");

	UVaRestJsonObject_GetFieldNames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonObject::GetField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetField");

	UVaRestJsonObject_GetField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetBoolField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::GetBoolField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetBoolField");

	UVaRestJsonObject_GetBoolField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetBoolArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<bool>                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> UVaRestJsonObject::GetBoolArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetBoolArrayField");

	UVaRestJsonObject_GetBoolArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.GetArrayField
//		Flags  -> ()
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UVaRestJsonValue*>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetArrayField");

	UVaRestJsonObject_GetArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.EncodeJsonToSingleString");

	UVaRestJsonObject_EncodeJsonToSingleString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.EncodeJson
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::EncodeJson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.EncodeJson");

	UVaRestJsonObject_EncodeJson_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonObject.DecodeJson
//		Flags  -> ()
// Parameters:
//		struct FString                                     JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseIncrementalParser                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::DecodeJson(const struct FString& JsonString, bool bUseIncrementalParser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.DecodeJson");

	UVaRestJsonObject_DecodeJson_Params params {};
	params.JsonString = JsonString;
	params.bUseIncrementalParser = bUseIncrementalParser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.Reset
//		Flags  -> ()
void UVaRestJsonValue::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.Reset");

	UVaRestJsonValue_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.IsNull
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonValue::IsNull()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.IsNull");

	UVaRestJsonValue_IsNull_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.GetTypeString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonValue::GetTypeString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.GetTypeString");

	UVaRestJsonValue_GetTypeString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.GetType
//		Flags  -> ()
// Parameters:
//		VaRest_EVaJson                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VaRest_EVaJson UVaRestJsonValue::GetType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.GetType");

	UVaRestJsonValue_GetType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonValue::AsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsString");

	UVaRestJsonValue_AsString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsObject");

	UVaRestJsonValue_AsObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsNumber
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVaRestJsonValue::AsNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsNumber");

	UVaRestJsonValue_AsNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsInt64
//		Flags  -> ()
// Parameters:
//		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UVaRestJsonValue::AsInt64()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsInt64");

	UVaRestJsonValue_AsInt64_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsInt32
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestJsonValue::AsInt32()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsInt32");

	UVaRestJsonValue_AsInt32_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsBool
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonValue::AsBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsBool");

	UVaRestJsonValue_AsBool_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestJsonValue.AsArray
//		Flags  -> ()
// Parameters:
//		TArray<class UVaRestJsonValue*>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsArray");

	UVaRestJsonValue_AsArray_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.StringToSha1
//		Flags  -> ()
// Parameters:
//		struct FString                                     StringToHash                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::StringToSha1(const struct FString& StringToHash)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.StringToSha1");

	UVaRestLibrary_StringToSha1_Params params {};
	params.StringToHash = StringToHash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.StringToMd5
//		Flags  -> ()
// Parameters:
//		struct FString                                     StringToHash                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::StringToMd5(const struct FString& StringToHash)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.StringToMd5");

	UVaRestLibrary_StringToMd5_Params params {};
	params.StringToHash = StringToHash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.PercentEncode
//		Flags  -> ()
// Parameters:
//		struct FString                                     Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::PercentEncode(const struct FString& Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.PercentEncode");

	UVaRestLibrary_PercentEncode_Params params {};
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
//		Flags  -> ()
// Parameters:
//		int                                                StatusCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<VaRest_EVaRestHttpStatusCode>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<VaRest_EVaRestHttpStatusCode> UVaRestLibrary::HTTPStatusIntToEnum(int StatusCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.HTTPStatusIntToEnum");

	UVaRestLibrary_HTTPStatusIntToEnum_Params params {};
	params.StatusCode = StatusCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.GetWorldURL
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVaRestURL                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FVaRestURL UVaRestLibrary::GetWorldURL(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.GetWorldURL");

	UVaRestLibrary_GetWorldURL_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.GetVaRestVersion
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::GetVaRestVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.GetVaRestVersion");

	UVaRestLibrary_GetVaRestVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.GetVaRestSettings
//		Flags  -> ()
// Parameters:
//		class UVaRestSettings*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestSettings* UVaRestLibrary::GetVaRestSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.GetVaRestSettings");

	UVaRestLibrary_GetVaRestSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.Base64EncodeData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64EncodeData");

	UVaRestLibrary_Base64EncodeData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.Base64Encode
//		Flags  -> ()
// Parameters:
//		struct FString                                     Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::Base64Encode(const struct FString& Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64Encode");

	UVaRestLibrary_Base64Encode_Params params {};
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.Base64DecodeData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Dest                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64DecodeData");

	UVaRestLibrary_Base64DecodeData_Params params {};
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestLibrary.Base64Decode
//		Flags  -> ()
// Parameters:
//		struct FString                                     Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::Base64Decode(const struct FString& Source, struct FString* Dest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64Decode");

	UVaRestLibrary_Base64Decode_Params params {};
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetVerb
//		Flags  -> ()
// Parameters:
//		VaRest_EVaRestRequestVerb                          Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetVerb(VaRest_EVaRestRequestVerb Verb)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetVerb");

	UVaRestRequestJSON_SetVerb_Params params {};
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetURL
//		Flags  -> ()
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetURL");

	UVaRestRequestJSON_SetURL_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetStringRequestContent
//		Flags  -> ()
// Parameters:
//		struct FString                                     Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetStringRequestContent(const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetStringRequestContent");

	UVaRestRequestJSON_SetStringRequestContent_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetResponseObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetResponseObject");

	UVaRestRequestJSON_SetResponseObject_Params params {};
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetRequestObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetRequestObject");

	UVaRestRequestJSON_SetRequestObject_Params params {};
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetHeader
//		Flags  -> ()
// Parameters:
//		struct FString                                     HeaderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     HeaderValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetHeader");

	UVaRestRequestJSON_SetHeader_Params params {};
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetCustomVerb
//		Flags  -> ()
// Parameters:
//		struct FString                                     Verb                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetCustomVerb(const struct FString& Verb)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetCustomVerb");

	UVaRestRequestJSON_SetCustomVerb_Params params {};
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetContentType
//		Flags  -> ()
// Parameters:
//		VaRest_EVaRestRequestContentType                   ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetContentType(VaRest_EVaRestRequestContentType ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetContentType");

	UVaRestRequestJSON_SetContentType_Params params {};
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetBinaryRequestContent(TArray<unsigned char> Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetBinaryRequestContent");

	UVaRestRequestJSON_SetBinaryRequestContent_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.SetBinaryContentType
//		Flags  -> ()
// Parameters:
//		struct FString                                     ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetBinaryContentType(const struct FString& ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetBinaryContentType");

	UVaRestRequestJSON_SetBinaryContentType_Params params {};
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.ResetResponseData
//		Flags  -> ()
void UVaRestRequestJSON::ResetResponseData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ResetResponseData");

	UVaRestRequestJSON_ResetResponseData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.ResetRequestData
//		Flags  -> ()
void UVaRestRequestJSON::ResetRequestData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ResetRequestData");

	UVaRestRequestJSON_ResetRequestData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.ResetData
//		Flags  -> ()
void UVaRestRequestJSON::ResetData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ResetData");

	UVaRestRequestJSON_ResetData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.RemoveTag
//		Flags  -> ()
// Parameters:
//		struct FName                                       Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestRequestJSON::RemoveTag(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.RemoveTag");

	UVaRestRequestJSON_RemoveTag_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.ProcessURL
//		Flags  -> ()
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::ProcessURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ProcessURL");

	UVaRestRequestJSON_ProcessURL_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.HasTag
//		Flags  -> ()
// Parameters:
//		struct FName                                       Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestRequestJSON::HasTag(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.HasTag");

	UVaRestRequestJSON_HasTag_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetVerb
//		Flags  -> ()
// Parameters:
//		VaRest_EVaRestRequestVerb                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VaRest_EVaRestRequestVerb UVaRestRequestJSON::GetVerb()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetVerb");

	UVaRestRequestJSON_GetVerb_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetURL
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetURL()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetURL");

	UVaRestRequestJSON_GetURL_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetStatus
//		Flags  -> ()
// Parameters:
//		VaRest_EVaRestRequestStatus                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VaRest_EVaRestRequestStatus UVaRestRequestJSON::GetStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetStatus");

	UVaRestRequestJSON_GetStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetResponseValue
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestRequestJSON::GetResponseValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseValue");

	UVaRestRequestJSON_GetResponseValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetResponseObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseObject");

	UVaRestRequestJSON_GetResponseObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetResponseHeader
//		Flags  -> ()
// Parameters:
//		struct FString                                     HeaderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetResponseHeader(const struct FString& HeaderName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseHeader");

	UVaRestRequestJSON_GetResponseHeader_Params params {};
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetResponseContentAsString
//		Flags  -> ()
// Parameters:
//		bool                                               bCacheResponseContent                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetResponseContentAsString(bool bCacheResponseContent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseContentAsString");

	UVaRestRequestJSON_GetResponseContentAsString_Params params {};
	params.bCacheResponseContent = bCacheResponseContent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetResponseCode
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestRequestJSON::GetResponseCode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseCode");

	UVaRestRequestJSON_GetResponseCode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetRequestObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetRequestObject");

	UVaRestRequestJSON_GetRequestObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetAllResponseHeaders");

	UVaRestRequestJSON_GetAllResponseHeaders_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
//		Flags  -> ()
void UVaRestRequestJSON::ExecuteProcessRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ExecuteProcessRequest");

	UVaRestRequestJSON_ExecuteProcessRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.Cancel
//		Flags  -> ()
void UVaRestRequestJSON::Cancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.Cancel");

	UVaRestRequestJSON_Cancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.ApplyURL
//		Flags  -> ()
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonObject*                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::ApplyURL(const struct FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ApplyURL");

	UVaRestRequestJSON_ApplyURL_Params params {};
	params.URL = URL;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestRequestJSON.AddTag
//		Flags  -> ()
// Parameters:
//		struct FName                                       Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::AddTag(const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.AddTag");

	UVaRestRequestJSON_AddTag_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestSubsystem::StaticConstructVaRestJsonObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject");

	UVaRestSubsystem_StaticConstructVaRestJsonObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.LoadJsonFromFile
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsRelativeToContentDir                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestSubsystem::LoadJsonFromFile(const struct FString& Path, bool bIsRelativeToContentDir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.LoadJsonFromFile");

	UVaRestSubsystem_LoadJsonFromFile_Params params {};
	params.Path = Path;
	params.bIsRelativeToContentDir = bIsRelativeToContentDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.DecodeJsonValue
//		Flags  -> ()
// Parameters:
//		struct FString                                     JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestSubsystem::DecodeJsonValue(const struct FString& JsonString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.DecodeJsonValue");

	UVaRestSubsystem_DecodeJsonValue_Params params {};
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.DecodeJsonObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestSubsystem::DecodeJsonObject(const struct FString& JsonString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.DecodeJsonObject");

	UVaRestSubsystem_DecodeJsonObject_Params params {};
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
//		Flags  -> ()
// Parameters:
//		VaRest_EVaRestRequestVerb                          Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		VaRest_EVaRestRequestContentType                   ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestRequestJSON*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequestExt(VaRest_EVaRestRequestVerb Verb, VaRest_EVaRestRequestContentType ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt");

	UVaRestSubsystem_ConstructVaRestRequestExt_Params params {};
	params.Verb = Verb;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructVaRestRequest
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructVaRestRequest");

	UVaRestSubsystem_ConstructVaRestRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestSubsystem::ConstructVaRestJsonObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject");

	UVaRestSubsystem_ConstructVaRestJsonObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueString
//		Flags  -> ()
// Parameters:
//		struct FString                                     StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueString(const struct FString& StringValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueString");

	UVaRestSubsystem_ConstructJsonValueString_Params params {};
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueObject
//		Flags  -> ()
// Parameters:
//		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueObject(class UVaRestJsonObject* JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueObject");

	UVaRestSubsystem_ConstructJsonValueObject_Params params {};
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
//		Flags  -> ()
// Parameters:
//		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueNumber(float Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueNumber");

	UVaRestSubsystem_ConstructJsonValueNumber_Params params {};
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueBool
//		Flags  -> ()
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueBool(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueBool");

	UVaRestSubsystem_ConstructJsonValueBool_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueArray
//		Flags  -> ()
// Parameters:
//		TArray<class UVaRestJsonValue*>                    inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class UVaRestJsonValue*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueArray(TArray<class UVaRestJsonValue*> inArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueArray");

	UVaRestSubsystem_ConstructJsonValueArray_Params params {};
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VaRest.VaRestSubsystem.CallURL
//		Flags  -> ()
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		VaRest_EVaRestRequestVerb                          Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		VaRest_EVaRestRequestContentType                   ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVaRestJsonObject*                           VaRestJson                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UVaRestSubsystem::CallURL(const struct FString& URL, VaRest_EVaRestRequestVerb Verb, VaRest_EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.CallURL");

	UVaRestSubsystem_CallURL_Params params {};
	params.URL = URL;
	params.Verb = Verb;
	params.ContentType = ContentType;
	params.VaRestJson = VaRestJson;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
