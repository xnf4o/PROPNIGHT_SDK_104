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
//		Name   -> Function WBP_SkinSelector.WBP_SkinSelector_C.GetSkinNameByID
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SkinSelector_C::GetSkinNameByID(int SkinID, struct FName* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SkinSelector.WBP_SkinSelector_C.GetSkinNameByID");

	UWBP_SkinSelector_C_GetSkinNameByID_Params params {};
	params.SkinID = SkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SkinSelector.WBP_SkinSelector_C.GetAllSkinsForChar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SkinSelector_C::GetAllSkinsForChar(TEnumAsByte<SurvChars_ESurvChars> Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SkinSelector.WBP_SkinSelector_C.GetAllSkinsForChar");

	UWBP_SkinSelector_C_GetAllSkinsForChar_Params params {};
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SkinSelector.WBP_SkinSelector_C.BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SkinSelector_C::BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature(const struct FText& EntryName, int EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SkinSelector.WBP_SkinSelector_C.BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature");

	UWBP_SkinSelector_C_BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature_Params params {};
	params.EntryName = EntryName;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SkinSelector.WBP_SkinSelector_C.ExecuteUbergraph_WBP_SkinSelector
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SkinSelector_C::ExecuteUbergraph_WBP_SkinSelector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SkinSelector.WBP_SkinSelector_C.ExecuteUbergraph_WBP_SkinSelector");

	UWBP_SkinSelector_C_ExecuteUbergraph_WBP_SkinSelector_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
