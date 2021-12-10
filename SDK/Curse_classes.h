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

// BlueprintGeneratedClass Curse.Curse_C
// 0x000D (FullSize[0x00F5] - InheritedSize[0x00E8])
class UCurse_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              DelayTime;                                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlantRdy_;                                                 // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Curse.Curse_C");
		return ptr;
	}



	void BoostExitServ(class AExit_C* Exit);
	void BoostExitMulti(class AExit_C* Exit);
	void LootboxBlockServ(class ALootBox_C* lootbox);
	void LootboxBlockMulti(class ALootBox_C* lootbox);
	void BoostAlarmServ(class ANewAlarmBP_C* Alarm);
	void BoostAlarmMulti(class ANewAlarmBP_C* Alarm);
	void Cast();
	void ReceiveTick(float DeltaSeconds);
	void BoostChairServ(class AHypnoChairBP_C* Chair);
	void BoostChairMulti(class AHypnoChairBP_C* Chair);
	void Consume();
	void ExecuteUbergraph_Curse(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
