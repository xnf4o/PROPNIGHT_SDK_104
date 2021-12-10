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
//		Name   -> Function LevelSystem.LevelSystem_C.lvlup
//		Flags  -> ()
void ULevelSystem_C::lvlup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.lvlup");

	ULevelSystem_C_lvlup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelSystem_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.ReceiveTick");

	ULevelSystem_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.LvlUpConfirmed
//		Flags  -> ()
// Parameters:
//		int                                                SkillUP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelSystem_C::LvlUpConfirmed(int SkillUP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.LvlUpConfirmed");

	ULevelSystem_C_LvlUpConfirmed_Params params {};
	params.SkillUP = SkillUP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.ReceiveBeginPlay
//		Flags  -> ()
void ULevelSystem_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.ReceiveBeginPlay");

	ULevelSystem_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.1SkillUp
//		Flags  -> ()
void ULevelSystem_C::_1SkillUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.1SkillUp");

	ULevelSystem_C__1SkillUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.2SkillUp
//		Flags  -> ()
void ULevelSystem_C::_2SkillUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.2SkillUp");

	ULevelSystem_C__2SkillUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.3SkillUp
//		Flags  -> ()
void ULevelSystem_C::_3SkillUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.3SkillUp");

	ULevelSystem_C__3SkillUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.CheckPawn
//		Flags  -> ()
void ULevelSystem_C::CheckPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.CheckPawn");

	ULevelSystem_C_CheckPawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LevelSystem.LevelSystem_C.ExecuteUbergraph_LevelSystem
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelSystem_C::ExecuteUbergraph_LevelSystem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSystem.LevelSystem_C.ExecuteUbergraph_LevelSystem");

	ULevelSystem_C_ExecuteUbergraph_LevelSystem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
