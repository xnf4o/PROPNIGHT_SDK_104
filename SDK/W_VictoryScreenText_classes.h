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

// WidgetBlueprintGeneratedClass W_VictoryScreenText.W_VictoryScreenText_C
// 0x001D (FullSize[0x027D] - InheritedSize[0x0260])
class UW_VictoryScreenText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USizeBox*                                    SizeBox_1;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_53;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Alpha;                                                     // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Start_;                                                    // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VictoryScreenText.W_VictoryScreenText_C");
		return ptr;
	}



	void SetLetterColor(const struct FLinearColor& TextColor, const struct FLinearColor& OutlineColor);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetTextAndStart(const struct FString& Text, int Number);
	void FirstText(const struct FString& Text);
	void ExecuteUbergraph_W_VictoryScreenText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
