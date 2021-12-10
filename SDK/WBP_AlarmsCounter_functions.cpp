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
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.GetAnimationRemainingTime
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AlarmsCounter_C::GetAnimationRemainingTime(float* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.GetAnimationRemainingTime");

	UWBP_AlarmsCounter_C_GetAnimationRemainingTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.ActivateItem
//		Flags  -> ()
// Parameters:
void UWBP_AlarmsCounter_C::ActivateItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.ActivateItem");

	UWBP_AlarmsCounter_C_ActivateItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.Finished_140427854A6E09C24C76E6A85480E7D4
//		Flags  -> ()
void UWBP_AlarmsCounter_C::Finished_140427854A6E09C24C76E6A85480E7D4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.Finished_140427854A6E09C24C76E6A85480E7D4");

	UWBP_AlarmsCounter_C_Finished_140427854A6E09C24C76E6A85480E7D4_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.Construct
//		Flags  -> ()
void UWBP_AlarmsCounter_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.Construct");

	UWBP_AlarmsCounter_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.ActivationDone
//		Flags  -> ()
void UWBP_AlarmsCounter_C::ActivationDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.ActivationDone");

	UWBP_AlarmsCounter_C_ActivationDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.ExecuteUbergraph_WBP_AlarmsCounter
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AlarmsCounter_C::ExecuteUbergraph_WBP_AlarmsCounter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.ExecuteUbergraph_WBP_AlarmsCounter");

	UWBP_AlarmsCounter_C_ExecuteUbergraph_WBP_AlarmsCounter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.OnAlarmsDone__DelegateSignature
//		Flags  -> ()
void UWBP_AlarmsCounter_C::OnAlarmsDone__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmsCounter.WBP_AlarmsCounter_C.OnAlarmsDone__DelegateSignature");

	UWBP_AlarmsCounter_C_OnAlarmsDone__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
