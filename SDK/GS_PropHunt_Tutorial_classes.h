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

// BlueprintGeneratedClass GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C
// 0x0010 (FullSize[0x07A8] - InheritedSize[0x0798])
class AGS_PropHunt_Tutorial_C : public AGS_PropHunt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FFMODEventInstance                          GameEndEvent;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void DecreaseAlarmsCountEvent(TArray<class AActor*> Surfs);
	void SurvTutorialEnd();
	void Wipe();
	void ExecuteUbergraph_GS_PropHunt_Tutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
