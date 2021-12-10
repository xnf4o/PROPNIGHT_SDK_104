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

// WidgetBlueprintGeneratedClass WB_KeyBindings.WB_KeyBindings_C
// 0x0138 (FullSize[0x0398] - InheritedSize[0x0260])
class UWB_KeyBindings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     Button_DefaultCfg;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBar_109;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_Main;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_6;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FName>                               Array_Movement;                                            // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               Array_Surv;                                                // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               Array_Killers;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               Array_Spectator;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               Array_Commons;                                             // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransCfgInput_ACTION                       DefaultCfgActionKeys;                                      // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTransCfgInput_AXIS                         DefaultCfgAxisKeys;                                        // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>              Jump;                                                      // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_BindOverlayHeader_C*                     W_MovementHeader;                                          // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMouseSensivity_C*                           W_MouseSens;                                               // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CounterBackspace;                                          // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K1A7[0x4];                                     // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerHandle;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               isCounterFull_;                                            // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7MLW[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     FocusHovered;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    BlockedBind;                                               // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<struct FName, struct FText>                   Array_Surv_Killer_MapKeys;                                 // 0x0348(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_KeyBindings.WB_KeyBindings_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitCfgInput();
	void BacktoDefaultPress();
	void BacktoDefaultReleas();
	void ClickEventDefCFG();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WB_KeyBindings_Button_DefaultCfg_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void Wave_def0();
	void Wave_def1();
	void StopListenMenu_ButtonReset();
	void StartListenMenu_ButtonReset();
	void ExecuteUbergraph_WB_KeyBindings(int EntryPoint);
	void BlockedBind__DelegateSignature(bool Blocked_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
