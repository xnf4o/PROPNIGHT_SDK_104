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
//		Name   -> Function SurvIntro.SurvIntro_C.StartTimeline__FinishedFunc
//		Flags  -> ()
void ASurvIntro_C::StartTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.StartTimeline__FinishedFunc");

	ASurvIntro_C_StartTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.StartTimeline__UpdateFunc
//		Flags  -> ()
void ASurvIntro_C::StartTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.StartTimeline__UpdateFunc");

	ASurvIntro_C_StartTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.NicknameRotate
//		Flags  -> ()
void ASurvIntro_C::NicknameRotate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.NicknameRotate");

	ASurvIntro_C_NicknameRotate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.NicknameToggle
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvIntro_C::NicknameToggle(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.NicknameToggle");

	ASurvIntro_C_NicknameToggle_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.End
//		Flags  -> ()
void ASurvIntro_C::End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.End");

	ASurvIntro_C_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvIntro_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.ReceiveTick");

	ASurvIntro_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.ReceiveBeginPlay
//		Flags  -> ()
void ASurvIntro_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.ReceiveBeginPlay");

	ASurvIntro_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.ChangeFOV
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvIntro_C::ChangeFOV(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.ChangeFOV");

	ASurvIntro_C_ChangeFOV_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.ChangeValueFOV
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvIntro_C::ChangeValueFOV(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.ChangeValueFOV");

	ASurvIntro_C_ChangeValueFOV_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvIntro.SurvIntro_C.ExecuteUbergraph_SurvIntro
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvIntro_C::ExecuteUbergraph_SurvIntro(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvIntro.SurvIntro_C.ExecuteUbergraph_SurvIntro");

	ASurvIntro_C_ExecuteUbergraph_SurvIntro_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
