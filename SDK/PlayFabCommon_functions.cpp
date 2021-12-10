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
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
//		Flags  -> ()
// Parameters:
//		struct FString                                     InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetPlayFabId(const struct FString& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId");

	UPlayFabAuthenticationContext_SetPlayFabId_Params params {};
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
//		Flags  -> ()
// Parameters:
//		struct FString                                     InToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetEntityToken(const struct FString& InToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken");

	UPlayFabAuthenticationContext_SetEntityToken_Params params {};
	params.InToken = InToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
//		Flags  -> ()
// Parameters:
//		struct FString                                     InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const struct FString& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey");

	UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params params {};
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     InTicket                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetClientSessionTicket(const struct FString& InTicket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket");

	UPlayFabAuthenticationContext_SetClientSessionTicket_Params params {};
	params.InTicket = InTicket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetPlayFabId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId");

	UPlayFabAuthenticationContext_GetPlayFabId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetEntityToken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken");

	UPlayFabAuthenticationContext_GetEntityToken_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey");

	UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetClientSessionTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket");

	UPlayFabAuthenticationContext_GetClientSessionTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
//		Flags  -> ()
void UPlayFabAuthenticationContext::ForgetAllCredentials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials");

	UPlayFabAuthenticationContext_ForgetAllCredentials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
//		Flags  -> ()
void UPlayFabAuthenticationContext::ClientAdminSecurityCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck");

	UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
