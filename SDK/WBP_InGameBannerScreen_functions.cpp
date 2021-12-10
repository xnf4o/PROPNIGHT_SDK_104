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
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetSpectatorMode
//		Flags  -> ()
// Parameters:
//		bool                                               Spectator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InGameBannerScreen_C::SetSpectatorMode(bool Spectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetSpectatorMode");

	UWBP_InGameBannerScreen_C_SetSpectatorMode_Params params {};
	params.Spectator = Spectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ShowBanner
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       BannerHeaderText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_InGameBannerScreen_C::ShowBanner(float Time, const struct FText& BannerHeaderText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ShowBanner");

	UWBP_InGameBannerScreen_C_ShowBanner_Params params {};
	params.Time = Time;
	params.BannerHeaderText = BannerHeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.HideBanner
//		Flags  -> ()
void UWBP_InGameBannerScreen_C::HideBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.HideBanner");

	UWBP_InGameBannerScreen_C_HideBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetBannerInfo
//		Flags  -> ()
// Parameters:
//		class APS_PropHunt_C*                              PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InGameBannerScreen_C::SetBannerInfo(class APS_PropHunt_C* PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetBannerInfo");

	UWBP_InGameBannerScreen_C_SetBannerInfo_Params params {};
	params.PS = PS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetNickname
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_InGameBannerScreen_C::SetNickname(const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetNickname");

	UWBP_InGameBannerScreen_C_SetNickname_Params params {};
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetSurvAvatar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InGameBannerScreen_C::SetSurvAvatar(TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetSurvAvatar");

	UWBP_InGameBannerScreen_C_SetSurvAvatar_Params params {};
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ShowSurvSpectatorBanner
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APS_PropHunt_C*                              PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InGameBannerScreen_C::ShowSurvSpectatorBanner(const struct FString& Nickname, TEnumAsByte<SurvChars_ESurvChars> char_, class APS_PropHunt_C* PS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ShowSurvSpectatorBanner");

	UWBP_InGameBannerScreen_C_ShowSurvSpectatorBanner_Params params {};
	params.Nickname = Nickname;
	params.char_ = char_;
	params.PS = PS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ExecuteUbergraph_WBP_InGameBannerScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InGameBannerScreen_C::ExecuteUbergraph_WBP_InGameBannerScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ExecuteUbergraph_WBP_InGameBannerScreen");

	UWBP_InGameBannerScreen_C_ExecuteUbergraph_WBP_InGameBannerScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
