#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function NewAlarmBP.NewAlarmBP_C.OnRep_BrakerAlarmer
struct ANewAlarmBP_C_OnRep_BrakerAlarmer_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.TimeIsTicking
struct ANewAlarmBP_C_TimeIsTicking_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.AudioHelperFunc
struct ANewAlarmBP_C_AudioHelperFunc_Params
{
	int                                                Selection;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.XYmaker
struct ANewAlarmBP_C_XYmaker_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__FinishedFunc
struct ANewAlarmBP_C_AlphaLerp__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.AlphaLerp__UpdateFunc
struct ANewAlarmBP_C_AlphaLerp__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_0__FinishedFunc
struct ANewAlarmBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_0__UpdateFunc
struct ANewAlarmBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_1__FinishedFunc
struct ANewAlarmBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_1__UpdateFunc
struct ANewAlarmBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_2__FinishedFunc
struct ANewAlarmBP_C_Timeline_2__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_2__UpdateFunc
struct ANewAlarmBP_C_Timeline_2__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_3__FinishedFunc
struct ANewAlarmBP_C_Timeline_3__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_3__UpdateFunc
struct ANewAlarmBP_C_Timeline_3__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__FinishedFunc
struct ANewAlarmBP_C_CrackEmissionTimeline__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CrackEmissionTimeline__UpdateFunc
struct ANewAlarmBP_C_CrackEmissionTimeline__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_4__FinishedFunc
struct ANewAlarmBP_C_Timeline_4__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_4__UpdateFunc
struct ANewAlarmBP_C_Timeline_4__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_5__FinishedFunc
struct ANewAlarmBP_C_Timeline_5__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_5__UpdateFunc
struct ANewAlarmBP_C_Timeline_5__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Propmachine__FinishedFunc
struct ANewAlarmBP_C_Propmachine__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Propmachine__UpdateFunc
struct ANewAlarmBP_C_Propmachine__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_6__FinishedFunc
struct ANewAlarmBP_C_Timeline_6__FinishedFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Timeline_6__UpdateFunc
struct ANewAlarmBP_C_Timeline_6__UpdateFunc_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.SendSkillCheck
struct ANewAlarmBP_C_SendSkillCheck_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.ReceiveTick
struct ANewAlarmBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.StartReloading
struct ANewAlarmBP_C_StartReloading_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.StopReloadingServ
struct ANewAlarmBP_C_StopReloadingServ_Params
{
	class AActor*                                      SurvActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.FailedAlarm
struct ANewAlarmBP_C_FailedAlarm_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.GreatAlarm
struct ANewAlarmBP_C_GreatAlarm_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.ReceiveBeginPlay
struct ANewAlarmBP_C_ReceiveBeginPlay_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CustomDepthSetAlarm
struct ANewAlarmBP_C_CustomDepthSetAlarm_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.WipeAlarm
struct ANewAlarmBP_C_WipeAlarm_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CustomDepthOffAlarm
struct ANewAlarmBP_C_CustomDepthOffAlarm_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.ServerPlayAudio
struct ANewAlarmBP_C_ServerPlayAudio_Params
{
	bool                                               Active_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.MulticastPlayAudio
struct ANewAlarmBP_C_MulticastPlayAudio_Params
{
	bool                                               Active_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.ActorToSurv
struct ANewAlarmBP_C_ActorToSurv_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.SkillChekSound
struct ANewAlarmBP_C_SkillChekSound_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.Passed
struct ANewAlarmBP_C_Passed_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.TimelineStart
struct ANewAlarmBP_C_TimelineStart_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.BoostMode
struct ANewAlarmBP_C_BoostMode_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CustomEve
struct ANewAlarmBP_C_CustomEve_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.SendGreat
struct ANewAlarmBP_C_SendGreat_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.SendSuccess
struct ANewAlarmBP_C_SendSuccess_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.SendFailed
struct ANewAlarmBP_C_SendFailed_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.Level1
struct ANewAlarmBP_C_Level1_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.Level2
struct ANewAlarmBP_C_Level2_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.Level3
struct ANewAlarmBP_C_Level3_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.Level4
struct ANewAlarmBP_C_Level4_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.HideItem
struct ANewAlarmBP_C_HideItem_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Condition;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.HideItemServ
struct ANewAlarmBP_C_HideItemServ_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Condition;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.FullAlarmMulticast
struct ANewAlarmBP_C_FullAlarmMulticast_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.BeginAttach
struct ANewAlarmBP_C_BeginAttach_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.ParticleSwitch
struct ANewAlarmBP_C_ParticleSwitch_Params
{
	bool                                               Active_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.FakeFailedAlarm
struct ANewAlarmBP_C_FakeFailedAlarm_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CurseLightON
struct ANewAlarmBP_C_CurseLightON_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.OnlySurvsVisible
struct ANewAlarmBP_C_OnlySurvsVisible_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.ClockTickSound
struct ANewAlarmBP_C_ClockTickSound_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.DoppelFaking
struct ANewAlarmBP_C_DoppelFaking_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.AllAlarmsReady
struct ANewAlarmBP_C_AllAlarmsReady_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.FullAllAlarmMulticast
struct ANewAlarmBP_C_FullAllAlarmMulticast_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.AlarmNotification
struct ANewAlarmBP_C_AlarmNotification_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CoinSpawn
struct ANewAlarmBP_C_CoinSpawn_Params
{
	bool                                               SkillCheck_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         SREF;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.WidgetVisible
struct ANewAlarmBP_C_WidgetVisible_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.StopFadeWidgetAlarm
struct ANewAlarmBP_C_StopFadeWidgetAlarm_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.Color
struct ANewAlarmBP_C_Color_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.FailAlarmMulti
struct ANewAlarmBP_C_FailAlarmMulti_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.HideInteractableButton
struct ANewAlarmBP_C_HideInteractableButton_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.ShowIteractableButton
struct ANewAlarmBP_C_ShowIteractableButton_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.SendInfoForHitMarkKiller_AlarmDone
struct ANewAlarmBP_C_SendInfoForHitMarkKiller_AlarmDone_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.CreakSound
struct ANewAlarmBP_C_CreakSound_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.FinishCrack
struct ANewAlarmBP_C_FinishCrack_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.AlarmSound2D
struct ANewAlarmBP_C_AlarmSound2D_Params
{
	bool                                               Start_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.SurvOverlap
struct ANewAlarmBP_C_SurvOverlap_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.AllySkillcheck
struct ANewAlarmBP_C_AllySkillcheck_Params
{
	class ASurvivorMasterBP_C*                         AllySurv;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Failed_;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ANewAlarmBP_C_BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function NewAlarmBP.NewAlarmBP_C.BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ANewAlarmBP_C_BndEvt__NewAlarmBP_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.StartGameOverlap
struct ANewAlarmBP_C_StartGameOverlap_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.SphereRadiusStartGame
struct ANewAlarmBP_C_SphereRadiusStartGame_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.AlarmTutorialStageStart
struct ANewAlarmBP_C_AlarmTutorialStageStart_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.TutorialAlarm
struct ANewAlarmBP_C_TutorialAlarm_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.TutorialHitMark
struct ANewAlarmBP_C_TutorialHitMark_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.TutorialRemoveHitMark
struct ANewAlarmBP_C_TutorialRemoveHitMark_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.SurvTutorial
struct ANewAlarmBP_C_SurvTutorial_Params
{
	bool                                               End_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.PropmachineKillerPerk
struct ANewAlarmBP_C_PropmachineKillerPerk_Params
{
	bool                                               LastLvl_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.PropmachineKillerPerk_SERV
struct ANewAlarmBP_C_PropmachineKillerPerk_SERV_Params
{
	bool                                               LastLvl_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.PropmachineKP
struct ANewAlarmBP_C_PropmachineKP_Params
{
	bool                                               Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.Test
struct ANewAlarmBP_C_Test_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewAlarmBP.NewAlarmBP_C.JukEvent
struct ANewAlarmBP_C_JukEvent_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.BrakeAlarmer
struct ANewAlarmBP_C_BrakeAlarmer_Params
{
};

// Function NewAlarmBP.NewAlarmBP_C.alarmvoice
struct ANewAlarmBP_C_alarmvoice_Params
{
	class ASurvivorMasterBP_C*                         Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewAlarmBP.NewAlarmBP_C.ExecuteUbergraph_NewAlarmBP
struct ANewAlarmBP_C_ExecuteUbergraph_NewAlarmBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
