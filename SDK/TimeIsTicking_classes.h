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

// BlueprintGeneratedClass TimeIsTicking.TimeIsTicking_C
// 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
class UTimeIsTicking_C : public UPerkKiller_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class ANewAlarmBP_C*>                       alarms;                                                    // 0x0128(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ANewAlarmBP_C*>                       AlarmsRDY;                                                 // 0x0138(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TimeIsTicking.TimeIsTicking_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TimeIsTicking(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
