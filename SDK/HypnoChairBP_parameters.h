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

// Function HypnoChairBP.HypnoChairBP_C.GetCurrentEXP
struct AHypnoChairBP_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.GetPointsForPerks
struct AHypnoChairBP_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.SeeKillerSilhouetteNearHC
struct AHypnoChairBP_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.GetPerkName
struct AHypnoChairBP_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.CoinAngle
struct AHypnoChairBP_C_CoinAngle_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.Stule Open
struct AHypnoChairBP_C_Stule_Open_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.StarterToPlace
struct AHypnoChairBP_C_StarterToPlace_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseAll__FinishedFunc
struct AHypnoChairBP_C_CloseAll__FinishedFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseAll__UpdateFunc
struct AHypnoChairBP_C_CloseAll__UpdateFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Resque__FinishedFunc
struct AHypnoChairBP_C_Resque__FinishedFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Resque__UpdateFunc
struct AHypnoChairBP_C_Resque__UpdateFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_0__FinishedFunc
struct AHypnoChairBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_0__UpdateFunc
struct AHypnoChairBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_1__FinishedFunc
struct AHypnoChairBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_1__UpdateFunc
struct AHypnoChairBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_2__FinishedFunc
struct AHypnoChairBP_C_Timeline_2__FinishedFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_2__UpdateFunc
struct AHypnoChairBP_C_Timeline_2__UpdateFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_3__FinishedFunc
struct AHypnoChairBP_C_Timeline_3__FinishedFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.Timeline_3__UpdateFunc
struct AHypnoChairBP_C_Timeline_3__UpdateFunc_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.FailedGetOut
struct AHypnoChairBP_C_FailedGetOut_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthServer
struct AHypnoChairBP_C_OffCustomDepthServer_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthMulti
struct AHypnoChairBP_C_OffCustomDepthMulti_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CustomDepthOff
struct AHypnoChairBP_C_CustomDepthOff_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.GGgame
struct AHypnoChairBP_C_GGgame_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.KillingSurvServ
struct AHypnoChairBP_C_KillingSurvServ_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewParam;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.SurvOnChairPosition
struct AHypnoChairBP_C_SurvOnChairPosition_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.StartToPlace
struct AHypnoChairBP_C_StartToPlace_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AHypnoChairBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AHypnoChairBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HypnoChairBP.HypnoChairBP_C.CustomDepthSet
struct AHypnoChairBP_C_CustomDepthSet_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.ReceiveTick
struct AHypnoChairBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.BackToStart
struct AHypnoChairBP_C_BackToStart_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.SurvDropItem
struct AHypnoChairBP_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.DecreasePerkPoints
struct AHypnoChairBP_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.LevelUpped
struct AHypnoChairBP_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.OpenStageEvent
struct AHypnoChairBP_C_OpenStageEvent_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.SetDepth
struct AHypnoChairBP_C_SetDepth_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseChair
struct AHypnoChairBP_C_CloseChair_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.IncreaseOnceHP
struct AHypnoChairBP_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.AddEXP
struct AHypnoChairBP_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.CloseLeft
struct AHypnoChairBP_C_CloseLeft_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseRight
struct AHypnoChairBP_C_CloseRight_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseLeg
struct AHypnoChairBP_C_CloseLeg_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseLeftMulti
struct AHypnoChairBP_C_CloseLeftMulti_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CloseRightMulti
struct AHypnoChairBP_C_CloseRightMulti_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CurseLightON
struct AHypnoChairBP_C_CurseLightON_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.ResetPosition
struct AHypnoChairBP_C_ResetPosition_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.GetLampMaterial
struct AHypnoChairBP_C_GetLampMaterial_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.LampAnim
struct AHypnoChairBP_C_LampAnim_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.ReceiveBeginPlay
struct AHypnoChairBP_C_ReceiveBeginPlay_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.SurvResque
struct AHypnoChairBP_C_SurvResque_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               otherSurv_;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.BackToChair
struct AHypnoChairBP_C_BackToChair_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.CoinSpawnerChair
struct AHypnoChairBP_C_CoinSpawnerChair_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tinkerer_;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Self_;                                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.BreakChair
struct AHypnoChairBP_C_BreakChair_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.ChangeMaterial
struct AHypnoChairBP_C_ChangeMaterial_Params
{
	bool                                               Damaged_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.DeathEffectEvent
struct AHypnoChairBP_C_DeathEffectEvent_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.DynMatGet
struct AHypnoChairBP_C_DynMatGet_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.DeathSurvChair
struct AHypnoChairBP_C_DeathSurvChair_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.SurvLeave
struct AHypnoChairBP_C_SurvLeave_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.SetBoostT_SERV
struct AHypnoChairBP_C_SetBoostT_SERV_Params
{
	float                                              BoostTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.SetBoostT_MULTI
struct AHypnoChairBP_C_SetBoostT_MULTI_Params
{
	float                                              BoostTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.SetPause_SERV
struct AHypnoChairBP_C_SetPause_SERV_Params
{
	bool                                               Pause;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.SetPause_MULTI
struct AHypnoChairBP_C_SetPause_MULTI_Params
{
	bool                                               Pause;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HypnoChairBP.HypnoChairBP_C.SetKillingTime
struct AHypnoChairBP_C_SetKillingTime_Params
{
	float                                              B;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.AddToAllSurv
struct AHypnoChairBP_C_AddToAllSurv_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.SetTimingToAllChairs
struct AHypnoChairBP_C_SetTimingToAllChairs_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AHypnoChairBP_C_BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HypnoChairBP.HypnoChairBP_C.BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct AHypnoChairBP_C_BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.SurvThanks
struct AHypnoChairBP_C_SurvThanks_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.chairvoice
struct AHypnoChairBP_C_chairvoice_Params
{
	class ASurvivorMasterBP_C*                         Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HypnoChairBP.HypnoChairBP_C.SurvLeaveTick
struct AHypnoChairBP_C_SurvLeaveTick_Params
{
};

// Function HypnoChairBP.HypnoChairBP_C.ExecuteUbergraph_HypnoChairBP
struct AHypnoChairBP_C_ExecuteUbergraph_HypnoChairBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
