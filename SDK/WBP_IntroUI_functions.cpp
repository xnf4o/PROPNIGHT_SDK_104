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
//		Name   -> Function WBP_IntroUI.WBP_IntroUI_C.ShowIntoBanner
//		Flags  -> ()
// Parameters:
//		struct FName                                       StartTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UWBP_IntroUI_C::ShowIntoBanner(const struct FName& StartTag, class APlayerState* PlayerState, int AvatarID, int BannerID, int TagID, const struct FString& inString, TEnumAsByte<SurvChars_ESurvChars> SurvChar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_IntroUI.WBP_IntroUI_C.ShowIntoBanner");

	UWBP_IntroUI_C_ShowIntoBanner_Params params {};
	params.StartTag = StartTag;
	params.PlayerState = PlayerState;
	params.AvatarID = AvatarID;
	params.BannerID = BannerID;
	params.TagID = TagID;
	params.inString = inString;
	params.SurvChar = SurvChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_IntroUI.WBP_IntroUI_C.Construct
//		Flags  -> ()
void UWBP_IntroUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_IntroUI.WBP_IntroUI_C.Construct");

	UWBP_IntroUI_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_IntroUI.WBP_IntroUI_C.ExecuteUbergraph_WBP_IntroUI
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_IntroUI_C::ExecuteUbergraph_WBP_IntroUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_IntroUI.WBP_IntroUI_C.ExecuteUbergraph_WBP_IntroUI");

	UWBP_IntroUI_C_ExecuteUbergraph_WBP_IntroUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
