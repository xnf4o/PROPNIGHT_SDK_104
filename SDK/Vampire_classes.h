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

// BlueprintGeneratedClass Vampire.Vampire_C
// 0x0077 (FullSize[0x1310] - InheritedSize[0x1299])
class AVampire_C : public AKillerMasterBP_C
{
public:
	unsigned char                                      UnknownData_JSD0[0x7];                                     // 0x1299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNiagaraComponent*                           NiagaraShadow;                                             // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpyEyes_C*                                  SpyEyes;                                                   // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio2;                                                // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            BladeDanceSphere;                                          // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UVampireSpell3_C*                            VampireSpell3;                                             // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      WeaponTP;                                                  // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      WeaponFP;                                                  // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UVampireSpell1_C*                            VampireSpell1;                                             // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UVampireSpell2_C*                            VampireSpell2;                                             // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_7_alpha_350AB93E425F2173709E42BB2943C6BB;         // 0x12F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_7__Direction_350AB93E425F2173709E42BB2943C6BB;    // 0x12F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CLRO[0x3];                                     // 0x12F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_8;                                                // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AltAttackAnim_;                                            // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AltAttackas;                                               // 0x1301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1FZ8[0x6];                                     // 0x1302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    BloodlustMat;                                              // 0x1308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Vampire.Vampire_C");
		return ptr;
	}



	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_Skill_1_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_RMB_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void AltAttackServ(bool On_);
	void AltAttackMulti(bool On_);
	void AltAttack(bool On_);
	void Hitter(class ASurvivorMasterBP_C* SurvRef, int Damage, bool knife, bool Range, bool BackStab, bool VampireBite);
	void AltAttackAnim(bool On_);
	void MeshVisibilityOn();
	void MeshVisibiltyOff();
	void BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void KillerLaugh();
	void SurvRunawaySound();
	void KillerDetectMulti();
	void DelayOffMulti();
	void JumpSoundKillerMulti();
	void JumpSoundKillerLocal();
	void AfterJumpMulti();
	void BlindSound();
	void SeekMulti();
	void AttackAudioServ();
	void AttackAudioMulti();
	void AtackAudio();
	void SurvOffInEye(class ASurvivorMasterBP_C* SurvRef);
	void SurvOnInEye(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye);
	void EyeSpooting(class USkeletalMeshComponent* NewParam);
	void SurvSpyEyeOff(class ASpyEye_C* SpyEye, class ASurvivorMasterBP_C* SurvRef);
	void EyeSpootingServ(class USkeletalMeshComponent* NewParam);
	void EyeSpootingMulti(class USkeletalMeshComponent* NewParam);
	void SurvSpyEyeOn(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye);
	void CreateChildPPMaterial();
	void SwitchBloodlustPP(bool On_);
	void ExecuteUbergraph_Vampire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
