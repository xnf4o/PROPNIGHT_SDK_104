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
//		Name   -> Function GraffitiActor.GraffitiActor_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void AGraffitiActor_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor.GraffitiActor_C.Timeline_0__FinishedFunc");

	AGraffitiActor_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor.GraffitiActor_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void AGraffitiActor_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor.GraffitiActor_C.Timeline_0__UpdateFunc");

	AGraffitiActor_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor.GraffitiActor_C.ReceiveBeginPlay
//		Flags  -> ()
void AGraffitiActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor.GraffitiActor_C.ReceiveBeginPlay");

	AGraffitiActor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor.GraffitiActor_C.SoundServ
//		Flags  -> ()
void AGraffitiActor_C::SoundServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor.GraffitiActor_C.SoundServ");

	AGraffitiActor_C_SoundServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor.GraffitiActor_C.SoundMulti
//		Flags  -> ()
void AGraffitiActor_C::SoundMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor.GraffitiActor_C.SoundMulti");

	AGraffitiActor_C_SoundMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor.GraffitiActor_C.ExecuteUbergraph_GraffitiActor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGraffitiActor_C::ExecuteUbergraph_GraffitiActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor.GraffitiActor_C.ExecuteUbergraph_GraffitiActor");

	AGraffitiActor_C_ExecuteUbergraph_GraffitiActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
