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

// WidgetBlueprintGeneratedClass GraphicSettingsWBP1.GraphicSettingsWBP1_C
// 0x0258 (FullSize[0x04B8] - InheritedSize[0x0260])
class UGraphicSettingsWBP1_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCustomGraphicButton_C*                      AA_W;                                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_ChangeFOcus;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      EQ_W;                                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      GQ_W;                                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      MB_W;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      PP_W;                                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      RES_W;                                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      SHQ_W;                                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      SM_W;                                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      SQ_W;                                                      // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      TQ_W;                                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      VSyn_W;                                                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FText>                               MainSettings;                                              // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               MainSettings_1;                                            // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               Resolutions;                                               // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                GraphIndex;                                                // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PPIndex;                                                   // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AAIndex;                                                   // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShadowIndex;                                               // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ResIndex;                                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScreenIndex;                                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               GraphCom;                                                  // 0x0310(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               PPCom;                                                     // 0x0320(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               AACom;                                                     // 0x0330(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               ShadowCom;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               ResCom;                                                    // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               ScreenText;                                                // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                           Ress;                                                      // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               ScreenStrings;                                             // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USaveGame*                                   Saved;                                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               SHQCom;                                                    // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               SHQSettings;                                               // 0x03A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SHQIndex;                                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U0WI[0x4];                                     // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               MBCom;                                                     // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MBIndex;                                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QWNF[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               MB_TextBtn;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UButton*                                     LastKnowFocused;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     HoverFocus;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomGraphicButton_C*                      LastKnowFocusKeyboard;                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    EventDispatcher_UpPress;                                   // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UButton*>                             ArrayButtons;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               MouseController_;                                          // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S3MW[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCustomGraphicButton_C*                      Selected;                                                  // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               EQCOM;                                                     // 0x0430(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               EQ_TextBtn;                                                // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                EQIndex;                                                   // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BUXF[0x4];                                     // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               VSyncCom;                                                  // 0x0458(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                VSyncIndex;                                                // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TQIndex;                                                   // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               TQCOM;                                                     // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               TQCOM_Bias;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               TQCOM_Pool;                                                // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget*                                     KeyboardHoveredWidget;                                     // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               TQCOM_MaxAnis;                                             // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GraphicSettingsWBP1.GraphicSettingsWBP1_C");
		return ptr;
	}



	struct FText GetText_11();
	class UWidget* DoCustomNavigation_21(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_20(SlateCore_EUINavigation Navigation);
	struct FText GetText_10();
	class UWidget* DoCustomNavigation_19(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_18(SlateCore_EUINavigation Navigation);
	struct FText GetText_9();
	class UWidget* DoCustomNavigation_17(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_16(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_15(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_14(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_13(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_12(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_11(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_10(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_9(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_8(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_7(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_5(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_6(SlateCore_EUINavigation Navigation);
	class UWidget* Do_Custom_Navigation_4(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_4(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_3(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_2(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_1(SlateCore_EUINavigation Navigation);
	void LastKnowFocusMouse(class UCustomGraphicButton_C** Output_Get);
	class UWidget* DoCustomNavigation_UP(SlateCore_EUINavigation Navigation);
	void LastKnowFocus(class UButton** Output_Get, class UCustomGraphicButton_C** Output_Get1);
	void Execute_Com_Func();
	struct FText GetText_8();
	struct FText GetText_7();
	struct FText GetText_6();
	struct FText GetText_5();
	struct FText GetText_4();
	struct FText GetText_3();
	struct FText GetText_2();
	struct FText GetText_1();
	void Save();
	void Load_Func();
	void ScrenText(struct FText* Text);
	void ResText(struct FText* Text);
	void ShadowText(struct FText* Text);
	void AAText(struct FText* Text);
	void PPText(struct FText* Text);
	void GraphText(struct FText* Text);
	void ChangeButtonColor(class UImage* Low, class UImage* Higth, bool Condition, int Index, int Lenght, bool B);
	void ChangePanel(class UCustomGraphicButton_C* Overlay, class UTextBlock* Title, class UTextBlock* Value, class UImage* Image, class UImage* LowBTN, class UImage* HigthBTN, int Index, int Lenght, bool B);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CustomGraphicButton_K2Node_ComponentBoundEvent_19_EventDispatcher_Left__DelegateSignature();
	void BndEvt__CustomGraphicButton_K2Node_ComponentBoundEvent_21_EventDispatcher_Right__DelegateSignature();
	void SetTextForWButtons();
	void BndEvt__PP_W_K2Node_ComponentBoundEvent_23_EventDispatcher_Left__DelegateSignature();
	void BndEvt__PP_W_K2Node_ComponentBoundEvent_24_EventDispatcher_Right__DelegateSignature();
	void BndEvt__AA_W_K2Node_ComponentBoundEvent_27_EventDispatcher_Left__DelegateSignature();
	void BndEvt__AA_W_K2Node_ComponentBoundEvent_28_EventDispatcher_Right__DelegateSignature();
	void BndEvt__SQ_W_K2Node_ComponentBoundEvent_33_EventDispatcher_Left__DelegateSignature();
	void BndEvt__SQ_W_K2Node_ComponentBoundEvent_34_EventDispatcher_Right__DelegateSignature();
	void BndEvt__RES_W_K2Node_ComponentBoundEvent_37_EventDispatcher_Left__DelegateSignature();
	void BndEvt__RES_W_K2Node_ComponentBoundEvent_38_EventDispatcher_Right__DelegateSignature();
	void BndEvt__SM_W_K2Node_ComponentBoundEvent_41_EventDispatcher_Left__DelegateSignature();
	void BndEvt__SM_W_K2Node_ComponentBoundEvent_42_EventDispatcher_Right__DelegateSignature();
	void BndEvt__AAM_W_K2Node_ComponentBoundEvent_45_EventDispatcher_Left__DelegateSignature();
	void BndEvt__AAM_W_K2Node_ComponentBoundEvent_46_EventDispatcher_Right__DelegateSignature();
	void SetFocusToMouse();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void LostFocusMouseClick();
	void BndEvt__GraphicSettingsWBP1_MB_W_K2Node_ComponentBoundEvent_2_EventDispatcher_Left__DelegateSignature();
	void BndEvt__GraphicSettingsWBP1_MB_W_K2Node_ComponentBoundEvent_4_EventDispatcher_Right__DelegateSignature();
	void ChangedSelection(class UCustomGraphicButton_C* Button);
	void BndEvt__GraphicSettingsWBP1_EffQ_W_K2Node_ComponentBoundEvent_0_EventDispatcher_Left__DelegateSignature();
	void BndEvt__GraphicSettingsWBP1_EffQ_W_K2Node_ComponentBoundEvent_1_EventDispatcher_Right__DelegateSignature();
	void BndEvt__GraphicSettingsWBP1_VSyn_W_K2Node_ComponentBoundEvent_5_EventDispatcher_Left__DelegateSignature();
	void BndEvt__GraphicSettingsWBP1_VSyn_W_K2Node_ComponentBoundEvent_6_EventDispatcher_Right__DelegateSignature();
	void BndEvt__GraphicSettingsWBP1_TQ_W_K2Node_ComponentBoundEvent_7_EventDispatcher_Left__DelegateSignature();
	void BndEvt__GraphicSettingsWBP1_TQ_W_K2Node_ComponentBoundEvent_8_EventDispatcher_Right__DelegateSignature();
	void ExecuteUbergraph_GraphicSettingsWBP1(int EntryPoint);
	void EventDispatcher_UpPress__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
