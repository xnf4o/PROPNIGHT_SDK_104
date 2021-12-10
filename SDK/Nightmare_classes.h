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

// BlueprintGeneratedClass Nightmare.Nightmare_C
// 0x0038 (FullSize[0x0158] - InheritedSize[0x0120])
class UNightmare_C : public UPerkKiller_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class ANewAlarmBP_C*>                       alarms;                                                    // 0x0128(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int>                                        RandomAlarmIndex;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ANewAlarmBP_C*>                       RandomAlarmsRef;                                           // 0x0148(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Nightmare.Nightmare_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Nightmare(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
