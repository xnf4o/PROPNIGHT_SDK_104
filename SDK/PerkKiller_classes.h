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

// BlueprintGeneratedClass PerkKiller.PerkKiller_C
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UPerkKiller_C : public UPerk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AKillerMasterBP_C*                           Killer;                                                    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               CursedProp_;                                               // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LS1J[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABasePropBP_C*                               CursedProp;                                                // 0x00E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABasePropBP_C*>                       Props;                                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Perk1Activated;                                            // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Perk2Activated;                                            // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Perk3Activated;                                            // 0x0102(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KU74[0x1];                                     // 0x0103(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Perk1LVL;                                                  // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Perk2LVL;                                                  // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Perk3LVL;                                                  // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALootBox_C*>                          ArrayOfLB;                                                 // 0x0110(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PerkKiller.PerkKiller_C");
		return ptr;
	}



	void Bloodhound();
	void CursedLock();
	void ShowCircuit();
	void FurryDropItem(class AActor* Surv);
	void ActivateBloodlustIfPropmachineFixed();
	void ActivateBloodlust();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CursedPropActivate();
	void CursedPropDeactivate();
	void CursedPropActivatePerkEffect();
	void CursedPropDeactivatePerkEffect();
	void CursedPropVisualEffectSwitcher(class ABasePropBP_C* Prop, bool On_);
	void SetPerk2Activated_SERV();
	void SetPerk2Activated_MULTI();
	void SetPerk1activated_SERV();
	void SetPerk1Activated_MULTI();
	void SetPerk3Activated_SERV();
	void SetPerk3Activated_MULTI();
	void BlockLootBox_SERV(class ALootBox_C* LP);
	void BlockLootBox_MULTI(class ALootBox_C* LP);
	void ShowCircuit_SERV(class ANewAlarmBP_C* Alarm, bool Index);
	void ShowCircuit_MULTI(class ANewAlarmBP_C* Alarm, bool Index);
	void ExecuteUbergraph_PerkKiller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
