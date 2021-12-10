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
//		Name   -> Function BP_PartImp.BP_PartImp_C.Drawer
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_PartImp_C::Drawer(class AKillerMasterBP_C* ref, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartImp.BP_PartImp_C.Drawer");

	ABP_PartImp_C_Drawer_Params params {};
	params.ref = ref;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PartImp.BP_PartImp_C.SurvHit
//		Flags  -> ()
void ABP_PartImp_C::SurvHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartImp.BP_PartImp_C.SurvHit");

	ABP_PartImp_C_SurvHit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PartImp.BP_PartImp_C.ExecuteUbergraph_BP_PartImp
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PartImp_C::ExecuteUbergraph_BP_PartImp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartImp.BP_PartImp_C.ExecuteUbergraph_BP_PartImp");

	ABP_PartImp_C_ExecuteUbergraph_BP_PartImp_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
