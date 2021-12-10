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

// BlueprintGeneratedClass FlashCoin.FlashCoin_C
// 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
class AFlashCoin_C : public ACoinActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FlashCoin.FlashCoin_C");
		return ptr;
	}



	void TakeCoinMulti(class AActor* Actor, int P);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FlashCoin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
