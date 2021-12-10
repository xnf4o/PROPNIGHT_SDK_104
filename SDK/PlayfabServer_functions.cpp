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
//		Name   -> Function PlayfabServer.PlayfabServerComponent.UnregisterPlayer
//		Flags  -> ()
// Parameters:
//		struct FString                                     PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayfabServerComponent::UnregisterPlayer(const struct FString& PlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.UnregisterPlayer");

	UPlayfabServerComponent_UnregisterPlayer_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.ShutdownServer
//		Flags  -> ()
void UPlayfabServerComponent::ShutdownServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.ShutdownServer");

	UPlayfabServerComponent_ShutdownServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.RegisterPlayer
//		Flags  -> ()
// Parameters:
//		struct FString                                     PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayfabServerComponent::RegisterPlayer(const struct FString& PlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.RegisterPlayer");

	UPlayfabServerComponent_RegisterPlayer_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.PlayfabReady
//		Flags  -> ()
void UPlayfabServerComponent::PlayfabReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.PlayfabReady");

	UPlayfabServerComponent_PlayfabReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.GetStartPlayers
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UPlayfabServerComponent::GetStartPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.GetStartPlayers");

	UPlayfabServerComponent_GetStartPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.GetPlayfabSession
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayfabServerComponent::GetPlayfabSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.GetPlayfabSession");

	UPlayfabServerComponent_GetPlayfabSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.GetPlayfabRegion
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayfabServerComponent::GetPlayfabRegion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.GetPlayfabRegion");

	UPlayfabServerComponent_GetPlayfabRegion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayfabServer.PlayfabServerComponent.GetPlayfabCookie
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayfabServerComponent::GetPlayfabCookie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayfabServer.PlayfabServerComponent.GetPlayfabCookie");

	UPlayfabServerComponent_GetPlayfabCookie_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
