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
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.ShowRewardInfo
//		Flags  -> ()
// Parameters:
//		struct FS_LootBoxSkin                              LootboxInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               IsDuplicate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LootViewerUI_C::ShowRewardInfo(const struct FS_LootBoxSkin& LootboxInfo, bool IsDuplicate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.ShowRewardInfo");

	UWBP_LootViewerUI_C_ShowRewardInfo_Params params {};
	params.LootboxInfo = LootboxInfo;
	params.IsDuplicate = IsDuplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipTag
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::EquipTag(int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipTag");

	UWBP_LootViewerUI_C_EquipTag_Params params {};
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipAvatar
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::EquipAvatar(int AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipAvatar");

	UWBP_LootViewerUI_C_EquipAvatar_Params params {};
	params.AvatarID = AvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipBanner
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::EquipBanner(int BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipBanner");

	UWBP_LootViewerUI_C_EquipBanner_Params params {};
	params.BannerID = BannerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipSkin
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::EquipSkin(int SkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipSkin");

	UWBP_LootViewerUI_C_EquipSkin_Params params {};
	params.SkinID = SkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetCharacterName
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::SetCharacterName(int SkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetCharacterName");

	UWBP_LootViewerUI_C_SetCharacterName_Params params {};
	params.SkinID = SkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetLootboxItemName
//		Flags  -> ()
void UWBP_LootViewerUI_C::SetLootboxItemName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetLootboxItemName");

	UWBP_LootViewerUI_C_SetLootboxItemName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetLootboxRarity
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Rarity_ERarity>                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::SetLootboxRarity(TEnumAsByte<Rarity_ERarity> Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetLootboxRarity");

	UWBP_LootViewerUI_C_SetLootboxRarity_Params params {};
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_LootViewerUI_C::BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_LootViewerUI_C_BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LootViewerUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.PreConstruct");

	UWBP_LootViewerUI_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_LootViewerUI_C::BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_LootViewerUI_C_BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_LootViewerUI_C::BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_LootViewerUI_C_BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LootViewerUI.WBP_LootViewerUI_C.ExecuteUbergraph_WBP_LootViewerUI
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LootViewerUI_C::ExecuteUbergraph_WBP_LootViewerUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LootViewerUI.WBP_LootViewerUI_C.ExecuteUbergraph_WBP_LootViewerUI");

	UWBP_LootViewerUI_C_ExecuteUbergraph_WBP_LootViewerUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
