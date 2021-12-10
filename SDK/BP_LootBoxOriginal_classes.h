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

// BlueprintGeneratedClass BP_LootBoxOriginal.BP_LootBoxOriginal_C
// 0x0008 (FullSize[0x04D0] - InheritedSize[0x04C8])
class ABP_LootBoxOriginal_C : public ABP_LootBox_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootBoxOriginal.BP_LootBoxOriginal_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LootBoxOriginal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
