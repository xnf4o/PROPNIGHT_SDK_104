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
//		Name   -> Function AstralTutorial.AstralTutorial_C.ReceiveBeginPlay
//		Flags  -> ()
void UAstralTutorial_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.ReceiveBeginPlay");

	UAstralTutorial_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAstralTutorial_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.ReceiveTick");

	UAstralTutorial_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.Cast
//		Flags  -> ()
void UAstralTutorial_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.Cast");

	UAstralTutorial_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.VisibilityServ
//		Flags  -> ()
void UAstralTutorial_C::VisibilityServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.VisibilityServ");

	UAstralTutorial_C_VisibilityServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.VisibilityMulti
//		Flags  -> ()
void UAstralTutorial_C::VisibilityMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.VisibilityMulti");

	UAstralTutorial_C_VisibilityMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.AstralOffServ
//		Flags  -> ()
// Parameters:
//		bool                                               AfterAttack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAstralTutorial_C::AstralOffServ(bool AfterAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.AstralOffServ");

	UAstralTutorial_C_AstralOffServ_Params params {};
	params.AfterAttack = AfterAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.AstralOffMulti
//		Flags  -> ()
// Parameters:
//		bool                                               AfterAttack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAstralTutorial_C::AstralOffMulti(bool AfterAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.AstralOffMulti");

	UAstralTutorial_C_AstralOffMulti_Params params {};
	params.AfterAttack = AfterAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.AstralOffLocal
//		Flags  -> ()
// Parameters:
//		bool                                               AfterAttack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAstralTutorial_C::AstralOffLocal(bool AfterAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.AstralOffLocal");

	UAstralTutorial_C_AstralOffLocal_Params params {};
	params.AfterAttack = AfterAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AstralTutorial.AstralTutorial_C.ExecuteUbergraph_AstralTutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAstralTutorial_C::ExecuteUbergraph_AstralTutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AstralTutorial.AstralTutorial_C.ExecuteUbergraph_AstralTutorial");

	UAstralTutorial_C_ExecuteUbergraph_AstralTutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
