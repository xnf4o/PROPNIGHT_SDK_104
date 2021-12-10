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

// BlueprintGeneratedClass KillerMasterBP.KillerMasterBP_C
// 0x0DB9 (FullSize[0x1299] - InheritedSize[0x04E0])
class AKillerMasterBP_C : public APhysicsCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCapsuleComponent*                           CapsuleChecker;                                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box1;                                                      // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         MoveSoundComp;                                             // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            BloodhoundSphere;                                          // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPerkKiller_C*                               PerkKiller;                                                // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             CoinSpawn;                                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FPPCamera;                                                 // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCommandKiller_C*                       SoundCommandKiller;                                        // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             KnifeLoc;                                                  // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGraffityMakerHit_C*                         GraffityMakerHit;                                          // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPerkManager_C*                              PerkManager;                                               // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            NicknameWidget;                                            // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShootProphunt_C*                            ShootProphunt;                                             // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                 // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         KillerIdle;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGraffityMaker_C*                            GraffityMaker;                                             // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         JumpSound;                                                 // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         ChaseAudio;                                                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             StunSceneCheck;                                            // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Stund;                                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundChatSounds_C*                          SoundChatSounds;                                           // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               StunCollision;                                             // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCheckInteractableKiller_C*                  CheckInteractableKiller;                                   // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlarmsWidgetSize_C*                         AlarmsWidgetSize;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SurvEndPlace;                                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SurvBeginPlace;                                            // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoipAudioComponent*                         VoipAudio;                                                 // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoipManagerComponent*                       VoipManager;                                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess1;                                              // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmoothSync*                                 SmoothSync;                                                // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             KnifeLocation;                                             // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         HitAudi;                                                   // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             FPMeshPlace;                                               // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPPSM;                                                     // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundKiller_C*                              SoundKiller;                                               // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio1;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FollowCamera;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UATPCCameraComponent*                        ATPCCamera;                                                // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio;                                                 // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFootprintComponent_C*                       FootprintComponent1;                                       // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScreamSpell_C*                              ScreamSpell;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWallhackSpell_C*                            WallhackSpell;                                             // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           ContactCapsule;                                            // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             GrabLocation;                                              // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_6_NewTrack_0_DD0A11F8445618515EDF29AA255D1CE0;    // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_6__Direction_DD0A11F8445618515EDF29AA255D1CE0;    // 0x0684(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PZ0U[0x3];                                     // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_7;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_5_Alpha_7015A4DA41ED7E73DA445D8FB29046BE;         // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_5__Direction_7015A4DA41ED7E73DA445D8FB29046BE;    // 0x0694(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UTUU[0x3];                                     // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_6;                                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              AfterStunColor_f_A70514EE49D40D103AD3BF8B9384BA66;         // 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             AfterStunColor__Direction_A70514EE49D40D103AD3BF8B9384BA66; // 0x06A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AFPS[0x3];                                     // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          AfterStunColor;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ScaleSizer_fX_77CCFD67432753C30A0F0B9123C98C2A;            // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ScaleSizer_fZ_77CCFD67432753C30A0F0B9123C98C2A;            // 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ScaleSizer__Direction_77CCFD67432753C30A0F0B9123C98C2A;    // 0x06B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K1OA[0x7];                                     // 0x06B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ScaleSizer;                                                // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_4_Alpha_FFBAA07C4FFE0AC4EFCCB2808F29A056;         // 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_4__Direction_FFBAA07C4FFE0AC4EFCCB2808F29A056;    // 0x06CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VK0S[0x3];                                     // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5;                                                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_3_Alpha_CCB2811B4D6B40280DAFDA9812E93AA9;         // 0x06D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_3__Direction_CCB2811B4D6B40280DAFDA9812E93AA9;    // 0x06DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_23YL[0x3];                                     // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_2_Alpha_6A7565474A6C83519B89AABBB688C874;         // 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_6A7565474A6C83519B89AABBB688C874;    // 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ESFF[0x3];                                     // 0x06ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_1_Param_D056C010468E2F57128C429FAA65DEE4;         // 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_D056C010468E2F57128C429FAA65DEE4;    // 0x06FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0HZ8[0x3];                                     // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              StopSoundChaseTimeline_Alpha_06FAF5A548A0915B6864099F049D7C6A; // 0x0708(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             StopSoundChaseTimeline__Direction_06FAF5A548A0915B6864099F049D7C6A; // 0x070C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1IKB[0x3];                                     // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          StopSoundChaseTimeline;                                    // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              SoundTimeline_Alpha_1F3BABE64CBB7521448AC3810D011723;      // 0x0718(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             SoundTimeline__Direction_1F3BABE64CBB7521448AC3810D011723; // 0x071C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H3AM[0x3];                                     // 0x071D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          SoundTimeline;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DecreasorSpeed_AlphaTime_7C7B01AF4FA603E5695B4EBEC9B01716; // 0x0728(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DecreasorSpeed__Direction_7C7B01AF4FA603E5695B4EBEC9B01716; // 0x072C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TCGW[0x3];                                     // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DecreasorSpeed;                                            // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              IncreasorSpeed_AlphaTime_73C5FA014C02BF17B95C0094FD9E37EA; // 0x0738(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             IncreasorSpeed__Direction_73C5FA014C02BF17B95C0094FD9E37EA; // 0x073C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D4AP[0x3];                                     // 0x073D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          IncreasorSpeed;                                            // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_lerp_258C0C6E4CF25F31EF1A08BE14D3F049;          // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_258C0C6E4CF25F31EF1A08BE14D3F049;    // 0x074C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1KNG[0x3];                                     // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                            // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Stunned_;                                                  // 0x0760(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_2GFW[0x3];                                     // 0x0761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WalkSpeed;                                                 // 0x0764(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Atack_;                                                    // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Contact;                                                   // 0x0769(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BPQC[0x6];                                     // 0x076A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NewVar_1;                                                  // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                     V3Forward;                                                 // 0x0780(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               mouseClick_;                                               // 0x078C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NP43[0x3];                                     // 0x078D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              mouseClickTime;                                            // 0x0790(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReduceMaxWalkSpeedTime;                                    // 0x0794(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SuperSmash;                                                // 0x0798(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AbilityWallhackCd;                                         // 0x0799(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsHolded;                                                  // 0x079A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PQ1B[0x5];                                     // 0x079B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      GrabbedChar;                                               // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         HittedSurv;                                                // 0x07A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AHypnoChairBP_C*>                     HypnoChairsArrayRef;                                       // 0x07B0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               ChairOverlap_;                                             // 0x07C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RM22[0x7];                                     // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHypnoChairBP_C*                             OverlappedChair;                                           // 0x07C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASurvivorMasterBP_C*>                 SurvArrayRef;                                              // 0x07D0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASurvivorMasterBP_C*>                 SurvInRadiusArrayRef;                                      // 0x07E0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               ToShakeSurv;                                               // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JO9Z[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoolDownWBP_C*                              CDWBPRed;                                                  // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AbilityScreamCd;                                           // 0x0800(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WBIJ[0x7];                                     // 0x0801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoolDownWBP_C*                              WidgetCDRef;                                               // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       abilit1;                                                   // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       abilit2;                                                   // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndLineTraceV3;                                            // 0x0820(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       abiliti3;                                                  // 0x082C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SuperSmashCD;                                              // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SZNQ[0x3];                                     // 0x0835(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFlashWidget_C*                              FlashEffectWidget;                                         // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3TGU[0x4];                                     // 0x0844(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABulletBP_C*                                 BulletRef;                                                 // 0x0848(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BulletCD_;                                                 // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CYA2[0x7];                                     // 0x0851(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAmmoKillerWBP_C*                            AmmoWBPRef;                                                // 0x0858(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SpyEyeSound;                                               // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpeed;                                                  // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSpeed;                                              // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IncreaseWalk_;                                             // 0x0870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Isowner_;                                                  // 0x0871(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EFootprintStyle_EFootprintStyle>       CurrentFootwear;                                           // 0x0872(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N78D[0x1];                                     // 0x0873(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSpeed;                                                  // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DecreaseWalk_;                                             // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OnSpyEye;                                                  // 0x0879(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_INHW[0x6];                                     // 0x087A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractableButtonsWidget_C*                InteractButtonWBP;                                         // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       toChairText;                                               // 0x0888(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       pickupSurvText;                                            // 0x08A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       dropSurvText;                                              // 0x08B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                             ExplosionSound;                                            // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBarWBP_C*                           ProgressBarWBP;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x08E0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              MaxSpeedDefault;                                           // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinSpeedDefault;                                           // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                          LevelAmbient;                                              // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MeleeAttackRadius;                                         // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sensivity;                                                 // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AttackBoolAnim;                                            // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C88P[0x7];                                     // 0x0909(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHypnoChairBP_C*                             ChairSaved;                                                // 0x0910(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHypnoChairBP_C*                             NewVar_2;                                                  // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AttackAllow;                                               // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RV6O[0x7];                                     // 0x0921(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventInstance                          Laugh;                                                     // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFMODAudioComponent*                         LaughComp;                                                 // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              XLocationFPPMESH;                                          // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x093C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               JumpEnd;                                                   // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HP99[0x7];                                     // 0x0941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCrossHairWBP_C*                             Crosshair;                                                 // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FIRE;                                                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Plant;                                                     // 0x0951(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Flashed;                                                   // 0x0952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GGUY[0x5];                                     // 0x0953(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         SurvCrawl;                                                 // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         spyEyeSpotter;                                             // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalValue;                                             // 0x0968(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalValue;                                           // 0x096C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IncreaseSpeedMultiplyTime;                                 // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseSpeedMultiplyTime;                                 // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillerType;                                                // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HardHit_;                                                  // 0x097C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LockMouseInput;                                            // 0x097D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BO95[0x2];                                     // 0x097E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHUD_PropHunt_C*                             HudKiller;                                                 // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AstralIn_;                                                 // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KnifeInHand;                                               // 0x0989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KH93[0x2];                                     // 0x098A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InertiaSpeed;                                              // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InertiaSoef;                                               // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MAOL[0x4];                                     // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         NewVar_3;                                                  // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZinterpCoef;                                               // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AfterJump;                                                 // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SimpleDrop;                                                // 0x09A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChairDrop;                                                 // 0x09A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Catch;                                                     // 0x09A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Runaway;                                                   // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P5RI[0x3];                                     // 0x09A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              YawMod;                                                    // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ToChairMove;                                               // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4VHU[0x3];                                     // 0x09B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    HeadRotator;                                               // 0x09B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NewVar_4;                                                  // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnKnife;                                                // 0x09C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowVoice;                                                // 0x09C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VoiceActive_;                                              // 0x09C6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_088I[0x1];                                     // 0x09C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ScoreText;                                                 // 0x09C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DamageMultiply;                                            // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartTrackSurv;                                            // 0x09E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W1NW[0x3];                                     // 0x09E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASurvivorMasterBP_C*>                 SurfsOnEye;                                                // 0x09E8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      TimeDelay;                                                 // 0x09F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                       SeeSurvArray;                                              // 0x0A08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      ActorToMove;                                               // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         LaughKiller;                                               // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnKiller_;                                                 // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CDWidget;                                                  // 0x0A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NJB3[0x6];                                     // 0x0A2A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      StayDelay;                                                 // 0x0A30(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              XAxis;                                                     // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YAxis;                                                     // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SurvCanGetDMG;                                             // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NLM5[0x3];                                     // 0x0A49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SurvAttachBoneName;                                        // 0x0A4C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8FDQ[0x4];                                     // 0x0A54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkillPoints_C*                              SkillPoints;                                               // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSystem_C*                              LevelSystemRef;                                            // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HandAttack;                                                // 0x0A68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GU9M[0x4];                                     // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             CoinImpulse;                                               // 0x0A70(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               MarioStun;                                                 // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SurvExitCollision;                                         // 0x0A81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StopKillerMusic_;                                          // 0x0A82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ImKiller_;                                                 // 0x0A83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PropSound_;                                                // 0x0A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AttackBlocked_;                                            // 0x0A85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HiddenAttack_;                                             // 0x0A86(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_70EU[0x1];                                     // 0x0A87(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              AudioIgnore;                                               // 0x0A88(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               chase;                                                     // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_997D[0x7];                                     // 0x0A99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       ChaseArray;                                                // 0x0AA0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFMODEventInstance                          ChaseSound2D;                                              // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              JumpTime;                                                  // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               chaseb;                                                    // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P1JS[0x3];                                     // 0x0ABD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SurvEscapeAnimationLenght;                                 // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3MEK[0xC];                                     // 0x0AC4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SurvMeshLastPosition;                                      // 0x0AD0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            arrayDynMatInst;                                           // 0x0B00(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UnStunned;                                                 // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DoOnceChase;                                               // 0x0B11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DetectDelay;                                               // 0x0B12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PI8F[0x5];                                     // 0x0B13(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APostProcessVolume*                          PostProcessVolumeVar;                                      // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                        DefaultPostProcessSettings;                                // 0x0B20(0x0550) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    MaterialOutline;                                           // 0x1070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialLens;                                              // 0x1078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               gameStarted;                                               // 0x1080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3Y5T[0x3];                                     // 0x1081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdleTime;                                                  // 0x1084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IdleBool;                                                  // 0x1088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JMVV[0x3];                                     // 0x1089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdleTimeReady;                                             // 0x108C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ToChairLoc;                                                // 0x1090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5SBB[0x4];                                     // 0x109C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      SurvChaseDelay;                                            // 0x10A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DeltaSec;                                                  // 0x10B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IdleBlock;                                                 // 0x10B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2BZ7[0x3];                                     // 0x10B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MaterialVignette;                                          // 0x10B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialBlur;                                              // 0x10C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopMove_;                                                 // 0x10C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6AHN[0x3];                                     // 0x10C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StunTimeBySurv;                                            // 0x10CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastAirTime;                                               // 0x10D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tutorial_;                                                 // 0x10D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockSurvTrack_;                                           // 0x10D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M8NW[0x2];                                     // 0x10D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CDAttackDuration;                                          // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackAnimDuration;                                        // 0x10DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CDAttackDurationBig;                                       // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackAnimDurationBig;                                     // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               chaseDelayer;                                              // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UberRotate;                                                // 0x10E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A2B8[0x2];                                     // 0x10EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeltaSecSpeed;                                             // 0x10EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SeekBool;                                                  // 0x10F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GetReady;                                                  // 0x10F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SeekDetectCheck;                                           // 0x10F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OnlyTPP_;                                                  // 0x10F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DoOnceTrack;                                               // 0x10F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W3SJ[0x3];                                     // 0x10F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASurvivorMasterBP_C*>                 SurfsOnEye2;                                               // 0x10F8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ImpulseStunMultiply;                                       // 0x1108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5VLX[0x4];                                     // 0x110C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         SurvivorStunRef;                                           // 0x1110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               NewVar_5;                                                  // 0x1118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OMI7[0x7];                                     // 0x1119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           Phys_Mat;                                                  // 0x1120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Freeze;                                                    // 0x1128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0H02[0x7];                                     // 0x1129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Stun_Actor;                                                // 0x1130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodLustLvl;                                              // 0x1138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodLustSpeedAdd;                                         // 0x113C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodLustTimeActual;                                       // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodLustSpeedSubtraction;                                 // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BloodLustOffB;                                             // 0x1148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XHOO[0x3];                                     // 0x1149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BloodLustTimeOff;                                          // 0x114C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BloodLustHitted;                                           // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AU35[0x3];                                     // 0x1151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NewVar_6;                                                  // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodLustTimeLvl;                                          // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BloodLustLvlInt;                                           // 0x115C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodLustTimeDiv;                                          // 0x1160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Range_;                                                    // 0x1164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KJRQ[0x3];                                     // 0x1165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      SurvsSeeTimer;                                             // 0x1168(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BInFocus;                                                  // 0x1178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K9UD[0x3];                                     // 0x1179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InFocusTime;                                               // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BQuietHour;                                                // 0x1180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BTimeIsTicking;                                            // 0x1181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BNightmare;                                                // 0x1182(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BObservation;                                              // 0x1183(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BPunishment;                                               // 0x1184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BDeadMansChest;                                            // 0x1185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BImprisonment;                                             // 0x1186(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BBrokenTime;                                               // 0x1187(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BBait;                                                     // 0x1188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QCP9[0x7];                                     // 0x1189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventInstance                          BloodLustFMOD;                                             // 0x1190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UntouchMaxSpeedDefault;                                    // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Scale;                                                     // 0x119C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StunTimeBeforeAnim;                                        // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StunTimeAfterAnim;                                         // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChairDropChecker;                                          // 0x11B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SQBK[0x3];                                     // 0x11B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Socket_Name;                                               // 0x11B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                CoinsCount;                                                // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANewAlarmBP_C*                               As_New_Alarm_BP;                                           // 0x11C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               BrokeAlarm;                                                // 0x11C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZT99[0x3];                                     // 0x11C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BrokeTime;                                                 // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewVar_7;                                                  // 0x11D0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0Q54[0x4];                                     // 0x11DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TempCalculateRay;                                          // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceSurvPropSee;                                       // 0x11E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DI93[0x4];                                     // 0x11EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         SurvPropSeeRef;                                            // 0x11F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         tempPropSeeSurv;                                           // 0x11F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropSeeTime;                                               // 0x1200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NX8C[0x4];                                     // 0x1204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventInstance                          KillerSpottedFmod;                                         // 0x1208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                          KillerSpotted2;                                            // 0x1210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    SoftOutline;                                               // 0x1218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         MoveAmbAudio;                                              // 0x1220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TestViewB;                                                 // 0x1228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TPPCamEvent;                                               // 0x1229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9X8W[0x6];                                     // 0x122A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFlashCoin_C*                                NewVar_8;                                                  // 0x1230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheatEnabled;                                              // 0x1238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E4MP[0x7];                                     // 0x1239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        RangeMeshHit;                                              // 0x1240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RangeLocHit;                                               // 0x1248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TutorialBlock_;                                            // 0x1254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PickupSurv;                                                // 0x1255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2EQX[0x2];                                     // 0x1256(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Exp;                                                       // 0x1258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentLVL;                                                // 0x125C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLVL;                                                    // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x1264(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Bloodhound_;                                               // 0x1268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LastSurvMusBool;                                           // 0x1269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BrokeAnim;                                                 // 0x126A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_20KH[0x1];                                     // 0x126B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ForwardM;                                                  // 0x126C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftM;                                                     // 0x1270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnLookUpM;                                               // 0x1274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BloodlustLastCustom_;                                      // 0x1278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WiggleMoveRight;                                           // 0x1279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FDYQ[0x2];                                     // 0x127A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ParasiteMovementSpeed;                                     // 0x127C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGlued;                                                   // 0x1280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsYellowJar;                                               // 0x1281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U4E4[0x2];                                     // 0x1282(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SurvPreArrachPreName;                                      // 0x1284(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NWMC[0x4];                                     // 0x128C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         As_Survivor_Master_BP;                                     // 0x1290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Invert_Mouse_Y_;                                           // 0x1298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass KillerMasterBP.KillerMasterBP_C");
		return ptr;
	}



	void HeadRotationFunc(struct FRotator* Rotation);
	void AddWiggleParasiteMovement(float WigglePower);
	void get_level_name(bool* B, struct FString* Name);
	void SurfaceSoundPlayer(class UFMODEvent* Event);
	void ChairCheckFunc(bool* NewParam);
	void ScreenshotFunc();
	void MoveSoundFunc();
	void AlarmBrokeTimer();
	void coinDropper(bool Flashlight, class ASurvivorMasterBP_C* Surv, bool local_);
	void NewFunction_2();
	void SeeOtherKillers();
	void PickupSpeed(bool pickup, float B);
	void Hypno_Chair_Ref_Killer();
	void SurvSeeAddTimer(class ASurvivorMasterBP_C* SurvRef, float timeAdd, bool Close_);
	void SurvSeeTimer();
	void Melee_Keymaster_(bool* B);
	void BloodLust();
	void ChaseOffGameEnd();
	void Game_Mode(bool* Propnight_);
	void OnRep_Stunned_();
	void DynamicMatInit();
	void SurvChaser();
	void OnRep_HandAttack();
	void ElevatorTrace();
	void Surf_Track_3000(float TimeIn);
	void surv_to_chair();
	void GetSurvCrawlInBox(bool* NewParam);
	void NewFunction_1();
	void LocationChangerKiller(class AActor* NewParam);
	void LocationCheckForSurv(bool* Hit_);
	void SurvHpCalc(class ASurvivorMasterBP_C* SurvRefIn, int DamageIn, bool* Bool);
	void SurfaceSound(TEnumAsByte<PhysicsCore_EPhysicalSurface> InputPin);
	void SpeedDown();
	void SpeedUp();
	void reduceMaxWalkSpeed(float MaxSpeedPercent);
	void MouseClickStopwatch(float A, bool* SuperSmash_);
	void impulse_forward(class UCharacterMovementComponent* self2, class UCharacterMovementComponent* self3);
	void Forward();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void IncreasorSpeed__FinishedFunc();
	void IncreasorSpeed__UpdateFunc();
	void DecreasorSpeed__FinishedFunc();
	void DecreasorSpeed__UpdateFunc();
	void SoundTimeline__FinishedFunc();
	void SoundTimeline__UpdateFunc();
	void StopSoundChaseTimeline__FinishedFunc();
	void StopSoundChaseTimeline__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void ScaleSizer__FinishedFunc();
	void ScaleSizer__UpdateFunc();
	void AfterStunColor__FinishedFunc();
	void AfterStunColor__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_F3_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void _Pick_Up_Survivor_K2Node_InputActionEvent_3(const struct FKey& Key);
	void _Pick_Up_Survivor_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Attack_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_J_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Divide_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void CustopDepth(bool NewParam);
	void AlarmSee(class AActor* NewParam);
	void pickup();
	void ChairOverlapEventServ(class AHypnoChairBP_C* ChairRef);
	void ChairOverlapEventMulti(class AHypnoChairBP_C* ChairRef);
	void TeleportServer();
	void TeleportMulti();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void SurvSpyEyeOn(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye);
	void SurvSpyEyeOff(class ASpyEye_C* SpyEye, class ASurvivorMasterBP_C* SurvRef);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void Hitter(class ASurvivorMasterBP_C* SurvRef, int Damage, bool knife, bool Range, bool BackStab, bool VampireBite);
	void DecreaseWalkSpeed(bool Hited_, bool Range_);
	void DecreaseWalkSpeedMulti();
	void IncreaseWalkSpeed(bool Hited, bool Range_);
	void IncreaseWalkSpeedMulti();
	void AmmoSet(int Ammo);
	void AmmoRotation(const struct FRotator& Rotator);
	void RotationAtack();
	void LocalRotationEvent(const struct FRotator& NewParam);
	void SpeedChangeServ(float NewParam);
	void cdAtack();
	void ChairOverlapEndServ();
	void ChairOvelapEndMulti();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExplosionSoundServ(class UStaticMeshComponent* bullet);
	void FlashLightIncreaseSpeed();
	void ChairChek();
	void ThirdPersonCamEvent(bool Now_, bool NoDelay_);
	void FirstPersonCamEvent(bool Now_, bool NoDelay_);
	void RotationCameraServ(bool NewParam);
	void RotationCameraMulti(bool NewParam);
	void AstralSoundIn();
	void AstralSoundOut(bool NewParam);
	void AstralSoundInvisibility();
	void SoundAmbStart();
	void AtackAudio();
	void SpeedChangeMulti(float NewParam);
	void SphereDrawServ(const struct FVector& NewParam);
	void SphereDrawMulti(const struct FVector& NewParam);
	void AtackAnimServ(bool NewParam);
	void AtackAnimMulti();
	void MeshVisibiltyOff();
	void MulticastChangeFootwear();
	void DeleyerAttackCollision();
	void MeshVisibilityOn();
	void AmbientOff();
	void LaughServ();
	void LaughMulti();
	void ServerChangeFootwear();
	void SetCharacterOwner();
	void ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style);
	void XLocationMeshEv();
	void JumpChek();
	void BeginFootprint();
	void SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake);
	void Chair_Open_Stage();
	void HitterServ(class ASurvivorMasterBP_C* SurvRef, int Damage, bool Crawl, bool Knife_, bool Range, bool BackStab, bool VampireBite_);
	void StartAnimShot();
	void PlantAnim();
	void PlantAnimServ();
	void PlantAnimMulti();
	void HitterMulti(class ASurvivorMasterBP_C* SurvRef, bool Crawl, bool Chair);
	void ShootAudio();
	void ActivateSurv();
	void hitSuface(bool Range_, class UStaticMeshComponent* Mesh, const struct FVector& Loc, const struct FVector& norm, const struct FHitResult& HitResult);
	void ChairServ(class AHypnoChairBP_C* Chair);
	void ChairMulti(class AHypnoChairBP_C* Chair);
	void SurvPropSound(TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType);
	void SurfaceServ(TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface, class UStaticMeshComponent* Mesh, bool Range);
	void SurfaceMulti(TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface, class UStaticMeshComponent* Mesh, bool Range);
	void SurvImpactSound(class ASurvivorMasterBP_C* Surv, bool knife, bool Range, bool BackStab);
	void SurvImpactSoundServ(class ASurvivorMasterBP_C* Surv, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> damagType);
	void SurvImpactSoundMulti(class ASurvivorMasterBP_C* Surv, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> DmgType);
	void ChairEvent(class AHypnoChairBP_C* Chair);
	void LookUpServ(float Value);
	void LookUpMulti(float Value);
	void TurnServ(float Value);
	void TurnMulti(float Value);
	void SetKillerType(int Type);
	void CDATACKER();
	void KillKnifeServ();
	void KillKnifeMulti();
	void KnifeShootSoundStart();
	void KnifeSpawnSound();
	void WeaponImpact(class UStaticMeshComponent* meshRef);
	void KnifeDetectorSoundTrue();
	void KnifeDetectorSoundFalse();
	void HUDON();
	void Drop();
	void InertCamera();
	void HotkeyStarter(class ASurvivorMasterBP_C* SurvRef);
	void JumpFall();
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
	void IncreaseSpeedMulti(float CurrentSpeed, float NewSpeed, float MultiplyTime);
	void IncreaseSpeedServ(float CurrentSpeed, float NewSpeed, float MultiplyTime);
	void DecreaseSpeedServ(float CurrentSpeed, float NewSpeed, float MultiplyTime);
	void DecreaseSpeedMulti(float CurrentSpeed, float NewSpeed, float MultiplyTime);
	void MoveKiller();
	void offignorer();
	void IncreaseReal(float NewParam, float NewParam2, float NewParam3);
	void DecreaseReal(float NewParam, float NewParam2, float NewParam3);
	void ChairMoveEvent(float NewParam);
	void Marked();
	void HeadRotatorServ(const struct FRotator& Rotator);
	void HeadRotatorMulti(const struct FRotator& Rotator);
	void RotatorHead();
	void CamEv();
	void CustomLMB();
	void KnockDownSurvServ(bool Crawl, bool Chair);
	void SendScore();
	void SendKillerType(int KillerType);
	void ReceivePossessed(class AController* NewController);
	void InitVoice();
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel);
	void ServVoiceProc(TArray<unsigned char> CompressedVoiceData);
	void ReceiveVoice(TArray<unsigned char> CompressedVoiceData);
	void SendVoiceStatusServer(bool VoiceActive_);
	void LoadSensivity();
	void ToChairMoveSurv(float NewParam);
	void MessegeToSurvSeeServ(bool See_, class ASurvivorMasterBP_C* SurvRef);
	void MessegeToSurvSeeMulti(bool See_, class ASurvivorMasterBP_C* SurvRef);
	void SurvLocationServ(const struct FVector& NewParam, const struct FRotator& NewParam2, class ASurvivorMasterBP_C* NewParam3);
	void SurvLocationMulti(const struct FVector& NewParam, const struct FRotator& NewParam2, class ASurvivorMasterBP_C* NewParam3);
	void PickupAttachServ(class ASurvivorMasterBP_C* NewParam);
	void PickupAttachMulti(class ASurvivorMasterBP_C* NewParam);
	void EndGameFreeze();
	void SpawnHitParticlesServ(const struct FVector& Location, const struct FRotator& Rotation, bool IsHit, const struct FHitResult& hit);
	void SpawnHitParticlesMulti(const struct FVector& Location, const struct FRotator& Rotation, bool IsHit, const struct FHitResult& hit);
	void CheckStatus();
	void FailedChair();
	void ElevatorInteract(class AElevator_C* ref);
	void SetLevelSystem();
	void DropMulti();
	void BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SpawnCoins(class ASurvivorMasterBP_C* ref);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit);
	void StunSoundServ(int KillerType);
	void StunSoundMulti(int KillerType);
	void KillerGrabSoundServ();
	void KillerGrabSoundMulti();
	void ChaserServ(bool B, class ASurvivorMasterBP_C* SurvRef);
	void ChaserMulti(bool B, class ASurvivorMasterBP_C* SurvRef);
	void KillerVisible();
	void ChaseLocal(bool B, class ASurvivorMasterBP_C* SurvRef);
	void chaseOffSound();
	void KillerCatchSound();
	void KillerLaugh();
	void JumpSoundKillerServ();
	void JumpSoundKillerMulti();
	void AfterJumpServ();
	void AfterJumpMulti();
	void ChaseOnSound();
	void StopChaseOn();
	void StopStopChase();
	void BlindSound();
	void SurvRunawaySound();
	void GraffitiServ(const struct FVector& Location, const struct FVector& Forward);
	void GraffitiMulti(const struct FVector& Location, const struct FVector& Forward);
	void StunColor();
	void KillerDetectServ();
	void KillerDetectMulti();
	void PostProcessEffect();
	void GetPostProcess();
	void BlurEffect(bool On_);
	void DelayOffServ();
	void DelayOffMulti();
	void TransformationEffect();
	void LocalMeshUpdate();
	void CustomInteractPressed();
	void WalkShake();
	void JumpShake();
	void CreateChildPPMaterial();
	void ScoreStunServer(class ASurvivorMasterBP_C* SurvRef);
	void ScoreStunMulti(class ASurvivorMasterBP_C* SurvRef);
	void MarioStunReset();
	void ChaseDelayerEvent();
	void NicknameON();
	void SeekServ();
	void SeekMulti();
	void ProgressBarStart(float range_max);
	void UnstunnedChecker();
	void StunScoreSurvServ(class ASurvivorMasterBP_C* Surv);
	void StunScoreSurvMulti(class ASurvivorMasterBP_C* Surv);
	void ChaseNotValidLocal(int Index);
	void TracerForParticles(class UStaticMeshComponent* Mesh, const struct FVector& Loc, const struct FVector& norm, const struct FHitResult& hit);
	void ShowKnockDownMessage(class ASurvivorMasterBP_C* Surv);
	void CoinDropSoundMulti(class ACoinActor_C* ref);
	void DecreaseTime();
	void StunCheck(class AActor* ref);
	void ChairChekerServ1();
	void ChairChekerServ2();
	void ChairChekerServ3();
	void ChairChekerMulti1();
	void ChairChekerMulti2();
	void ChairChekerMulti3();
	void ChairMoveOFFServ();
	void ChairMoveOFFMulti();
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_Left_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_Right_K2Node_InputAxisEvent_4(float AxisValue);
	void IntroWeapon();
	void CD_Widget_Strat(const struct FString& AbilityName);
	void SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_);
	void PickUp_Multi(class ASurvivorMasterBP_C* SurvRef);
	void ToChairMulti(class AHypnoChairBP_C* NewParam);
	void ToChairServ(class AHypnoChairBP_C* NewParam);
	void SurvRunawayServ(bool NewParam, class ASurvivorMasterBP_C* helpSurv, bool Flashed_);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void CoinsLocal(class ASurvivorMasterBP_C* ref);
	void GraffitiHitServ(const struct FVector& v3Loc, const struct FVector& v3For);
	void GraffitiHitMulti(const struct FVector& v3Loc, const struct FVector& v3For);
	void GraffitiHit();
	void ServerDoor(class AInteractableDoor_C* Door, bool B);
	void MulticastDoor(class AInteractableDoor_C* Door, bool B);
	void BrokenTimeServ(class ANewAlarmBP_C* ref);
	void BrokenTimeMulti(class ANewAlarmBP_C* ref);
	void ReceiveBeginPlay();
	void sendServ(const struct FVector& NewParam);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void HUD_StartJump();
	void HUD_EndJUmp();
	void Perexod();
	void SwitchWeaponVisibility(bool On_);
	void HummerVis(bool B);
	void MulticastGlass(class AInteractableDoor_C* Door);
	void ServerGlass(class AInteractableDoor_C* Door);
	void ExposedSurvs();
	void SpawnHitParticlesLocal(const struct FVector& Location, const struct FRotator& Rotation, bool IsHit, const struct FHitResult& hit);
	void IdleSoundLocal();
	void IdleSoundServ();
	void IdleSoundMulti();
	void UnstunDelay();
	void JumpSoundKillerLocal();
	void CollisionChairChecker();
	void ZoomOut();
	void InteractPressed();
	void InteractReleased();
	void SetKIllerVisibleToSurv();
	void SetKillerNotVisibleToSurv();
	void KillerVisibleToAll(float Duration, class ASurvivorMasterBP_C* ref);
	void KillerVisibleToAll_SERV(float Duration, class ASurvivorMasterBP_C* ref);
	void BloodLustAddCustom(bool LastLvl_, bool Wipe);
	void CallAddEXPKiller(int Exp);
	void CallAddEXPKiller_MULTI(int Exp);
	void BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BloodhoundPerk(bool LastLvl_);
	void SurvWiggle();
	void LastSurv();
	void DuplicatePropServ(class ADuplicatePropActor_C* Actor);
	void DuplicatePropMulti(class ADuplicatePropActor_C* Actor);
	void CoinDestroyServ(class ACoinActor_C* ref);
	void CoinDestroyMulti(class ACoinActor_C* ref);
	void AddBloodlustLvl();
	void BrokeAnimServ(bool B);
	void BrokeAnimLocal();
	void BrokeAnimMulti(bool B);
	void BrokeAnimLocalReset();
	void PickUp_Serv(class ASurvivorMasterBP_C* SurvRef);
	void Glue(float B);
	void YellowJar(float PlaybackSpeed);
	void ChaseScore_KIller();
	void SpawnStunCOIN_EXP_SERVER(class ASurvivorMasterBP_C* ref);
	void SpawnStunCOIN_EXP_Multi(class ASurvivorMasterBP_C* ref);
	void SpawnCoins_OnlySurv(class ASurvivorMasterBP_C* ref);
	void ShowKnockedBanner(class ASurvivorMasterBP_C* Surv);
	void RuneDestroyServ(class ACrystalRune_C* rune);
	void RuneDestroyMulti(class ACrystalRune_C* rune);
	void StunBySurvivor(float StunTime, class ASurvivorMasterBP_C* helpSurv);
	void DropServ();
	void PickupServerCheck(class ASurvivorMasterBP_C* ref);
	void PickupLocal(bool B);
	void KillerVisibleServ(class ASurvivorMasterBP_C* ref);
	void KillerVisibleMulti(class ASurvivorMasterBP_C* ref);
	void ExecuteUbergraph_KillerMasterBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
