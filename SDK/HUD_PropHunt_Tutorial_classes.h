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

// BlueprintGeneratedClass HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C
// 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
class AHUD_PropHunt_Tutorial_C : public AHUD_PropHunt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWBP_HitMarkComponent_KillerAlarm_C*         HitMark;                                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C");
		return ptr;
	}



	void ClearWidgets();
	void HitMarkRemove();
	void ExecuteUbergraph_HUD_PropHunt_Tutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
