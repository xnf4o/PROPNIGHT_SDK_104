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
//		Name   -> Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetTitlePlayerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GI_Playfab_C::GetTitlePlayerID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetTitlePlayerID");

	UBPI_GI_Playfab_C_GetTitlePlayerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GI_Playfab.BPI_GI_Playfab_C.SetTitlePlayerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GI_Playfab_C::SetTitlePlayerID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GI_Playfab.BPI_GI_Playfab_C.SetTitlePlayerID");

	UBPI_GI_Playfab_C_SetTitlePlayerID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetPlayfabBuildID
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GI_Playfab_C::GetPlayfabBuildID(struct FString* BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetPlayfabBuildID");

	UBPI_GI_Playfab_C_GetPlayfabBuildID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildId != nullptr)
		*BuildId = params.BuildId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetSteamPlayerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GI_Playfab_C::GetSteamPlayerID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetSteamPlayerID");

	UBPI_GI_Playfab_C_GetSteamPlayerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GI_Playfab.BPI_GI_Playfab_C.SetPlayfabUserID
//		Flags  -> ()
// Parameters:
//		struct FString                                     UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GI_Playfab_C::SetPlayfabUserID(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GI_Playfab.BPI_GI_Playfab_C.SetPlayfabUserID");

	UBPI_GI_Playfab_C_SetPlayfabUserID_Params params {};
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetPlayfabUserID
//		Flags  -> ()
// Parameters:
//		struct FString                                     UserId                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GI_Playfab_C::GetPlayfabUserID(struct FString* UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GI_Playfab.BPI_GI_Playfab_C.GetPlayfabUserID");

	UBPI_GI_Playfab_C_GetPlayfabUserID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserId != nullptr)
		*UserId = params.UserId;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
