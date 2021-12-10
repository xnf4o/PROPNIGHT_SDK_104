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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SurvivorMasterBP.SurvivorMasterBP_C
// 0x12C2 (FullSize[0x17A2] - InheritedSize[0x04E0])
class ASurvivorMasterBP_C : public APhysicsCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             ThrowArrow;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            SurvHP;                                                    // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODPropShiftLoopAudio;                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPerkSurv_C*                                 PerkSurv;                                                  // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FPPCamera;                                                 // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm1;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           StaticMeshNiagaraDestructable;                             // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USurvPropDestruction_C*                      SurvPropDestruction;                                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODPropBurningAudio;                                      // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            NicknameWidget;                                            // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            SurvRoleWidget;                                            // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           StaticMeshNiagaraCursed;                                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           SkeletalMeshNiagara;                                       // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           StaticMeshNiagara;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         PropArm;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        PropFPPCamera;                                             // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGraffityMaker_C*                            GraffityMaker;                                             // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODOnceVoices;                                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODLoopVoices;                                            // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODChair;                                                 // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            StaticMeshContainer;                                       // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        PlayerStaticMesh;                                          // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             StunScene;                                                 // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundChatSounds_C*                          SoundChatSounds;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             FPPCamerasPlace;                                           // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCheckInteractable_C*                        CheckInteractable;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlarmsWidgetSize_C*                         AlarmsWidgetSize;                                          // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                             Cable;                                                     // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio2;                                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UItemWorker_C*                               ItemWorker;                                                // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio1;                                                // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      InvisFPPMesh;                                              // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      InvisMesh;                                                 // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoipManagerComponent*                       VoipManager;                                               // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoipAudioComponent*                         VoipAudio;                                                 // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DropItemPosition;                                          // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractBox;                                               // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InteractBoxContainer;                                      // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AudioListener;                                             // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UATPCCameraComponent*                        ATPCCamera;                                                // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USurvFart_C*                                 SurvFart;                                                  // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URegeneration_C*                             Regeneration1;                                             // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USurvivorSoundsMaster_2D_C*                  SurvivorSoundMaster;                                       // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USurvivorInteraction_C*                      SurvInteraction;                                           // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box1;                                                      // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODPropLoopAudio;                                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             FPPMeshContainer;                                          // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODPropHitAudio;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             CameraGrapplePoint;                                        // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPPMesh;                                                   // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FollowCamera;                                              // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio;                                                 // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFootprintComponent_C*                       FootprintComponent;                                        // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmoothSync*                                 SmoothSync;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_5_NewTrack_0_C2263A7A48628D8CF8B3A18298FB69AE;    // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_5__Direction_C2263A7A48628D8CF8B3A18298FB69AE;    // 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_15LJ[0x3];                                     // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_6;                                                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_4_Alpha_4D4D07A64AF531E051135BB4A10EAAE4;         // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_4__Direction_4D4D07A64AF531E051135BB4A10EAAE4;    // 0x06D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KMCZ[0x3];                                     // 0x06D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5;                                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_3_Alpha_EDD8D8BB42BC6EFFD204ACB3F90E9A23;         // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_3__Direction_EDD8D8BB42BC6EFFD204ACB3F90E9A23;    // 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MB2B[0x3];                                     // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ZoomOutTimeline_Alpha_56FD6C724DFA377C7F5A27A71D58F2DB;    // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ZoomOutTimeline__Direction_56FD6C724DFA377C7F5A27A71D58F2DB; // 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JG1R[0x3];                                     // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ZoomOutTimeline;                                           // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_D8903D0E43C9C9AC8C494192B318AADB;         // 0x0700(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_D8903D0E43C9C9AC8C494192B318AADB;    // 0x0704(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q66P[0x3];                                     // 0x0705(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DropItemHold__Direction_5E24FDAC43B39BF64E2B2E89568AAD81;  // 0x0710(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P5KK[0x7];                                     // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DropItemHold;                                              // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DeathEffectTimeline_Lerp_1AD56D5F482733F5B7FF21945C716C1A; // 0x0720(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DeathEffectTimeline__Direction_1AD56D5F482733F5B7FF21945C716C1A; // 0x0724(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5LJO[0x3];                                     // 0x0725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DeathEffectTimeline;                                       // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_2_Alpha_F590837A4D182D3C48036EA9ACD1FE91;         // 0x0730(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_F590837A4D182D3C48036EA9ACD1FE91;    // 0x0734(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2NBL[0x3];                                     // 0x0735(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BlurTimeline_Alpha_E678B1E44A3CA3CCBC33F2870F4D589F;       // 0x0740(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BlurTimeline__Direction_E678B1E44A3CA3CCBC33F2870F4D589F;  // 0x0744(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UY9V[0x3];                                     // 0x0745(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BlurTimeline;                                              // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              CapsuleTimeline_Alpha_3931415B4DA717316CBCC4B2447C088F;    // 0x0750(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CapsuleTimeline__Direction_3931415B4DA717316CBCC4B2447C088F; // 0x0754(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6ELC[0x3];                                     // 0x0755(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CapsuleTimeline;                                           // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimelineFOV_Alpha_BB6E0F3D4368D461E87B1DA7C8A0706C;        // 0x0760(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineFOV__Direction_BB6E0F3D4368D461E87B1DA7C8A0706C;   // 0x0764(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9JFI[0x3];                                     // 0x0765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineFOV;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              CameraInteract_NewTrack_0_D42A0B284E3720C10D21618BBE3F6A57; // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CameraInteract__Direction_D42A0B284E3720C10D21618BBE3F6A57; // 0x0774(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LM3E[0x3];                                     // 0x0775(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CameraInteract;                                            // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Rope_NewTrack_0_79166F2E47E56ABEB7D4D381CFC3C44E;          // 0x0780(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Rope__Direction_79166F2E47E56ABEB7D4D381CFC3C44E;          // 0x0784(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_45BI[0x3];                                     // 0x0785(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Rope;                                                      // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              HitTimeline_Pitch_033072B4460D8031F3574FA1B2C15E3C;        // 0x0790(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             HitTimeline__Direction_033072B4460D8031F3574FA1B2C15E3C;   // 0x0794(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VIQM[0x3];                                     // 0x0795(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          HitTimeline;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_1_NewTrack_0_28424CF84D5D555B496C44BDBC6E5372;    // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_28424CF84D5D555B496C44BDBC6E5372;    // 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PNS4[0x3];                                     // 0x07A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              PPColorChange_Lerp_E61BC77648192EB1FD5307BB391141EA;       // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             PPColorChange__Direction_E61BC77648192EB1FD5307BB391141EA; // 0x07B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PT2E[0x3];                                     // 0x07B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PPColorChange;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimelineJump_Jump_74BC80A542EA939C26100EB00C9A924D;        // 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineJump__Direction_74BC80A542EA939C26100EB00C9A924D;  // 0x07C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UQZP[0x3];                                     // 0x07C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineJump;                                              // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              LerpAlphaTimeline_Lerp_281CB55F46C7C7F578BF9F88611AAA8F;   // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LerpAlphaTimeline__Direction_281CB55F46C7C7F578BF9F88611AAA8F; // 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_107Q[0x3];                                     // 0x07D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LerpAlphaTimeline;                                         // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                            // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunSpeed;                                                  // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchSpeed;                                               // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkSpeed;                                                 // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrawlSpeed;                                                // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Health;                                                    // 0x07F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hitted_;                                                   // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W2I9[0x3];                                     // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeleeSpeedUpPercent;                                       // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MovementTypeEnum_EMovementTypeEnum>    MovementType;                                              // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpeedUpAfterMeleeHit_;                                     // 0x0805(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ImProp_;                                                   // 0x0806(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y7JZ[0x1];                                     // 0x0807(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ForwardVector;                                             // 0x0808(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightVector;                                               // 0x0814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Item;                                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ItemsInventory;                                            // 0x0828(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      ItemToSpawn;                                               // 0x0838(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InventoryIndex;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartRotate_;                                              // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5T2R[0x3];                                     // 0x0845(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeltaSeconds;                                              // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopMove_;                                                 // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8YQ5[0x3];                                     // 0x084D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LerpAlpha;                                                 // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ItemFound_;                                                // 0x0854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7LK[0x3];                                     // 0x0855(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     JumpVector;                                                // 0x0858(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealingProgress;                                           // 0x0864(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EmptyInventory_;                                           // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VMB9[0x3];                                     // 0x0869(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    AxisRotator;                                               // 0x086C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ReanimateProgress;                                         // 0x0878(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Grapple_;                                                  // 0x087C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OnChair_;                                                  // 0x087D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9O4P[0x2];                                     // 0x087E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ZeroSpeed;                                                 // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightLeft;                                                 // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PressA_;                                                   // 0x0888(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PressD_;                                                   // 0x0889(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3M7R[0x2];                                     // 0x088A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BreakFreeProgress;                                         // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Shake_;                                                    // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GIXK[0x7];                                     // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      KillerActor;                                               // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HeartbeatSound1;                                           // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewDelay;                                                  // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Change_;                                                   // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F3GO[0x3];                                     // 0x08AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FinalDelay;                                                // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewCall_;                                                  // 0x08B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NXBH[0x3];                                     // 0x08B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PrevDelay;                                                 // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZT80[0x4];                                     // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurvivalProgressBarWidget_C*                SurvivalProgressBar;                                       // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalSkillCheckWidget_C*                 SurvivalSkillCheck;                                        // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressUI;                                                // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullHealTime;                                              // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullReanimateTime;                                         // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHelpGetOutChair;                                    // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullHelpGetOutChair;                                       // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullOpenExit;                                              // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullReloaingAlarm;                                         // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentGetOutChair;                                        // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ChairActor;                                                // 0x08F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullGetOutChair;                                           // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomChance;                                              // 0x08FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalHealthWidget_C*                     SurvivalHealth;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalInventoryWidget_C*                  SurvivalInventory;                                         // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemsBPHand_C*                              CurrentItem;                                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AddItem_;                                                  // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DeleteItem_;                                               // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ItemSwitch_;                                               // 0x091A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QYL2[0x5];                                     // 0x091B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ED_MovementType;                                           // 0x0920(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCoolDownWBP_C*                              SurvivalAbility;                                           // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ability1Reloading_;                                        // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Ability2Reloading_;                                        // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IZD8[0x2];                                     // 0x093A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FullGetOutKillerHand;                                      // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FailedSkillCheck_;                                         // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RandomSkillCheck_;                                         // 0x0941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OT0G[0x6];                                     // 0x0942(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANewAlarmBP_C*                               CurrentAlarm;                                              // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Skill1;                                                    // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Skill2;                                                    // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Skill3Rotate;                                              // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Skill3Flashlight;                                          // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Skill3Empty;                                               // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              KillingTime;                                               // 0x09A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5ZHU[0x4];                                     // 0x09A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractableButtonsWidget_C*                InteractableButtons;                                       // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       AlarmText;                                                 // 0x09B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ReanimateText;                                             // 0x09C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       HealAllyText;                                              // 0x09E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       HealSelfText;                                              // 0x09F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       OpenExitText;                                              // 0x0A10(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PickUpText;                                                // 0x0A28(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UpdateInteractable_;                                       // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7A6C[0x7];                                     // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       FlashlightText;                                            // 0x0A48(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       RotateText;                                                // 0x0A60(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RotateInteractableActive_;                                 // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QIVD[0x7];                                     // 0x0A79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BreakFreeText;                                             // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ChairInteractableActive_;                                  // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FN84[0x3];                                     // 0x0A91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TorqueValue;                                               // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPropData                                   PropData;                                                  // 0x0A98(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              CurrentStamina;                                            // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxHP;                                                     // 0x0B2C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Isowner_;                                                  // 0x0B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EFootprintStyle_EFootprintStyle>       CurrentFootwear;                                           // 0x0B31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SZC0[0x6];                                     // 0x0B32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurvivalStaminaBarWidget_C*                 StaminaBar;                                                // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxStamina;                                                // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StaminaActive_;                                            // 0x0B44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PressedRun_;                                               // 0x0B45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               JumpButtonPressed_;                                        // 0x0B46(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SlowIncrease_;                                             // 0x0B47(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              StaminaDecreaseAmountValue;                                // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaJumpAmountValue;                                    // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValueProgressUI;                                        // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StaticHit_;                                                // 0x0B54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EKKT[0x3];                                     // 0x0B55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotateInterpSpeed;                                         // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanJump_;                                                  // 0x0B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6XLL[0x3];                                     // 0x0B5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpulseThreshold;                                          // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseThresholdMax;                                       // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeSensitivity;                                         // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxVolume;                                                 // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PropSoundActive_;                                          // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1077[0x3];                                     // 0x0B71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PropSpeed;                                                 // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TestSwitchActive_;                                         // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A509[0x3];                                     // 0x0B79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentCharacterSpeed;                                     // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropTempValue;                                             // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QTVF[0x4];                                     // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CalculateRayHitActor;                                      // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HeartbeatSound2;                                           // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartRegeneration_;                                        // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StartSelfReanimate_;                                       // 0x0B99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N6A5[0x2];                                     // 0x0B9A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SelfReanimateValue;                                        // 0x0B9C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SelfReanimateFullValue;                                    // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CrawlStatusStart_;                                         // 0x0BA4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZDJM[0x3];                                     // 0x0BA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaminaIncreaseAmountValue;                                // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VK20[0x4];                                     // 0x0BAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      NewOutline;                                                // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OldOutline;                                                // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CloseColorOutline;                                         // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialOutline;                                           // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OpenColorOutline;                                          // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DefaultColorOutline;                                       // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LastExitActor;                                             // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                          ChasingFMODSound;                                          // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ANewAlarmBP_C*                               AlarmRef;                                                  // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHealthCalculateValue;                                   // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameStart_;                                                // 0x0C14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1KWL[0x3];                                     // 0x0C15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KillerAmbientValue;                                        // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ZeroStamina_;                                              // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RLGU[0x3];                                     // 0x0C1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventInstance                          LevelAmbient;                                              // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FreeCam_;                                                  // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7HUT[0x3];                                     // 0x0C29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RestoreHealth;                                             // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JumpAlpha;                                                 // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TempVector;                                                // 0x0C34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       EscapeText;                                                // 0x0C40(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCameraComponent*                            ActiveCamera;                                              // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FPP_;                                                      // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1CZ7[0x7];                                     // 0x0C61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODAudioComponent*                         SurvTransform;                                             // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         Flashlight;                                                // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MouseSensitive;                                            // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KillerAstral_;                                             // 0x0C7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReloadingAlarm_;                                           // 0x0C7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M1TW[0x2];                                     // 0x0C7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Points;                                                    // 0x0C80(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EndJump_;                                                  // 0x0C84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DNPI[0x3];                                     // 0x0C85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWaypointWidget_C*                           WaypointWidget;                                            // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Skill4;                                                    // 0x0C90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Ability4Reloading_;                                        // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OpenDoor_;                                                 // 0x0CA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MeleeAttack_;                                              // 0x0CA2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RangeAttack_;                                              // 0x0CA3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RangeSpeedUpPercent;                                       // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpeedUpAfterRangeHit_;                                     // 0x0CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I88A[0x3];                                     // 0x0CA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxWalkSpeed;                                              // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ImHealing_;                                                // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7UUQ[0x3];                                     // 0x0CB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxHPForRegeneration;                                      // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseFlashlight_;                                            // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Escape_;                                                   // 0x0CB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R0V2[0x2];                                     // 0x0CBA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Temp2Vector;                                               // 0x0CBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotateLerp;                                                // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateHitted_;                                             // 0x0CCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ImHealingAlly_;                                            // 0x0CCD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4JMY[0x2];                                     // 0x0CCE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    NormalColor;                                               // 0x0CD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                                    MonochromeColor;                                           // 0x0CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GetReady_;                                                 // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HelpGetOutChair_;                                          // 0x0CF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        DamageType;                                                // 0x0CF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0IFR[0x5];                                     // 0x0CF3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       BleedingText;                                              // 0x0CF8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               KnifeInTheBody_;                                           // 0x0D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DRAH[0x3];                                     // 0x0D11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxPullOut;                                                // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentPullOut;                                            // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    HeadRotation;                                              // 0x0D1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Move_;                                                     // 0x0D28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HealingMe_;                                                // 0x0D29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<SurvStateEnum_ESurvStateEnum>          SurvStateEnum;                                             // 0x0D2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartRotateProp_;                                          // 0x0D2B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotateProp;                                                // 0x0D2C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ItemVar;                                                   // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemSpawnIndex;                                            // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZW1[0xC];                                     // 0x0D44(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpawnItemLocation;                                         // 0x0D50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BreakFreeFull_;                                            // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BBLA[0x3];                                     // 0x0D81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              YawMod;                                                    // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMat1;                                               // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMat2;                                               // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMat3;                                               // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathEffectTime;                                           // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathEffectDuration;                                       // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DeathEffectTimer;                                          // 0x0DA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              Float1;                                                    // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SoundsStop_;                                               // 0x0DB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7S4D[0x3];                                     // 0x0DB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASurvivorMasterBP_C*>                 AllSurvs;                                                  // 0x0DB8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInterface*                          SurvBodyHitMaterial;                                       // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SurvPastedClothHitMaterial;                                // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SurvClothHitMaterial;                                      // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SurvBodyDefaultMaterial;                                   // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SurvPastedClothDefaultMaterial;                            // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SurvClothDefaultMaterial;                                  // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD_PropHunt_C*                             HUDRef;                                                    // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Allow_Voice;                                               // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VoiceActive_;                                              // 0x0E01(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W9AS[0x2];                                     // 0x0E02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyDrinkBoost;                                          // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Boosted_;                                                  // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Invulnerability_;                                          // 0x0E09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F6LR[0x2];                                     // 0x0E0A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InvulnerabilityTime;                                       // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       LootboxShopText;                                           // 0x0E10(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BeginPlayOver_;                                            // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2NVG[0x7];                                     // 0x0E29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CoinText;                                                  // 0x0E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       ScoreText;                                                 // 0x0E40(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ASurvivorMasterBP_C*                         LastHittedSurv;                                            // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HelpLeader_;                                               // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2I6V[0x3];                                     // 0x0E61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StartPos;                                                  // 0x0E64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetPos;                                                 // 0x0E70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceForGraple;                                         // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovedDistance;                                             // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InGraple;                                                  // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HookInHands;                                               // 0x0E89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4ST9[0x6];                                     // 0x0E8A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 HeightCurve;                                               // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalEffectsUI_C*                        SurvEffectsUI;                                             // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvClass_ESurvClass>                  SurvClass;                                                 // 0x0EA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               KillerSee_;                                                // 0x0EA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_89QF[0x2];                                     // 0x0EA2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BreakFreeProgressSaved;                                    // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillerType;                                                // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SelfReanimateProgressReplicated;                           // 0x0EAC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Smooth_;                                                   // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CDInteract;                                                // 0x0EB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZC33[0x2];                                     // 0x0EB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Bias;                                                      // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALootBox_C*>                          LootBoxs;                                                  // 0x0EB8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              XAxis;                                                     // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YAxis;                                                     // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartRotatePropSoundActive_;                               // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Freeze;                                                    // 0x0ED1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMLU[0x2];                                     // 0x0ED2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OldCharPos;                                                // 0x0ED4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OldWidgetPos;                                              // 0x0EE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KE47[0x4];                                     // 0x0EEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TempCalculateRay;                                          // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysicsTickDeltaTime;                                      // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoostExit;                                                 // 0x0EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              animationSpeed;                                            // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SecondJumpProp_;                                           // 0x0F04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NXGQ[0x3];                                     // 0x0F05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              NicknamePropActorsIgnore;                                  // 0x0F08(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     CustomOffset;                                              // 0x0F18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StandartOffset;                                            // 0x0F24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TransformChangeHealth_;                                    // 0x0F30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BSGL[0x7];                                     // 0x0F31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADoppelganger_C*                             Doppelganger;                                              // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvSkills_ESurvSkills>                SurvSkill;                                                 // 0x0F40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FPRB[0x3];                                     // 0x0F41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NeedPointsLootbox;                                         // 0x0F44(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultFOV;                                                // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ChairStage;                                                // 0x0F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AirTime;                                                   // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Intro_;                                                    // 0x0F54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_INYJ[0x3];                                     // 0x0F55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MaterialBlur;                                              // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NicknameString;                                            // 0x0F60(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APostProcessVolume*                          PostProcessVolumeVar;                                      // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CSNW[0x8];                                     // 0x0F78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        DefaultPostProcessSettings;                                // 0x0F80(0x0550) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    MaterialVignette;                                          // 0x14D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    PropCorrectionRotation;                                    // 0x14D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ScenePropHealth;                                           // 0x14E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             SavedPoints;                                               // 0x14E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TempFloat;                                                 // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TempBool;                                                  // 0x14FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S53D[0x3];                                     // 0x14FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TempFloat2;                                                // 0x1500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Temp3Vector;                                               // 0x1504(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Temp4Vector;                                               // 0x1510(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TempRotation;                                              // 0x151C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    TempRotation2;                                             // 0x1528(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TempFloat3;                                                // 0x1534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewVar_1;                                                  // 0x1538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2E9J[0x3];                                     // 0x1539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProgressUISpectator;                                       // 0x153C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxProgressUISpectator;                                    // 0x1540(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastAirTime;                                               // 0x1544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PullOut_;                                                  // 0x1548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U1VF[0x3];                                     // 0x1549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PropMovementInterpVar;                                     // 0x154C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockLMB_;                                                 // 0x1558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockRMB_;                                                 // 0x1559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Tutorial_;                                                 // 0x155A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PropHuntMode_;                                             // 0x155B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TEnumAsByte<E_Mode_E_Mode>                         Mode;                                                      // 0x155C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               isAI;                                                      // 0x155D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XBR2[0x2];                                     // 0x155E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         HealAlly;                                                  // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               LobbbyWait_;                                               // 0x1568(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               IsaacBoosted_;                                             // 0x1569(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1HOR[0x2];                                     // 0x156A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IsaacTimeBoost;                                            // 0x156C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PressedCrouch_;                                            // 0x1570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4CMT[0x3];                                     // 0x1571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AliveTime;                                                 // 0x1574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PropObject;                                                // 0x1578(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalBoolProp;                                             // 0x1580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x1581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OutlineBlock;                                              // 0x1582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Small_Prop_;                                               // 0x1583(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OnlyTPP_;                                                  // 0x1584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CustomPlayAnimWalk_;                                       // 0x1585(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T0JE[0x2];                                     // 0x1586(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            PropMaterials;                                             // 0x1588(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DistanceTraveled;                                          // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T3YJ[0x4];                                     // 0x159C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       PingText;                                                  // 0x15A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SurvTrack3000Block_;                                       // 0x15B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockHelp_;                                                // 0x15B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FR78[0x2];                                     // 0x15BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PropJumpCount;                                             // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultJumpCount;                                          // 0x15C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropSoundVolumeModifier;                                   // 0x15C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BreakFreeBonusVar;                                         // 0x15C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlockTime;                                                 // 0x15CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FullHP_;                                                   // 0x15D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U64O[0x3];                                     // 0x15D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NeedPointsMedkit;                                          // 0x15D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrDolittle_;                                               // 0x15D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DrDolittleInteractReady_;                                  // 0x15D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AlarmFinished_;                                            // 0x15DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RushActive_;                                               // 0x15DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              StaminaRushDecreaseAmountValue;                            // 0x15DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Rush_;                                                     // 0x15E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6USL[0x3];                                     // 0x15E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlockTimeMultiply;                                         // 0x15E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CursedPropChallenge_;                                      // 0x15E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_632A[0x3];                                     // 0x15E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CursedPropChallengeValue;                                  // 0x15EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CursedPropChallengeMaxValue;                               // 0x15F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UD6F[0x4];                                     // 0x15F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABasePropBP_C*                               Cursed_Prop;                                               // 0x15F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       HoudiniText;                                               // 0x1600(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    MaterialVignette2;                                         // 0x1618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactPoint;                                               // 0x1620(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WallJump_;                                                 // 0x162C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_22VG[0x3];                                     // 0x162D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Spectator_C*                             BP_Spectator;                                              // 0x1630(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G1TD[0x8];                                     // 0x1638(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ParticleTransform;                                         // 0x1640(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<SurvRole_ESurvRole>                    SurvRole;                                                  // 0x1670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_771Y[0x7];                                     // 0x1671(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      r3;                                                        // 0x1678(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                I;                                                         // 0x1688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZLocalMin;                                                 // 0x168C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZLocal;                                                    // 0x1690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JC38[0x4];                                     // 0x1694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         SREF;                                                      // 0x1698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountCoins;                                                // 0x16A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SupportHealedCount;                                        // 0x16A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            PropDynMaterials;                                          // 0x16A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AInteractableDoor_C*>                 DoorArray;                                                 // 0x16B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DamageMarkerAngle;                                         // 0x16C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               escapeLoop;                                                // 0x16CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4S7N[0x3];                                     // 0x16CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    SoftOutline;                                               // 0x16D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         BleedingSound;                                             // 0x16D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         EscapeStruggle;                                            // 0x16E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChaseValue;                                                // 0x16E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropDistance;                                              // 0x16EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IntroAnim_;                                                // 0x16F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TestViewB;                                                 // 0x16F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanBurning_;                                               // 0x16F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Burning_;                                                  // 0x16F3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EnergyDrnkAnimB;                                           // 0x16F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KBookAnimB;                                                // 0x16F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WFH4[0x2];                                     // 0x16F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkinID;                                                    // 0x16F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestructionLvl;                                            // 0x16FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCoinMaxStruct>                      MaxScoreInt;                                               // 0x1700(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<int>                                        MaxScoreTemp;                                              // 0x1710(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               IsMessageBlocked;                                          // 0x1720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CheatEnabled;                                              // 0x1721(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6EGD[0x2];                                     // 0x1722(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AxisForwardFloat;                                          // 0x1724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentLVL;                                                // 0x1728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLVL;                                                    // 0x172C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Exp;                                                       // 0x1730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Perk1Activated;                                            // 0x1734(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JVR6[0x3];                                     // 0x1735(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Perk1LVL;                                                  // 0x1738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Perk2LVL;                                                  // 0x173C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Perk3LVL;                                                  // 0x1740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Perk2Activated;                                            // 0x1744(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Perk3Activated;                                            // 0x1745(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G20J[0x2];                                     // 0x1746(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RestoreHealthTimeMultiplier;                               // 0x1748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x174C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HitCounter;                                                // 0x1750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HitUI;                                                     // 0x1754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HaveShield;                                                // 0x1755(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShiftOn_;                                                  // 0x1756(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VX5R[0x1];                                     // 0x1757(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                AfterHitTimer;                                             // 0x1758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                Coins;                                                     // 0x1760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TPS;                                                       // 0x1764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockProp_;                                                // 0x1768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTotemOfEndurance;                                        // 0x1769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VIER[0x2];                                     // 0x176A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                JumpCount;                                                 // 0x176C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfEnduranceTime;                                      // 0x1770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfFriendshipTime;                                     // 0x1774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfBraveryTime;                                        // 0x1778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfConcentrationTime;                                  // 0x177C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfGravityTime;                                        // 0x1780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPropmachineBoosted;                                      // 0x1784(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Painkiller;                                                // 0x1785(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ThrowGrenade;                                              // 0x1786(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TakeRune;                                                  // 0x1787(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DamageNull_;                                               // 0x1788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_86LB[0x7];                                     // 0x1789(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTestDialogue>                       Dialogue;                                                  // 0x1790(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RunChance_;                                                // 0x17A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Invert_Mouse_Y_;                                           // 0x17A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvivorMasterBP.SurvivorMasterBP_C");
		return ptr;
	}



	void GetCurrentEXP(int* CurEXP);
	void GetPointsForPerks(int* PerkPoints);
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void GetPerkName(struct FName* Name, int* PerkIndex);
	void HeadRotationFunc(struct FRotator* Rotation);
	void StartDialogue();
	void DamageTypeCheck(bool Clear_);
	void OnRep_PerkActivated();
	void PropJumpWall(float Jump);
	void get_level_name(bool* B, struct FString* Name);
	void CheckAndSetSkin(int* SkinID, class USkeletalMesh** Mesh);
	void Exp_Score_Calc(int Points, TEnumAsByte<CoinEnum_ECoinEnum> CoinType);
	void Init_Max_Score();
	void CoinAngle(bool Server_, float* X, float* Y, float* Z);
	void OnRep_ProgressUI();
	void PassiveSkill();
	void WallCheck(class AActor* Actor, bool* NewParam);
	void SpeedChecker();
	void DisableInDirect(bool Up);
	void InteractBoxOverlap(class UClass* ClassFilter, class UObject* NotEqual, class AActor** Actor);
	void GrapleMovement();
	void HookShot();
	void SelectObjectPropMove(const struct FVector& Velocity);
	void ChangePropCollision(const struct FPropData& PropData);
	void HitImpactSound();
	bool CheckActiveActions();
	bool CheckFullHealthFinal();
	bool CheckFullHealth();
	bool CheckZeroHealthWithoutCrawl();
	bool CheckZeroHealth();
	void CheckMoved(bool* PressedAndMoved, bool* NotPressedAndMoved);
	void CalculatePersonHealth(int Health, const struct FPropData& Data, int* NewHealth);
	void CalculatePropHealth(int Health, const struct FPropData& Data, int* NewHealth);
	void ReduceHealth(int Damage, int* HP);
	void OnRep_SurvivalHealth();
	void PropJump(float Jump);
	void OnRep_CurrentTransform();
	void SetItem();
	void SetItemToLastIndex();
	void SpawnItem(class UClass* Item, class APawn* Pawn);
	void UserConstructionScript();
	void LerpAlphaTimeline__FinishedFunc();
	void LerpAlphaTimeline__UpdateFunc();
	void TimelineJump__FinishedFunc();
	void TimelineJump__UpdateFunc();
	void PPColorChange__FinishedFunc();
	void PPColorChange__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void HitTimeline__FinishedFunc();
	void HitTimeline__UpdateFunc();
	void Rope__FinishedFunc();
	void Rope__UpdateFunc();
	void CameraInteract__FinishedFunc();
	void CameraInteract__UpdateFunc();
	void TimelineFOV__FinishedFunc();
	void TimelineFOV__UpdateFunc();
	void CapsuleTimeline__FinishedFunc();
	void CapsuleTimeline__UpdateFunc();
	void BlurTimeline__FinishedFunc();
	void BlurTimeline__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void DeathEffectTimeline__FinishedFunc();
	void DeathEffectTimeline__UpdateFunc();
	void DropItemHold__FinishedFunc();
	void DropItemHold__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ZoomOutTimeline__FinishedFunc();
	void ZoomOutTimeline__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void InpActEvt_Jump_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_Run_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Run_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_F6_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_F7_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Graffiti_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void _Pick_Up_K2Node_InputActionEvent_13(const struct FKey& Key);
	void _Pick_Up_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Turn_Into_Prop_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt__Prop__Turn_Into_Survivor_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt__Prop__Straighten_Up_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt__Prop__Straighten_Up_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Drop_Item_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Drop_Item_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Voice_Commands_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Voice_Commands_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Divide_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Use_Item_1_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_Item_2_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_Item_3_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_N_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_F8_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_F9_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
	void SetTimingToAllChairs();
	void SetDepth();
	void LevelUpped(class AActor* PlayerRef);
	void DecreasePerkPoints(int PerkPoints);
	void AddInteractable(class AActor* Actor, const struct FName& InputMapping, const struct FText& Text);
	void RemoveInteractable(class AActor* Actor);
	void Chair_Open_Stage();
	void SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake);
	void BeginFootprint();
	void ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style);
	void SetCharacterOwner();
	void ServerChangeFootwear();
	void MulticastChangeFootwear();
	void GetSurvMesh();
	void GetPropMesh();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
	void MovementSpeed(float MovForward);
	void SetMovementType();
	void ReceiveTick(float DeltaSeconds);
	void RotateEvent();
	void Prop();
	void ServerPerson();
	void MulticastPerson(const struct FVector& Vector, const struct FVector& Temp2Vector);
	void ServerProp(class AActor* HitActor);
	void ItemMovementEvent();
	void SetVectors(const struct FVector& Forward, const struct FVector& Right, const struct FRotator& AxisRotator);
	void MulticastProp(class AActor* HitActor);
	void ReceiveBeginPlay();
	void HittedMulticast(int Damage, int TrueDamage, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> DamageType, bool Moved_, bool Invulnerability_);
	void test1();
	void test1multi();
	void SetMoveFloat(float RightLeft);
	void DeathServer();
	void DeathMulticast();
	void GetOutServer();
	void ItemSlotUpdate();
	void ItemSwitch();
	void SurvAbility(const struct FString& In);
	void StartGrapple();
	void StopGrapple();
	void ServExittedDoor();
	void DropSurvivor();
	void PickUpSurvivor();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CheckUpdateInteractable();
	void CalculateFlashlightUpdate();
	void RotateInteractable();
	void ChairBreakFreeInteractable();
	void ServerMovementType(TEnumAsByte<MovementTypeEnum_EMovementTypeEnum> Type);
	void MulticastMovementType(TEnumAsByte<MovementTypeEnum_EMovementTypeEnum> Type);
	void CheckPressedAndMoved();
	void StaminaDecrease();
	void StaminaIncrease();
	void VelocityCheck();
	void BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit);
	void ServerSpeedChange(float MaxWalkSpeed);
	void CrawlMovementType(TEnumAsByte<MovementTypeEnum_EMovementTypeEnum> Type);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void PropOutlineEffect();
	void PutOnChair();
	void SurvCustomDepthOff();
	void AmbientAndChasingOff();
	void TPP();
	void FPP();
	void ChangeControllerRotationMulticast(bool On_);
	void ChangeControllerRotationServer(bool On_);
	void ChangeMeshLocalVisibility(bool On_, bool Prop_);
	void CheckFPP();
	void PropCheckMesh(bool FPPMesh, bool TPPMesh, bool CustomChangeMesh);
	void KillerAstral(bool On_);
	void EndJumpCheck();
	void KillerMarkServer(const struct FVector& KillerLocation);
	void KillerMarkMulticast(const struct FVector& KillerLocation);
	void StopAllActions();
	void StopHealAlly();
	void StopHealSelf();
	void ChangeMaterial(bool Moved_, bool Endurance_);
	void test2();
	void EscapeClient();
	void ServerPropSound(float ImpulseThreshold);
	void MulticastPropSound(float ImpulseThreshold);
	void SurvImpactSound();
	void RotationHeadServer(const struct FRotator& HeadRotation);
	void PPColorChangeEvent();
	void CheckMoveServer(bool On_);
	void test123();
	void test12314();
	void CheckDamageType();
	void SendServerDamageType(float BaseDamage, class UClass* DamageTypeClass);
	void testdamage();
	void PeriodicDamageStart();
	void PeriodicDamageStop();
	void PullOutStart();
	void PullOutStop();
	void PullOutFinishServer();
	void PullOutFinishMulticast();
	void RotationHeadMulticast(const struct FRotator& HeadRotation);
	void SendSurvPosition();
	void GrannyAstral(bool On_);
	void test3333();
	void _3333();
	void GrannyAstralHideItems(bool On_);
	void GrannyAstralChangeSurvCollision(bool On_);
	void SendRotateServer(bool StartRotateProp_, const struct FRotator& RotateProp);
	void SendRotateMulticast(bool StartRotateProp_, const struct FRotator& RotateProp);
	void test777(bool NewParam);
	void test888(bool NewParam);
	void BreakFreeFullServer();
	void BreakFreeFullMulticast();
	void GrappleFailed();
	void LocalProp(class AActor* InputPin);
	void LocalPerson(const struct FVector& Temp2Vector);
	void StopInteraction();
	void CameraHitAction();
	void Nickname();
	void NicknameOff();
	void CharacterCustomDepth(float Duration);
	void DeathEffectEvent();
	void NicknameRotate();
	void ServerPropStart();
	void ServerPersonStart();
	void OtherSurvOutline();
	void OtherSurvOutlineUpdate();
	void SmoothSyncToggle();
	void GetDefaultMaterial();
	void SendScore();
	void ReceivePossessed(class AController* NewController);
	void InitVoice();
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel);
	void ServVoiceProc(TArray<unsigned char> CompressedVoiceData);
	void ReceiveVoice(TArray<unsigned char> CompressedVoiceData);
	void SendVoiceStatusServer(bool VoiceActive_);
	void SpawnItemCustom(class UClass* Rare);
	void CheckBoost(float DeltaTime);
	void CheckInvulnerability(float DeltaTime);
	void CheckInvis();
	void AstralSoundIn();
	void AstralSoundLoop();
	void AstralSoundOut();
	void AstralSoundInServ();
	void AstralSoundInMulti();
	void AstralSoundInvisibiltyServ();
	void AstralSoundInvisibilityMulti();
	void AstralSoundOutServ();
	void AstralSoundOutMulti();
	void DecreasePointsServer(int PlayerScore, const struct FText& ScoreText);
	void DecreasePointsMulticast(int PlayerScore, const struct FText& ScoreText);
	void Sensitivy();
	void StartGameCamera();
	void Smooth(bool On_);
	void NicknameVisible();
	void CheckItem();
	void RopeTrick(const struct FVector& Target);
	void SurvClassSpawnItem();
	void BFPServ(float NewParam);
	void BFPMulti(float NewParam);
	void KillerTypeCheck();
	void SmoothTick();
	void CheckMovementSpeed();
	void TurnOffIndirect(class UStaticMeshComponent* Mesh, float Bias);
	void TakeItem();
	void EndGameFreeze(bool exit_);
	void PullOutAnimServer(bool StopBleedingOn_);
	void PullOutAnimMulticast(bool StopBleedingOn_);
	void NicknameLerp(const struct FVector& A);
	void SetLevelSystem();
	void PhysicsTick(float SubstepDeltaTime);
	void ServerPropJump(float JumpAlpha, bool Wall_);
	void MulticastPropJump(float JumpAlpha, bool Wall_);
	void PropJumpSound(float JumpAlpha, bool Wall_);
	void NicknameProp();
	void SurvOnChairCamera();
	void SpottedSurv(bool SurvMesh, bool PropMesh, float Time);
	void PassiveServ();
	void PassiveMulti();
	void StartGameFPPCamera();
	void OtherSurvsPP(bool On_);
	void CheckSpottedAndChangeFOV();
	void AlarmsVisible();
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ChangeCrouchCapsuleHalfHeight(bool On_);
	void CheckAirTime();
	void ServerJumpEndSound();
	void MulticastJumpEndSound();
	void ServerJump();
	void MulticastJump();
	void SurvMovementVoices();
	void SurvMistakeVoice();
	void SurvMovementVoicesUpdate();
	void SurvGrabVoice();
	void SurvEscapedVoice();
	void GraffityServ(const struct FVector& Location, const struct FVector& Forward);
	void GraffityMulti(const struct FVector& Location, const struct FVector& Forward);
	void ChangeCamera(class AActor* Actor);
	void MaterialsDefault();
	void BlurUpdate();
	void TransformationEffect(bool EnergyDrink_);
	void GetPostProcess();
	void LocalMeshUpdate();
	void PointsTick();
	void UpdateSpectatorVariables(float ProgressUISpectator, float MaxProgressUISpectator);
	void WalkShake();
	void JumpShake();
	void TutorialExitCam(bool On_, class AActor* NewViewTarget);
	void HideLobby();
	void ServerRaiseLobby();
	void HitAndRun(float Delta);
	void RunCheck();
	void RunCheck1();
	void RunCheckReset();
	void PCProp(class AActor* Pin);
	void DeathCameraEffect();
	void OffOutlineProp();
	void DeathEffectPropEvent();
	void StunShake();
	void TutorialUnfreeze();
	void PingEvent(bool On_);
	void TeleportServer(bool B);
	void TeleportMulti(bool B);
	void DecreaseTime();
	void OffOrient();
	void FailedPostProcess(float Time);
	void InpAxisEvt_Left_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_Right_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_5(float AxisValue);
	void TestBlockChair();
	void asdasdasd();
	void BlockChairTick();
	void UnblockChair();
	void BlockSkillCheck();
	void PingShake();
	void RushSwitcher(bool On_);
	void SpecialSwitcher(bool On_);
	void CursedPropChallengeSwitcher(bool Start_, class ABasePropBP_C* CursedProp);
	void CursedPropChallengeTick();
	void EndChallenge(class ABasePropBP_C* CursedProp);
	void ChaseShake(float Float);
	void RunSpectatorOnChair();
	void WallJumpParticleServer(const struct FTransform& SpawnTransform);
	void WallJumpParticleMulticast(const struct FTransform& SpawnTransform);
	void InvulnerabilityMulticastSound();
	void CoinSpawnerSupport(class ASurvivorMasterBP_C* Surv);
	void BleedingTextLocal(bool On_);
	void FartSpawnCoin(class ASurvivorMasterBP_C* Surv);
	void SurvRolePP(bool On_);
	void SupportHeal(class ASurvivorMasterBP_C* Surv);
	void HelpSoundServer();
	void HelpSoundMulticast();
	void HelpSound();
	void InteractableDoorButton();
	void HUD_StartJump();
	void HUD_EndJUmp();
	void FindAllDoors();
	void DetectDoor();
	void OffATPC();
	void ClientCalculateDamageDirection(const struct FVector& Location);
	void ServerCalculateDamageDirection(class AActor* InstigatedBy);
	void EscapeLoopEvent(float TPS);
	void EscapeLoopEventServ(float TPS);
	void EscapeLoopEventMulti(float TPS);
	void AlarmShake();
	void SpottedShake();
	void HealSound();
	void HealSoundServer();
	void HealSoundMulticast();
	void HelloSound();
	void HelloSoundServer();
	void HelloSoundMulticast();
	void ThanksSound();
	void ThanksSoundServer();
	void ThanksSoundMulticast();
	void ZoomOut();
	void PickUpItemShake();
	void SetSkinIDLocal();
	void SetSkinIDServ(int ID);
	void SetSkinIDMulti(int ID);
	void StartGameLootBox();
	void CheckChairPlayers();
	void ShowKnockDownMessage();
	void ShowDeathNotification_Server(class APS_PropHunt_C* SurvState);
	void ShowDeathNotification_All(const struct FString& Nickname, TEnumAsByte<SurvChars_ESurvChars> SurvChar);
	void SkinRedHead();
	void AddLVL();
	void ExpAdd(int Exp);
	void ActivatePerk();
	void IncreaseOnceHP(int HP);
	void SlowOrPauseTimer(class AHypnoChairBP_C* Chair);
	void SetVisibleAll();
	void SetToAllVisible_SERV();
	void SetToAllVisible_MULTI();
	void CallAddEXPSurv(int Exp);
	void CallAddEXPSurv_MULTI(int Exp);
	void SurvDropItem(bool lastLVL);
	void SavedByNotifyMulticast(const struct FString& Nickname, TEnumAsByte<SurvChars_ESurvChars> SurvChar, class ASurvivorMasterBP_C* Victim);
	void TestServ(bool On_);
	void TestMulti(bool On_);
	void ShiftSoundServ(bool On_);
	void ShiftSoundMulti(bool On_);
	void ShiftSound();
	void SetVectorsServ(const struct FVector& Forward, const struct FVector& Right, const struct FRotator& AxisRotator);
	void SetVectorsMulti(const struct FVector& Forward, const struct FVector& Right, const struct FRotator& AxisRotator);
	void StaminaServ(bool StaminaActive_);
	void StaminaMulti(bool StaminaActive_);
	void SetSkin_SERV();
	void SetSkin_MULTI();
	void AfterHit();
	void SurvCoinsDrop();
	void GetCalculateForCHASE();
	void ShowKnockedDownBanner(class ASurvivorMasterBP_C* SurvMasterBP);
	void ShowHelpBanner(const struct FString& Nickname, TEnumAsByte<SurvChars_ESurvChars> SurvChar, float Delay, class APS_PropHunt_C* PS);
	void OpeningLootBox(class ALootBox_C* lootbox);
	void lootbox(class ALootBox_C* lootbox);
	void deathvoice();
	void ExecuteUbergraph_SurvivorMasterBP(int EntryPoint);
	void ED_MovementType__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
