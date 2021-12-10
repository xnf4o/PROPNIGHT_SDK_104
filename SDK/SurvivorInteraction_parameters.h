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

// Function SurvivorInteraction.SurvivorInteraction_C.SpawnDecal
struct USurvivorInteraction_C_SpawnDecal_Params
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

// Function SurvivorInteraction.SurvivorInteraction_C.ChangeFootState
struct USurvivorInteraction_C_ChangeFootState_Params
{
	TEnumAsByte<EFootState_EFootState>                 New_Style;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.SendSkillCheck
struct USurvivorInteraction_C_SendSkillCheck_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.SendFailed
struct USurvivorInteraction_C_SendFailed_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.SendSuccess
struct USurvivorInteraction_C_SendSuccess_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.SendGreat
struct USurvivorInteraction_C_SendGreat_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReceiveTick
struct USurvivorInteraction_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Cast
struct USurvivorInteraction_C_Cast_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyServerStart
struct USurvivorInteraction_C_ReanimateAllyServerStart_Params
{
	class ASurvivorMasterBP_C*                         CrawlPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyMulticastStart
struct USurvivorInteraction_C_ReanimateAllyMulticastStart_Params
{
	class ASurvivorMasterBP_C*                         CrawlPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyFullProgressMulticast
struct USurvivorInteraction_C_ReanimateAllyFullProgressMulticast_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.Uncast
struct USurvivorInteraction_C_Uncast_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyServerStop
struct USurvivorInteraction_C_ReanimateAllyServerStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyMulticastStop
struct USurvivorInteraction_C_ReanimateAllyMulticastStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateSelfFullProgressMulticast
struct USurvivorInteraction_C_ReanimateSelfFullProgressMulticast_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateSelfFullProgressServer
struct USurvivorInteraction_C_ReanimateSelfFullProgressServer_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmServerStart
struct USurvivorInteraction_C_ReloadingAlarmServerStart_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmMulticastStart
struct USurvivorInteraction_C_ReloadingAlarmMulticastStart_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.OnInvokeWithF
struct USurvivorInteraction_C_OnInvokeWithF_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.OnUninvokeWithF
struct USurvivorInteraction_C_OnUninvokeWithF_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmServerStop
struct USurvivorInteraction_C_ReloadingAlarmServerStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReloadingAlarmMulticastStop
struct USurvivorInteraction_C_ReloadingAlarmMulticastStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorServerFinish
struct USurvivorInteraction_C_HelpOnChairSurvivorServerFinish_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorMulticastFinish
struct USurvivorInteraction_C_HelpOnChairSurvivorMulticastFinish_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorServerStart
struct USurvivorInteraction_C_HelpOnChairSurvivorServerStart_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorMulticastStart
struct USurvivorInteraction_C_HelpOnChairSurvivorMulticastStart_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorServerStop
struct USurvivorInteraction_C_HelpOnChairSurvivorServerStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpOnChairSurvivorMulticastStop
struct USurvivorInteraction_C_HelpOnChairSurvivorMulticastStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.SkillCheckMain
struct USurvivorInteraction_C_SkillCheckMain_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.SelfGetOutChairServer
struct USurvivorInteraction_C_SelfGetOutChairServer_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.SelfGetOutChairMulticast
struct USurvivorInteraction_C_SelfGetOutChairMulticast_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.OpenExitServerStart
struct USurvivorInteraction_C_OpenExitServerStart_Params
{
	class AExit_C*                                     Exit;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.OpenExitMulticastStart
struct USurvivorInteraction_C_OpenExitMulticastStart_Params
{
	class AExit_C*                                     Exit;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.OpenExitServerStop
struct USurvivorInteraction_C_OpenExitServerStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.OpenExitMulticastStop
struct USurvivorInteraction_C_OpenExitMulticastStop_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.FailedGetOutServer
struct USurvivorInteraction_C_FailedGetOutServer_Params
{
	class AHypnoChairBP_C*                             Input;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.CheckActiveSkillCheck
struct USurvivorInteraction_C_CheckActiveSkillCheck_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ReanimateAllyFullProgressServer
struct USurvivorInteraction_C_ReanimateAllyFullProgressServer_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.FailedServer
struct USurvivorInteraction_C_FailedServer_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.GreatServer
struct USurvivorInteraction_C_GreatServer_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.FailedMulticast
struct USurvivorInteraction_C_FailedMulticast_Params
{
	class ANewAlarmBP_C*                               Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.GreatMulticast
struct USurvivorInteraction_C_GreatMulticast_Params
{
	class ANewAlarmBP_C*                               Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.PassedServer
struct USurvivorInteraction_C_PassedServer_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.PassedMulticast
struct USurvivorInteraction_C_PassedMulticast_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.CheckPressed
struct USurvivorInteraction_C_CheckPressed_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.CheckSurvPosition
struct USurvivorInteraction_C_CheckSurvPosition_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level1Server
struct USurvivorInteraction_C_Level1Server_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level1Multicast
struct USurvivorInteraction_C_Level1Multicast_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level2Server
struct USurvivorInteraction_C_Level2Server_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level2Multicast
struct USurvivorInteraction_C_Level2Multicast_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level3Server
struct USurvivorInteraction_C_Level3Server_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level3Multicast
struct USurvivorInteraction_C_Level3Multicast_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level4Server
struct USurvivorInteraction_C_Level4Server_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Level4Multicast
struct USurvivorInteraction_C_Level4Multicast_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.TakeCoinServer
struct USurvivorInteraction_C_TakeCoinServer_Params
{
	class ACoinActor_C*                                Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.TakeCoinMulticast
struct USurvivorInteraction_C_TakeCoinMulticast_Params
{
	class ACoinActor_C*                                Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.Chair Open Stage
struct USurvivorInteraction_C_Chair_Open_Stage_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ServerRandomSelfGetOut
struct USurvivorInteraction_C_ServerRandomSelfGetOut_Params
{
	bool                                               RandomSelfGetOut_;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorInteraction.SurvivorInteraction_C.MulticastRandomSelfGetOut
struct USurvivorInteraction_C_MulticastRandomSelfGetOut_Params
{
	bool                                               RandomSelfGetOut_;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorInteraction.SurvivorInteraction_C.FailedGetOutMulticast
struct USurvivorInteraction_C_FailedGetOutMulticast_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.SelfReanimateSendProgress
struct USurvivorInteraction_C_SelfReanimateSendProgress_Params
{
	float                                              SelfReanimateReplicated;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.OnChairSkillCheck
struct USurvivorInteraction_C_OnChairSkillCheck_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.CrawlPlayerRotation
struct USurvivorInteraction_C_CrawlPlayerRotation_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.DecreaseSkillCheckTime
struct USurvivorInteraction_C_DecreaseSkillCheckTime_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ServerOnChairPing
struct USurvivorInteraction_C_ServerOnChairPing_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.MulticastOnChairPing
struct USurvivorInteraction_C_MulticastOnChairPing_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ShowSavedMessageServer
struct USurvivorInteraction_C_ShowSavedMessageServer_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.ShowSavedMessageClient
struct USurvivorInteraction_C_ShowSavedMessageClient_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.OnInvokeWithQ
struct USurvivorInteraction_C_OnInvokeWithQ_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.CloseDoorServer
struct USurvivorInteraction_C_CloseDoorServer_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Close_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.CloseDoorMulticast
struct USurvivorInteraction_C_CloseDoorMulticast_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Close_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.OverlapReloading
struct USurvivorInteraction_C_OverlapReloading_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ANewAlarmBP_C*                               Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorInteraction.SurvivorInteraction_C.InteractDoor
struct USurvivorInteraction_C_InteractDoor_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.DestroyItemServer
struct USurvivorInteraction_C_DestroyItemServer_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.DestroyItemMulticast
struct USurvivorInteraction_C_DestroyItemMulticast_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.LootingServer
struct USurvivorInteraction_C_LootingServer_Params
{
	class ALootableMesh_C*                             LootableMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Start_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorInteraction.SurvivorInteraction_C.LootingMulticast
struct USurvivorInteraction_C_LootingMulticast_Params
{
	class ALootableMesh_C*                             LootableMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Start_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorInteraction.SurvivorInteraction_C.HelpSound
struct USurvivorInteraction_C_HelpSound_Params
{
};

// Function SurvivorInteraction.SurvivorInteraction_C.CheckAlarmDistance
struct USurvivorInteraction_C_CheckAlarmDistance_Params
{
	bool                                               Reset_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivorInteraction.SurvivorInteraction_C.ExecuteUbergraph_SurvivorInteraction
struct USurvivorInteraction_C_ExecuteUbergraph_SurvivorInteraction_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
