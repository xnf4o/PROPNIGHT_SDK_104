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
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.Construct
//		Flags  -> ()
void UWBP_PlayWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.Construct");

	UWBP_PlayWindow_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.Tick");

	UWBP_PlayWindow_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.ClearServers
//		Flags  -> ()
void UWBP_PlayWindow_C::ClearServers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.ClearServers");

	UWBP_PlayWindow_C_ClearServers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_PlayWindow_C::BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_PlayWindow_C_BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_PlayWindow_C::BndEvt__Button_45_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_PlayWindow_C_BndEvt__Button_45_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_PlayWindow_C::BndEvt__Button_45_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UWBP_PlayWindow_C_BndEvt__Button_45_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.CustomEvent_1
//		Flags  -> ()
void UWBP_PlayWindow_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.CustomEvent_1");

	UWBP_PlayWindow_C_CustomEvent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_PlayWindow.WBP_PlayWindow_C.ExecuteUbergraph_WBP_PlayWindow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayWindow_C::ExecuteUbergraph_WBP_PlayWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayWindow.WBP_PlayWindow_C.ExecuteUbergraph_WBP_PlayWindow");

	UWBP_PlayWindow_C_ExecuteUbergraph_WBP_PlayWindow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
