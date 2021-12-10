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
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.ReceiveBeginPlay
//		Flags  -> ()
void UDoppelgangerSpell2_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.ReceiveBeginPlay");

	UDoppelgangerSpell2_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoppelgangerSpell2_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.ReceiveTick");

	UDoppelgangerSpell2_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.Cast
//		Flags  -> ()
void UDoppelgangerSpell2_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.Cast");

	UDoppelgangerSpell2_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.ActivateSpellMulticast
//		Flags  -> ()
void UDoppelgangerSpell2_C::ActivateSpellMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.ActivateSpellMulticast");

	UDoppelgangerSpell2_C_ActivateSpellMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.ActivateSpellServ
//		Flags  -> ()
void UDoppelgangerSpell2_C::ActivateSpellServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.ActivateSpellServ");

	UDoppelgangerSpell2_C_ActivateSpellServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.Consume
//		Flags  -> ()
void UDoppelgangerSpell2_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.Consume");

	UDoppelgangerSpell2_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell2.DoppelgangerSpell2_C.ExecuteUbergraph_DoppelgangerSpell2
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoppelgangerSpell2_C::ExecuteUbergraph_DoppelgangerSpell2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell2.DoppelgangerSpell2_C.ExecuteUbergraph_DoppelgangerSpell2");

	UDoppelgangerSpell2_C_ExecuteUbergraph_DoppelgangerSpell2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
