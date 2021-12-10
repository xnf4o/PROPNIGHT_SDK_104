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
//		Name   -> Function WBP_ServerMessage.WBP_ServerMessage_C.WithMessage
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ServerMessage_C::WithMessage(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ServerMessage.WBP_ServerMessage_C.WithMessage");

	UWBP_ServerMessage_C_WithMessage_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_ServerMessage_C::BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWBP_ServerMessage_C_BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_ServerMessage_C::BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_ServerMessage_C_BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_ServerMessage_C::BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ServerMessage.WBP_ServerMessage_C.BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UWBP_ServerMessage_C_BndEvt__WBP_ServerMessage_Button_146_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_ServerMessage.WBP_ServerMessage_C.ExecuteUbergraph_WBP_ServerMessage
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ServerMessage_C::ExecuteUbergraph_WBP_ServerMessage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ServerMessage.WBP_ServerMessage_C.ExecuteUbergraph_WBP_ServerMessage");

	UWBP_ServerMessage_C_ExecuteUbergraph_WBP_ServerMessage_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
