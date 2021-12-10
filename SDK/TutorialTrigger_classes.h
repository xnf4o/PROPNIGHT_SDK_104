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

// BlueprintGeneratedClass TutorialTrigger.TutorialTrigger_C
// 0x0022 (FullSize[0x024A] - InheritedSize[0x0228])
class ATutorialTrigger_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AActor*                                      DoorTrigger;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SurvPart2_1;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SurvPart2_2;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QuestTrigger_;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLock;                                                     // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TutorialTrigger.TutorialTrigger_C");
		return ptr;
	}



	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void DoorTriggerEvent(class UObject* Object);
	void SurvPart2_2Event(class UObject* Object);
	void SurvPart2_1Event(class UObject* Object);
	void QuestEvent();
	void Surv();
	void ExecuteUbergraph_TutorialTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
