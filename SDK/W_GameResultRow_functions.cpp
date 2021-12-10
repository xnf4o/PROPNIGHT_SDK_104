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
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.AnimateNickname
//		Flags  -> ()
// Parameters:
//		bool                                               IsForwardDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GameResultRow_C::AnimateNickname(bool IsForwardDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.AnimateNickname");

	UW_GameResultRow_C_AnimateNickname_Params params {};
	params.IsForwardDirection = IsForwardDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.GetText_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResultRow_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.GetText_1");

	UW_GameResultRow_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.Construct
//		Flags  -> ()
void UW_GameResultRow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.Construct");

	UW_GameResultRow_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResultRow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.Tick");

	UW_GameResultRow_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.SetData
//		Flags  -> ()
// Parameters:
//		class APS_PropHunt_C*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResultRow_C::SetData(class APS_PropHunt_C* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.SetData");

	UW_GameResultRow_C_SetData_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResultRow_C::BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_GameResultRow_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.AnimateNicknameTick
//		Flags  -> ()
void UW_GameResultRow_C::AnimateNicknameTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.AnimateNicknameTick");

	UW_GameResultRow_C_AnimateNicknameTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResultRow.W_GameResultRow_C.ExecuteUbergraph_W_GameResultRow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResultRow_C::ExecuteUbergraph_W_GameResultRow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResultRow.W_GameResultRow_C.ExecuteUbergraph_W_GameResultRow");

	UW_GameResultRow_C_ExecuteUbergraph_W_GameResultRow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
