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

// BlueprintGeneratedClass BP_ItemsManager.BP_ItemsManager_C
// 0x00FC (FullSize[0x01AC] - InheritedSize[0x00B0])
class UBP_ItemsManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_ItemSpawnPoint_C*>                SpawnPoints;                                               // 0x00B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class UClass*, float>                         SupportItems;                                              // 0x00C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, float>                         ToolItems;                                                 // 0x0118(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             SupportItemNames;                                          // 0x0168(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             ToolItemNames;                                             // 0x0178(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_SpawnItemChanceRange>             SupportItemsV2;                                            // 0x0188(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_SpawnItemChanceRange>             ToolItemsV2;                                               // 0x0198(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Temp;                                                      // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemsManager.BP_ItemsManager_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnStartGame();
	void ExecuteUbergraph_BP_ItemsManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
