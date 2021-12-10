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
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATutorialTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.ReceiveActorBeginOverlap");

	ATutorialTrigger_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.DoorTriggerEvent
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ATutorialTrigger_C::DoorTriggerEvent(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.DoorTriggerEvent");

	ATutorialTrigger_C_DoorTriggerEvent_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.SurvPart2-2Event
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ATutorialTrigger_C::SurvPart2_2Event(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.SurvPart2-2Event");

	ATutorialTrigger_C_SurvPart2_2Event_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.SurvPart2-1Event
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ATutorialTrigger_C::SurvPart2_1Event(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.SurvPart2-1Event");

	ATutorialTrigger_C_SurvPart2_1Event_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.QuestEvent
//		Flags  -> ()
void ATutorialTrigger_C::QuestEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.QuestEvent");

	ATutorialTrigger_C_QuestEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.Surv
//		Flags  -> ()
void ATutorialTrigger_C::Surv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.Surv");

	ATutorialTrigger_C_Surv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function TutorialTrigger.TutorialTrigger_C.ExecuteUbergraph_TutorialTrigger
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATutorialTrigger_C::ExecuteUbergraph_TutorialTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialTrigger.TutorialTrigger_C.ExecuteUbergraph_TutorialTrigger");

	ATutorialTrigger_C_ExecuteUbergraph_TutorialTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
