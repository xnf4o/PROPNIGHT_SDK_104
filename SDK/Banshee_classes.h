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

// BlueprintGeneratedClass Banshee.Banshee_C
// 0x00D7 (FullSize[0x1370] - InheritedSize[0x1299])
class ABanshee_C : public AKillerMasterBP_C
{
public:
	unsigned char                                      UnknownData_KVHL[0x7];                                     // 0x1299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           PN_Shockwave;                                              // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCurse_C*                                    Curse;                                                     // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODJump;                                                  // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FMODAudio3;                                                // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         ScreamFMOD;                                                // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         CurseS;                                                    // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         FastSoundFmod;                                             // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         RushSoundFmod;                                             // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box1_1;                                                    // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScream_C*                                   Scream;                                                    // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_5_0_Value_AE6778D44E9C7E800202E5B157E4247D;       // 0x1300(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_5_0__Direction_AE6778D44E9C7E800202E5B157E4247D;  // 0x1304(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MZOS[0x3];                                     // 0x1305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5_1;                                              // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_4_0_Value_0DF127DB457CBB3190707499D9292828;       // 0x1310(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_4_0__Direction_0DF127DB457CBB3190707499D9292828;  // 0x1314(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WIWP[0x3];                                     // 0x1315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4_1;                                              // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RMBPRESS;                                                  // 0x1320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1WJT[0x3];                                     // 0x1321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSpeed;                                                 // 0x1324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeSpeedDur;                                              // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewVar_4_1;                                                // 0x132C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlyOff;                                                    // 0x1330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BRCD;                                                      // 0x1331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EEK4[0x2];                                     // 0x1332(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CDSV;                                                      // 0x1334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CurseActor;                                                // 0x1338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Down;                                                      // 0x1340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               JumpPressed;                                               // 0x1341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RP5S[0x6];                                     // 0x1342(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODAudioComponent*                         FMODAudio2_1;                                              // 0x1348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlyDelay;                                                  // 0x1350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ScreamAnim;                                                // 0x1351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CurseAnim;                                                 // 0x1352(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_520Z[0x1];                                     // 0x1353(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayFlyTime;                                              // 0x1354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              hotkeyActorsArray;                                         // 0x1358(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      Other_Actor_1;                                             // 0x1368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Banshee.Banshee_C");
		return ptr;
	}



	void OnRep_ScreamAnim();
	void CurseActorFind(class AActor* InputPin);
	void Timeline_4_0__FinishedFunc();
	void Timeline_4_0__UpdateFunc();
	void Timeline_5_0__FinishedFunc();
	void Timeline_5_0__UpdateFunc();
	void InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Use_Skill_2_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Use_Skill_1_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void MoveSound(bool B);
	void MoveSoundServ(bool B);
	void MoveSoundMulti(bool B);
	void SoundRush(bool B);
	void SoundRushServ(bool B);
	void SoundRushMulti(bool B);
	void CurseSound();
	void CurseSoundServ();
	void CurseSoundMulti();
	void ScreamLocal();
	void ScreamServ();
	void ScreamMulti();
	void MoveSoundMake();
	void AtackAudio();
	void AtackAudioServ();
	void AtackAudioMulti();
	void JumpSoundStartServ(bool B);
	void JumpSoundStartMulti(bool B);
	void CurseKeyStart();
	void KillerCatchSound();
	void KillerLaugh();
	void JumpSoundKillerMulti();
	void BlindSound();
	void KillerDetectMulti();
	void SurvRunawaySound();
	void DelayOffMulti();
	void PlayFast();
	void StopFast();
	void AfterJumpMulti();
	void PlayMove();
	void StopMove();
	void LandJump();
	void KillerVisible();
	void hotkerStarterCurse();
	void NoActorsCurse();
	void StartAnimShot();
	void StartAnimShotServ();
	void StartAnimShotMulti();
	void SeekMulti();
	void InpAxisEvt_Backward_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue);
	void BansheeScream();
	void BansheeFly();
	void ServerBreakGlass(class AInteractableDoor_C* Door);
	void BansheeBreakGlass(class AInteractableDoor_C* Door);
	void JumpSoundKillerLocal();
	void RmbPresserServ(bool B);
	void RmbPresserMulti(bool B);
	void ExecuteUbergraph_Banshee(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
