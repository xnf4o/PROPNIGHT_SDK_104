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

// BlueprintGeneratedClass GrannyTutorial.GrannyTutorial_C
// 0x0027 (FullSize[0x1340] - InheritedSize[0x1319])
class AGrannyTutorial_C : public AGranny_C
{
public:
	unsigned char                                      UnknownData_DR7A[0x7];                                     // 0x1319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAstralTutorial_C*                           AstralTutorial;                                            // 0x1328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               NewVar_5_1;                                                // 0x1330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CDJ2[0x7];                                     // 0x1331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATriggerTeleportPrototypeLevel_C*            teleporter;                                                // 0x1338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GrannyTutorial.GrannyTutorial_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Part2_2();
	void Part2_1();
	void SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_);
	void ExecuteUbergraph_GrannyTutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
