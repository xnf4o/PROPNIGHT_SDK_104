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

// BlueprintGeneratedClass Keymaster.Keymaster_C
// 0x00A7 (FullSize[0x1340] - InheritedSize[0x1299])
class AKeymaster_C : public AKillerMasterBP_C
{
public:
	unsigned char                                      UnknownData_HSO1[0x7];                                     // 0x1299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNiagaraComponent*                           Hammer_slashFX_VFX;                                        // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNiagaraComponent*                           Hammer_slashFX_;                                           // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HammerIntro;                                               // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HammerInvis;                                               // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hammer;                                                    // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HammerFPPInvis;                                            // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HammerFPP;                                                 // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKeymasterLevelSystem_C*                     KeymasterLevelSystem;                                      // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio2_1;                                              // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FPPSMINVIS;                                                // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      MeshInvis;                                                 // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpyEyes_C*                                  SpyEyes;                                                   // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAstral_C*                                   Astral;                                                    // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UShoot_C*                                    Shoot;                                                     // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_5_0_alpha_F6D4614945F224AEFEB4E0AAB4F8AE2D;       // 0x1318(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_5_0__Direction_F6D4614945F224AEFEB4E0AAB4F8AE2D;  // 0x131C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QT22[0x3];                                     // 0x131D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5_1;                                              // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AudioBool;                                                 // 0x1328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9VSX[0x7];                                     // 0x1329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    HamMat;                                                    // 0x1330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    HamMatTpp;                                                 // 0x1338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Keymaster.Keymaster_C");
		return ptr;
	}



	void Timeline_5_0__FinishedFunc();
	void Timeline_5_0__UpdateFunc();
	void InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1(const struct FKey& Key);
	void AtackAudio();
	void AstralSoundIn();
	void AstralSoundInvisibility();
	void AstralSoundOut(bool NewParam);
	void ReceiveBeginPlay();
	void CD_Widget_Strat(const struct FString& AbilityName);
	void SurvSpyEyeOff(class ASpyEye_C* SpyEye, class ASurvivorMasterBP_C* SurvRef);
	void ExplosionSoundServ(class UStaticMeshComponent* bullet);
	void ExplosionSoundMulti(class UStaticMeshComponent* BulletMesh);
	void ShootAudio();
	void ShootAudioServ();
	void ShootAudioMulti();
	void AmmoSet(int Ammo);
	void AmmoRotation(const struct FRotator& Rotator);
	void StartAnimShot();
	void StartAnimShotServ();
	void StartAnimShotMulti();
	void EyeSpooting(class USkeletalMeshComponent* NewParam);
	void EyeSpootingServ(class USkeletalMeshComponent* NewParam);
	void EyeSpootingMulti(class USkeletalMeshComponent* NewParam);
	void AstralSoundInServ();
	void AstralSoundInMulti();
	void AstralSoundInvisibiltyServ();
	void AstralSoundInvisibilityMulti();
	void AstralSoundOutServ();
	void AstralSoundOutMulti();
	void SurvOffInEye(class ASurvivorMasterBP_C* SurvRef);
	void SurvOnInEye(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye);
	void SurvSpyEyeOn(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye);
	void AttackAudioServ();
	void AttackAudioMulti();
	void SetLevelSystem();
	void KillerCatchSound();
	void KillerLaugh();
	void JumpSoundKillerMulti();
	void BlindSound();
	void AfterJumpMulti();
	void SurvRunawaySound();
	void KillerDetectMulti();
	void DelayOffMulti();
	void SeekMulti();
	void MeshVisibiltyOff();
	void MeshVisibilityOn();
	void HammerMatDyn();
	void HammerVfx();
	void IntroWeapon();
	void PickUp_Multi(class ASurvivorMasterBP_C* SurvRef);
	void Hum();
	void HumMulti();
	void FirstPersonCamEvent(bool Now_, bool NoDelay_);
	void JumpSoundKillerLocal();
	void ExecuteUbergraph_Keymaster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
