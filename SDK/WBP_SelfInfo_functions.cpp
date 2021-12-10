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
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.SetIsCrowned
//		Flags  -> ()
// Parameters:
//		bool                                               IsCrowned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelfInfo_C::SetIsCrowned(bool IsCrowned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.SetIsCrowned");

	UWBP_SelfInfo_C_SetIsCrowned_Params params {};
	params.IsCrowned = IsCrowned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelfInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.Tick");

	UWBP_SelfInfo_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelfInfo_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.PreConstruct");

	UWBP_SelfInfo_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.Construct
//		Flags  -> ()
void UWBP_SelfInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.Construct");

	UWBP_SelfInfo_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_SelfInfo_C::BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_SelfInfo_C_BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_SelfInfo_C::BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_SelfInfo_C_BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_SelfInfo_C::BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UWBP_SelfInfo_C_BndEvt__WBP_SelfInfo_Button_LeaveLobby_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.ExecuteUbergraph_WBP_SelfInfo
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelfInfo_C::ExecuteUbergraph_WBP_SelfInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.ExecuteUbergraph_WBP_SelfInfo");

	UWBP_SelfInfo_C_ExecuteUbergraph_WBP_SelfInfo_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SelfInfo.WBP_SelfInfo_C.OnLeavePressed__DelegateSignature
//		Flags  -> ()
void UWBP_SelfInfo_C::OnLeavePressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SelfInfo.WBP_SelfInfo_C.OnLeavePressed__DelegateSignature");

	UWBP_SelfInfo_C_OnLeavePressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
