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
//		Name   -> Function W_Slot.W_Slot_C.AnimateNickname
//		Flags  -> ()
// Parameters:
//		bool                                               IsForwardDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Slot_C::AnimateNickname(bool IsForwardDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.AnimateNickname");

	UW_Slot_C_AnimateNickname_Params params {};
	params.IsForwardDirection = IsForwardDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.Update Icons for Self
//		Flags  -> ()
// Parameters:
void UW_Slot_C::Update_Icons_for_Self()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.Update Icons for Self");

	UW_Slot_C_Update_Icons_for_Self_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.CheckForSwapCancel
//		Flags  -> ()
void UW_Slot_C::CheckForSwapCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.CheckForSwapCancel");

	UW_Slot_C_CheckForSwapCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.GetVisibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UW_Slot_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.GetVisibility_1");

	UW_Slot_C_GetVisibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_2
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UW_Slot_C::Get_SurvClass_Visibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_2");

	UW_Slot_C_Get_SurvClass_Visibility_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UW_Slot_C::Get_SurvClass_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_1");

	UW_Slot_C_Get_SurvClass_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Slot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.PreConstruct");

	UW_Slot_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.ChangeState
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  ava                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slot_C::ChangeState(const struct FText& Text, class UTexture2D* ava)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.ChangeState");

	UW_Slot_C_ChangeState_Params params {};
	params.Text = Text;
	params.ava = ava;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.Process
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slot_C::Process(class AActor* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.Process");

	UW_Slot_C_Process_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.ChangeIcon
//		Flags  -> ()
void UW_Slot_C::ChangeIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.ChangeIcon");

	UW_Slot_C_ChangeIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.ChangeIconSurvClass
//		Flags  -> ()
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slot_C::ChangeIconSurvClass(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.ChangeIconSurvClass");

	UW_Slot_C_ChangeIconSurvClass_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.ChangeReadyIcon
//		Flags  -> ()
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slot_C::ChangeReadyIcon(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.ChangeReadyIcon");

	UW_Slot_C_ChangeReadyIcon_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_Slot_C::BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_Slot_C_BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.SetSlotName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_Slot_C::SetSlotName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.SetSlotName");

	UW_Slot_C_SetSlotName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.SetSlotText
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_Slot_C::SetSlotText(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.SetSlotText");

	UW_Slot_C_SetSlotText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.Construct
//		Flags  -> ()
void UW_Slot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.Construct");

	UW_Slot_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.OnSwapRequest
//		Flags  -> ()
void UW_Slot_C::OnSwapRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.OnSwapRequest");

	UW_Slot_C_OnSwapRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.OnCancelSwapRequest
//		Flags  -> ()
void UW_Slot_C::OnCancelSwapRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.OnCancelSwapRequest");

	UW_Slot_C_OnCancelSwapRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.ShowSwap
//		Flags  -> ()
// Parameters:
//		bool                                               BG                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Slot_C::ShowSwap(bool BG)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.ShowSwap");

	UW_Slot_C_ShowSwap_Params params {};
	params.BG = BG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.HideSwap
//		Flags  -> ()
void UW_Slot_C::HideSwap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.HideSwap");

	UW_Slot_C_HideSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_Slot_C::BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UW_Slot_C_BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.Tick");

	UW_Slot_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.AnimateNicknameTick
//		Flags  -> ()
void UW_Slot_C::AnimateNicknameTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.AnimateNicknameTick");

	UW_Slot_C_AnimateNicknameTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Slot.W_Slot_C.ExecuteUbergraph_W_Slot
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Slot_C::ExecuteUbergraph_W_Slot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Slot.W_Slot_C.ExecuteUbergraph_W_Slot");

	UW_Slot_C_ExecuteUbergraph_W_Slot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
