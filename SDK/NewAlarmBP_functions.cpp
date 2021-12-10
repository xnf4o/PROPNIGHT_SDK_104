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
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.OnRep_BrakerAlarmer
//		Flags  -> ()
void ANewAlarmBP_C::OnRep_BrakerAlarmer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.OnRep_BrakerAlarmer");

	ANewAlarmBP_C_OnRep_BrakerAlarmer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.TimeIsTicking
//		Flags  -> ()
// Parameters:
void ANewAlarmBP_C::TimeIsTicking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.TimeIsTicking");

	ANewAlarmBP_C_TimeIsTicking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AudioHelperFunc
//		Flags  -> ()
// Parameters:
//		int                                                Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::AudioHelperFunc(int Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AudioHelperFunc");

	ANewAlarmBP_C_AudioHelperFunc_Params params {};
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.XYmaker
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::XYmaker(float* X, float* Y, float* Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.XYmaker");

	ANewAlarmBP_C_XYmaker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::AlphaLerp__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__FinishedFunc");

	ANewAlarmBP_C_AlphaLerp__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::AlphaLerp__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__UpdateFunc");

	ANewAlarmBP_C_AlphaLerp__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_0__FinishedFunc");

	ANewAlarmBP_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_0__UpdateFunc");

	ANewAlarmBP_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_1__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_1__FinishedFunc");

	ANewAlarmBP_C_Timeline_1__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_1__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_1__UpdateFunc");

	ANewAlarmBP_C_Timeline_1__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_2__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_2__FinishedFunc");

	ANewAlarmBP_C_Timeline_2__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_2__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_2__UpdateFunc");

	ANewAlarmBP_C_Timeline_2__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_3__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_3__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_3__FinishedFunc");

	ANewAlarmBP_C_Timeline_3__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_3__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_3__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_3__UpdateFunc");

	ANewAlarmBP_C_Timeline_3__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::CrackEmissionTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__FinishedFunc");

	ANewAlarmBP_C_CrackEmissionTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::CrackEmissionTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__UpdateFunc");

	ANewAlarmBP_C_CrackEmissionTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_4__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_4__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_4__FinishedFunc");

	ANewAlarmBP_C_Timeline_4__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_4__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_4__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_4__UpdateFunc");

	ANewAlarmBP_C_Timeline_4__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_5__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_5__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_5__FinishedFunc");

	ANewAlarmBP_C_Timeline_5__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_5__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_5__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_5__UpdateFunc");

	ANewAlarmBP_C_Timeline_5__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Propmachine__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Propmachine__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Propmachine__FinishedFunc");

	ANewAlarmBP_C_Propmachine__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Propmachine__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Propmachine__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Propmachine__UpdateFunc");

	ANewAlarmBP_C_Propmachine__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_6__FinishedFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_6__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_6__FinishedFunc");

	ANewAlarmBP_C_Timeline_6__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Timeline_6__UpdateFunc
//		Flags  -> ()
void ANewAlarmBP_C::Timeline_6__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Timeline_6__UpdateFunc");

	ANewAlarmBP_C_Timeline_6__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SendSkillCheck
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::SendSkillCheck(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SendSkillCheck");

	ANewAlarmBP_C_SendSkillCheck_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ReceiveTick");

	ANewAlarmBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.StartReloading
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::StartReloading(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.StartReloading");

	ANewAlarmBP_C_StartReloading_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.StopReloadingServ
//		Flags  -> ()
// Parameters:
//		class AActor*                                      SurvActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::StopReloadingServ(class AActor* SurvActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.StopReloadingServ");

	ANewAlarmBP_C_StopReloadingServ_Params params {};
	params.SurvActor = SurvActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.FailedAlarm
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::FailedAlarm(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.FailedAlarm");

	ANewAlarmBP_C_FailedAlarm_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.GreatAlarm
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::GreatAlarm(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.GreatAlarm");

	ANewAlarmBP_C_GreatAlarm_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ReceiveBeginPlay
//		Flags  -> ()
void ANewAlarmBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ReceiveBeginPlay");

	ANewAlarmBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CustomDepthSetAlarm
//		Flags  -> ()
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::CustomDepthSetAlarm(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CustomDepthSetAlarm");

	ANewAlarmBP_C_CustomDepthSetAlarm_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.WipeAlarm
//		Flags  -> ()
void ANewAlarmBP_C::WipeAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.WipeAlarm");

	ANewAlarmBP_C_WipeAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CustomDepthOffAlarm
//		Flags  -> ()
void ANewAlarmBP_C::CustomDepthOffAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CustomDepthOffAlarm");

	ANewAlarmBP_C_CustomDepthOffAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ServerPlayAudio
//		Flags  -> ()
// Parameters:
//		bool                                               Active_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::ServerPlayAudio(bool Active_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ServerPlayAudio");

	ANewAlarmBP_C_ServerPlayAudio_Params params {};
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.MulticastPlayAudio
//		Flags  -> ()
// Parameters:
//		bool                                               Active_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::MulticastPlayAudio(bool Active_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.MulticastPlayAudio");

	ANewAlarmBP_C_MulticastPlayAudio_Params params {};
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ActorToSurv
//		Flags  -> ()
void ANewAlarmBP_C::ActorToSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ActorToSurv");

	ANewAlarmBP_C_ActorToSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SkillChekSound
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::SkillChekSound(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SkillChekSound");

	ANewAlarmBP_C_SkillChekSound_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Passed
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::Passed(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Passed");

	ANewAlarmBP_C_Passed_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.TimelineStart
//		Flags  -> ()
void ANewAlarmBP_C::TimelineStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.TimelineStart");

	ANewAlarmBP_C_TimelineStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.BoostMode
//		Flags  -> ()
void ANewAlarmBP_C::BoostMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.BoostMode");

	ANewAlarmBP_C_BoostMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CustomEve
//		Flags  -> ()
void ANewAlarmBP_C::CustomEve()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CustomEve");

	ANewAlarmBP_C_CustomEve_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SendGreat
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::SendGreat(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SendGreat");

	ANewAlarmBP_C_SendGreat_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SendSuccess
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::SendSuccess(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SendSuccess");

	ANewAlarmBP_C_SendSuccess_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SendFailed
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::SendFailed(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SendFailed");

	ANewAlarmBP_C_SendFailed_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Level1
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::Level1(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Level1");

	ANewAlarmBP_C_Level1_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Level2
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::Level2(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Level2");

	ANewAlarmBP_C_Level2_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Level3
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::Level3(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Level3");

	ANewAlarmBP_C_Level3_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Level4
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::Level4(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Level4");

	ANewAlarmBP_C_Level4_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.HideItem
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::HideItem(class ASurvivorMasterBP_C* Surv, bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.HideItem");

	ANewAlarmBP_C_HideItem_Params params {};
	params.Surv = Surv;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.HideItemServ
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::HideItemServ(class ASurvivorMasterBP_C* Surv, bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.HideItemServ");

	ANewAlarmBP_C_HideItemServ_Params params {};
	params.Surv = Surv;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.FullAlarmMulticast
//		Flags  -> ()
void ANewAlarmBP_C::FullAlarmMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.FullAlarmMulticast");

	ANewAlarmBP_C_FullAlarmMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.BeginAttach
//		Flags  -> ()
void ANewAlarmBP_C::BeginAttach()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.BeginAttach");

	ANewAlarmBP_C_BeginAttach_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ParticleSwitch
//		Flags  -> ()
// Parameters:
//		bool                                               Active_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::ParticleSwitch(bool Active_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ParticleSwitch");

	ANewAlarmBP_C_ParticleSwitch_Params params {};
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.FakeFailedAlarm
//		Flags  -> ()
void ANewAlarmBP_C::FakeFailedAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.FakeFailedAlarm");

	ANewAlarmBP_C_FakeFailedAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CurseLightON
//		Flags  -> ()
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::CurseLightON(bool On, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CurseLightON");

	ANewAlarmBP_C_CurseLightON_Params params {};
	params.On = On;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.OnlySurvsVisible
//		Flags  -> ()
void ANewAlarmBP_C::OnlySurvsVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.OnlySurvsVisible");

	ANewAlarmBP_C_OnlySurvsVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ClockTickSound
//		Flags  -> ()
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::ClockTickSound(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ClockTickSound");

	ANewAlarmBP_C_ClockTickSound_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.DoppelFaking
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::DoppelFaking(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.DoppelFaking");

	ANewAlarmBP_C_DoppelFaking_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AllAlarmsReady
//		Flags  -> ()
void ANewAlarmBP_C::AllAlarmsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AllAlarmsReady");

	ANewAlarmBP_C_AllAlarmsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.FullAllAlarmMulticast
//		Flags  -> ()
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::FullAllAlarmMulticast(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.FullAllAlarmMulticast");

	ANewAlarmBP_C_FullAllAlarmMulticast_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AlarmNotification
//		Flags  -> ()
void ANewAlarmBP_C::AlarmNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AlarmNotification");

	ANewAlarmBP_C_AlarmNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CoinSpawn
//		Flags  -> ()
// Parameters:
//		bool                                               SkillCheck_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         SREF                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::CoinSpawn(bool SkillCheck_, class ASurvivorMasterBP_C* SREF)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CoinSpawn");

	ANewAlarmBP_C_CoinSpawn_Params params {};
	params.SkillCheck_ = SkillCheck_;
	params.SREF = SREF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.WidgetVisible
//		Flags  -> ()
void ANewAlarmBP_C::WidgetVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.WidgetVisible");

	ANewAlarmBP_C_WidgetVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.StopFadeWidgetAlarm
//		Flags  -> ()
void ANewAlarmBP_C::StopFadeWidgetAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.StopFadeWidgetAlarm");

	ANewAlarmBP_C_StopFadeWidgetAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Color
//		Flags  -> ()
void ANewAlarmBP_C::Color()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Color");

	ANewAlarmBP_C_Color_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.FailAlarmMulti
//		Flags  -> ()
void ANewAlarmBP_C::FailAlarmMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.FailAlarmMulti");

	ANewAlarmBP_C_FailAlarmMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.HideInteractableButton
//		Flags  -> ()
void ANewAlarmBP_C::HideInteractableButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.HideInteractableButton");

	ANewAlarmBP_C_HideInteractableButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ShowIteractableButton
//		Flags  -> ()
void ANewAlarmBP_C::ShowIteractableButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ShowIteractableButton");

	ANewAlarmBP_C_ShowIteractableButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SendInfoForHitMarkKiller_AlarmDone
//		Flags  -> ()
void ANewAlarmBP_C::SendInfoForHitMarkKiller_AlarmDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SendInfoForHitMarkKiller_AlarmDone");

	ANewAlarmBP_C_SendInfoForHitMarkKiller_AlarmDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.CreakSound
//		Flags  -> ()
void ANewAlarmBP_C::CreakSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.CreakSound");

	ANewAlarmBP_C_CreakSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.FinishCrack
//		Flags  -> ()
void ANewAlarmBP_C::FinishCrack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.FinishCrack");

	ANewAlarmBP_C_FinishCrack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AlarmSound2D
//		Flags  -> ()
// Parameters:
//		bool                                               Start_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::AlarmSound2D(bool Start_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AlarmSound2D");

	ANewAlarmBP_C_AlarmSound2D_Params params {};
	params.Start_ = Start_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SurvOverlap
//		Flags  -> ()
void ANewAlarmBP_C::SurvOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SurvOverlap");

	ANewAlarmBP_C_SurvOverlap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AllySkillcheck
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         AllySurv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Failed_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::AllySkillcheck(class ASurvivorMasterBP_C* AllySurv, bool Failed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AllySkillcheck");

	ANewAlarmBP_C_AllySkillcheck_Params params {};
	params.AllySurv = AllySurv;
	params.Failed_ = Failed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ANewAlarmBP_C::BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ANewAlarmBP_C_BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ANewAlarmBP_C_BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.StartGameOverlap
//		Flags  -> ()
void ANewAlarmBP_C::StartGameOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.StartGameOverlap");

	ANewAlarmBP_C_StartGameOverlap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SphereRadiusStartGame
//		Flags  -> ()
void ANewAlarmBP_C::SphereRadiusStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SphereRadiusStartGame");

	ANewAlarmBP_C_SphereRadiusStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.AlarmTutorialStageStart
//		Flags  -> ()
void ANewAlarmBP_C::AlarmTutorialStageStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.AlarmTutorialStageStart");

	ANewAlarmBP_C_AlarmTutorialStageStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.TutorialAlarm
//		Flags  -> ()
void ANewAlarmBP_C::TutorialAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.TutorialAlarm");

	ANewAlarmBP_C_TutorialAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.TutorialHitMark
//		Flags  -> ()
void ANewAlarmBP_C::TutorialHitMark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.TutorialHitMark");

	ANewAlarmBP_C_TutorialHitMark_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.TutorialRemoveHitMark
//		Flags  -> ()
void ANewAlarmBP_C::TutorialRemoveHitMark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.TutorialRemoveHitMark");

	ANewAlarmBP_C_TutorialRemoveHitMark_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.SurvTutorial
//		Flags  -> ()
// Parameters:
//		bool                                               End_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::SurvTutorial(bool End_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.SurvTutorial");

	ANewAlarmBP_C_SurvTutorial_Params params {};
	params.End_ = End_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.PropmachineKillerPerk
//		Flags  -> ()
// Parameters:
//		bool                                               LastLvl_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::PropmachineKillerPerk(bool LastLvl_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.PropmachineKillerPerk");

	ANewAlarmBP_C_PropmachineKillerPerk_Params params {};
	params.LastLvl_ = LastLvl_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.PropmachineKillerPerk_SERV
//		Flags  -> ()
// Parameters:
//		bool                                               LastLvl_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::PropmachineKillerPerk_SERV(bool LastLvl_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.PropmachineKillerPerk_SERV");

	ANewAlarmBP_C_PropmachineKillerPerk_SERV_Params params {};
	params.LastLvl_ = LastLvl_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.PropmachineKP
//		Flags  -> ()
// Parameters:
//		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::PropmachineKP(bool Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.PropmachineKP");

	ANewAlarmBP_C_PropmachineKP_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.Test
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewAlarmBP_C::Test(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.Test");

	ANewAlarmBP_C_Test_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.JukEvent
//		Flags  -> ()
void ANewAlarmBP_C::JukEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.JukEvent");

	ANewAlarmBP_C_JukEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.BrakeAlarmer
//		Flags  -> ()
void ANewAlarmBP_C::BrakeAlarmer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.BrakeAlarmer");

	ANewAlarmBP_C_BrakeAlarmer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.alarmvoice
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::alarmvoice(class ASurvivorMasterBP_C* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.alarmvoice");

	ANewAlarmBP_C_alarmvoice_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewAlarmBP.NewAlarmBP_C.ExecuteUbergraph_NewAlarmBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewAlarmBP_C::ExecuteUbergraph_NewAlarmBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewAlarmBP.NewAlarmBP_C.ExecuteUbergraph_NewAlarmBP");

	ANewAlarmBP_C_ExecuteUbergraph_NewAlarmBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
