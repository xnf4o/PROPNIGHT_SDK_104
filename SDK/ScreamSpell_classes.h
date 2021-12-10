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

// BlueprintGeneratedClass ScreamSpell.ScreamSpell_C
// 0x000C (FullSize[0x00F4] - InheritedSize[0x00E8])
class UScreamSpell_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              ShakeDuration;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ScreamSpell.ScreamSpell_C");
		return ptr;
	}



	void GetFilteredProps(TArray<class ASurvivorMasterBP_C*>* Players, TArray<class ASurvivorMasterBP_C*>* Result);
	void Cast();
	void ReceiveBeginPlay();
	void ServScream(TArray<class ASurvivorMasterBP_C*> Targets);
	void MultiScream(TArray<class ASurvivorMasterBP_C*>* Targets);
	void ExecuteUbergraph_ScreamSpell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
