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

// Function SystemMicControl.SystemMicControlBPLibrary.SetMicVolume
struct USystemMicControlBPLibrary_SetMicVolume_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.SetMicMute
struct USystemMicControlBPLibrary_SetMicMute_Params
{
	bool                                               IsMuted;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.SetMicDefaultDevice
struct USystemMicControlBPLibrary_SetMicDefaultDevice_Params
{
	struct FString                                     DeviceID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.SetMicBoost
struct USystemMicControlBPLibrary_SetMicBoost_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.IsMicBoostSupported
struct USystemMicControlBPLibrary_IsMicBoostSupported_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicVolume
struct USystemMicControlBPLibrary_GetMicVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicMute
struct USystemMicControlBPLibrary_GetMicMute_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceNameFromId
struct USystemMicControlBPLibrary_GetMicDeviceNameFromId_Params
{
	struct FString                                     InDeviceId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutDeviceName;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicDeviceIdFromName
struct USystemMicControlBPLibrary_GetMicDeviceIdFromName_Params
{
	struct FString                                     InDeviceName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutDeviceId;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceName
struct USystemMicControlBPLibrary_GetMicDefaultDeviceName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicDefaultDeviceId
struct USystemMicControlBPLibrary_GetMicDefaultDeviceId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostStep
struct USystemMicControlBPLibrary_GetMicBoostStep_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMin
struct USystemMicControlBPLibrary_GetMicBoostMin_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoostMax
struct USystemMicControlBPLibrary_GetMicBoostMax_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicBoost
struct USystemMicControlBPLibrary_GetMicBoost_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SystemMicControl.SystemMicControlBPLibrary.GetMicActiveDevices
struct USystemMicControlBPLibrary_GetMicActiveDevices_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
