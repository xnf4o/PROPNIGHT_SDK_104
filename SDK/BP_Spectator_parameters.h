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

// Function BP_Spectator.BP_Spectator_C.SetAvatarsToBanner
struct ABP_Spectator_C_SetAvatarsToBanner_Params
{
	class UW_Banner_C*                                 Banner;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.GetNext_IgnoreMeStart
struct ABP_Spectator_C_GetNext_IgnoreMeStart_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillerMasterBP_C*                           Killer;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.GetPrevProphunt
struct ABP_Spectator_C_GetPrevProphunt_Params
{
	class AActor*                                      Ac;                                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.GetNextProphunt
struct ABP_Spectator_C_GetNextProphunt_Params
{
	class APawn*                                       Player;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.GetPrev
struct ABP_Spectator_C_GetPrev_Params
{
	class AActor*                                      Ac;                                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.GetNext
struct ABP_Spectator_C_GetNext_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillerMasterBP_C*                           Killer;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.Timeline_0__FinishedFunc
struct ABP_Spectator_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Spectator.BP_Spectator_C.Timeline_0__UpdateFunc
struct ABP_Spectator_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Spectator.BP_Spectator_C.InpActEvt_Previous Player_K2Node_InputActionEvent_3
struct ABP_Spectator_C_InpActEvt_Previous_Player_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.InpActEvt_Next Player_K2Node_InputActionEvent_2
struct ABP_Spectator_C_InpActEvt_Next_Player_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.InpActEvt_E_K2Node_InputKeyEvent_1
struct ABP_Spectator_C_InpActEvt_E_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C. Pick Up Survivor_K2Node_InputActionEvent_1
struct ABP_Spectator_C__Pick_Up_Survivor_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.ReceiveBeginPlay
struct ABP_Spectator_C_ReceiveBeginPlay_Params
{
};

// Function BP_Spectator.BP_Spectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct ABP_Spectator_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct ABP_Spectator_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.NicknameRotationUpdate
struct ABP_Spectator_C_NicknameRotationUpdate_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ReceiveTick
struct ABP_Spectator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.NextSurvCustomChange
struct ABP_Spectator_C_NextSurvCustomChange_Params
{
};

// Function BP_Spectator.BP_Spectator_C.DetachAndFade
struct ABP_Spectator_C_DetachAndFade_Params
{
};

// Function BP_Spectator.BP_Spectator_C.SwitchSpectator
struct ABP_Spectator_C_SwitchSpectator_Params
{
	bool                                               Spectating_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Spectator.BP_Spectator_C.EndSpectate
struct ABP_Spectator_C_EndSpectate_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ExitColl
struct ABP_Spectator_C_ExitColl_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ReceivePossessed
struct ABP_Spectator_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.InitVoice
struct ABP_Spectator_C_InitVoice_Params
{
};

// Function BP_Spectator.BP_Spectator_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature
struct ABP_Spectator_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature_Params
{
	TArray<unsigned char>                              VoiceData;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              MicLevel;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.ServVoiceProc
struct ABP_Spectator_C_ServVoiceProc_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Spectator.BP_Spectator_C.ReceiveVoice
struct ABP_Spectator_C_ReceiveVoice_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Spectator.BP_Spectator_C.SendVoiceStatusServer
struct ABP_Spectator_C_SendVoiceStatusServer_Params
{
	bool                                               VoiceActive_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Spectator.BP_Spectator_C.ReceiveDestroyed
struct ABP_Spectator_C_ReceiveDestroyed_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ExecuteE
struct ABP_Spectator_C_ExecuteE_Params
{
};

// Function BP_Spectator.BP_Spectator_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
struct ABP_Spectator_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
struct ABP_Spectator_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spectator.BP_Spectator_C.CameraChair
struct ABP_Spectator_C_CameraChair_Params
{
};

// Function BP_Spectator.BP_Spectator_C.SurvOnChairCamera
struct ABP_Spectator_C_SurvOnChairCamera_Params
{
};

// Function BP_Spectator.BP_Spectator_C.GetNameSurvWidget
struct ABP_Spectator_C_GetNameSurvWidget_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ClientDestroySpectatorUI
struct ABP_Spectator_C_ClientDestroySpectatorUI_Params
{
};

// Function BP_Spectator.BP_Spectator_C.SelfHelp_MULTI
struct ABP_Spectator_C_SelfHelp_MULTI_Params
{
};

// Function BP_Spectator.BP_Spectator_C.SelfHelp_SERV
struct ABP_Spectator_C_SelfHelp_SERV_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ProgressBar
struct ABP_Spectator_C_ProgressBar_Params
{
};

// Function BP_Spectator.BP_Spectator_C.StartProgressbar
struct ABP_Spectator_C_StartProgressbar_Params
{
};

// Function BP_Spectator.BP_Spectator_C.CamShake
struct ABP_Spectator_C_CamShake_Params
{
};

// Function BP_Spectator.BP_Spectator_C.ExecuteUbergraph_BP_Spectator
struct ABP_Spectator_C_ExecuteUbergraph_BP_Spectator_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
