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

// BlueprintGeneratedClass Banshee_Tutorial.Banshee_Tutorial_C
// 0x0010 (FullSize[0x1380] - InheritedSize[0x1370])
class ABanshee_Tutorial_C : public ABanshee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UW_Tutorial_Quest_C*                         QuestWidget;                                               // 0x1378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Banshee_Tutorial.Banshee_Tutorial_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void pickup();
	void ChairEvent(class AHypnoChairBP_C* Chair);
	void ExecuteUbergraph_Banshee_Tutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
