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
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_QuitDialog_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnKeyDown");

	UWBP_QuitDialog_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UWBP_QuitDialog_C_BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UWBP_QuitDialog_C_BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.PlayShowAnim
//		Flags  -> ()
// Parameters:
//		bool                                               WithBlur                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuitDialog_C::PlayShowAnim(bool WithBlur)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.PlayShowAnim");

	UWBP_QuitDialog_C_PlayShowAnim_Params params {};
	params.WithBlur = WithBlur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.PlayHideAnim
//		Flags  -> ()
void UWBP_QuitDialog_C::PlayHideAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.PlayHideAnim");

	UWBP_QuitDialog_C_PlayHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWBP_QuitDialog_C_BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_QuitDialog_C_BndEvt__WBP_QuitDialog_Button_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.Construct
//		Flags  -> ()
void UWBP_QuitDialog_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.Construct");

	UWBP_QuitDialog_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UWBP_QuitDialog_C_BndEvt__WBP_QuitDialog_Button_Yes_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuitDialog_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.PreConstruct");

	UWBP_QuitDialog_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnAccept_Event
//		Flags  -> ()
void UWBP_QuitDialog_C::OnAccept_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnAccept_Event");

	UWBP_QuitDialog_C_OnAccept_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnDecline_Event
//		Flags  -> ()
void UWBP_QuitDialog_C::OnDecline_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnDecline_Event");

	UWBP_QuitDialog_C_OnDecline_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuitDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.Tick");

	UWBP_QuitDialog_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.ApplyUpdateStyle
//		Flags  -> ()
void UWBP_QuitDialog_C::ApplyUpdateStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.ApplyUpdateStyle");

	UWBP_QuitDialog_C_ApplyUpdateStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.ExecuteUbergraph_WBP_QuitDialog
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuitDialog_C::ExecuteUbergraph_WBP_QuitDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.ExecuteUbergraph_WBP_QuitDialog");

	UWBP_QuitDialog_C_ExecuteUbergraph_WBP_QuitDialog_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnDecline__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::OnDecline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnDecline__DelegateSignature");

	UWBP_QuitDialog_C_OnDecline__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnAccept__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::OnAccept__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnAccept__DelegateSignature");

	UWBP_QuitDialog_C_OnAccept__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnAcceptDelayed__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::OnAcceptDelayed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnAcceptDelayed__DelegateSignature");

	UWBP_QuitDialog_C_OnAcceptDelayed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_QuitDialog.WBP_QuitDialog_C.OnDeclineDelayed__DelegateSignature
//		Flags  -> ()
void UWBP_QuitDialog_C::OnDeclineDelayed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_QuitDialog.WBP_QuitDialog_C.OnDeclineDelayed__DelegateSignature");

	UWBP_QuitDialog_C_OnDeclineDelayed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
