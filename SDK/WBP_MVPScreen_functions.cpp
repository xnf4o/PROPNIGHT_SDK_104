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
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.GetPlayerInformationFromSlotName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  CharType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FEndGamePlayerData                          PlyerInformation                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_MVPScreen_C::GetPlayerInformationFromSlotName(const struct FString& Nickname, TEnumAsByte<SurvChars_ESurvChars> CharType, struct FEndGamePlayerData* PlyerInformation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.GetPlayerInformationFromSlotName");

	UWBP_MVPScreen_C_GetPlayerInformationFromSlotName_Params params {};
	params.Nickname = Nickname;
	params.CharType = CharType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlyerInformation != nullptr)
		*PlyerInformation = params.PlyerInformation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.GetLeaveKiller
//		Flags  -> ()
// Parameters:
//		struct FEndGamePlayerData                          PlayerInformation                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_MVPScreen_C::GetLeaveKiller(struct FEndGamePlayerData* PlayerInformation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.GetLeaveKiller");

	UWBP_MVPScreen_C_GetLeaveKiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInformation != nullptr)
		*PlayerInformation = params.PlayerInformation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.Construct
//		Flags  -> ()
void UWBP_MVPScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.Construct");

	UWBP_MVPScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.ShowMVPScreen
//		Flags  -> ()
void UWBP_MVPScreen_C::ShowMVPScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.ShowMVPScreen");

	UWBP_MVPScreen_C_ShowMVPScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.RemoveMVPScreen
//		Flags  -> ()
void UWBP_MVPScreen_C::RemoveMVPScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.RemoveMVPScreen");

	UWBP_MVPScreen_C_RemoveMVPScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.Init
//		Flags  -> ()
void UWBP_MVPScreen_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.Init");

	UWBP_MVPScreen_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MVPScreen.WBP_MVPScreen_C.ExecuteUbergraph_WBP_MVPScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MVPScreen_C::ExecuteUbergraph_WBP_MVPScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MVPScreen.WBP_MVPScreen_C.ExecuteUbergraph_WBP_MVPScreen");

	UWBP_MVPScreen_C_ExecuteUbergraph_WBP_MVPScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
