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

// WidgetBlueprintGeneratedClass SurvivalHealthWidget.SurvivalHealthWidget_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class USurvivalHealthWidget_C : public UUserWidget
{
public:
	class UTextBlock*                                  Health;                                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvivalHealthWidget.SurvivalHealthWidget_C");
		return ptr;
	}



	struct FText GetHealth();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
