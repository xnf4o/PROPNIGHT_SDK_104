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
//		Name   -> Function GlueOfJarItemsBP_Common.GlueOfJarItemsBP_Common_C.ReceiveBeginPlay
//		Flags  -> ()
void AGlueOfJarItemsBP_Common_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Common.GlueOfJarItemsBP_Common_C.ReceiveBeginPlay");

	AGlueOfJarItemsBP_Common_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Common.GlueOfJarItemsBP_Common_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Common_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Common.GlueOfJarItemsBP_Common_C.ReceiveActorBeginOverlap");

	AGlueOfJarItemsBP_Common_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Common.GlueOfJarItemsBP_Common_C.ExecuteUbergraph_GlueOfJarItemsBP_Common
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Common_C::ExecuteUbergraph_GlueOfJarItemsBP_Common(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Common.GlueOfJarItemsBP_Common_C.ExecuteUbergraph_GlueOfJarItemsBP_Common");

	AGlueOfJarItemsBP_Common_C_ExecuteUbergraph_GlueOfJarItemsBP_Common_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
