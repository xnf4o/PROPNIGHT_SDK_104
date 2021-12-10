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

// Function Exit.Exit_C.OpenDoorAnimTimeline__FinishedFunc
struct AExit_C_OpenDoorAnimTimeline__FinishedFunc_Params
{
};

// Function Exit.Exit_C.OpenDoorAnimTimeline__UpdateFunc
struct AExit_C_OpenDoorAnimTimeline__UpdateFunc_Params
{
};

// Function Exit.Exit_C.CameraLerp__FinishedFunc
struct AExit_C_CameraLerp__FinishedFunc_Params
{
};

// Function Exit.Exit_C.CameraLerp__UpdateFunc
struct AExit_C_CameraLerp__UpdateFunc_Params
{
};

// Function Exit.Exit_C.Timeline_0__FinishedFunc
struct AExit_C_Timeline_0__FinishedFunc_Params
{
};

// Function Exit.Exit_C.Timeline_0__UpdateFunc
struct AExit_C_Timeline_0__UpdateFunc_Params
{
};

// Function Exit.Exit_C.DoorLock__FinishedFunc
struct AExit_C_DoorLock__FinishedFunc_Params
{
};

// Function Exit.Exit_C.DoorLock__UpdateFunc
struct AExit_C_DoorLock__UpdateFunc_Params
{
};

// Function Exit.Exit_C.ReceiveTick
struct AExit_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.StartOpenDoor
struct AExit_C_StartOpenDoor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.StopOpenDoor
struct AExit_C_StopOpenDoor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.BndEvt__ExitCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AExit_C_BndEvt__ExitCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Exit.Exit_C.WipeExit
struct AExit_C_WipeExit_Params
{
};

// Function Exit.Exit_C.MulticastOpenTheDoor
struct AExit_C_MulticastOpenTheDoor_Params
{
};

// Function Exit.Exit_C.CustomDepthOutlineStart
struct AExit_C_CustomDepthOutlineStart_Params
{
	bool                                               Active_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Exit.Exit_C.CustomDepthAllAlarmsReady
struct AExit_C_CustomDepthAllAlarmsReady_Params
{
};

// Function Exit.Exit_C.BoostmodeEvent
struct AExit_C_BoostmodeEvent_Params
{
};

// Function Exit.Exit_C.CheckSurvPosition
struct AExit_C_CheckSurvPosition_Params
{
};

// Function Exit.Exit_C.DoorOpened
struct AExit_C_DoorOpened_Params
{
};

// Function Exit.Exit_C.ServerOpenProgress
struct AExit_C_ServerOpenProgress_Params
{
	float                                              OpenProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.ReceiveBeginPlay
struct AExit_C_ReceiveBeginPlay_Params
{
};

// Function Exit.Exit_C.Chains
struct AExit_C_Chains_Params
{
};

// Function Exit.Exit_C.LoopSoundChange
struct AExit_C_LoopSoundChange_Params
{
};

// Function Exit.Exit_C.BndEvt__Box2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AExit_C_BndEvt__Box2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Exit.Exit_C.CurseLightON
struct AExit_C_CurseLightON_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.ParticleSwitch
struct AExit_C_ParticleSwitch_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Exit.Exit_C.OpenDoorAnimation
struct AExit_C_OpenDoorAnimation_Params
{
};

// Function Exit.Exit_C.EscapedSurvTick
struct AExit_C_EscapedSurvTick_Params
{
};

// Function Exit.Exit_C.BndEvt__ExitColliderForProps_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AExit_C_BndEvt__ExitColliderForProps_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Exit.Exit_C.StartCameraLerp
struct AExit_C_StartCameraLerp_Params
{
	bool                                               Spectator_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Exit.Exit_C.ChangeCamera
struct AExit_C_ChangeCamera_Params
{
};

// Function Exit.Exit_C.teleport
struct AExit_C_teleport_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.SpawnBeams
struct AExit_C_SpawnBeams_Params
{
};

// Function Exit.Exit_C.QuestExit
struct AExit_C_QuestExit_Params
{
};

// Function Exit.Exit_C.DoorOpeningEvent
struct AExit_C_DoorOpeningEvent_Params
{
	bool                                               Play_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Exit.Exit_C.DoorOpeningParameterEvent
struct AExit_C_DoorOpeningParameterEvent_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Exit.Exit_C.EndGame
struct AExit_C_EndGame_Params
{
};

// Function Exit.Exit_C.ReadyExit
struct AExit_C_ReadyExit_Params
{
};

// Function Exit.Exit_C.AlarmReady
struct AExit_C_AlarmReady_Params
{
};

// Function Exit.Exit_C.StartDoorLock
struct AExit_C_StartDoorLock_Params
{
};

// Function Exit.Exit_C.BlockExit
struct AExit_C_BlockExit_Params
{
};

// Function Exit.Exit_C.TutorialExit
struct AExit_C_TutorialExit_Params
{
};

// Function Exit.Exit_C.ExecuteUbergraph_Exit
struct AExit_C_ExecuteUbergraph_Exit_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
