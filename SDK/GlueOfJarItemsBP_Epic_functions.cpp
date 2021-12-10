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
//		Name   -> Function GlueOfJarItemsBP_Epic.GlueOfJarItemsBP_Epic_C.ReceiveBeginPlay
//		Flags  -> ()
void AGlueOfJarItemsBP_Epic_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Epic.GlueOfJarItemsBP_Epic_C.ReceiveBeginPlay");

	AGlueOfJarItemsBP_Epic_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Epic.GlueOfJarItemsBP_Epic_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Epic_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Epic.GlueOfJarItemsBP_Epic_C.ReceiveActorBeginOverlap");

	AGlueOfJarItemsBP_Epic_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Epic.GlueOfJarItemsBP_Epic_C.ExecuteUbergraph_GlueOfJarItemsBP_Epic
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Epic_C::ExecuteUbergraph_GlueOfJarItemsBP_Epic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Epic.GlueOfJarItemsBP_Epic_C.ExecuteUbergraph_GlueOfJarItemsBP_Epic");

	AGlueOfJarItemsBP_Epic_C_ExecuteUbergraph_GlueOfJarItemsBP_Epic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
