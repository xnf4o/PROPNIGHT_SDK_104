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

// BlueprintGeneratedClass MineSpell.MineSpell_C
// 0x0024 (FullSize[0x010C] - InheritedSize[0x00E8])
class UMineSpell_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               SkillActivated_;                                           // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7PTC[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMine_C*>                             Mines;                                                     // 0x00F8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Count;                                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MineSpell.MineSpell_C");
		return ptr;
	}



	void OnRep_Mines();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Cast();
	void SpawnMineServer();
	void ActorDestroyed(class AMine_C* Mine);
	void ClientCount(int Count);
	void PlantServer(bool On_);
	void PlantMulticast(bool On_);
	void ExecuteUbergraph_MineSpell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
