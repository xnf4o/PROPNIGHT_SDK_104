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

// Function KillerMasterBP.KillerMasterBP_C.HeadRotationFunc
struct AKillerMasterBP_C_HeadRotationFunc_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.AddWiggleParasiteMovement
struct AKillerMasterBP_C_AddWiggleParasiteMovement_Params
{
	float                                              WigglePower;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.get level name
struct AKillerMasterBP_C_get_level_name_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Name;                                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurfaceSoundPlayer
struct AKillerMasterBP_C_SurfaceSoundPlayer_Params
{
	class UFMODEvent*                                  Event;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairCheckFunc
struct AKillerMasterBP_C_ChairCheckFunc_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.ScreenshotFunc
struct AKillerMasterBP_C_ScreenshotFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.MoveSoundFunc
struct AKillerMasterBP_C_MoveSoundFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AlarmBrokeTimer
struct AKillerMasterBP_C_AlarmBrokeTimer_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.coinDropper
struct AKillerMasterBP_C_coinDropper_Params
{
	bool                                               Flashlight;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               local_;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.NewFunction_2
struct AKillerMasterBP_C_NewFunction_2_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SeeOtherKillers
struct AKillerMasterBP_C_SeeOtherKillers_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PickupSpeed
struct AKillerMasterBP_C_PickupSpeed_Params
{
	bool                                               pickup;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              B;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.Hypno Chair Ref Killer
struct AKillerMasterBP_C_Hypno_Chair_Ref_Killer_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SurvSeeAddTimer
struct AKillerMasterBP_C_SurvSeeAddTimer_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              timeAdd;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Close_;                                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvSeeTimer
struct AKillerMasterBP_C_SurvSeeTimer_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Melee Keymaster?
struct AKillerMasterBP_C_Melee_Keymaster__Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.BloodLust
struct AKillerMasterBP_C_BloodLust_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChaseOffGameEnd
struct AKillerMasterBP_C_ChaseOffGameEnd_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Game Mode
struct AKillerMasterBP_C_Game_Mode_Params
{
	bool                                               Propnight_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.OnRep_Stunned?
struct AKillerMasterBP_C_OnRep_Stunned__Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DynamicMatInit
struct AKillerMasterBP_C_DynamicMatInit_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SurvChaser
struct AKillerMasterBP_C_SurvChaser_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.OnRep_HandAttack
struct AKillerMasterBP_C_OnRep_HandAttack_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ElevatorTrace
struct AKillerMasterBP_C_ElevatorTrace_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Surf Track 3000
struct AKillerMasterBP_C_Surf_Track_3000_Params
{
	float                                              TimeIn;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.surv to chair
struct AKillerMasterBP_C_surv_to_chair_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.GetSurvCrawlInBox
struct AKillerMasterBP_C_GetSurvCrawlInBox_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.NewFunction_1
struct AKillerMasterBP_C_NewFunction_1_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.LocationChangerKiller
struct AKillerMasterBP_C_LocationChangerKiller_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.LocationCheckForSurv
struct AKillerMasterBP_C_LocationCheckForSurv_Params
{
	bool                                               Hit_;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvHpCalc
struct AKillerMasterBP_C_SurvHpCalc_Params
{
	class ASurvivorMasterBP_C*                         SurvRefIn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageIn;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Bool;                                                      // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurfaceSound
struct AKillerMasterBP_C_SurfaceSound_Params
{
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          InputPin;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SpeedDown
struct AKillerMasterBP_C_SpeedDown_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SpeedUp
struct AKillerMasterBP_C_SpeedUp_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.reduceMaxWalkSpeed
struct AKillerMasterBP_C_reduceMaxWalkSpeed_Params
{
	float                                              MaxSpeedPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.MouseClickStopwatch
struct AKillerMasterBP_C_MouseClickStopwatch_Params
{
	float                                              A;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SuperSmash_;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.impulse forward
struct AKillerMasterBP_C_impulse_forward_Params
{
	class UCharacterMovementComponent*                 self2;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*                 self3;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.Forward
struct AKillerMasterBP_C_Forward_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_0__FinishedFunc
struct AKillerMasterBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_0__UpdateFunc
struct AKillerMasterBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__FinishedFunc
struct AKillerMasterBP_C_IncreasorSpeed__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__UpdateFunc
struct AKillerMasterBP_C_IncreasorSpeed__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__FinishedFunc
struct AKillerMasterBP_C_DecreasorSpeed__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__UpdateFunc
struct AKillerMasterBP_C_DecreasorSpeed__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__FinishedFunc
struct AKillerMasterBP_C_SoundTimeline__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__UpdateFunc
struct AKillerMasterBP_C_SoundTimeline__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__FinishedFunc
struct AKillerMasterBP_C_StopSoundChaseTimeline__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__UpdateFunc
struct AKillerMasterBP_C_StopSoundChaseTimeline__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_1__FinishedFunc
struct AKillerMasterBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_1__UpdateFunc
struct AKillerMasterBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_2__FinishedFunc
struct AKillerMasterBP_C_Timeline_2__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_2__UpdateFunc
struct AKillerMasterBP_C_Timeline_2__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_3__FinishedFunc
struct AKillerMasterBP_C_Timeline_3__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_3__UpdateFunc
struct AKillerMasterBP_C_Timeline_3__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_4__FinishedFunc
struct AKillerMasterBP_C_Timeline_4__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_4__UpdateFunc
struct AKillerMasterBP_C_Timeline_4__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__FinishedFunc
struct AKillerMasterBP_C_ScaleSizer__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__UpdateFunc
struct AKillerMasterBP_C_ScaleSizer__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__FinishedFunc
struct AKillerMasterBP_C_AfterStunColor__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__UpdateFunc
struct AKillerMasterBP_C_AfterStunColor__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_5__FinishedFunc
struct AKillerMasterBP_C_Timeline_5__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_5__UpdateFunc
struct AKillerMasterBP_C_Timeline_5__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_6__FinishedFunc
struct AKillerMasterBP_C_Timeline_6__FinishedFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Timeline_6__UpdateFunc
struct AKillerMasterBP_C_Timeline_6__UpdateFunc_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Released
struct AKillerMasterBP_C_InpTchEvt_Released_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Pressed
struct AKillerMasterBP_C_InpTchEvt_Pressed_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_5
struct AKillerMasterBP_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_4
struct AKillerMasterBP_C_InpActEvt_Jump_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_14
struct AKillerMasterBP_C_InpActEvt_Add_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Subtract_K2Node_InputKeyEvent_13
struct AKillerMasterBP_C_InpActEvt_Subtract_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F3_K2Node_InputKeyEvent_12
struct AKillerMasterBP_C_InpActEvt_F3_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_11
struct AKillerMasterBP_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10
struct AKillerMasterBP_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F2_K2Node_InputKeyEvent_9
struct AKillerMasterBP_C_InpActEvt_F2_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_8
struct AKillerMasterBP_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_7
struct AKillerMasterBP_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_6
struct AKillerMasterBP_C_InpActEvt_Multiply_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_3
struct AKillerMasterBP_C__Pick_Up_Survivor_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_2
struct AKillerMasterBP_C__Pick_Up_Survivor_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Attack_K2Node_InputActionEvent_1
struct AKillerMasterBP_C_InpActEvt_Attack_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_J_K2Node_InputKeyEvent_5
struct AKillerMasterBP_C_InpActEvt_J_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Divide_K2Node_InputKeyEvent_4
struct AKillerMasterBP_C_InpActEvt_Divide_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_3
struct AKillerMasterBP_C_InpActEvt_Add_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_2
struct AKillerMasterBP_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpActEvt_One_K2Node_InputKeyEvent_1
struct AKillerMasterBP_C_InpActEvt_One_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CustopDepth
struct AKillerMasterBP_C_CustopDepth_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.AlarmSee
struct AKillerMasterBP_C_AlarmSee_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.pickup
struct AKillerMasterBP_C_pickup_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventServ
struct AKillerMasterBP_C_ChairOverlapEventServ_Params
{
	class AHypnoChairBP_C*                             ChairRef;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventMulti
struct AKillerMasterBP_C_ChairOverlapEventMulti_Params
{
	class AHypnoChairBP_C*                             ChairRef;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.TeleportServer
struct AKillerMasterBP_C_TeleportServer_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.TeleportMulti
struct AKillerMasterBP_C_TeleportMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct AKillerMasterBP_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOn
struct AKillerMasterBP_C_SurvSpyEyeOn_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOff
struct AKillerMasterBP_C_SurvSpyEyeOff_Params
{
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct AKillerMasterBP_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.Hitter
struct AKillerMasterBP_C_Hitter_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               knife;                                                     // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Range;                                                     // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BackStab;                                                  // 0x000E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               VampireBite;                                               // 0x000F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeed
struct AKillerMasterBP_C_DecreaseWalkSpeed_Params
{
	bool                                               Hited_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Range_;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeedMulti
struct AKillerMasterBP_C_DecreaseWalkSpeedMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeed
struct AKillerMasterBP_C_IncreaseWalkSpeed_Params
{
	bool                                               Hited;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Range_;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeedMulti
struct AKillerMasterBP_C_IncreaseWalkSpeedMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AmmoSet
struct AKillerMasterBP_C_AmmoSet_Params
{
	int                                                Ammo;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.AmmoRotation
struct AKillerMasterBP_C_AmmoRotation_Params
{
	struct FRotator                                    Rotator;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.RotationAtack
struct AKillerMasterBP_C_RotationAtack_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.LocalRotationEvent
struct AKillerMasterBP_C_LocalRotationEvent_Params
{
	struct FRotator                                    NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SpeedChangeServ
struct AKillerMasterBP_C_SpeedChangeServ_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.cdAtack
struct AKillerMasterBP_C_cdAtack_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEndServ
struct AKillerMasterBP_C_ChairOverlapEndServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairOvelapEndMulti
struct AKillerMasterBP_C_ChairOvelapEndMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ExplosionSoundServ
struct AKillerMasterBP_C_ExplosionSoundServ_Params
{
	class UStaticMeshComponent*                        bullet;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.FlashLightIncreaseSpeed
struct AKillerMasterBP_C_FlashLightIncreaseSpeed_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChek
struct AKillerMasterBP_C_ChairChek_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ThirdPersonCamEvent
struct AKillerMasterBP_C_ThirdPersonCamEvent_Params
{
	bool                                               Now_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoDelay_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.FirstPersonCamEvent
struct AKillerMasterBP_C_FirstPersonCamEvent_Params
{
	bool                                               Now_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoDelay_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.RotationCameraServ
struct AKillerMasterBP_C_RotationCameraServ_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.RotationCameraMulti
struct AKillerMasterBP_C_RotationCameraMulti_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.AstralSoundIn
struct AKillerMasterBP_C_AstralSoundIn_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AstralSoundOut
struct AKillerMasterBP_C_AstralSoundOut_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.AstralSoundInvisibility
struct AKillerMasterBP_C_AstralSoundInvisibility_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SoundAmbStart
struct AKillerMasterBP_C_SoundAmbStart_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AtackAudio
struct AKillerMasterBP_C_AtackAudio_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SpeedChangeMulti
struct AKillerMasterBP_C_SpeedChangeMulti_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SphereDrawServ
struct AKillerMasterBP_C_SphereDrawServ_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SphereDrawMulti
struct AKillerMasterBP_C_SphereDrawMulti_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.AtackAnimServ
struct AKillerMasterBP_C_AtackAnimServ_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.AtackAnimMulti
struct AKillerMasterBP_C_AtackAnimMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.MeshVisibiltyOff
struct AKillerMasterBP_C_MeshVisibiltyOff_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.MulticastChangeFootwear
struct AKillerMasterBP_C_MulticastChangeFootwear_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DeleyerAttackCollision
struct AKillerMasterBP_C_DeleyerAttackCollision_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.MeshVisibilityOn
struct AKillerMasterBP_C_MeshVisibilityOn_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AmbientOff
struct AKillerMasterBP_C_AmbientOff_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.LaughServ
struct AKillerMasterBP_C_LaughServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.LaughMulti
struct AKillerMasterBP_C_LaughMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ServerChangeFootwear
struct AKillerMasterBP_C_ServerChangeFootwear_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SetCharacterOwner
struct AKillerMasterBP_C_SetCharacterOwner_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChangeFootState
struct AKillerMasterBP_C_ChangeFootState_Params
{
	TEnumAsByte<EFootState_EFootState>                 New_Style;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.XLocationMeshEv
struct AKillerMasterBP_C_XLocationMeshEv_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.JumpChek
struct AKillerMasterBP_C_JumpChek_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BeginFootprint
struct AKillerMasterBP_C_BeginFootprint_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnDecal
struct AKillerMasterBP_C_SpawnDecal_Params
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Right;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Left;                                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JumpStart;                                                 // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JumpEnd;                                                   // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Killer_;                                                   // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ImProp_;                                                   // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Run_;                                                      // 0x000E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Crouch_;                                                   // 0x000F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFMODAudioComponent*                         FMODAudio;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillerType;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Crawl_;                                                    // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Shake;                                                     // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.Chair Open Stage
struct AKillerMasterBP_C_Chair_Open_Stage_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.HitterServ
struct AKillerMasterBP_C_HitterServ_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Crawl;                                                     // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Knife_;                                                    // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Range;                                                     // 0x000E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BackStab;                                                  // 0x000F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               VampireBite_;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.StartAnimShot
struct AKillerMasterBP_C_StartAnimShot_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PlantAnim
struct AKillerMasterBP_C_PlantAnim_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PlantAnimServ
struct AKillerMasterBP_C_PlantAnimServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PlantAnimMulti
struct AKillerMasterBP_C_PlantAnimMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.HitterMulti
struct AKillerMasterBP_C_HitterMulti_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Crawl;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Chair;                                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.ShootAudio
struct AKillerMasterBP_C_ShootAudio_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ActivateSurv
struct AKillerMasterBP_C_ActivateSurv_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.hitSuface
struct AKillerMasterBP_C_hitSuface_Params
{
	bool                                               Range_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Loc;                                                       // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     norm;                                                      // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0028(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairServ
struct AKillerMasterBP_C_ChairServ_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairMulti
struct AKillerMasterBP_C_ChairMulti_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvPropSound
struct AKillerMasterBP_C_SurvPropSound_Params
{
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurfaceServ
struct AKillerMasterBP_C_SurfaceServ_Params
{
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Range;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurfaceMulti
struct AKillerMasterBP_C_SurfaceMulti_Params
{
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Range;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvImpactSound
struct AKillerMasterBP_C_SurvImpactSound_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               knife;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Range;                                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BackStab;                                                  // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundServ
struct AKillerMasterBP_C_SurvImpactSoundServ_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        damagType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundMulti
struct AKillerMasterBP_C_SurvImpactSoundMulti_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        DmgType;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairEvent
struct AKillerMasterBP_C_ChairEvent_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.LookUpServ
struct AKillerMasterBP_C_LookUpServ_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.LookUpMulti
struct AKillerMasterBP_C_LookUpMulti_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.TurnServ
struct AKillerMasterBP_C_TurnServ_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.TurnMulti
struct AKillerMasterBP_C_TurnMulti_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SetKillerType
struct AKillerMasterBP_C_SetKillerType_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CDATACKER
struct AKillerMasterBP_C_CDATACKER_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillKnifeServ
struct AKillerMasterBP_C_KillKnifeServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillKnifeMulti
struct AKillerMasterBP_C_KillKnifeMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KnifeShootSoundStart
struct AKillerMasterBP_C_KnifeShootSoundStart_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KnifeSpawnSound
struct AKillerMasterBP_C_KnifeSpawnSound_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.WeaponImpact
struct AKillerMasterBP_C_WeaponImpact_Params
{
	class UStaticMeshComponent*                        meshRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundTrue
struct AKillerMasterBP_C_KnifeDetectorSoundTrue_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundFalse
struct AKillerMasterBP_C_KnifeDetectorSoundFalse_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.HUDON
struct AKillerMasterBP_C_HUDON_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Drop
struct AKillerMasterBP_C_Drop_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InertCamera
struct AKillerMasterBP_C_InertCamera_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.HotkeyStarter
struct AKillerMasterBP_C_HotkeyStarter_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.JumpFall
struct AKillerMasterBP_C_JumpFall_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
struct AKillerMasterBP_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
struct AKillerMasterBP_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedMulti
struct AKillerMasterBP_C_IncreaseSpeedMulti_Params
{
	float                                              CurrentSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewSpeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MultiplyTime;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedServ
struct AKillerMasterBP_C_IncreaseSpeedServ_Params
{
	float                                              CurrentSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewSpeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MultiplyTime;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedServ
struct AKillerMasterBP_C_DecreaseSpeedServ_Params
{
	float                                              CurrentSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewSpeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MultiplyTime;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedMulti
struct AKillerMasterBP_C_DecreaseSpeedMulti_Params
{
	float                                              CurrentSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewSpeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MultiplyTime;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.MoveKiller
struct AKillerMasterBP_C_MoveKiller_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.offignorer
struct AKillerMasterBP_C_offignorer_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.IncreaseReal
struct AKillerMasterBP_C_IncreaseReal_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewParam2;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewParam3;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.DecreaseReal
struct AKillerMasterBP_C_DecreaseReal_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewParam2;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewParam3;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairMoveEvent
struct AKillerMasterBP_C_ChairMoveEvent_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.Marked
struct AKillerMasterBP_C_Marked_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.HeadRotatorServ
struct AKillerMasterBP_C_HeadRotatorServ_Params
{
	struct FRotator                                    Rotator;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.HeadRotatorMulti
struct AKillerMasterBP_C_HeadRotatorMulti_Params
{
	struct FRotator                                    Rotator;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.RotatorHead
struct AKillerMasterBP_C_RotatorHead_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.CamEv
struct AKillerMasterBP_C_CamEv_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.CustomLMB
struct AKillerMasterBP_C_CustomLMB_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KnockDownSurvServ
struct AKillerMasterBP_C_KnockDownSurvServ_Params
{
	bool                                               Crawl;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Chair;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SendScore
struct AKillerMasterBP_C_SendScore_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SendKillerType
struct AKillerMasterBP_C_SendKillerType_Params
{
	int                                                KillerType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ReceivePossessed
struct AKillerMasterBP_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InitVoice
struct AKillerMasterBP_C_InitVoice_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature
struct AKillerMasterBP_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature_Params
{
	TArray<unsigned char>                              VoiceData;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              MicLevel;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ServVoiceProc
struct AKillerMasterBP_C_ServVoiceProc_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function KillerMasterBP.KillerMasterBP_C.ReceiveVoice
struct AKillerMasterBP_C_ReceiveVoice_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function KillerMasterBP.KillerMasterBP_C.SendVoiceStatusServer
struct AKillerMasterBP_C_SendVoiceStatusServer_Params
{
	bool                                               VoiceActive_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.LoadSensivity
struct AKillerMasterBP_C_LoadSensivity_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ToChairMoveSurv
struct AKillerMasterBP_C_ToChairMoveSurv_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeServ
struct AKillerMasterBP_C_MessegeToSurvSeeServ_Params
{
	bool                                               See_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeMulti
struct AKillerMasterBP_C_MessegeToSurvSeeMulti_Params
{
	bool                                               See_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvLocationServ
struct AKillerMasterBP_C_SurvLocationServ_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    NewParam2;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         NewParam3;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvLocationMulti
struct AKillerMasterBP_C_SurvLocationMulti_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    NewParam2;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         NewParam3;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.PickupAttachServ
struct AKillerMasterBP_C_PickupAttachServ_Params
{
	class ASurvivorMasterBP_C*                         NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.PickupAttachMulti
struct AKillerMasterBP_C_PickupAttachMulti_Params
{
	class ASurvivorMasterBP_C*                         NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.EndGameFreeze
struct AKillerMasterBP_C_EndGameFreeze_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesServ
struct AKillerMasterBP_C_SpawnHitParticlesServ_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHit;                                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  hit;                                                       // 0x001C(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesMulti
struct AKillerMasterBP_C_SpawnHitParticlesMulti_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHit;                                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  hit;                                                       // 0x001C(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.CheckStatus
struct AKillerMasterBP_C_CheckStatus_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.FailedChair
struct AKillerMasterBP_C_FailedChair_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ElevatorInteract
struct AKillerMasterBP_C_ElevatorInteract_Params
{
	class AElevator_C*                                 ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SetLevelSystem
struct AKillerMasterBP_C_SetLevelSystem_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DropMulti
struct AKillerMasterBP_C_DropMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnCoins
struct AKillerMasterBP_C_SpawnCoins_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.StunSoundServ
struct AKillerMasterBP_C_StunSoundServ_Params
{
	int                                                KillerType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.StunSoundMulti
struct AKillerMasterBP_C_StunSoundMulti_Params
{
	int                                                KillerType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundServ
struct AKillerMasterBP_C_KillerGrabSoundServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundMulti
struct AKillerMasterBP_C_KillerGrabSoundMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChaserServ
struct AKillerMasterBP_C_ChaserServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChaserMulti
struct AKillerMasterBP_C_ChaserMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.KillerVisible
struct AKillerMasterBP_C_KillerVisible_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChaseLocal
struct AKillerMasterBP_C_ChaseLocal_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.chaseOffSound
struct AKillerMasterBP_C_chaseOffSound_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillerCatchSound
struct AKillerMasterBP_C_KillerCatchSound_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillerLaugh
struct AKillerMasterBP_C_KillerLaugh_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerServ
struct AKillerMasterBP_C_JumpSoundKillerServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerMulti
struct AKillerMasterBP_C_JumpSoundKillerMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AfterJumpServ
struct AKillerMasterBP_C_AfterJumpServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.AfterJumpMulti
struct AKillerMasterBP_C_AfterJumpMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChaseOnSound
struct AKillerMasterBP_C_ChaseOnSound_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.StopChaseOn
struct AKillerMasterBP_C_StopChaseOn_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.StopStopChase
struct AKillerMasterBP_C_StopStopChase_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BlindSound
struct AKillerMasterBP_C_BlindSound_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SurvRunawaySound
struct AKillerMasterBP_C_SurvRunawaySound_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.GraffitiServ
struct AKillerMasterBP_C_GraffitiServ_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.GraffitiMulti
struct AKillerMasterBP_C_GraffitiMulti_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.StunColor
struct AKillerMasterBP_C_StunColor_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillerDetectServ
struct AKillerMasterBP_C_KillerDetectServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillerDetectMulti
struct AKillerMasterBP_C_KillerDetectMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PostProcessEffect
struct AKillerMasterBP_C_PostProcessEffect_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.GetPostProcess
struct AKillerMasterBP_C_GetPostProcess_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BlurEffect
struct AKillerMasterBP_C_BlurEffect_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.DelayOffServ
struct AKillerMasterBP_C_DelayOffServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DelayOffMulti
struct AKillerMasterBP_C_DelayOffMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.TransformationEffect
struct AKillerMasterBP_C_TransformationEffect_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.LocalMeshUpdate
struct AKillerMasterBP_C_LocalMeshUpdate_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.CustomInteractPressed
struct AKillerMasterBP_C_CustomInteractPressed_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.WalkShake
struct AKillerMasterBP_C_WalkShake_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.JumpShake
struct AKillerMasterBP_C_JumpShake_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.CreateChildPPMaterial
struct AKillerMasterBP_C_CreateChildPPMaterial_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ScoreStunServer
struct AKillerMasterBP_C_ScoreStunServer_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ScoreStunMulti
struct AKillerMasterBP_C_ScoreStunMulti_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.MarioStunReset
struct AKillerMasterBP_C_MarioStunReset_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChaseDelayerEvent
struct AKillerMasterBP_C_ChaseDelayerEvent_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.NicknameON
struct AKillerMasterBP_C_NicknameON_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SeekServ
struct AKillerMasterBP_C_SeekServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SeekMulti
struct AKillerMasterBP_C_SeekMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ProgressBarStart
struct AKillerMasterBP_C_ProgressBarStart_Params
{
	float                                              range_max;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.UnstunnedChecker
struct AKillerMasterBP_C_UnstunnedChecker_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvServ
struct AKillerMasterBP_C_StunScoreSurvServ_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvMulti
struct AKillerMasterBP_C_StunScoreSurvMulti_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChaseNotValidLocal
struct AKillerMasterBP_C_ChaseNotValidLocal_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.TracerForParticles
struct AKillerMasterBP_C_TracerForParticles_Params
{
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Loc;                                                       // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     norm;                                                      // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0020(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.ShowKnockDownMessage
struct AKillerMasterBP_C_ShowKnockDownMessage_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CoinDropSoundMulti
struct AKillerMasterBP_C_CoinDropSoundMulti_Params
{
	class ACoinActor_C*                                ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.DecreaseTime
struct AKillerMasterBP_C_DecreaseTime_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.StunCheck
struct AKillerMasterBP_C_StunCheck_Params
{
	class AActor*                                      ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ1
struct AKillerMasterBP_C_ChairChekerServ1_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ2
struct AKillerMasterBP_C_ChairChekerServ2_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ3
struct AKillerMasterBP_C_ChairChekerServ3_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti1
struct AKillerMasterBP_C_ChairChekerMulti1_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti2
struct AKillerMasterBP_C_ChairChekerMulti2_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti3
struct AKillerMasterBP_C_ChairChekerMulti3_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFServ
struct AKillerMasterBP_C_ChairMoveOFFServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFMulti
struct AKillerMasterBP_C_ChairMoveOFFMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1
struct AKillerMasterBP_C_InpAxisEvt_Forward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_2
struct AKillerMasterBP_C_InpAxisEvt_Backward_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Left_K2Node_InputAxisEvent_3
struct AKillerMasterBP_C_InpAxisEvt_Left_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Right_K2Node_InputAxisEvent_4
struct AKillerMasterBP_C_InpAxisEvt_Right_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.IntroWeapon
struct AKillerMasterBP_C_IntroWeapon_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.CD_Widget_Strat
struct AKillerMasterBP_C_CD_Widget_Strat_Params
{
	struct FString                                     AbilityName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvRunAwayMulti
struct AKillerMasterBP_C_SurvRunAwayMulti_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         hellpSurv;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Flashed_;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.PickUp Multi
struct AKillerMasterBP_C_PickUp_Multi_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ToChairMulti
struct AKillerMasterBP_C_ToChairMulti_Params
{
	class AHypnoChairBP_C*                             NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ToChairServ
struct AKillerMasterBP_C_ToChairServ_Params
{
	class AHypnoChairBP_C*                             NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvRunawayServ
struct AKillerMasterBP_C_SurvRunawayServ_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         helpSurv;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Flashed_;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.ReceiveTick
struct AKillerMasterBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CoinsLocal
struct AKillerMasterBP_C_CoinsLocal_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.GraffitiHitServ
struct AKillerMasterBP_C_GraffitiHitServ_Params
{
	struct FVector                                     v3Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v3For;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.GraffitiHitMulti
struct AKillerMasterBP_C_GraffitiHitMulti_Params
{
	struct FVector                                     v3Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     v3For;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.GraffitiHit
struct AKillerMasterBP_C_GraffitiHit_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ServerDoor
struct AKillerMasterBP_C_ServerDoor_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               B;                                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.MulticastDoor
struct AKillerMasterBP_C_MulticastDoor_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               B;                                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.BrokenTimeServ
struct AKillerMasterBP_C_BrokenTimeServ_Params
{
	class ANewAlarmBP_C*                               ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BrokenTimeMulti
struct AKillerMasterBP_C_BrokenTimeMulti_Params
{
	class ANewAlarmBP_C*                               ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ReceiveBeginPlay
struct AKillerMasterBP_C_ReceiveBeginPlay_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.sendServ
struct AKillerMasterBP_C_sendServ_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.HUD_StartJump
struct AKillerMasterBP_C_HUD_StartJump_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.HUD_EndJUmp
struct AKillerMasterBP_C_HUD_EndJUmp_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.Perexod
struct AKillerMasterBP_C_Perexod_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SwitchWeaponVisibility
struct AKillerMasterBP_C_SwitchWeaponVisibility_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.HummerVis
struct AKillerMasterBP_C_HummerVis_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.MulticastGlass
struct AKillerMasterBP_C_MulticastGlass_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ServerGlass
struct AKillerMasterBP_C_ServerGlass_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ExposedSurvs
struct AKillerMasterBP_C_ExposedSurvs_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesLocal
struct AKillerMasterBP_C_SpawnHitParticlesLocal_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHit;                                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  hit;                                                       // 0x001C(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.IdleSoundLocal
struct AKillerMasterBP_C_IdleSoundLocal_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.IdleSoundServ
struct AKillerMasterBP_C_IdleSoundServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.IdleSoundMulti
struct AKillerMasterBP_C_IdleSoundMulti_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.UnstunDelay
struct AKillerMasterBP_C_UnstunDelay_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerLocal
struct AKillerMasterBP_C_JumpSoundKillerLocal_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.CollisionChairChecker
struct AKillerMasterBP_C_CollisionChairChecker_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.ZoomOut
struct AKillerMasterBP_C_ZoomOut_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InteractPressed
struct AKillerMasterBP_C_InteractPressed_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.InteractReleased
struct AKillerMasterBP_C_InteractReleased_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SetKIllerVisibleToSurv
struct AKillerMasterBP_C_SetKIllerVisibleToSurv_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SetKillerNotVisibleToSurv
struct AKillerMasterBP_C_SetKillerNotVisibleToSurv_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.KillerVisibleToAll
struct AKillerMasterBP_C_KillerVisibleToAll_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.KillerVisibleToAll_SERV
struct AKillerMasterBP_C_KillerVisibleToAll_SERV_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BloodLustAddCustom
struct AKillerMasterBP_C_BloodLustAddCustom_Params
{
	bool                                               LastLvl_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Wipe;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.CallAddEXPKiller
struct AKillerMasterBP_C_CallAddEXPKiller_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CallAddEXPKiller_MULTI
struct AKillerMasterBP_C_CallAddEXPKiller_MULTI_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function KillerMasterBP.KillerMasterBP_C.BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
struct AKillerMasterBP_C_BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.BloodhoundPerk
struct AKillerMasterBP_C_BloodhoundPerk_Params
{
	bool                                               LastLvl_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.SurvWiggle
struct AKillerMasterBP_C_SurvWiggle_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.LastSurv
struct AKillerMasterBP_C_LastSurv_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.DuplicatePropServ
struct AKillerMasterBP_C_DuplicatePropServ_Params
{
	class ADuplicatePropActor_C*                       Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.DuplicatePropMulti
struct AKillerMasterBP_C_DuplicatePropMulti_Params
{
	class ADuplicatePropActor_C*                       Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CoinDestroyServ
struct AKillerMasterBP_C_CoinDestroyServ_Params
{
	class ACoinActor_C*                                ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.CoinDestroyMulti
struct AKillerMasterBP_C_CoinDestroyMulti_Params
{
	class ACoinActor_C*                                ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.AddBloodlustLvl
struct AKillerMasterBP_C_AddBloodlustLvl_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BrokeAnimServ
struct AKillerMasterBP_C_BrokeAnimServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.BrokeAnimLocal
struct AKillerMasterBP_C_BrokeAnimLocal_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.BrokeAnimMulti
struct AKillerMasterBP_C_BrokeAnimMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.BrokeAnimLocalReset
struct AKillerMasterBP_C_BrokeAnimLocalReset_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PickUp Serv
struct AKillerMasterBP_C_PickUp_Serv_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.Glue
struct AKillerMasterBP_C_Glue_Params
{
	float                                              B;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.YellowJar
struct AKillerMasterBP_C_YellowJar_Params
{
	float                                              PlaybackSpeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ChaseScore_KIller
struct AKillerMasterBP_C_ChaseScore_KIller_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnStunCOIN_EXP_SERVER
struct AKillerMasterBP_C_SpawnStunCOIN_EXP_SERVER_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnStunCOIN_EXP_Multi
struct AKillerMasterBP_C_SpawnStunCOIN_EXP_Multi_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.SpawnCoins_OnlySurv
struct AKillerMasterBP_C_SpawnCoins_OnlySurv_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ShowKnockedBanner
struct AKillerMasterBP_C_ShowKnockedBanner_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.RuneDestroyServ
struct AKillerMasterBP_C_RuneDestroyServ_Params
{
	class ACrystalRune_C*                              rune;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.RuneDestroyMulti
struct AKillerMasterBP_C_RuneDestroyMulti_Params
{
	class ACrystalRune_C*                              rune;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.StunBySurvivor
struct AKillerMasterBP_C_StunBySurvivor_Params
{
	float                                              StunTime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         helpSurv;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.DropServ
struct AKillerMasterBP_C_DropServ_Params
{
};

// Function KillerMasterBP.KillerMasterBP_C.PickupServerCheck
struct AKillerMasterBP_C_PickupServerCheck_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.PickupLocal
struct AKillerMasterBP_C_PickupLocal_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillerMasterBP.KillerMasterBP_C.KillerVisibleServ
struct AKillerMasterBP_C_KillerVisibleServ_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.KillerVisibleMulti
struct AKillerMasterBP_C_KillerVisibleMulti_Params
{
	class ASurvivorMasterBP_C*                         ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMasterBP.KillerMasterBP_C.ExecuteUbergraph_KillerMasterBP
struct AKillerMasterBP_C_ExecuteUbergraph_KillerMasterBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
