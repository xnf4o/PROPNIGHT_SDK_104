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

// Function WBP_SkinSelector.WBP_SkinSelector_C.GetSkinNameByID
struct UWBP_SkinSelector_C_GetSkinNameByID_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NewParam;                                                  // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SkinSelector.WBP_SkinSelector_C.GetAllSkinsForChar
struct UWBP_SkinSelector_C_GetAllSkinsForChar_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  Character;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SkinSelector.WBP_SkinSelector_C.BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature
struct UWBP_SkinSelector_C_BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EntryIndex;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SkinSelector.WBP_SkinSelector_C.ExecuteUbergraph_WBP_SkinSelector
struct UWBP_SkinSelector_C_ExecuteUbergraph_WBP_SkinSelector_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
