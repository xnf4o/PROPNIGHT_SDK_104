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
//		Name   -> Function FMODEventLooper.FMODEventLooper_C.UserConstructionScript
//		Flags  -> ()
void AFMODEventLooper_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODEventLooper.FMODEventLooper_C.UserConstructionScript");

	AFMODEventLooper_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODEventLooper.FMODEventLooper_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFMODEventLooper_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODEventLooper.FMODEventLooper_C.ReceiveTick");

	AFMODEventLooper_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODEventLooper.FMODEventLooper_C.ReceiveBeginPlay
//		Flags  -> ()
void AFMODEventLooper_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODEventLooper.FMODEventLooper_C.ReceiveBeginPlay");

	AFMODEventLooper_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODEventLooper.FMODEventLooper_C.ExecuteUbergraph_FMODEventLooper
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFMODEventLooper_C::ExecuteUbergraph_FMODEventLooper(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODEventLooper.FMODEventLooper_C.ExecuteUbergraph_FMODEventLooper");

	AFMODEventLooper_C_ExecuteUbergraph_FMODEventLooper_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
