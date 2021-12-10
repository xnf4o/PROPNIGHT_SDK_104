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
//		Name   -> Function WBP_HitMark.WBP_HitMark_C.hit
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InstigatorLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ColorNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMark_C::hit(const struct FVector& InstigatorLocation, int ColorNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark.WBP_HitMark_C.hit");

	UWBP_HitMark_C_hit_Params params {};
	params.InstigatorLocation = InstigatorLocation;
	params.ColorNumber = ColorNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMark.WBP_HitMark_C.Construct
//		Flags  -> ()
void UWBP_HitMark_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark.WBP_HitMark_C.Construct");

	UWBP_HitMark_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMark.WBP_HitMark_C.ExecuteUbergraph_WBP_HitMark
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMark_C::ExecuteUbergraph_WBP_HitMark(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark.WBP_HitMark_C.ExecuteUbergraph_WBP_HitMark");

	UWBP_HitMark_C_ExecuteUbergraph_WBP_HitMark_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
