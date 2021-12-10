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
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.GetRarityStyleTarget
//		Flags  -> ()
// Parameters:
//		int                                                GetaCopy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateBrush                                 SlateBrush                                                 (Parm, OutParm, UObjectWrapper)
void USurvivalInventorySlotWidget_C::GetRarityStyleTarget(int GetaCopy, struct FSlateBrush* SlateBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.GetRarityStyleTarget");

	USurvivalInventorySlotWidget_C_GetRarityStyleTarget_Params params {};
	params.GetaCopy = GetaCopy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvivalInventorySlotWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.PreConstruct");

	USurvivalInventorySlotWidget_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Construct
//		Flags  -> ()
void USurvivalInventorySlotWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Construct");

	USurvivalInventorySlotWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ChangeImage
//		Flags  -> ()
// Parameters:
//		int                                                Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FItemStructure                              Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalInventorySlotWidget_C::ChangeImage(int Owner, const struct FItemStructure& Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ChangeImage");

	USurvivalInventorySlotWidget_C_ChangeImage_Params params {};
	params.Owner = Owner;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.HideItem
//		Flags  -> ()
void USurvivalInventorySlotWidget_C::HideItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.HideItem");

	USurvivalInventorySlotWidget_C_HideItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.SelectItem
//		Flags  -> ()
void USurvivalInventorySlotWidget_C::SelectItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.SelectItem");

	USurvivalInventorySlotWidget_C_SelectItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.DeselectItem
//		Flags  -> ()
void USurvivalInventorySlotWidget_C::DeselectItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.DeselectItem");

	USurvivalInventorySlotWidget_C_DeselectItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalInventorySlotWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Tick");

	USurvivalInventorySlotWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.IconCD
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvivalInventorySlotWidget_C::IconCD(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.IconCD");

	USurvivalInventorySlotWidget_C_IconCD_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.MainVisibility
//		Flags  -> ()
// Parameters:
//		bool                                               Hide_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvivalInventorySlotWidget_C::MainVisibility(bool Hide_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.MainVisibility");

	USurvivalInventorySlotWidget_C_MainVisibility_Params params {};
	params.Hide_ = Hide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StartCD
//		Flags  -> ()
// Parameters:
//		struct FItemStructure                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalInventorySlotWidget_C::StartCD(const struct FItemStructure& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StartCD");

	USurvivalInventorySlotWidget_C_StartCD_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StopCD
//		Flags  -> ()
void USurvivalInventorySlotWidget_C::StopCD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StopCD");

	USurvivalInventorySlotWidget_C_StopCD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ResetStopCD
//		Flags  -> ()
void USurvivalInventorySlotWidget_C::ResetStopCD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ResetStopCD");

	USurvivalInventorySlotWidget_C_ResetStopCD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ExecuteUbergraph_SurvivalInventorySlotWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalInventorySlotWidget_C::ExecuteUbergraph_SurvivalInventorySlotWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ExecuteUbergraph_SurvivalInventorySlotWidget");

	USurvivalInventorySlotWidget_C_ExecuteUbergraph_SurvivalInventorySlotWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
