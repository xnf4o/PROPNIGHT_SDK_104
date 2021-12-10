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

// BlueprintGeneratedClass Doppelganger.Doppelganger_C
// 0x0395 (FullSize[0x162E] - InheritedSize[0x1299])
class ADoppelganger_C : public AKillerMasterBP_C
{
public:
	unsigned char                                      UnknownData_6BE9[0x7];                                     // 0x1299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        PlayerStaticMesh;                                          // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            NicknameWidget_1;                                          // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            SurvRoleWidget;                                            // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        PropFPPCamera;                                             // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         PropArm;                                                   // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODHealSound;                                             // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractBox;                                               // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      KnifeFPP;                                                  // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           Niagara;                                                   // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      knife;                                                     // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODHit;                                                   // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio2_1;                                              // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDoppelgangerSpell2_C*                       DoppelgangerSpell2;                                        // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDoppelgangerSpell1_C*                       DoppelgangerSpell1;                                        // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultPointProp;                                          // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODPropLoopAudio;                                         // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODPropHitAudio;                                          // 0x1328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            StaticMeshContainer;                                       // 0x1330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_6_0_Alpha_149ED0024B960B6929F17AB7BFC03992;       // 0x1338(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_6_0__Direction_149ED0024B960B6929F17AB7BFC03992;  // 0x133C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PRQC[0x3];                                     // 0x133D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_6_1;                                              // 0x1340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_2_0_Jump_72A69D1F471F3505FB8E119B5DADA186;        // 0x1348(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2_0__Direction_72A69D1F471F3505FB8E119B5DADA186;  // 0x134C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KHKC[0x3];                                     // 0x134D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2_1;                                              // 0x1350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_0_Lerp_DE93363644F27A278A6844B4BC25415F;        // 0x1358(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1_0__Direction_DE93363644F27A278A6844B4BC25415F;  // 0x135C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H1Z5[0x3];                                     // 0x135D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1_1;                                              // 0x1360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CalculateRayHitActor;                                      // 0x1368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TempCalculateRay_1;                                        // 0x1370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TempVector;                                                // 0x1378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7F7G[0x4];                                     // 0x1384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPropData                                   PropData;                                                  // 0x1388(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               StartRotate_;                                              // 0x1418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_INUD[0x3];                                     // 0x1419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PhysicsTickDeltaTime;                                      // 0x141C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ForwardVector;                                             // 0x1420(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightVector;                                               // 0x142C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AxisRotator;                                               // 0x1438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PropSpeed;                                                 // 0x1444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LerpAlpha;                                                 // 0x1448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StaticHit_;                                                // 0x144C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Start_;                                                    // 0x144D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EndJump_;                                                  // 0x144E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NSR8[0x1];                                     // 0x144F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeltaTime_1;                                               // 0x1450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ImProp_;                                                   // 0x1454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GetPropReloading_;                                         // 0x1455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GetPersonReloading_;                                       // 0x1456(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1S97[0x1];                                     // 0x1457(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      NewOutline;                                                // 0x1458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialOutline_1;                                         // 0x1460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DefaultColorOutline;                                       // 0x1468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OldOutline;                                                // 0x1478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultCapsuleRadius;                                      // 0x1480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultCapsuleHalfHeight;                                  // 0x1484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotateInterpSpeed;                                         // 0x1488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               JumpButtonPressed_;                                        // 0x148C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SecondJumpProp_;                                           // 0x148D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_74K1[0x2];                                     // 0x148E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              JumpAlpha;                                                 // 0x1490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     JumpVector;                                                // 0x1494(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ImSurv_;                                                   // 0x14A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B6WO[0x7];                                     // 0x14A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APS_PropHunt_C*>                      PlayerStates;                                              // 0x14A8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               PropSoundActive_;                                          // 0x14B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4K4I[0x3];                                     // 0x14B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpulseThreshold;                                          // 0x14BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartRotatePropSoundActive_;                               // 0x14C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HLDP[0x3];                                     // 0x14C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastCapsuleRadius;                                         // 0x14C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastCapsuleHalfHeight;                                     // 0x14C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SchoolBell_;                                               // 0x14CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ULMD[0x3];                                     // 0x14CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    PropCorrectionRotation;                                    // 0x14D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StopMoveProp_;                                             // 0x14DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FakeAlarmAnim_;                                            // 0x14DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FakeHealingAnim_;                                          // 0x14DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W4M7[0x1];                                     // 0x14DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SavedNickname;                                             // 0x14E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Move_;                                                     // 0x14F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MNQ6[0x7];                                     // 0x14F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Alarm;                                                     // 0x1500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FakeHealing_;                                              // 0x1508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ASL1[0x7];                                     // 0x1509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    IsProp;                                                    // 0x1510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x1520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IMFM[0x3];                                     // 0x1521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ImpactPoint;                                               // 0x1524(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WallJump_;                                                 // 0x1530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TL6B[0xF];                                     // 0x1531(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ParticleTransform;                                         // 0x1540(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     OldCharPos;                                                // 0x1570(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OldWidgetPos;                                              // 0x157C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              NicknamePropActorsIgnore;                                  // 0x1588(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              PropDistance;                                              // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StaminaActive_;                                            // 0x159C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PressedRun_;                                               // 0x159D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SlowIncrease_;                                             // 0x159E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G5KC[0x1];                                     // 0x159F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentStamina;                                            // 0x15A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaIncreaseAmountValue;                                // 0x15A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxStamina;                                                // 0x15A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ZeroStamina_;                                              // 0x15AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RNPY[0x3];                                     // 0x15AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaminaDecreaseAmountValue;                                // 0x15B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaJumpAmountValue;                                    // 0x15B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropMaxTimer;                                              // 0x15B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropCurrentTimer;                                          // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropTempTimer;                                             // 0x15C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Temp2Vector;                                               // 0x15C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Temp3Vector;                                               // 0x15D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Temp4Vector;                                               // 0x15DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TempBool;                                                  // 0x15E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZNM[0x7];                                     // 0x15E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             SavedPoints;                                               // 0x15F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TempFloat;                                                 // 0x1600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempFloat2;                                                // 0x1604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TempRotation;                                              // 0x1608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    TempRotation2;                                             // 0x1614(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TempFloat3;                                                // 0x1620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PropCDTimer;                                               // 0x1624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               JumpEndPressE_;                                            // 0x1628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Capsule_TransormingSurv_;                                  // 0x1629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CustomAttackBlock_;                                        // 0x162A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InteractPressed_;                                          // 0x162B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               cdProp;                                                    // 0x162C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Chair_;                                                    // 0x162D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Doppelganger.Doppelganger_C");
		return ptr;
	}



	void CheckMoved(bool* PressedAndMoved, bool* NotPressedAndMoved);
	void PropJumpWall(float Jump);
	void PropJump(float Jump);
	void Timeline_1_0__FinishedFunc();
	void Timeline_1_0__UpdateFunc();
	void Timeline_2_0__FinishedFunc();
	void Timeline_2_0__UpdateFunc();
	void Timeline_6_0__FinishedFunc();
	void Timeline_6_0__UpdateFunc();
	void InpActEvt_Run_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Run_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_8(const struct FKey& Key);
	void _Pick_Up_Survivor_K2Node_InputActionEvent_7(const struct FKey& Key);
	void _Pick_Up_Survivor_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Attack_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PhysicsTick(float SubstepDeltaTime);
	void ServerProp(class AActor* HitActor);
	void MulticastProp(class AActor* HitActor);
	void CapsuleComponentChangeLocation();
	void ItemMovementEvent();
	void SetVectors(const struct FVector& Forward, const struct FVector& Right, const struct FRotator& AxisRotator);
	void ServerPerson(bool TimerOver_);
	void MulticastPerson(bool TimerOver_);
	void PropOutlineEffect();
	void RotateEvent();
	void ServerPropJump(float JumpAlpha, bool Wall_);
	void MulticastPropJump(float JumpAlpha, bool Wall_);
	void PropJumpSound(float JumpAlpha, bool Wall_);
	void GetSurvNickname(bool ClearNickname_);
	void EndJumpCheck();
	void ServerPropSound();
	void MulticastPropSound();
	void BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit);
	void GetCurrentCapsuleValues();
	void AtackAudio();
	void AttackAudioServ();
	void AttackAudioMulti();
	void LocalProp(class AActor* Target);
	void LocalPerson(bool TimerOver_);
	void KillerCatchSound();
	void KillerLaugh();
	void AfterJumpMulti();
	void JumpSoundKillerMulti();
	void AnimationFootstepsActivation();
	void KnifeToggle(bool On_, bool OnFPP_);
	void ParticleToggle(bool On_);
	void AtackAnimMulti();
	void BlindSound();
	void KillerDetectMulti();
	void PickUp_Multi(class ASurvivorMasterBP_C* SurvRef);
	void DropMulti();
	void ToChairMulti(class AHypnoChairBP_C* NewParam);
	void SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_);
	void DelayOffMulti();
	void LocalParticleToggle(bool On_);
	void FakeAnimationServer(bool Alarm_, bool Healing_, bool OffAll_);
	void FakeAnimationMulticast(bool Alarm_, bool Healing_, bool OffAll_);
	void SpawnCoins(class ASurvivorMasterBP_C* ref);
	void StunBySurvivor(float StunTime, class ASurvivorMasterBP_C* helpSurv);
	void CheckMoveServer(bool On_);
	void HealSound(bool On_);
	void HealSoundServer(bool On_);
	void HealSoundMulticast(bool On_);
	void AlarmSoundServer(bool On_, class AActor* Actor);
	void AlarmsSoundMulticast(bool On_, class AActor* Actor);
	void StopFakeAnim();
	void StartAnimShot();
	void StartAnimShotServ();
	void StartAnimShotMulti();
	void SeekMulti();
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_Left_K2Node_InputAxisEvent_9(float AxisValue);
	void InpAxisEvt_Right_K2Node_InputAxisEvent_10(float AxisValue);
	void WallJumpParticleServer(const struct FTransform& SpawnTransform);
	void WallJumpParticleMulticast(const struct FTransform& SpawnTransform);
	void HUD_JumpIn();
	void HUD_JumpOut();
	void NicknameProp();
	void NicknameLerp(const struct FVector& A);
	void CheckPressedAndMoved();
	void StaminaDecrease();
	void StaminaIncrease();
	void JumpSoundKillerLocal();
	void CapsuleSet(bool Surv_);
	void ReturnPersonTimerEnd();
	void PointsTick();
	void InteractPressed();
	void InteractReleased();
	void SurvRunawaySound();
	void SetKIllerVisibleToSurv();
	void SetKillerNotVisibleToSurv();
	void Glue(float B);
	void YellowJar(float PlaybackSpeed);
	void ExecuteUbergraph_Doppelganger(int EntryPoint);
	void IsProp__DelegateSignature(bool IsProp);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
