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
//		Name   -> Function GlueOfJarItemsBP_Legendary.GlueOfJarItemsBP_Legendary_C.ReceiveBeginPlay
//		Flags  -> ()
void AGlueOfJarItemsBP_Legendary_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Legendary.GlueOfJarItemsBP_Legendary_C.ReceiveBeginPlay");

	AGlueOfJarItemsBP_Legendary_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Legendary.GlueOfJarItemsBP_Legendary_C.ReceiveActorBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Legendary_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Legendary.GlueOfJarItemsBP_Legendary_C.ReceiveActorBeginOverlap");

	AGlueOfJarItemsBP_Legendary_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GlueOfJarItemsBP_Legendary.GlueOfJarItemsBP_Legendary_C.ExecuteUbergraph_GlueOfJarItemsBP_Legendary
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGlueOfJarItemsBP_Legendary_C::ExecuteUbergraph_GlueOfJarItemsBP_Legendary(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GlueOfJarItemsBP_Legendary.GlueOfJarItemsBP_Legendary_C.ExecuteUbergraph_GlueOfJarItemsBP_Legendary");

	AGlueOfJarItemsBP_Legendary_C_ExecuteUbergraph_GlueOfJarItemsBP_Legendary_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
