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

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetCurrentEXP
struct ASurvivorMasterBP_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetPointsForPerks
struct ASurvivorMasterBP_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SeeKillerSilhouetteNearHC
struct ASurvivorMasterBP_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetPerkName
struct ASurvivorMasterBP_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HeadRotationFunc
struct ASurvivorMasterBP_C_HeadRotationFunc_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StartDialogue
struct ASurvivorMasterBP_C_StartDialogue_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DamageTypeCheck
struct ASurvivorMasterBP_C_DamageTypeCheck_Params
{
	bool                                               Clear_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_PerkActivated
struct ASurvivorMasterBP_C_OnRep_PerkActivated_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PropJumpWall
struct ASurvivorMasterBP_C_PropJumpWall_Params
{
	float                                              Jump;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.get level name
struct ASurvivorMasterBP_C_get_level_name_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Name;                                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckAndSetSkin
struct ASurvivorMasterBP_C_CheckAndSetSkin_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Mesh;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Exp Score Calc
struct ASurvivorMasterBP_C_Exp_Score_Calc_Params
{
	int                                                Points;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<CoinEnum_ECoinEnum>                    CoinType;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Init Max Score
struct ASurvivorMasterBP_C_Init_Max_Score_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CoinAngle
struct ASurvivorMasterBP_C_CoinAngle_Params
{
	bool                                               Server_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              X;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_ProgressUI
struct ASurvivorMasterBP_C_OnRep_ProgressUI_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PassiveSkill
struct ASurvivorMasterBP_C_PassiveSkill_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.WallCheck
struct ASurvivorMasterBP_C_WallCheck_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewParam;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpeedChecker
struct ASurvivorMasterBP_C_SpeedChecker_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DisableInDirect
struct ASurvivorMasterBP_C_DisableInDirect_Params
{
	bool                                               Up;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InteractBoxOverlap
struct ASurvivorMasterBP_C_InteractBoxOverlap_Params
{
	class UClass*                                      ClassFilter;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     NotEqual;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GrapleMovement
struct ASurvivorMasterBP_C_GrapleMovement_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HookShot
struct ASurvivorMasterBP_C_HookShot_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SelectObjectPropMove
struct ASurvivorMasterBP_C_SelectObjectPropMove_Params
{
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangePropCollision
struct ASurvivorMasterBP_C_ChangePropCollision_Params
{
	struct FPropData                                   PropData;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HitImpactSound
struct ASurvivorMasterBP_C_HitImpactSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckActiveActions
struct ASurvivorMasterBP_C_CheckActiveActions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckFullHealthFinal
struct ASurvivorMasterBP_C_CheckFullHealthFinal_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckFullHealth
struct ASurvivorMasterBP_C_CheckFullHealth_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckZeroHealthWithoutCrawl
struct ASurvivorMasterBP_C_CheckZeroHealthWithoutCrawl_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckZeroHealth
struct ASurvivorMasterBP_C_CheckZeroHealth_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckMoved
struct ASurvivorMasterBP_C_CheckMoved_Params
{
	bool                                               PressedAndMoved;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NotPressedAndMoved;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CalculatePersonHealth
struct ASurvivorMasterBP_C_CalculatePersonHealth_Params
{
	int                                                Health;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPropData                                   Data;                                                      // 0x0008(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                NewHealth;                                                 // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CalculatePropHealth
struct ASurvivorMasterBP_C_CalculatePropHealth_Params
{
	int                                                Health;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPropData                                   Data;                                                      // 0x0008(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                NewHealth;                                                 // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ReduceHealth
struct ASurvivorMasterBP_C_ReduceHealth_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HP;                                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_SurvivalHealth
struct ASurvivorMasterBP_C_OnRep_SurvivalHealth_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PropJump
struct ASurvivorMasterBP_C_PropJump_Params
{
	float                                              Jump;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OnRep_CurrentTransform
struct ASurvivorMasterBP_C_OnRep_CurrentTransform_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetItem
struct ASurvivorMasterBP_C_SetItem_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetItemToLastIndex
struct ASurvivorMasterBP_C_SetItemToLastIndex_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpawnItem
struct ASurvivorMasterBP_C_SpawnItem_Params
{
	class UClass*                                      Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.UserConstructionScript
struct ASurvivorMasterBP_C_UserConstructionScript_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.LerpAlphaTimeline__FinishedFunc
struct ASurvivorMasterBP_C_LerpAlphaTimeline__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.LerpAlphaTimeline__UpdateFunc
struct ASurvivorMasterBP_C_LerpAlphaTimeline__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineJump__FinishedFunc
struct ASurvivorMasterBP_C_TimelineJump__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineJump__UpdateFunc
struct ASurvivorMasterBP_C_TimelineJump__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PPColorChange__FinishedFunc
struct ASurvivorMasterBP_C_PPColorChange__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PPColorChange__UpdateFunc
struct ASurvivorMasterBP_C_PPColorChange__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_1__FinishedFunc
struct ASurvivorMasterBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_1__UpdateFunc
struct ASurvivorMasterBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HitTimeline__FinishedFunc
struct ASurvivorMasterBP_C_HitTimeline__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HitTimeline__UpdateFunc
struct ASurvivorMasterBP_C_HitTimeline__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Rope__FinishedFunc
struct ASurvivorMasterBP_C_Rope__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Rope__UpdateFunc
struct ASurvivorMasterBP_C_Rope__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CameraInteract__FinishedFunc
struct ASurvivorMasterBP_C_CameraInteract__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CameraInteract__UpdateFunc
struct ASurvivorMasterBP_C_CameraInteract__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineFOV__FinishedFunc
struct ASurvivorMasterBP_C_TimelineFOV__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TimelineFOV__UpdateFunc
struct ASurvivorMasterBP_C_TimelineFOV__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CapsuleTimeline__FinishedFunc
struct ASurvivorMasterBP_C_CapsuleTimeline__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CapsuleTimeline__UpdateFunc
struct ASurvivorMasterBP_C_CapsuleTimeline__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BlurTimeline__FinishedFunc
struct ASurvivorMasterBP_C_BlurTimeline__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BlurTimeline__UpdateFunc
struct ASurvivorMasterBP_C_BlurTimeline__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_2__FinishedFunc
struct ASurvivorMasterBP_C_Timeline_2__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_2__UpdateFunc
struct ASurvivorMasterBP_C_Timeline_2__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectTimeline__FinishedFunc
struct ASurvivorMasterBP_C_DeathEffectTimeline__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectTimeline__UpdateFunc
struct ASurvivorMasterBP_C_DeathEffectTimeline__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DropItemHold__FinishedFunc
struct ASurvivorMasterBP_C_DropItemHold__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DropItemHold__UpdateFunc
struct ASurvivorMasterBP_C_DropItemHold__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_0__FinishedFunc
struct ASurvivorMasterBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_0__UpdateFunc
struct ASurvivorMasterBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ZoomOutTimeline__FinishedFunc
struct ASurvivorMasterBP_C_ZoomOutTimeline__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ZoomOutTimeline__UpdateFunc
struct ASurvivorMasterBP_C_ZoomOutTimeline__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_3__FinishedFunc
struct ASurvivorMasterBP_C_Timeline_3__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_3__UpdateFunc
struct ASurvivorMasterBP_C_Timeline_3__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_4__FinishedFunc
struct ASurvivorMasterBP_C_Timeline_4__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_4__UpdateFunc
struct ASurvivorMasterBP_C_Timeline_4__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_5__FinishedFunc
struct ASurvivorMasterBP_C_Timeline_5__FinishedFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Timeline_5__UpdateFunc
struct ASurvivorMasterBP_C_Timeline_5__UpdateFunc_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_18
struct ASurvivorMasterBP_C_InpActEvt_Jump_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_17
struct ASurvivorMasterBP_C_InpActEvt_Jump_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpTchEvt_Released
struct ASurvivorMasterBP_C_InpTchEvt_Released_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpTchEvt_Pressed
struct ASurvivorMasterBP_C_InpTchEvt_Pressed_Params
{
	TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Run_K2Node_InputActionEvent_16
struct ASurvivorMasterBP_C_InpActEvt_Run_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Run_K2Node_InputActionEvent_15
struct ASurvivorMasterBP_C_InpActEvt_Run_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_20
struct ASurvivorMasterBP_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_19
struct ASurvivorMasterBP_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_19_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_F5_K2Node_InputKeyEvent_18
struct ASurvivorMasterBP_C_InpActEvt_F5_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_F6_K2Node_InputKeyEvent_17
struct ASurvivorMasterBP_C_InpActEvt_F6_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_F7_K2Node_InputKeyEvent_16
struct ASurvivorMasterBP_C_InpActEvt_F7_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Graffiti_K2Node_InputActionEvent_14
struct ASurvivorMasterBP_C_InpActEvt_Graffiti_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_15
struct ASurvivorMasterBP_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_14
struct ASurvivorMasterBP_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_13
struct ASurvivorMasterBP_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_12
struct ASurvivorMasterBP_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_11
struct ASurvivorMasterBP_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_10
struct ASurvivorMasterBP_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_9
struct ASurvivorMasterBP_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
struct ASurvivorMasterBP_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C. Pick Up_K2Node_InputActionEvent_13
struct ASurvivorMasterBP_C__Pick_Up_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C. Pick Up_K2Node_InputActionEvent_12
struct ASurvivorMasterBP_C__Pick_Up_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Turn Into Prop_K2Node_InputActionEvent_11
struct ASurvivorMasterBP_C_InpActEvt_Turn_Into_Prop_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_(Prop) Turn Into Survivor_K2Node_InputActionEvent_10
struct ASurvivorMasterBP_C_InpActEvt__Prop__Turn_Into_Survivor_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_(Prop) Straighten Up_K2Node_InputActionEvent_9
struct ASurvivorMasterBP_C_InpActEvt__Prop__Straighten_Up_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_(Prop) Straighten Up_K2Node_InputActionEvent_8
struct ASurvivorMasterBP_C_InpActEvt__Prop__Straighten_Up_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Drop Item_K2Node_InputActionEvent_7
struct ASurvivorMasterBP_C_InpActEvt_Drop_Item_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Drop Item_K2Node_InputActionEvent_6
struct ASurvivorMasterBP_C_InpActEvt_Drop_Item_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Voice Commands_K2Node_InputActionEvent_5
struct ASurvivorMasterBP_C_InpActEvt_Voice_Commands_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Voice Commands_K2Node_InputActionEvent_4
struct ASurvivorMasterBP_C_InpActEvt_Voice_Commands_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Divide_K2Node_InputKeyEvent_7
struct ASurvivorMasterBP_C_InpActEvt_Divide_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_6
struct ASurvivorMasterBP_C_InpActEvt_Multiply_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Use Item 1_K2Node_InputActionEvent_3
struct ASurvivorMasterBP_C_InpActEvt_Use_Item_1_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Use Item 2_K2Node_InputActionEvent_2
struct ASurvivorMasterBP_C_InpActEvt_Use_Item_2_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Use Item 3_K2Node_InputActionEvent_1
struct ASurvivorMasterBP_C_InpActEvt_Use_Item_3_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_5
struct ASurvivorMasterBP_C_InpActEvt_Add_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_N_K2Node_InputKeyEvent_4
struct ASurvivorMasterBP_C_InpActEvt_N_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_F8_K2Node_InputKeyEvent_3
struct ASurvivorMasterBP_C_InpActEvt_F8_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_F9_K2Node_InputKeyEvent_2
struct ASurvivorMasterBP_C_InpActEvt_F9_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpActEvt_F10_K2Node_InputKeyEvent_1
struct ASurvivorMasterBP_C_InpActEvt_F10_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AddEXP
struct ASurvivorMasterBP_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetTimingToAllChairs
struct ASurvivorMasterBP_C_SetTimingToAllChairs_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetDepth
struct ASurvivorMasterBP_C_SetDepth_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.LevelUpped
struct ASurvivorMasterBP_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DecreasePerkPoints
struct ASurvivorMasterBP_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AddInteractable
struct ASurvivorMasterBP_C_AddInteractable_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputMapping;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RemoveInteractable
struct ASurvivorMasterBP_C_RemoveInteractable_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Chair Open Stage
struct ASurvivorMasterBP_C_Chair_Open_Stage_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpawnDecal
struct ASurvivorMasterBP_C_SpawnDecal_Params
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

// Function SurvivorMasterBP.SurvivorMasterBP_C.BeginFootprint
struct ASurvivorMasterBP_C_BeginFootprint_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeFootState
struct ASurvivorMasterBP_C_ChangeFootState_Params
{
	TEnumAsByte<EFootState_EFootState>                 New_Style;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetCharacterOwner
struct ASurvivorMasterBP_C_SetCharacterOwner_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerChangeFootwear
struct ASurvivorMasterBP_C_ServerChangeFootwear_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastChangeFootwear
struct ASurvivorMasterBP_C_MulticastChangeFootwear_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetSurvMesh
struct ASurvivorMasterBP_C_GetSurvMesh_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetPropMesh
struct ASurvivorMasterBP_C_GetPropMesh_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct ASurvivorMasterBP_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct ASurvivorMasterBP_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
struct ASurvivorMasterBP_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
struct ASurvivorMasterBP_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MovementSpeed
struct ASurvivorMasterBP_C_MovementSpeed_Params
{
	float                                              MovForward;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetMovementType
struct ASurvivorMasterBP_C_SetMovementType_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveTick
struct ASurvivorMasterBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RotateEvent
struct ASurvivorMasterBP_C_RotateEvent_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Prop
struct ASurvivorMasterBP_C_Prop_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPerson
struct ASurvivorMasterBP_C_ServerPerson_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastPerson
struct ASurvivorMasterBP_C_MulticastPerson_Params
{
	struct FVector                                     Vector;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Temp2Vector;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerProp
struct ASurvivorMasterBP_C_ServerProp_Params
{
	class AActor*                                      HitActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ItemMovementEvent
struct ASurvivorMasterBP_C_ItemMovementEvent_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetVectors
struct ASurvivorMasterBP_C_SetVectors_Params
{
	struct FVector                                     Forward;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Right;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AxisRotator;                                               // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastProp
struct ASurvivorMasterBP_C_MulticastProp_Params
{
	class AActor*                                      HitActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveBeginPlay
struct ASurvivorMasterBP_C_ReceiveBeginPlay_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HittedMulticast
struct ASurvivorMasterBP_C_HittedMulticast_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TrueDamage;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        DamageType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Moved_;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Invulnerability_;                                          // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test1
struct ASurvivorMasterBP_C_test1_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test1multi
struct ASurvivorMasterBP_C_test1multi_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetMoveFloat
struct ASurvivorMasterBP_C_SetMoveFloat_Params
{
	float                                              RightLeft;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathServer
struct ASurvivorMasterBP_C_DeathServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathMulticast
struct ASurvivorMasterBP_C_DeathMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetOutServer
struct ASurvivorMasterBP_C_GetOutServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ItemSlotUpdate
struct ASurvivorMasterBP_C_ItemSlotUpdate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ItemSwitch
struct ASurvivorMasterBP_C_ItemSwitch_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvAbility
struct ASurvivorMasterBP_C_SurvAbility_Params
{
	struct FString                                     In;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StartGrapple
struct ASurvivorMasterBP_C_StartGrapple_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StopGrapple
struct ASurvivorMasterBP_C_StopGrapple_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServExittedDoor
struct ASurvivorMasterBP_C_ServExittedDoor_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DropSurvivor
struct ASurvivorMasterBP_C_DropSurvivor_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PickUpSurvivor
struct ASurvivorMasterBP_C_PickUpSurvivor_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ASurvivorMasterBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ASurvivorMasterBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ASurvivorMasterBP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ASurvivorMasterBP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckUpdateInteractable
struct ASurvivorMasterBP_C_CheckUpdateInteractable_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CalculateFlashlightUpdate
struct ASurvivorMasterBP_C_CalculateFlashlightUpdate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RotateInteractable
struct ASurvivorMasterBP_C_RotateInteractable_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChairBreakFreeInteractable
struct ASurvivorMasterBP_C_ChairBreakFreeInteractable_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerMovementType
struct ASurvivorMasterBP_C_ServerMovementType_Params
{
	TEnumAsByte<MovementTypeEnum_EMovementTypeEnum>    Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastMovementType
struct ASurvivorMasterBP_C_MulticastMovementType_Params
{
	TEnumAsByte<MovementTypeEnum_EMovementTypeEnum>    Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckPressedAndMoved
struct ASurvivorMasterBP_C_CheckPressedAndMoved_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StaminaDecrease
struct ASurvivorMasterBP_C_StaminaDecrease_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StaminaIncrease
struct ASurvivorMasterBP_C_StaminaIncrease_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.VelocityCheck
struct ASurvivorMasterBP_C_VelocityCheck_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
struct ASurvivorMasterBP_C_BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerSpeedChange
struct ASurvivorMasterBP_C_ServerSpeedChange_Params
{
	float                                              MaxWalkSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CrawlMovementType
struct ASurvivorMasterBP_C_CrawlMovementType_Params
{
	TEnumAsByte<MovementTypeEnum_EMovementTypeEnum>    Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveAnyDamage
struct ASurvivorMasterBP_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PropOutlineEffect
struct ASurvivorMasterBP_C_PropOutlineEffect_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PutOnChair
struct ASurvivorMasterBP_C_PutOnChair_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvCustomDepthOff
struct ASurvivorMasterBP_C_SurvCustomDepthOff_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AmbientAndChasingOff
struct ASurvivorMasterBP_C_AmbientAndChasingOff_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TPP
struct ASurvivorMasterBP_C_TPP_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.FPP
struct ASurvivorMasterBP_C_FPP_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeControllerRotationMulticast
struct ASurvivorMasterBP_C_ChangeControllerRotationMulticast_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeControllerRotationServer
struct ASurvivorMasterBP_C_ChangeControllerRotationServer_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeMeshLocalVisibility
struct ASurvivorMasterBP_C_ChangeMeshLocalVisibility_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Prop_;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckFPP
struct ASurvivorMasterBP_C_CheckFPP_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PropCheckMesh
struct ASurvivorMasterBP_C_PropCheckMesh_Params
{
	bool                                               FPPMesh;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TPPMesh;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CustomChangeMesh;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.KillerAstral
struct ASurvivorMasterBP_C_KillerAstral_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EndJumpCheck
struct ASurvivorMasterBP_C_EndJumpCheck_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.KillerMarkServer
struct ASurvivorMasterBP_C_KillerMarkServer_Params
{
	struct FVector                                     KillerLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.KillerMarkMulticast
struct ASurvivorMasterBP_C_KillerMarkMulticast_Params
{
	struct FVector                                     KillerLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StopAllActions
struct ASurvivorMasterBP_C_StopAllActions_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StopHealAlly
struct ASurvivorMasterBP_C_StopHealAlly_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StopHealSelf
struct ASurvivorMasterBP_C_StopHealSelf_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeMaterial
struct ASurvivorMasterBP_C_ChangeMaterial_Params
{
	bool                                               Moved_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Endurance_;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test2
struct ASurvivorMasterBP_C_test2_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeClient
struct ASurvivorMasterBP_C_EscapeClient_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPropSound
struct ASurvivorMasterBP_C_ServerPropSound_Params
{
	float                                              ImpulseThreshold;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastPropSound
struct ASurvivorMasterBP_C_MulticastPropSound_Params
{
	float                                              ImpulseThreshold;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvImpactSound
struct ASurvivorMasterBP_C_SurvImpactSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RotationHeadServer
struct ASurvivorMasterBP_C_RotationHeadServer_Params
{
	struct FRotator                                    HeadRotation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PPColorChangeEvent
struct ASurvivorMasterBP_C_PPColorChangeEvent_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckMoveServer
struct ASurvivorMasterBP_C_CheckMoveServer_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test123
struct ASurvivorMasterBP_C_test123_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test12314
struct ASurvivorMasterBP_C_test12314_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckDamageType
struct ASurvivorMasterBP_C_CheckDamageType_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SendServerDamageType
struct ASurvivorMasterBP_C_SendServerDamageType_Params
{
	float                                              BaseDamage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DamageTypeClass;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.testdamage
struct ASurvivorMasterBP_C_testdamage_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PeriodicDamageStart
struct ASurvivorMasterBP_C_PeriodicDamageStart_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PeriodicDamageStop
struct ASurvivorMasterBP_C_PeriodicDamageStop_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutStart
struct ASurvivorMasterBP_C_PullOutStart_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutStop
struct ASurvivorMasterBP_C_PullOutStop_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutFinishServer
struct ASurvivorMasterBP_C_PullOutFinishServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutFinishMulticast
struct ASurvivorMasterBP_C_PullOutFinishMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RotationHeadMulticast
struct ASurvivorMasterBP_C_RotationHeadMulticast_Params
{
	struct FRotator                                    HeadRotation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SendSurvPosition
struct ASurvivorMasterBP_C_SendSurvPosition_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GrannyAstral
struct ASurvivorMasterBP_C_GrannyAstral_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test3333
struct ASurvivorMasterBP_C_test3333_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.3333
struct ASurvivorMasterBP_C__3333_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GrannyAstralHideItems
struct ASurvivorMasterBP_C_GrannyAstralHideItems_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GrannyAstralChangeSurvCollision
struct ASurvivorMasterBP_C_GrannyAstralChangeSurvCollision_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SendRotateServer
struct ASurvivorMasterBP_C_SendRotateServer_Params
{
	bool                                               StartRotateProp_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotateProp;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SendRotateMulticast
struct ASurvivorMasterBP_C_SendRotateMulticast_Params
{
	bool                                               StartRotateProp_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotateProp;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test777
struct ASurvivorMasterBP_C_test777_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.test888
struct ASurvivorMasterBP_C_test888_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BreakFreeFullServer
struct ASurvivorMasterBP_C_BreakFreeFullServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BreakFreeFullMulticast
struct ASurvivorMasterBP_C_BreakFreeFullMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GrappleFailed
struct ASurvivorMasterBP_C_GrappleFailed_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.LocalProp
struct ASurvivorMasterBP_C_LocalProp_Params
{
	class AActor*                                      InputPin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.LocalPerson
struct ASurvivorMasterBP_C_LocalPerson_Params
{
	struct FVector                                     Temp2Vector;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StopInteraction
struct ASurvivorMasterBP_C_StopInteraction_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CameraHitAction
struct ASurvivorMasterBP_C_CameraHitAction_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Nickname
struct ASurvivorMasterBP_C_Nickname_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameOff
struct ASurvivorMasterBP_C_NicknameOff_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CharacterCustomDepth
struct ASurvivorMasterBP_C_CharacterCustomDepth_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectEvent
struct ASurvivorMasterBP_C_DeathEffectEvent_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameRotate
struct ASurvivorMasterBP_C_NicknameRotate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPropStart
struct ASurvivorMasterBP_C_ServerPropStart_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPersonStart
struct ASurvivorMasterBP_C_ServerPersonStart_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OtherSurvOutline
struct ASurvivorMasterBP_C_OtherSurvOutline_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OtherSurvOutlineUpdate
struct ASurvivorMasterBP_C_OtherSurvOutlineUpdate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SmoothSyncToggle
struct ASurvivorMasterBP_C_SmoothSyncToggle_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetDefaultMaterial
struct ASurvivorMasterBP_C_GetDefaultMaterial_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SendScore
struct ASurvivorMasterBP_C_SendScore_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ReceivePossessed
struct ASurvivorMasterBP_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InitVoice
struct ASurvivorMasterBP_C_InitVoice_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature
struct ASurvivorMasterBP_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature_Params
{
	TArray<unsigned char>                              VoiceData;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              MicLevel;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServVoiceProc
struct ASurvivorMasterBP_C_ServVoiceProc_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ReceiveVoice
struct ASurvivorMasterBP_C_ReceiveVoice_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SendVoiceStatusServer
struct ASurvivorMasterBP_C_SendVoiceStatusServer_Params
{
	bool                                               VoiceActive_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpawnItemCustom
struct ASurvivorMasterBP_C_SpawnItemCustom_Params
{
	class UClass*                                      Rare;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckBoost
struct ASurvivorMasterBP_C_CheckBoost_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckInvulnerability
struct ASurvivorMasterBP_C_CheckInvulnerability_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckInvis
struct ASurvivorMasterBP_C_CheckInvis_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundIn
struct ASurvivorMasterBP_C_AstralSoundIn_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundLoop
struct ASurvivorMasterBP_C_AstralSoundLoop_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundOut
struct ASurvivorMasterBP_C_AstralSoundOut_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInServ
struct ASurvivorMasterBP_C_AstralSoundInServ_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInMulti
struct ASurvivorMasterBP_C_AstralSoundInMulti_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInvisibiltyServ
struct ASurvivorMasterBP_C_AstralSoundInvisibiltyServ_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundInvisibilityMulti
struct ASurvivorMasterBP_C_AstralSoundInvisibilityMulti_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundOutServ
struct ASurvivorMasterBP_C_AstralSoundOutServ_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AstralSoundOutMulti
struct ASurvivorMasterBP_C_AstralSoundOutMulti_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DecreasePointsServer
struct ASurvivorMasterBP_C_DecreasePointsServer_Params
{
	int                                                PlayerScore;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ScoreText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DecreasePointsMulticast
struct ASurvivorMasterBP_C_DecreasePointsMulticast_Params
{
	int                                                PlayerScore;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ScoreText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Sensitivy
struct ASurvivorMasterBP_C_Sensitivy_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StartGameCamera
struct ASurvivorMasterBP_C_StartGameCamera_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.Smooth
struct ASurvivorMasterBP_C_Smooth_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameVisible
struct ASurvivorMasterBP_C_NicknameVisible_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckItem
struct ASurvivorMasterBP_C_CheckItem_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RopeTrick
struct ASurvivorMasterBP_C_RopeTrick_Params
{
	struct FVector                                     Target;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvClassSpawnItem
struct ASurvivorMasterBP_C_SurvClassSpawnItem_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BFPServ
struct ASurvivorMasterBP_C_BFPServ_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BFPMulti
struct ASurvivorMasterBP_C_BFPMulti_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.KillerTypeCheck
struct ASurvivorMasterBP_C_KillerTypeCheck_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SmoothTick
struct ASurvivorMasterBP_C_SmoothTick_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckMovementSpeed
struct ASurvivorMasterBP_C_CheckMovementSpeed_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TurnOffIndirect
struct ASurvivorMasterBP_C_TurnOffIndirect_Params
{
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bias;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TakeItem
struct ASurvivorMasterBP_C_TakeItem_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EndGameFreeze
struct ASurvivorMasterBP_C_EndGameFreeze_Params
{
	bool                                               exit_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutAnimServer
struct ASurvivorMasterBP_C_PullOutAnimServer_Params
{
	bool                                               StopBleedingOn_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PullOutAnimMulticast
struct ASurvivorMasterBP_C_PullOutAnimMulticast_Params
{
	bool                                               StopBleedingOn_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameLerp
struct ASurvivorMasterBP_C_NicknameLerp_Params
{
	struct FVector                                     A;                                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetLevelSystem
struct ASurvivorMasterBP_C_SetLevelSystem_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PhysicsTick
struct ASurvivorMasterBP_C_PhysicsTick_Params
{
	float                                              SubstepDeltaTime;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerPropJump
struct ASurvivorMasterBP_C_ServerPropJump_Params
{
	float                                              JumpAlpha;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Wall_;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastPropJump
struct ASurvivorMasterBP_C_MulticastPropJump_Params
{
	float                                              JumpAlpha;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Wall_;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PropJumpSound
struct ASurvivorMasterBP_C_PropJumpSound_Params
{
	float                                              JumpAlpha;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Wall_;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.NicknameProp
struct ASurvivorMasterBP_C_NicknameProp_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvOnChairCamera
struct ASurvivorMasterBP_C_SurvOnChairCamera_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpottedSurv
struct ASurvivorMasterBP_C_SpottedSurv_Params
{
	bool                                               SurvMesh;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PropMesh;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PassiveServ
struct ASurvivorMasterBP_C_PassiveServ_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PassiveMulti
struct ASurvivorMasterBP_C_PassiveMulti_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StartGameFPPCamera
struct ASurvivorMasterBP_C_StartGameFPPCamera_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OtherSurvsPP
struct ASurvivorMasterBP_C_OtherSurvsPP_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckSpottedAndChangeFOV
struct ASurvivorMasterBP_C_CheckSpottedAndChangeFOV_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AlarmsVisible
struct ASurvivorMasterBP_C_AlarmsVisible_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.K2_OnStartCrouch
struct ASurvivorMasterBP_C_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeCrouchCapsuleHalfHeight
struct ASurvivorMasterBP_C_ChangeCrouchCapsuleHalfHeight_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckAirTime
struct ASurvivorMasterBP_C_CheckAirTime_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerJumpEndSound
struct ASurvivorMasterBP_C_ServerJumpEndSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastJumpEndSound
struct ASurvivorMasterBP_C_MulticastJumpEndSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerJump
struct ASurvivorMasterBP_C_ServerJump_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MulticastJump
struct ASurvivorMasterBP_C_MulticastJump_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvMovementVoices
struct ASurvivorMasterBP_C_SurvMovementVoices_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvMistakeVoice
struct ASurvivorMasterBP_C_SurvMistakeVoice_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvMovementVoicesUpdate
struct ASurvivorMasterBP_C_SurvMovementVoicesUpdate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvGrabVoice
struct ASurvivorMasterBP_C_SurvGrabVoice_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvEscapedVoice
struct ASurvivorMasterBP_C_SurvEscapedVoice_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GraffityServ
struct ASurvivorMasterBP_C_GraffityServ_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GraffityMulti
struct ASurvivorMasterBP_C_GraffityMulti_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward;                                                   // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChangeCamera
struct ASurvivorMasterBP_C_ChangeCamera_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.MaterialsDefault
struct ASurvivorMasterBP_C_MaterialsDefault_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BlurUpdate
struct ASurvivorMasterBP_C_BlurUpdate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TransformationEffect
struct ASurvivorMasterBP_C_TransformationEffect_Params
{
	bool                                               EnergyDrink_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetPostProcess
struct ASurvivorMasterBP_C_GetPostProcess_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.LocalMeshUpdate
struct ASurvivorMasterBP_C_LocalMeshUpdate_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PointsTick
struct ASurvivorMasterBP_C_PointsTick_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.UpdateSpectatorVariables
struct ASurvivorMasterBP_C_UpdateSpectatorVariables_Params
{
	float                                              ProgressUISpectator;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxProgressUISpectator;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.WalkShake
struct ASurvivorMasterBP_C_WalkShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.JumpShake
struct ASurvivorMasterBP_C_JumpShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TutorialExitCam
struct ASurvivorMasterBP_C_TutorialExitCam_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      NewViewTarget;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HideLobby
struct ASurvivorMasterBP_C_HideLobby_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerRaiseLobby
struct ASurvivorMasterBP_C_ServerRaiseLobby_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HitAndRun
struct ASurvivorMasterBP_C_HitAndRun_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RunCheck
struct ASurvivorMasterBP_C_RunCheck_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RunCheck1
struct ASurvivorMasterBP_C_RunCheck1_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RunCheckReset
struct ASurvivorMasterBP_C_RunCheckReset_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PCProp
struct ASurvivorMasterBP_C_PCProp_Params
{
	class AActor*                                      Pin;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathCameraEffect
struct ASurvivorMasterBP_C_DeathCameraEffect_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OffOutlineProp
struct ASurvivorMasterBP_C_OffOutlineProp_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DeathEffectPropEvent
struct ASurvivorMasterBP_C_DeathEffectPropEvent_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StunShake
struct ASurvivorMasterBP_C_StunShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TutorialUnfreeze
struct ASurvivorMasterBP_C_TutorialUnfreeze_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PingEvent
struct ASurvivorMasterBP_C_PingEvent_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TeleportServer
struct ASurvivorMasterBP_C_TeleportServer_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TeleportMulti
struct ASurvivorMasterBP_C_TeleportMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DecreaseTime
struct ASurvivorMasterBP_C_DecreaseTime_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OffOrient
struct ASurvivorMasterBP_C_OffOrient_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.FailedPostProcess
struct ASurvivorMasterBP_C_FailedPostProcess_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Left_K2Node_InputAxisEvent_2
struct ASurvivorMasterBP_C_InpAxisEvt_Left_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Right_K2Node_InputAxisEvent_3
struct ASurvivorMasterBP_C_InpAxisEvt_Right_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_4
struct ASurvivorMasterBP_C_InpAxisEvt_Forward_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_5
struct ASurvivorMasterBP_C_InpAxisEvt_Backward_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TestBlockChair
struct ASurvivorMasterBP_C_TestBlockChair_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.asdasdasd
struct ASurvivorMasterBP_C_asdasdasd_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BlockChairTick
struct ASurvivorMasterBP_C_BlockChairTick_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.UnblockChair
struct ASurvivorMasterBP_C_UnblockChair_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BlockSkillCheck
struct ASurvivorMasterBP_C_BlockSkillCheck_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PingShake
struct ASurvivorMasterBP_C_PingShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RushSwitcher
struct ASurvivorMasterBP_C_RushSwitcher_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpecialSwitcher
struct ASurvivorMasterBP_C_SpecialSwitcher_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CursedPropChallengeSwitcher
struct ASurvivorMasterBP_C_CursedPropChallengeSwitcher_Params
{
	bool                                               Start_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABasePropBP_C*                               CursedProp;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CursedPropChallengeTick
struct ASurvivorMasterBP_C_CursedPropChallengeTick_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EndChallenge
struct ASurvivorMasterBP_C_EndChallenge_Params
{
	class ABasePropBP_C*                               CursedProp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ChaseShake
struct ASurvivorMasterBP_C_ChaseShake_Params
{
	float                                              Float;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.RunSpectatorOnChair
struct ASurvivorMasterBP_C_RunSpectatorOnChair_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.WallJumpParticleServer
struct ASurvivorMasterBP_C_WallJumpParticleServer_Params
{
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.WallJumpParticleMulticast
struct ASurvivorMasterBP_C_WallJumpParticleMulticast_Params
{
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InvulnerabilityMulticastSound
struct ASurvivorMasterBP_C_InvulnerabilityMulticastSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CoinSpawnerSupport
struct ASurvivorMasterBP_C_CoinSpawnerSupport_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.BleedingTextLocal
struct ASurvivorMasterBP_C_BleedingTextLocal_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.FartSpawnCoin
struct ASurvivorMasterBP_C_FartSpawnCoin_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvRolePP
struct ASurvivorMasterBP_C_SurvRolePP_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SupportHeal
struct ASurvivorMasterBP_C_SupportHeal_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HelpSoundServer
struct ASurvivorMasterBP_C_HelpSoundServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HelpSoundMulticast
struct ASurvivorMasterBP_C_HelpSoundMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HelpSound
struct ASurvivorMasterBP_C_HelpSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.InteractableDoorButton
struct ASurvivorMasterBP_C_InteractableDoorButton_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HUD_StartJump
struct ASurvivorMasterBP_C_HUD_StartJump_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HUD_EndJUmp
struct ASurvivorMasterBP_C_HUD_EndJUmp_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.FindAllDoors
struct ASurvivorMasterBP_C_FindAllDoors_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.DetectDoor
struct ASurvivorMasterBP_C_DetectDoor_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OffATPC
struct ASurvivorMasterBP_C_OffATPC_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ClientCalculateDamageDirection
struct ASurvivorMasterBP_C_ClientCalculateDamageDirection_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ServerCalculateDamageDirection
struct ASurvivorMasterBP_C_ServerCalculateDamageDirection_Params
{
	class AActor*                                      InstigatedBy;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeLoopEvent
struct ASurvivorMasterBP_C_EscapeLoopEvent_Params
{
	float                                              TPS;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeLoopEventServ
struct ASurvivorMasterBP_C_EscapeLoopEventServ_Params
{
	float                                              TPS;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.EscapeLoopEventMulti
struct ASurvivorMasterBP_C_EscapeLoopEventMulti_Params
{
	float                                              TPS;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AlarmShake
struct ASurvivorMasterBP_C_AlarmShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SpottedShake
struct ASurvivorMasterBP_C_SpottedShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HealSound
struct ASurvivorMasterBP_C_HealSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HealSoundServer
struct ASurvivorMasterBP_C_HealSoundServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HealSoundMulticast
struct ASurvivorMasterBP_C_HealSoundMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HelloSound
struct ASurvivorMasterBP_C_HelloSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HelloSoundServer
struct ASurvivorMasterBP_C_HelloSoundServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.HelloSoundMulticast
struct ASurvivorMasterBP_C_HelloSoundMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ThanksSound
struct ASurvivorMasterBP_C_ThanksSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ThanksSoundServer
struct ASurvivorMasterBP_C_ThanksSoundServer_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ThanksSoundMulticast
struct ASurvivorMasterBP_C_ThanksSoundMulticast_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ZoomOut
struct ASurvivorMasterBP_C_ZoomOut_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.PickUpItemShake
struct ASurvivorMasterBP_C_PickUpItemShake_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkinIDLocal
struct ASurvivorMasterBP_C_SetSkinIDLocal_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkinIDServ
struct ASurvivorMasterBP_C_SetSkinIDServ_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkinIDMulti
struct ASurvivorMasterBP_C_SetSkinIDMulti_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StartGameLootBox
struct ASurvivorMasterBP_C_StartGameLootBox_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CheckChairPlayers
struct ASurvivorMasterBP_C_CheckChairPlayers_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShowKnockDownMessage
struct ASurvivorMasterBP_C_ShowKnockDownMessage_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShowDeathNotification_Server
struct ASurvivorMasterBP_C_ShowDeathNotification_Server_Params
{
	class APS_PropHunt_C*                              SurvState;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShowDeathNotification_All
struct ASurvivorMasterBP_C_ShowDeathNotification_All_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SkinRedHead
struct ASurvivorMasterBP_C_SkinRedHead_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AddLVL
struct ASurvivorMasterBP_C_AddLVL_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ExpAdd
struct ASurvivorMasterBP_C_ExpAdd_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ActivatePerk
struct ASurvivorMasterBP_C_ActivatePerk_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.IncreaseOnceHP
struct ASurvivorMasterBP_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SlowOrPauseTimer
struct ASurvivorMasterBP_C_SlowOrPauseTimer_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetVisibleAll
struct ASurvivorMasterBP_C_SetVisibleAll_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetToAllVisible_SERV
struct ASurvivorMasterBP_C_SetToAllVisible_SERV_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetToAllVisible_MULTI
struct ASurvivorMasterBP_C_SetToAllVisible_MULTI_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CallAddEXPSurv
struct ASurvivorMasterBP_C_CallAddEXPSurv_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.CallAddEXPSurv_MULTI
struct ASurvivorMasterBP_C_CallAddEXPSurv_MULTI_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvDropItem
struct ASurvivorMasterBP_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SavedByNotifyMulticast
struct ASurvivorMasterBP_C_SavedByNotifyMulticast_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Victim;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TestServ
struct ASurvivorMasterBP_C_TestServ_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.TestMulti
struct ASurvivorMasterBP_C_TestMulti_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShiftSoundServ
struct ASurvivorMasterBP_C_ShiftSoundServ_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShiftSoundMulti
struct ASurvivorMasterBP_C_ShiftSoundMulti_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShiftSound
struct ASurvivorMasterBP_C_ShiftSound_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetVectorsServ
struct ASurvivorMasterBP_C_SetVectorsServ_Params
{
	struct FVector                                     Forward;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Right;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AxisRotator;                                               // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetVectorsMulti
struct ASurvivorMasterBP_C_SetVectorsMulti_Params
{
	struct FVector                                     Forward;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Right;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AxisRotator;                                               // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StaminaServ
struct ASurvivorMasterBP_C_StaminaServ_Params
{
	bool                                               StaminaActive_;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.StaminaMulti
struct ASurvivorMasterBP_C_StaminaMulti_Params
{
	bool                                               StaminaActive_;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkin_SERV
struct ASurvivorMasterBP_C_SetSkin_SERV_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SetSkin_MULTI
struct ASurvivorMasterBP_C_SetSkin_MULTI_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.AfterHit
struct ASurvivorMasterBP_C_AfterHit_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.SurvCoinsDrop
struct ASurvivorMasterBP_C_SurvCoinsDrop_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.GetCalculateForCHASE
struct ASurvivorMasterBP_C_GetCalculateForCHASE_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShowKnockedDownBanner
struct ASurvivorMasterBP_C_ShowKnockedDownBanner_Params
{
	class ASurvivorMasterBP_C*                         SurvMasterBP;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ShowHelpBanner
struct ASurvivorMasterBP_C_ShowHelpBanner_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay;                                                     // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APS_PropHunt_C*                              PS;                                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.OpeningLootBox
struct ASurvivorMasterBP_C_OpeningLootBox_Params
{
	class ALootBox_C*                                  lootbox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.lootbox
struct ASurvivorMasterBP_C_lootbox_Params
{
	class ALootBox_C*                                  lootbox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.deathvoice
struct ASurvivorMasterBP_C_deathvoice_Params
{
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ExecuteUbergraph_SurvivorMasterBP
struct ASurvivorMasterBP_C_ExecuteUbergraph_SurvivorMasterBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorMasterBP.SurvivorMasterBP_C.ED_MovementType__DelegateSignature
struct ASurvivorMasterBP_C_ED_MovementType__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
