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
//		Name   -> Function DeadMansChest.DeadMansChest_C.ReceiveBeginPlay
//		Flags  -> ()
void UDeadMansChest_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeadMansChest.DeadMansChest_C.ReceiveBeginPlay");

	UDeadMansChest_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DeadMansChest.DeadMansChest_C.CursedPropActivatePerkEffect
//		Flags  -> ()
void UDeadMansChest_C::CursedPropActivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeadMansChest.DeadMansChest_C.CursedPropActivatePerkEffect");

	UDeadMansChest_C_CursedPropActivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DeadMansChest.DeadMansChest_C.CursedPropDeactivatePerkEffect
//		Flags  -> ()
void UDeadMansChest_C::CursedPropDeactivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeadMansChest.DeadMansChest_C.CursedPropDeactivatePerkEffect");

	UDeadMansChest_C_CursedPropDeactivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DeadMansChest.DeadMansChest_C.ExecuteUbergraph_DeadMansChest
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeadMansChest_C::ExecuteUbergraph_DeadMansChest(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeadMansChest.DeadMansChest_C.ExecuteUbergraph_DeadMansChest");

	UDeadMansChest_C_ExecuteUbergraph_DeadMansChest_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
