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

// Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Construct
struct UInteractableButtonsComponentWidget_C_Construct_Params
{
};

// Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Tick
struct UInteractableButtonsComponentWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.SetMainText
struct UInteractableButtonsComponentWidget_C_SetMainText_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractableText;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Actor;                                                     // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.ExecuteUbergraph_InteractableButtonsComponentWidget
struct UInteractableButtonsComponentWidget_C_ExecuteUbergraph_InteractableButtonsComponentWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
