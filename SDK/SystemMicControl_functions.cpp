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
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.SetMicVolume
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USystemMicControlBPLibrary::SetMicVolume(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.SetMicVolume");

	USystemMicControlBPLibrary_SetMicVolume_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.SetMicMute
//		Flags  -> ()
// Parameters:
//		bool                                               IsMuted                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USystemMicControlBPLibrary::SetMicMute(bool IsMuted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.SetMicMute");

	USystemMicControlBPLibrary_SetMicMute_Params params {};
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.SetMicDefaultDevice
//		Flags  -> ()
// Parameters:
//		struct FString                                     DeviceID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USystemMicControlBPLibrary::SetMicDefaultDevice(const struct FString& DeviceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.SetMicDefaultDevice");

	USystemMicControlBPLibrary_SetMicDefaultDevice_Params params {};
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.SetMicBoost
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USystemMicControlBPLibrary::SetMicBoost(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.SetMicBoost");

	USystemMicControlBPLibrary_SetMicBoost_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.IsMicBoostSupported
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USystemMicControlBPLibrary::IsMicBoostSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.IsMicBoostSupported");

	USystemMicControlBPLibrary_IsMicBoostSupported_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicVolume
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USystemMicControlBPLibrary::GetMicVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicVolume");

	USystemMicControlBPLibrary_GetMicVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicMute
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USystemMicControlBPLibrary::GetMicMute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicMute");

	USystemMicControlBPLibrary_GetMicMute_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceNameFromId
//		Flags  -> ()
// Parameters:
//		struct FString                                     InDeviceId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OutDeviceName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USystemMicControlBPLibrary::GetMicDeviceNameFromId(const struct FString& InDeviceId, struct FString* OutDeviceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceNameFromId");

	USystemMicControlBPLibrary_GetMicDeviceNameFromId_Params params {};
	params.InDeviceId = InDeviceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDeviceName != nullptr)
		*OutDeviceName = params.OutDeviceName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceIdFromName
//		Flags  -> ()
// Parameters:
//		struct FString                                     InDeviceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OutDeviceId                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USystemMicControlBPLibrary::GetMicDeviceIdFromName(const struct FString& InDeviceName, struct FString* OutDeviceId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceIdFromName");

	USystemMicControlBPLibrary_GetMicDeviceIdFromName_Params params {};
	params.InDeviceName = InDeviceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDeviceId != nullptr)
		*OutDeviceId = params.OutDeviceId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USystemMicControlBPLibrary::GetMicDefaultDeviceName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceName");

	USystemMicControlBPLibrary_GetMicDefaultDeviceName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USystemMicControlBPLibrary::GetMicDefaultDeviceId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceId");

	USystemMicControlBPLibrary_GetMicDefaultDeviceId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostStep
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USystemMicControlBPLibrary::GetMicBoostStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostStep");

	USystemMicControlBPLibrary_GetMicBoostStep_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMin
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USystemMicControlBPLibrary::GetMicBoostMin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMin");

	USystemMicControlBPLibrary_GetMicBoostMin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMax
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USystemMicControlBPLibrary::GetMicBoostMax()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMax");

	USystemMicControlBPLibrary_GetMicBoostMax_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoost
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USystemMicControlBPLibrary::GetMicBoost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoost");

	USystemMicControlBPLibrary_GetMicBoost_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SystemMicControl.SystemMicControlBPLibrary.GetMicActiveDevices
//		Flags  -> ()
// Parameters:
//		TMap<struct FString, struct FString>               ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FString, struct FString> USystemMicControlBPLibrary::GetMicActiveDevices()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SystemMicControl.SystemMicControlBPLibrary.GetMicActiveDevices");

	USystemMicControlBPLibrary_GetMicActiveDevices_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
