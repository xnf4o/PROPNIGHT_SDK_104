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
//		Name   -> Function ChargeSpell.ChargeSpell_C.MultiImpulse
//		Flags  -> ()
void UChargeSpell_C::MultiImpulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.MultiImpulse");

	UChargeSpell_C_MultiImpulse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.ServImpulse
//		Flags  -> ()
void UChargeSpell_C::ServImpulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.ServImpulse");

	UChargeSpell_C_ServImpulse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.OnEndCooldown
//		Flags  -> ()
void UChargeSpell_C::OnEndCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.OnEndCooldown");

	UChargeSpell_C_OnEndCooldown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.Cast
//		Flags  -> ()
void UChargeSpell_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.Cast");

	UChargeSpell_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChargeSpell_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.ReceiveTick");

	UChargeSpell_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.Uncast
//		Flags  -> ()
void UChargeSpell_C::Uncast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.Uncast");

	UChargeSpell_C_Uncast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.ReceiveBeginPlay
//		Flags  -> ()
void UChargeSpell_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.ReceiveBeginPlay");

	UChargeSpell_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.CastServ
//		Flags  -> ()
// Parameters:
//		bool                                               Cast                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChargeSpell_C::CastServ(bool Cast, bool Move)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.CastServ");

	UChargeSpell_C_CastServ_Params params {};
	params.Cast = Cast;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.CastMulti
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChargeSpell_C::CastMulti(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.CastMulti");

	UChargeSpell_C_CastMulti_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.Shaker
//		Flags  -> ()
void UChargeSpell_C::Shaker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.Shaker");

	UChargeSpell_C_Shaker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChargeSpell.ChargeSpell_C.ExecuteUbergraph_ChargeSpell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChargeSpell_C::ExecuteUbergraph_ChargeSpell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChargeSpell.ChargeSpell_C.ExecuteUbergraph_ChargeSpell");

	UChargeSpell_C_ExecuteUbergraph_ChargeSpell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
