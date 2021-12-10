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
//		Name   -> Function HDRIBackdrop.HDRIBackdrop_C.CreateMaterial
//		Flags  -> ()
// Parameters:
void AHDRIBackdrop_C::CreateMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HDRIBackdrop.HDRIBackdrop_C.CreateMaterial");

	AHDRIBackdrop_C_CreateMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HDRIBackdrop.HDRIBackdrop_C.UserConstructionScript
//		Flags  -> ()
// Parameters:
void AHDRIBackdrop_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HDRIBackdrop.HDRIBackdrop_C.UserConstructionScript");

	AHDRIBackdrop_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
