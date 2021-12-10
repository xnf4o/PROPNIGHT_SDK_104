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

// WidgetBlueprintGeneratedClass W_PathSeparator.W_PathSeparator_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UW_PathSeparator_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_55;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PathSeparator.W_PathSeparator_C");
		return ptr;
	}



	void SetEnabled(bool IsEnabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
