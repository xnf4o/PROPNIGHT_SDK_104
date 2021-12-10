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
//		Name   -> Function Spell.Spell_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpell_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.ReceiveTick");

	USpell_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.Cast
//		Flags  -> ()
void USpell_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.Cast");

	USpell_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.OnInvoke
//		Flags  -> ()
void USpell_C::OnInvoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.OnInvoke");

	USpell_C_OnInvoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.Consume
//		Flags  -> ()
void USpell_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.Consume");

	USpell_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.OnUninvoke
//		Flags  -> ()
void USpell_C::OnUninvoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.OnUninvoke");

	USpell_C_OnUninvoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.Uncast
//		Flags  -> ()
void USpell_C::Uncast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.Uncast");

	USpell_C_Uncast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.OnEndCooldown
//		Flags  -> ()
void USpell_C::OnEndCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.OnEndCooldown");

	USpell_C_OnEndCooldown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Spell.Spell_C.ExecuteUbergraph_Spell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpell_C::ExecuteUbergraph_Spell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Spell.Spell_C.ExecuteUbergraph_Spell");

	USpell_C_ExecuteUbergraph_Spell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
