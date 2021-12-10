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

// BlueprintGeneratedClass SurvOnChair.SurvOnChair_C
// 0x0024 (FullSize[0x0064] - InheritedSize[0x0040])
class USurvOnChair_C : public UATPCCameraModeScript
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FVector                                     StandartOffset;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tick_;                                                     // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XI3C[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CustomOffset;                                              // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvOnChair.SurvOnChair_C");
		return ptr;
	}



	void K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds);
	void K2_OnEnterCameraMode(class UATPCCameraComponent* Camera);
	void K2_OnExitCameraMode(class UATPCCameraComponent* Camera);
	void ExecuteUbergraph_SurvOnChair(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
