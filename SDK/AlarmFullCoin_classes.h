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

// BlueprintGeneratedClass AlarmFullCoin.AlarmFullCoin_C
// 0x0009 (FullSize[0x0301] - InheritedSize[0x02F8])
class AAlarmFullCoin_C : public ACoinActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               IsChair;                                                   // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AlarmFullCoin.AlarmFullCoin_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void TakeCoinMulti(class AActor* Actor, int P);
	void ExecuteUbergraph_AlarmFullCoin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
