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

// BlueprintGeneratedClass DeathSurvCoin.DeathSurvCoin_C
// 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
class ADeathSurvCoin_C : public ACoinActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DeathSurvCoin.DeathSurvCoin_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_DeathSurvCoin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
