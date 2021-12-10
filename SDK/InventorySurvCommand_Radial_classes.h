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

// WidgetBlueprintGeneratedClass InventorySurvCommand_Radial.InventorySurvCommand_Radial_C
// 0x0E68 (FullSize[0x10C8] - InheritedSize[0x0260])
class UInventorySurvCommand_Radial_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            Fade_Fart;                                                 // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Fade_Mission;                                              // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Fade_Baby;                                                 // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1202;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1314;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1401;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_357;                                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_BG;                                                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_H_4;                                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_H_5;                                                 // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_H_6;                                                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_SelectorBG;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_Picker;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      slot_ind0;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      slot_ind1;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Slot_ind2;                                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_ITEM;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_MAIN;                                            // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_MAIN_2;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_action;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Interacting_;                                              // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OZK6[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   InputVector;                                               // 0x0324(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CIndex;                                                    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                PressedStyle_BTN;                                          // 0x0330(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                SelectedStyle_BTN;                                         // 0x05A8(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                DefaultStyle_BTN;                                          // 0x0820(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                DefaultStyle_BTN_3D;                                       // 0x0A98(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CIndex_Music;                                              // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VNV9[0x4];                                     // 0x0D14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FButtonStyle                                DefaultStyle_BTN_3D_1;                                     // 0x0D18(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CIndex_ZOrder;                                             // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EG7H[0x4];                                     // 0x0F94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPaperSprite*>                        Inventory_Icon;                                            // 0x0F98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Healpack;                                                  // 0x0FA8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Flashlight;                                                // 0x0FC0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       EnergyDrink;                                               // 0x0FD8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Picklock;                                                  // 0x0FF0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Key;                                                       // 0x1008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Book;                                                      // 0x1020(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Potion;                                                    // 0x1038(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Shield;                                                    // 0x1050(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Painkiller;                                                // 0x1068(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Tools;                                                     // 0x1080(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       YellowJar;                                                 // 0x1098(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       JarOfGlue;                                                 // 0x10B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventorySurvCommand_Radial.InventorySurvCommand_Radial_C");
		return ptr;
	}



	void Drop_Item();
	void UpdateCurrentInvSlotItem();
	void GetCanvas(class UButton* Button, class UCanvasPanel** Canvas);
	void Select_Mouse();
	void Select();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Enteract_Pressed();
	void Enteract_Released();
	void Construct();
	void MusicHover();
	void BndEvt__SoundCommand_Radial_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SoundCommand_Radial_Button_9_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SoundCommand_Radial_Button_7_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SoundCommand_Radial_Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SoundCommand_Radial_Button_9_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SoundCommand_Radial_Button_7_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void PlayUnhoverAnim();
	void DeselectAll();
	void ExecuteUbergraph_InventorySurvCommand_Radial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
