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
//		Name   -> Function AlarmsWidgetSize.AlarmsWidgetSize_C.ReceiveBeginPlay
//		Flags  -> ()
void UAlarmsWidgetSize_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsWidgetSize.AlarmsWidgetSize_C.ReceiveBeginPlay");

	UAlarmsWidgetSize_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsWidgetSize.AlarmsWidgetSize_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsWidgetSize_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsWidgetSize.AlarmsWidgetSize_C.ReceiveTick");

	UAlarmsWidgetSize_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsWidgetSize.AlarmsWidgetSize_C.ExecuteUbergraph_AlarmsWidgetSize
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsWidgetSize_C::ExecuteUbergraph_AlarmsWidgetSize(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsWidgetSize.AlarmsWidgetSize_C.ExecuteUbergraph_AlarmsWidgetSize");

	UAlarmsWidgetSize_C_ExecuteUbergraph_AlarmsWidgetSize_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
