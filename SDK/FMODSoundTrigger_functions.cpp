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
//		Name   -> Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFMODSoundTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorBeginOverlap");

	AFMODSoundTrigger_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFMODSoundTrigger_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveTick");

	AFMODSoundTrigger_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorEndOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFMODSoundTrigger_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorEndOverlap");

	AFMODSoundTrigger_C_ReceiveActorEndOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveBeginPlay
//		Flags  -> ()
void AFMODSoundTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveBeginPlay");

	AFMODSoundTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODSoundTrigger.FMODSoundTrigger_C.ExecuteUbergraph_FMODSoundTrigger
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFMODSoundTrigger_C::ExecuteUbergraph_FMODSoundTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODSoundTrigger.FMODSoundTrigger_C.ExecuteUbergraph_FMODSoundTrigger");

	AFMODSoundTrigger_C_ExecuteUbergraph_FMODSoundTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
