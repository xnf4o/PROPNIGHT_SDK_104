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

// BlueprintGeneratedClass Rabbit.Rabbit_C
// 0x0090 (FullSize[0x1329] - InheritedSize[0x1299])
class ARabbit_C : public AKillerMasterBP_C
{
public:
	unsigned char                                      UnknownData_MTCL[0x7];                                     // 0x1299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChargeSpell_C*                              ChargeSpell;                                               // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNiagaraComponent*                           NiagaraChainsawVroom;                                      // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNiagaraComponent*                           NiagaraChainsawMain;                                       // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        RadioFpp;                                                  // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Radio;                                                     // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio3;                                                // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               ChainCollusion;                                            // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio2_1;                                              // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      ChainsawFPPMesh;                                           // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      ChainsawMesh;                                              // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UToyBomb_C*                                  ToyBomb;                                                   // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UChainsaw_C*                                 Chainsaw;                                                  // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ChargeAttack;                                              // 0x1308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J4E6[0x7];                                     // 0x1309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODAudioComponent*                         ChargeSound;                                               // 0x1310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ChainCollisionActor;                                       // 0x1318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                          FmodChainsawTerr;                                          // 0x1320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BChainsawTerror;                                           // 0x1328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Rabbit.Rabbit_C");
		return ptr;
	}



	void InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit);
	void ChargeStartServ(bool Cast, bool Move);
	void ChargeStartMulti(bool Cast, bool Move);
	void ChargeAttackServ(bool B);
	void ChargeAttackMulti(bool B);
	void IntroWeapon();
	void MeshVisibiltyOff();
	void MeshVisibilityOn();
	void PickUp_Multi(class ASurvivorMasterBP_C* SurvRef);
	void FirstPersonCamEvent(bool Now_, bool NoDelay_);
	void TPPWeaponOnServ(bool B);
	void TPPWeaponOnMulti(bool B);
	void AttackAudioServ();
	void AttackAudioMulti();
	void AtackAudio();
	void KillerLaugh();
	void SurvRunawaySound();
	void KillerDetectMulti();
	void DelayOffMulti();
	void JumpSoundKillerMulti();
	void JumpSoundKillerLocal();
	void AfterJumpMulti();
	void BlindSound();
	void ChargeSoundLocal(bool B);
	void SeekMulti();
	void BndEvt__ChainCollusion_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CollisionChain();
	void ChainsawTerrorLocal(bool B);
	void ChainsawTerrorServ(bool B);
	void ChainsawTerrorMulti(bool B);
	void AmbientOff();
	void DropMulti();
	void ToChairMulti(class AHypnoChairBP_C* NewParam);
	void ExecuteUbergraph_Rabbit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
