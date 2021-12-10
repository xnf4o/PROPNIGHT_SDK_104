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

// BlueprintGeneratedClass DeadMansChest.DeadMansChest_C
// 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
class UDeadMansChest_C : public UPerkKiller_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class ALootBox_C*>                          LootboxArray;                                              // 0x0128(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DeadMansChest.DeadMansChest_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void CursedPropActivatePerkEffect();
	void CursedPropDeactivatePerkEffect();
	void ExecuteUbergraph_DeadMansChest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
