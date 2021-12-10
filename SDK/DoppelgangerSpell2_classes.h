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

// BlueprintGeneratedClass DoppelgangerSpell2.DoppelgangerSpell2_C
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UDoppelgangerSpell2_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class ANewAlarmBP_C*>                       alarms;                                                    // 0x00F0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              SpottedSurvs;                                              // 0x0100(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DoppelgangerSpell2.DoppelgangerSpell2_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Cast();
	void ActivateSpellMulticast();
	void ActivateSpellServ();
	void Consume();
	void ExecuteUbergraph_DoppelgangerSpell2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
