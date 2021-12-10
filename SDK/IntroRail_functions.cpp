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
//		Name   -> Function IntroRail.IntroRail_C.StartTimeline__FinishedFunc
//		Flags  -> ()
void AIntroRail_C::StartTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.StartTimeline__FinishedFunc");

	AIntroRail_C_StartTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.StartTimeline__UpdateFunc
//		Flags  -> ()
void AIntroRail_C::StartTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.StartTimeline__UpdateFunc");

	AIntroRail_C_StartTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.NicknameToggle
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AIntroRail_C::NicknameToggle(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.NicknameToggle");

	AIntroRail_C_NicknameToggle_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.NicknameRotate
//		Flags  -> ()
void AIntroRail_C::NicknameRotate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.NicknameRotate");

	AIntroRail_C_NicknameRotate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.End
//		Flags  -> ()
void AIntroRail_C::End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.End");

	AIntroRail_C_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.ChangeFOV
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AIntroRail_C::ChangeFOV(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.ChangeFOV");

	AIntroRail_C_ChangeFOV_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroRail_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.ReceiveTick");

	AIntroRail_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.ReceiveBeginPlay
//		Flags  -> ()
void AIntroRail_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.ReceiveBeginPlay");

	AIntroRail_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.ChangeValueFOV
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroRail_C::ChangeValueFOV(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.ChangeValueFOV");

	AIntroRail_C_ChangeValueFOV_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IntroRail.IntroRail_C.ExecuteUbergraph_IntroRail
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AIntroRail_C::ExecuteUbergraph_IntroRail(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IntroRail.IntroRail_C.ExecuteUbergraph_IntroRail");

	AIntroRail_C_ExecuteUbergraph_IntroRail_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
