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
//		Name   -> Function BP_LightBeam.BP_LightBeam_C.UserConstructionScript
//		Flags  -> ()
// Parameters:
void ABP_LightBeam_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.UserConstructionScript");

	ABP_LightBeam_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LightBeam.BP_LightBeam_C.AddBeam
//		Flags  -> ()
void ABP_LightBeam_C::AddBeam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.AddBeam");

	ABP_LightBeam_C_AddBeam_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LightBeam.BP_LightBeam_C.ExecuteUbergraph_BP_LightBeam
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightBeam_C::ExecuteUbergraph_BP_LightBeam(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightBeam.BP_LightBeam_C.ExecuteUbergraph_BP_LightBeam");

	ABP_LightBeam_C_ExecuteUbergraph_BP_LightBeam_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
