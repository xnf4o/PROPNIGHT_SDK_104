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
// Parameters
//---------------------------------------------------------------------------

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.PreConstruct
struct UInteractableButtonsWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButton
struct UInteractableButtonsWidget_C_ShowButton_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputMapping;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideButton
struct UInteractableButtonsWidget_C_HideButton_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideAllButtons
struct UInteractableButtonsWidget_C_HideAllButtons_Params
{
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.AddInteractable
struct UInteractableButtonsWidget_C_AddInteractable_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InputMapping;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.RemoveInteractable
struct UInteractableButtonsWidget_C_RemoveInteractable_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.Construct
struct UInteractableButtonsWidget_C_Construct_Params
{
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.Tick
struct UInteractableButtonsWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButtonAndClearOtherButtons
struct UInteractableButtonsWidget_C_ShowButtonAndClearOtherButtons_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FName                                       ActionName;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InteractableButtonsWidget.InteractableButtonsWidget_C.ExecuteUbergraph_InteractableButtonsWidget
struct UInteractableButtonsWidget_C_ExecuteUbergraph_InteractableButtonsWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
