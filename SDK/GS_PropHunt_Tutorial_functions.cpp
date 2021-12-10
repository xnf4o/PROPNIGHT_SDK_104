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
//		Name   -> Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_Tutorial_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ReceiveTick");

	AGS_PropHunt_Tutorial_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.DecreaseAlarmsCountEvent
//		Flags  -> ()
// Parameters:
//		TArray<class AActor*>                              Surfs                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AGS_PropHunt_Tutorial_C::DecreaseAlarmsCountEvent(TArray<class AActor*> Surfs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.DecreaseAlarmsCountEvent");

	AGS_PropHunt_Tutorial_C_DecreaseAlarmsCountEvent_Params params {};
	params.Surfs = Surfs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.SurvTutorialEnd
//		Flags  -> ()
void AGS_PropHunt_Tutorial_C::SurvTutorialEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.SurvTutorialEnd");

	AGS_PropHunt_Tutorial_C_SurvTutorialEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.Wipe
//		Flags  -> ()
void AGS_PropHunt_Tutorial_C::Wipe()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.Wipe");

	AGS_PropHunt_Tutorial_C_Wipe_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ExecuteUbergraph_GS_PropHunt_Tutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_Tutorial_C::ExecuteUbergraph_GS_PropHunt_Tutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ExecuteUbergraph_GS_PropHunt_Tutorial");

	AGS_PropHunt_Tutorial_C_ExecuteUbergraph_GS_PropHunt_Tutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
