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

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.ShowRewardInfo
struct UWBP_LootViewerUI_C_ShowRewardInfo_Params
{
	struct FS_LootBoxSkin                              LootboxInfo;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsDuplicate;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipTag
struct UWBP_LootViewerUI_C_EquipTag_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipAvatar
struct UWBP_LootViewerUI_C_EquipAvatar_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipBanner
struct UWBP_LootViewerUI_C_EquipBanner_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.EquipSkin
struct UWBP_LootViewerUI_C_EquipSkin_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetCharacterName
struct UWBP_LootViewerUI_C_SetCharacterName_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetLootboxItemName
struct UWBP_LootViewerUI_C_SetLootboxItemName_Params
{
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.SetLootboxRarity
struct UWBP_LootViewerUI_C_SetLootboxRarity_Params
{
	TEnumAsByte<Rarity_ERarity>                        Rarity;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_LootViewerUI_C_BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.PreConstruct
struct UWBP_LootViewerUI_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_LootViewerUI_C_BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_LootViewerUI_C_BndEvt__WBP_LootViewerUI_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LootViewerUI.WBP_LootViewerUI_C.ExecuteUbergraph_WBP_LootViewerUI
struct UWBP_LootViewerUI_C_ExecuteUbergraph_WBP_LootViewerUI_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
