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
//		Name   -> Function GlueJarThrow.GlueJarThrow_C.Explode_SERV
//		Flags  -> ()
void AGlueJarThrow_C::Explode_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueJarThrow.GlueJarThrow_C.Explode_SERV");

	AGlueJarThrow_C_Explode_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueJarThrow.GlueJarThrow_C.Explode_MULTI
//		Flags  -> ()
void AGlueJarThrow_C::Explode_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueJarThrow.GlueJarThrow_C.Explode_MULTI");

	AGlueJarThrow_C_Explode_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueJarThrow.GlueJarThrow_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueJarThrow_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueJarThrow.GlueJarThrow_C.ReceiveActorBeginOverlap");

	AGlueJarThrow_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueJarThrow.GlueJarThrow_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueJarThrow_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueJarThrow.GlueJarThrow_C.ReceiveTick");

	AGlueJarThrow_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueJarThrow.GlueJarThrow_C.ExecuteUbergraph_GlueJarThrow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueJarThrow_C::ExecuteUbergraph_GlueJarThrow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueJarThrow.GlueJarThrow_C.ExecuteUbergraph_GlueJarThrow");

	AGlueJarThrow_C_ExecuteUbergraph_GlueJarThrow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
