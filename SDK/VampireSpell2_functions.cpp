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
//		Name   -> Function VampireSpell2.VampireSpell2_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireSpell2_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.ReceiveTick");

	UVampireSpell2_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.Cast
//		Flags  -> ()
void UVampireSpell2_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.Cast");

	UVampireSpell2_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.StartServ
//		Flags  -> ()
void UVampireSpell2_C::StartServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.StartServ");

	UVampireSpell2_C_StartServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.StartMulti
//		Flags  -> ()
void UVampireSpell2_C::StartMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.StartMulti");

	UVampireSpell2_C_StartMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.Stop
//		Flags  -> ()
void UVampireSpell2_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.Stop");

	UVampireSpell2_C_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.StopServ
//		Flags  -> ()
void UVampireSpell2_C::StopServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.StopServ");

	UVampireSpell2_C_StopServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.StopMulti
//		Flags  -> ()
void UVampireSpell2_C::StopMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.StopMulti");

	UVampireSpell2_C_StopMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.Consume
//		Flags  -> ()
void UVampireSpell2_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.Consume");

	UVampireSpell2_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.StartLocal
//		Flags  -> ()
void UVampireSpell2_C::StartLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.StartLocal");

	UVampireSpell2_C_StartLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.IconAnimation
//		Flags  -> ()
// Parameters:
//		bool                                               Start_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVampireSpell2_C::IconAnimation(bool Start_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.IconAnimation");

	UVampireSpell2_C_IconAnimation_Params params {};
	params.Start_ = Start_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.SwitchSkill
//		Flags  -> ()
// Parameters:
//		bool                                               Start_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVampireSpell2_C::SwitchSkill(bool Start_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.SwitchSkill");

	UVampireSpell2_C_SwitchSkill_Params params {};
	params.Start_ = Start_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.AddCharges
//		Flags  -> ()
void UVampireSpell2_C::AddCharges()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.AddCharges");

	UVampireSpell2_C_AddCharges_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell2.VampireSpell2_C.ExecuteUbergraph_VampireSpell2
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireSpell2_C::ExecuteUbergraph_VampireSpell2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell2.VampireSpell2_C.ExecuteUbergraph_VampireSpell2");

	UVampireSpell2_C_ExecuteUbergraph_VampireSpell2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
