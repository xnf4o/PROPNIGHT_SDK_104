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
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.DoNavigateRight
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWB_BindOverlayHeader_C::DoNavigateRight(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.DoNavigateRight");

	UWB_BindOverlayHeader_C_DoNavigateRight_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.DoNavigateLeft
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWB_BindOverlayHeader_C::DoNavigateLeft(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.DoNavigateLeft");

	UWB_BindOverlayHeader_C_DoNavigateLeft_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnItemSelectionChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_BindOverlayHeader_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnItemSelectionChanged");

	UWB_BindOverlayHeader_C_BP_OnItemSelectionChanged_Params params {};
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Construct
//		Flags  -> ()
void UWB_BindOverlayHeader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Construct");

	UWB_BindOverlayHeader_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BindOverlayHeader_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Tick");

	UWB_BindOverlayHeader_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWB_BindOverlayHeader_C::BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWB_BindOverlayHeader_C_BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnEntryReleased
//		Flags  -> ()
void UWB_BindOverlayHeader_C::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnEntryReleased");

	UWB_BindOverlayHeader_C_BP_OnEntryReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Select
//		Flags  -> ()
void UWB_BindOverlayHeader_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.Select");

	UWB_BindOverlayHeader_C_Select_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnItemExpansionChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_BindOverlayHeader_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BP_OnItemExpansionChanged");

	UWB_BindOverlayHeader_C_BP_OnItemExpansionChanged_Params params {};
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWB_BindOverlayHeader_C::BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWB_BindOverlayHeader_C_BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.ExecuteUbergraph_WB_BindOverlayHeader
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BindOverlayHeader_C::ExecuteUbergraph_WB_BindOverlayHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.ExecuteUbergraph_WB_BindOverlayHeader");

	UWB_BindOverlayHeader_C_ExecuteUbergraph_WB_BindOverlayHeader_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.OnPressed__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UWB_BindOverlayHeader_C*                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BindOverlayHeader_C::OnPressed__DelegateSignature(class UWB_BindOverlayHeader_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.OnPressed__DelegateSignature");

	UWB_BindOverlayHeader_C_OnPressed__DelegateSignature_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.EventDispatcher_RightBtn__DelegateSignature
//		Flags  -> ()
void UWB_BindOverlayHeader_C::EventDispatcher_RightBtn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.EventDispatcher_RightBtn__DelegateSignature");

	UWB_BindOverlayHeader_C_EventDispatcher_RightBtn__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.EventDispatcher_LeftBtn__DelegateSignature
//		Flags  -> ()
void UWB_BindOverlayHeader_C::EventDispatcher_LeftBtn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_BindOverlayHeader.WB_BindOverlayHeader_C.EventDispatcher_LeftBtn__DelegateSignature");

	UWB_BindOverlayHeader_C_EventDispatcher_LeftBtn__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
