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
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeymasterLevelSystem_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.ReceiveTick");

	UKeymasterLevelSystem_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.1SkillUp
//		Flags  -> ()
void UKeymasterLevelSystem_C::_1SkillUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.1SkillUp");

	UKeymasterLevelSystem_C__1SkillUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.2SkillUp
//		Flags  -> ()
void UKeymasterLevelSystem_C::_2SkillUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.2SkillUp");

	UKeymasterLevelSystem_C__2SkillUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.3SkillUp
//		Flags  -> ()
void UKeymasterLevelSystem_C::_3SkillUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.3SkillUp");

	UKeymasterLevelSystem_C__3SkillUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.DurationServ
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeymasterLevelSystem_C::DurationServ(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.DurationServ");

	UKeymasterLevelSystem_C_DurationServ_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.DurationMulti
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeymasterLevelSystem_C::DurationMulti(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.DurationMulti");

	UKeymasterLevelSystem_C_DurationMulti_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KeymasterLevelSystem.KeymasterLevelSystem_C.ExecuteUbergraph_KeymasterLevelSystem
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeymasterLevelSystem_C::ExecuteUbergraph_KeymasterLevelSystem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeymasterLevelSystem.KeymasterLevelSystem_C.ExecuteUbergraph_KeymasterLevelSystem");

	UKeymasterLevelSystem_C_ExecuteUbergraph_KeymasterLevelSystem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
