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

// BlueprintGeneratedClass SurvTutorial.SurvTutorial_C
// 0x0036 (FullSize[0x17D8] - InheritedSize[0x17A2])
class ASurvTutorial_C : public ASurvivorMasterBP_C
{
public:
	unsigned char                                      UnknownData_UFEZ[0x6];                                     // 0x17A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x17A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class AActor*>                              TutorialGrannys;                                           // 0x17B0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      Part2Granny;                                               // 0x17C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Tutorial_Quest_C*                         QuestWidget;                                               // 0x17C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FirstProp_;                                                // 0x17D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Puppet_;                                                   // 0x17D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               Prop_;                                                     // 0x17D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_S3AK[0x1];                                     // 0x17D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              QuestDelayTime;                                            // 0x17D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvTutorial.SurvTutorial_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ServerJump();
	void PropOutlineEffect();
	void Prop();
	void RotateEvent();
	void ServerPerson();
	void LocalProp(class AActor* InputPin);
	void GetOutServer();
	void HittedMulticast(int Damage, int TrueDamage, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> DamageType, bool Moved_, bool Invulnerability_);
	void BeginFootprint();
	void ExecuteUbergraph_SurvTutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
