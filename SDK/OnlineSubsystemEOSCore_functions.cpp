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
//		Name   -> Function OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy.Create_EOS_Session
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FEOSSessionSetting>    SessionSettings                                            (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     SessionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCreateEOSSessionCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateEOSSessionCallbackProxy* UCreateEOSSessionCallbackProxy::Create_EOS_Session(class UObject* WorldContextObject, TMap<struct FString, struct FEOSSessionSetting> SessionSettings, const struct FString& SessionName, int PublicConnections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy.Create_EOS_Session");

	UCreateEOSSessionCallbackProxy_Create_EOS_Session_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SessionSettings = SessionSettings;
	params.SessionName = SessionName;
	params.PublicConnections = PublicConnections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.OnCompleted
//		Flags  -> ()
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFindEOSSessionsCallbackProxy::OnCompleted(bool bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.OnCompleted");

	UFindEOSSessionsCallbackProxy_OnCompleted_Params params {};
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.FindEOSSessions
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FEOSSessionSearchSetting> searchSettings                                             (Parm, NativeAccessSpecifierPublic)
//		int                                                MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFindEOSSessionsCallbackProxy*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindEOSSessionsCallbackProxy* UFindEOSSessionsCallbackProxy::FindEOSSessions(class UObject* WorldContextObject, TMap<struct FString, struct FEOSSessionSearchSetting> searchSettings, int MaxResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.FindEOSSessions");

	UFindEOSSessionsCallbackProxy_FindEOSSessions_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.searchSettings = searchSettings;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.StopListeningForSessionInvites
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEOSSubsystemLibrary::StopListeningForSessionInvites(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.StopListeningForSessionInvites");

	UEOSSubsystemLibrary_StopListeningForSessionInvites_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.ListenForSessionInvites
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSSubsystemLibrary::ListenForSessionInvites(class APlayerController* PlayerController, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.ListenForSessionInvites");

	UEOSSubsystemLibrary_ListenForSessionInvites_Params params {};
	params.PlayerController = PlayerController;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.Update_EOS_Session
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FEOSSessionSearchSetting> Settings                                                   (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     SessionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUpdateEOSSessionCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateEOSSessionCallbackProxy* UUpdateEOSSessionCallbackProxy::Update_EOS_Session(class UObject* WorldContextObject, TMap<struct FString, struct FEOSSessionSearchSetting> Settings, const struct FString& SessionName, int PublicConnections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.Update_EOS_Session");

	UUpdateEOSSessionCallbackProxy_Update_EOS_Session_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;
	params.SessionName = SessionName;
	params.PublicConnections = PublicConnections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.OnCompleted
//		Flags  -> ()
// Parameters:
//		struct FName                                       SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUpdateEOSSessionCallbackProxy::OnCompleted(const struct FName& SessionName, bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.OnCompleted");

	UUpdateEOSSessionCallbackProxy_OnCompleted_Params params {};
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
