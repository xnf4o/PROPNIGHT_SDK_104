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
//		Name   -> Function KillerSpell.KillerSpell_C.Consume
//		Flags  -> ()
void UKillerSpell_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerSpell.KillerSpell_C.Consume");

	UKillerSpell_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerSpell.KillerSpell_C.ReceiveBeginPlay
//		Flags  -> ()
void UKillerSpell_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerSpell.KillerSpell_C.ReceiveBeginPlay");

	UKillerSpell_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerSpell.KillerSpell_C.ExecuteUbergraph_KillerSpell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillerSpell_C::ExecuteUbergraph_KillerSpell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerSpell.KillerSpell_C.ExecuteUbergraph_KillerSpell");

	UKillerSpell_C_ExecuteUbergraph_KillerSpell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
