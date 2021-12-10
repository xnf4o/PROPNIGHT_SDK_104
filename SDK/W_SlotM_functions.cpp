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
//		Name   -> Function W_SlotM.W_SlotM_C.Get Visibility 0
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UW_SlotM_C::Get_Visibility_0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.Get Visibility 0");

	UW_SlotM_C_Get_Visibility_0_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.Get_SurvClass_Visibility_2
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UW_SlotM_C::Get_SurvClass_Visibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.Get_SurvClass_Visibility_2");

	UW_SlotM_C_Get_SurvClass_Visibility_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.Get_SurvClass_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UW_SlotM_C::Get_SurvClass_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.Get_SurvClass_Visibility_1");

	UW_SlotM_C_Get_SurvClass_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.ChangeState
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  ava                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlotM_C::ChangeState(const struct FText& Text, class UTexture2D* ava)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.ChangeState");

	UW_SlotM_C_ChangeState_Params params {};
	params.Text = Text;
	params.ava = ava;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.Process
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlotM_C::Process(class AActor* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.Process");

	UW_SlotM_C_Process_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.ChangeIcon
//		Flags  -> ()
void UW_SlotM_C::ChangeIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.ChangeIcon");

	UW_SlotM_C_ChangeIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.ChangeIconSurvClass
//		Flags  -> ()
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlotM_C::ChangeIconSurvClass(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.ChangeIconSurvClass");

	UW_SlotM_C_ChangeIconSurvClass_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.ChangeReadyIcon
//		Flags  -> ()
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlotM_C::ChangeReadyIcon(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.ChangeReadyIcon");

	UW_SlotM_C_ChangeReadyIcon_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_SlotM_C::BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_SlotM_C_BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.SetSlotName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_SlotM_C::SetSlotName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.SetSlotName");

	UW_SlotM_C_SetSlotName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.SetSlotText
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_SlotM_C::SetSlotText(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.SetSlotText");

	UW_SlotM_C_SetSlotText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlotM_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.Tick");

	UW_SlotM_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.Construct
//		Flags  -> ()
void UW_SlotM_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.Construct");

	UW_SlotM_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_SlotM.W_SlotM_C.ExecuteUbergraph_W_SlotM
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlotM_C::ExecuteUbergraph_W_SlotM(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_SlotM.W_SlotM_C.ExecuteUbergraph_W_SlotM");

	UW_SlotM_C_ExecuteUbergraph_W_SlotM_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
