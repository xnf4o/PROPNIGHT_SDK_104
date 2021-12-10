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

// WidgetBlueprintGeneratedClass ChatWindowText.ChatWindowText_C
// 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
class UChatWindowText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FadeOut;                                                   // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_85;                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              MessageBox;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              Text;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TypeMessage;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       NicknameText;                                              // 0x0298(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       MessageText;                                               // 0x02B0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       ChatTypeMessage;                                           // 0x02C8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               Killer_;                                                   // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_UUX5[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 Normal;                                                    // 0x02E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 Killer;                                                    // 0x0310(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                HidingTimerHandler;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DisplayingTimerHandler;                                    // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Interrupt;                                                 // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YWVQ[0x3];                                     // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HiddenTimeAnimation;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatWindowText.ChatWindowText_C");
		return ptr;
	}



	void IsClipped(bool* IsClipped);
	void Construct();
	void StartHiding(float TimeOffset);
	void StartDisplaying();
	void HidingTick();
	void DisplayingTick();
	void HiddenMessage();
	void ShowMessage();
	void ExecuteUbergraph_ChatWindowText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
