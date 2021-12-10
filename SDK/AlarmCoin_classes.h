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

// BlueprintGeneratedClass AlarmCoin.AlarmCoin_C
// 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
class AAlarmCoin_C : public ACoinActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AlarmCoin.AlarmCoin_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void TakeCoinMulti(class AActor* Actor, int P);
	void ExecuteUbergraph_AlarmCoin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
