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

// BlueprintGeneratedClass SurvivorInteraction.SurvivorInteraction_C
// 0x00B4 (FullSize[0x01AC] - InheritedSize[0x00F8])
class USurvivorInteraction_C : public USurvivorSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               SkillActivated_;                                           // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockTick_;                                                // 0x0101(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E52O[0x6];                                     // 0x0102(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         CrawlPlayer;                                               // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReanimateProgress;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SelfReanimateProgress;                                     // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReanimateAllyFullProgress;                                 // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReanimateSelfFullProgress;                                 // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RestoreHealth;                                             // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6FBA[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANewAlarmBP_C*                               CurrentAlarm;                                              // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomSkillCheck_;                                         // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F941[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeltaSeconds;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullProgressHelpGetOutChair;                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHelpGetOutChair;                                    // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ProgressFull_;                                             // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K3Z8[0x3];                                     // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FullProgressSelfGetOutChair;                               // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSelfGetOutChair;                                    // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomChance;                                              // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomSelfGetOut_;                                         // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DKOL[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AExit_C*                                     Exit;                                                      // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Failed_;                                                   // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IELA[0x3];                                     // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChanceIncreaseRate;                                        // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PenaltyTime;                                               // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSkillCheckTime;                                         // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinSkillCheckTime;                                         // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9MIJ[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODAudioComponent*                         SurvShakingAudio;                                          // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSkillCheckTime;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkillCheckedStarted;                                       // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CloseDoor;                                                 // 0x018D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HCIN[0x2];                                     // 0x018E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkillCheckLevel;                                           // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TutorialBlock_;                                            // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LVFV[0x3];                                     // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALootableMesh_C*                             Lootable_Mesh;                                             // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentLootableTime;                                       // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullLootableTime;                                          // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RestoreHealthSelf;                                         // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvivorInteraction.SurvivorInteraction_C");
		return ptr;
	}



	void SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake);
	void ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style);
	void SendSkillCheck(class AActor* Actor);
	void SendFailed(class AActor* Surv);
	void SendSuccess(class AActor* Surv);
	void SendGreat(class AActor* Surv);
	void ReceiveTick(float DeltaSeconds);
	void Cast();
	void ReanimateAllyServerStart(class ASurvivorMasterBP_C* CrawlPlayer);
	void ReanimateAllyMulticastStart(class ASurvivorMasterBP_C* CrawlPlayer);
	void ReanimateAllyFullProgressMulticast();
	void Uncast();
	void ReanimateAllyServerStop();
	void ReanimateAllyMulticastStop();
	void ReanimateSelfFullProgressMulticast();
	void ReanimateSelfFullProgressServer();
	void ReloadingAlarmServerStart(class ANewAlarmBP_C* Alarm);
	void ReloadingAlarmMulticastStart(class ANewAlarmBP_C* Alarm);
	void OnInvokeWithF();
	void OnUninvokeWithF();
	void ReloadingAlarmServerStop();
	void ReloadingAlarmMulticastStop();
	void HelpOnChairSurvivorServerFinish(class AHypnoChairBP_C* Chair);
	void HelpOnChairSurvivorMulticastFinish(class AHypnoChairBP_C* Chair);
	void HelpOnChairSurvivorServerStart(class AHypnoChairBP_C* Chair);
	void HelpOnChairSurvivorMulticastStart(class AHypnoChairBP_C* Chair);
	void HelpOnChairSurvivorServerStop();
	void HelpOnChairSurvivorMulticastStop();
	void SkillCheckMain();
	void SelfGetOutChairServer(class AHypnoChairBP_C* Chair);
	void SelfGetOutChairMulticast(class AHypnoChairBP_C* Chair);
	void OpenExitServerStart(class AExit_C* Exit);
	void OpenExitMulticastStart(class AExit_C* Exit);
	void OpenExitServerStop();
	void OpenExitMulticastStop();
	void FailedGetOutServer(class AHypnoChairBP_C* Input);
	void CheckActiveSkillCheck();
	void ReanimateAllyFullProgressServer();
	void FailedServer(class ANewAlarmBP_C* Alarm);
	void GreatServer(class ANewAlarmBP_C* Alarm);
	void FailedMulticast(class ANewAlarmBP_C* Target);
	void GreatMulticast(class ANewAlarmBP_C* Target);
	void PassedServer(class ANewAlarmBP_C* Alarm);
	void PassedMulticast(class ANewAlarmBP_C* Alarm);
	void CheckPressed();
	void CheckSurvPosition();
	void Level1Server(class ANewAlarmBP_C* Alarm);
	void Level1Multicast(class ANewAlarmBP_C* Alarm);
	void Level2Server(class ANewAlarmBP_C* Alarm);
	void Level2Multicast(class ANewAlarmBP_C* Alarm);
	void Level3Server(class ANewAlarmBP_C* Alarm);
	void Level3Multicast(class ANewAlarmBP_C* Alarm);
	void Level4Server(class ANewAlarmBP_C* Alarm);
	void Level4Multicast(class ANewAlarmBP_C* Alarm);
	void TakeCoinServer(class ACoinActor_C* Target, class AActor* Actor);
	void TakeCoinMulticast(class ACoinActor_C* Target, class AActor* Actor);
	void Chair_Open_Stage();
	void ServerRandomSelfGetOut(bool RandomSelfGetOut_);
	void MulticastRandomSelfGetOut(bool RandomSelfGetOut_);
	void FailedGetOutMulticast();
	void SelfReanimateSendProgress(float SelfReanimateReplicated);
	void OnChairSkillCheck();
	void CrawlPlayerRotation();
	void DecreaseSkillCheckTime();
	void ServerOnChairPing();
	void MulticastOnChairPing();
	void ShowSavedMessageServer();
	void ShowSavedMessageClient();
	void OnInvokeWithQ();
	void CloseDoorServer(class AInteractableDoor_C* Door, bool Close_, class ASurvivorMasterBP_C* Surv);
	void CloseDoorMulticast(class AInteractableDoor_C* Door, bool Close_, class ASurvivorMasterBP_C* Surv);
	void OverlapReloading(bool On_, class ANewAlarmBP_C* Target);
	void InteractDoor();
	void DestroyItemServer();
	void DestroyItemMulticast();
	void LootingServer(class ALootableMesh_C* LootableMesh, bool Start_);
	void LootingMulticast(class ALootableMesh_C* LootableMesh, bool Start_);
	void HelpSound();
	void CheckAlarmDistance(bool Reset_);
	void ExecuteUbergraph_SurvivorInteraction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
