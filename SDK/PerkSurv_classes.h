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

// BlueprintGeneratedClass PerkSurv.PerkSurv_C
// 0x0022 (FullSize[0x00F2] - InheritedSize[0x00D0])
class UPerkSurv_C : public UPerk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Perk1Activated;                                            // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Perk2Activated;                                            // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Perk3Activated;                                            // 0x00E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E6BA[0x1];                                     // 0x00E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Perk1LVL;                                                  // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Perk2LVL;                                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Perk3LVL;                                                  // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KillerToAll;                                               // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bDelayedStun;                                              // 0x00F1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PerkSurv.PerkSurv_C");
		return ptr;
	}



	void GetCurrentEXP(int* CurEXP);
	void GetPointsForPerks(int* PerkPoints);
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void GetPerkName(struct FName* Name, int* PerkIndex);
	void HelpSelfChair(bool* CanSelfHelp);
	void IsAnotherSurvWantToHaveDelayedStun(bool* Yes, int* interger);
	void HittedWannaSeeKiller();
	void DelayedStun();
	void SeeOtherSurvivors();
	void SetToAllKillerSillhouette();
	void See_Killer_Silhouette_Near_Hypno_Chair(bool WannaSee_);
	void AddPercentToRareLP(class ALootBox_C* LP);
	void IfAlarmSucceedIncreaseTime();
	void PropmachineFixAndGetHeal(int B);
	void IncreaseHypnochairTimeSelf(class AHypnoChairBP_C* Chair);
	void PauseHypnohcairTime(class AHypnoChairBP_C* Chair, float BoostTime, bool Pause);
	void RestoreHeallthTimeMultiplier(float RestoreHealthTimeMultiplier);
	void IncreaseMaxPropHealth(bool* increaseHP, bool* _2LVL);
	void IncreaseMaxStamina(float stamina);
	void Increase_HP(int HP);
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
	void IncreaseOnceHP(int HP);
	void SetTimingToAllChairs();
	void SetDepth();
	void LevelUpped(class AActor* PlayerRef);
	void DecreasePerkPoints(int PerkPoints);
	void SurvDropItem(bool lastLVL);
	void ReceiveBeginPlay();
	void SetPerk2Activated_SERV();
	void SetPerk2Activated_MULTI();
	void SetPerk1activated_SERV();
	void SetPerk1Activated_MULTI();
	void SetPerk3Activated_SERV();
	void SetPerk3Activated_MULTI();
	void DelayedStun_SERV();
	void DelayedStun_MULTI();
	void ActivateDelatedStunToAnotherSurv();
	void SetBoostTimeHypnoChair(float BoostTime, class AHypnoChairBP_C* HP);
	void SetBoostTimeHypnoChair_MULTI(class AHypnoChairBP_C* HP, float BoostTime);
	void GetHealFromPropmachine(int B);
	void GetHealFromPropmachine_MULTI(int B);
	void Heal(int B);
	void ExecuteUbergraph_PerkSurv(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
