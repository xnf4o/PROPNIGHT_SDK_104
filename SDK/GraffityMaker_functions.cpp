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
//		Name   -> Function GraffityMaker.GraffityMaker_C.Draw
//		Flags  -> ()
// Parameters:
//		struct FVector                                     actorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ForwardVector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraffityMaker_C::Draw(const struct FVector& actorLocation, const struct FVector& ForwardVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffityMaker.GraffityMaker_C.Draw");

	UGraffityMaker_C_Draw_Params params {};
	params.actorLocation = actorLocation;
	params.ForwardVector = ForwardVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffityMaker.GraffityMaker_C.ExecuteUbergraph_GraffityMaker
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGraffityMaker_C::ExecuteUbergraph_GraffityMaker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffityMaker.GraffityMaker_C.ExecuteUbergraph_GraffityMaker");

	UGraffityMaker_C_ExecuteUbergraph_GraffityMaker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
