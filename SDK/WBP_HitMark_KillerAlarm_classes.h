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

// WidgetBlueprintGeneratedClass WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C
// 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
class UWBP_HitMark_KillerAlarm_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                                CanvasPanel_HitMarks;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_38;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         PlayerRef;                                                 // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_HitMarkComponent_C*>             HitMarks;                                                  // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_HitMarkComponent_KillerAlarm_C*         TutorialHitMark;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C");
		return ptr;
	}



	void AlarmDone(const struct FVector& InstigatorLocation);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void TutorialAlarm(const struct FVector& InstigatorLocation);
	void ExecuteUbergraph_WBP_HitMark_KillerAlarm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
