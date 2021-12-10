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

// BlueprintGeneratedClass IntroRail.IntroRail_C
// 0x004A (FullSize[0x028A] - InheritedSize[0x0240])
class AIntroRail_C : public ACameraRig_Rail
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class URectLightComponent*                         RectLight2;                                                // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URectLightComponent*                         RectLight;                                                 // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class URectLightComponent*                         RectLight1;                                                // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCineCameraComponent*                        CineCamera;                                                // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             TargetPoint;                                               // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              StartTimeline_Focus_Distance_83FB9F8F401897F4D30BEAB0968C1557; // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartTimeline_Alpha_83FB9F8F401897F4D30BEAB0968C1557;      // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             StartTimeline__Direction_83FB9F8F401897F4D30BEAB0968C1557; // 0x0278(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z04K[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          StartTimeline;                                             // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Nicknames_;                                                // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               forKiller;                                                 // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass IntroRail.IntroRail_C");
		return ptr;
	}



	void StartTimeline__FinishedFunc();
	void StartTimeline__UpdateFunc();
	void NicknameToggle(bool On_);
	void NicknameRotate();
	void End();
	void ChangeFOV(bool On_);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ChangeValueFOV(float Value);
	void ExecuteUbergraph_IntroRail(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
