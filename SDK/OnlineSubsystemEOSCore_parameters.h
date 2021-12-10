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

// Function OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy.Create_EOS_Session
struct UCreateEOSSessionCallbackProxy_Create_EOS_Session_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FEOSSessionSetting>    SessionSettings;                                           // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     SessionName;                                               // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateEOSSessionCallbackProxy*              ReturnValue;                                               // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.OnCompleted
struct UFindEOSSessionsCallbackProxy_OnCompleted_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.FindEOSSessions
struct UFindEOSSessionsCallbackProxy_FindEOSSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FEOSSessionSearchSetting> searchSettings;                                            // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFindEOSSessionsCallbackProxy*               ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.StopListeningForSessionInvites
struct UEOSSubsystemLibrary_StopListeningForSessionInvites_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.ListenForSessionInvites
struct UEOSSubsystemLibrary_ListenForSessionInvites_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.Update_EOS_Session
struct UUpdateEOSSessionCallbackProxy_Update_EOS_Session_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FEOSSessionSearchSetting> Settings;                                                  // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     SessionName;                                               // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpdateEOSSessionCallbackProxy*              ReturnValue;                                               // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.OnCompleted
struct UUpdateEOSSessionCallbackProxy_OnCompleted_Params
{
	struct FName                                       SessionName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
