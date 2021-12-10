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
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureVector(const struct FString& Key, const struct FVector& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector");

	UMagicLeapSecureStorage_PutSecureVector_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  DataToStore                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform");

	UMagicLeapSecureStorage_PutSecureTransform_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DataToStore                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureString(const struct FString& Key, const struct FString& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString");

	UMagicLeapSecureStorage_PutSecureString_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USaveGame*                                   ObjectToStore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureSaveGame(const struct FString& Key, class USaveGame* ObjectToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame");

	UMagicLeapSecureStorage_PutSecureSaveGame_Params params {};
	params.Key = Key;
	params.ObjectToStore = ObjectToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator");

	UMagicLeapSecureStorage_PutSecureRotator_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureInt64(const struct FString& Key, int64_t DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64");

	UMagicLeapSecureStorage_PutSecureInt64_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureInt(const struct FString& Key, int DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt");

	UMagicLeapSecureStorage_PutSecureInt_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureFloat(const struct FString& Key, float DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat");

	UMagicLeapSecureStorage_PutSecureFloat_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureByte(const struct FString& Key, unsigned char DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte");

	UMagicLeapSecureStorage_PutSecureByte_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureBool(const struct FString& Key, bool DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool");

	UMagicLeapSecureStorage_PutSecureBool_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::PutSecureArray(const struct FString& Key, TArray<int> DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray");

	UMagicLeapSecureStorage_PutSecureArray_Params params {};
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector");

	UMagicLeapSecureStorage_GetSecureVector_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  DataToRetrieve                                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform");

	UMagicLeapSecureStorage_GetSecureTransform_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureString(const struct FString& Key, struct FString* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString");

	UMagicLeapSecureStorage_GetSecureString_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USaveGame*                                   ObjectToRetrieve                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureSaveGame(const struct FString& Key, class USaveGame** ObjectToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame");

	UMagicLeapSecureStorage_GetSecureSaveGame_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectToRetrieve != nullptr)
		*ObjectToRetrieve = params.ObjectToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator");

	UMagicLeapSecureStorage_GetSecureRotator_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64");

	UMagicLeapSecureStorage_GetSecureInt64_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureInt(const struct FString& Key, int* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt");

	UMagicLeapSecureStorage_GetSecureInt_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureFloat(const struct FString& Key, float* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat");

	UMagicLeapSecureStorage_GetSecureFloat_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte");

	UMagicLeapSecureStorage_GetSecureByte_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureBool(const struct FString& Key, bool* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool");

	UMagicLeapSecureStorage_GetSecureBool_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray");

	UMagicLeapSecureStorage_GetSecureArray_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::DeleteSecureData(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData");

	UMagicLeapSecureStorage_DeleteSecureData_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
