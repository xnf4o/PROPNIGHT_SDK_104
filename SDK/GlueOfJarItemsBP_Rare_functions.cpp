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
//		Name   -> Function GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C.ReceiveBeginPlay
//		Flags  -> ()
void AGlueOfJarItemsBP_Rare_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C.ReceiveBeginPlay");

	AGlueOfJarItemsBP_Rare_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Rare_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C.ReceiveActorBeginOverlap");

	AGlueOfJarItemsBP_Rare_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C.ExecuteUbergraph_GlueOfJarItemsBP_Rare
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Rare_C::ExecuteUbergraph_GlueOfJarItemsBP_Rare(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C.ExecuteUbergraph_GlueOfJarItemsBP_Rare");

	AGlueOfJarItemsBP_Rare_C_ExecuteUbergraph_GlueOfJarItemsBP_Rare_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
