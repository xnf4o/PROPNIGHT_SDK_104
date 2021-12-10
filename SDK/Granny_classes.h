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

// BlueprintGeneratedClass Granny.Granny_C
// 0x0080 (FullSize[0x1319] - InheritedSize[0x1299])
class AGranny_C : public AKillerMasterBP_C
{
public:
	unsigned char                                      UnknownData_Y5RX[0x7];                                     // 0x1299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      FPPSMINVIS;                                                // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      MeshInvis;                                                 // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAstral_C*                                   Astral;                                                    // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMineSpell_C*                                MineSpell;                                                 // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio2_1;                                              // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKnifeShoot_C*                               KnifeShoot;                                                // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGrannyAstral_C*                             GrannyAstral;                                              // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_6_0_NewTrack_0_8F17A98B4A22CE5C14557F88A7B533A0;  // 0x12E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_6_0__Direction_8F17A98B4A22CE5C14557F88A7B533A0;  // 0x12EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2XHO[0x3];                                     // 0x12ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_6_1;                                              // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AstralTimeline_Alpha_5454405F4AD75BD4D8210CA26B2BE808;     // 0x12F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             AstralTimeline__Direction_5454405F4AD75BD4D8210CA26B2BE808; // 0x12FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8TB8[0x3];                                     // 0x12FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          AstralTimeline;                                            // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RMB;                                                       // 0x1308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AstralBuild;                                               // 0x1309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Move_;                                                     // 0x130A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZRN6[0x5];                                     // 0x130B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    AstralMaterial;                                            // 0x1310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bKSS;                                                      // 0x1318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Granny.Granny_C");
		return ptr;
	}



	void AstralTimeline__FinishedFunc();
	void AstralTimeline__UpdateFunc();
	void Timeline_6_0__FinishedFunc();
	void Timeline_6_0__UpdateFunc();
	void InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Attack_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void CD_Widget_Strat(const struct FString& AbilityName);
	void KnifeServ(const struct FVector& NewParam);
	void KnifeMulti(const struct FVector& NewParam);
	void KnifeDetmulti();
	void KnifeDetServ();
	void AtackAudio();
	void WeaponImpact(class UStaticMeshComponent* meshRef);
	void WeaponImpactServ(class UStaticMeshComponent* Mesh);
	void WeaponImpactMulti(class UStaticMeshComponent* Mesh);
	void KnifeDetectorSoundTrue();
	void KnifeDetectorSoundFalse();
	void KnifeShootSoundStart();
	void KnifeSpawnSound();
	void AstralSoundIn();
	void AstralSoundInvisibility();
	void AstralSoundOut(bool NewParam);
	void StartAnimShot();
	void StartAnimShotServ();
	void StartAnimShotMulti();
	void Atack_Audio_Serv();
	void AtackAudioMulti();
	void AstralTeleportFinish();
	void AstralSoundOutServ(bool NewParam);
	void AstralSoundOutMulti(bool NewParam);
	void PickUp_Multi(class ASurvivorMasterBP_C* SurvRef);
	void KillerCatchSound();
	void KillerLaugh();
	void JumpSoundKillerMulti();
	void AfterJumpMulti();
	void BlindSound();
	void SurvRunawaySound();
	void DropMulti();
	void ToChairMulti(class AHypnoChairBP_C* NewParam);
	void SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_);
	void CheckMoveServer(bool On_);
	void AstralPostProcess(bool On_);
	void CreateChildPPMaterial();
	void ThirdPersonCamEvent(bool Now_, bool NoDelay_);
	void FirstPersonCamEvent(bool Now_, bool NoDelay_);
	void KillerDetectMulti();
	void DelayOffMulti();
	void SeekMulti();
	void Perexod();
	void MineKnifeSpawningSound();
	void MineKnifeSpawningSoundServ();
	void MineKnifeSpawningSoundMulti();
	void JumpSoundKillerLocal();
	void MeshVisibiltyOff();
	void MeshVisibilityOn();
	void AstralSoundInServ();
	void AstralSoundInMulti();
	void AstralSoundInvisibiltyServ();
	void AstralSoundInvisibilityMulti();
	void ExecuteUbergraph_Granny(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
