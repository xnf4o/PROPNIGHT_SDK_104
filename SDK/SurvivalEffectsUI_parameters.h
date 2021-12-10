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

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.GetVisibility_1
struct USurvivalEffectsUI_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.Tick
struct USurvivalEffectsUI_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.HitEffect
struct USurvivalEffectsUI_C_HitEffect_Params
{
};

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.BleedingEffect
struct USurvivalEffectsUI_C_BleedingEffect_Params
{
	bool                                               Bleeding_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeIn
struct USurvivalEffectsUI_C_FadeIn_Params
{
};

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeOut
struct USurvivalEffectsUI_C_FadeOut_Params
{
};

// Function SurvivalEffectsUI.SurvivalEffectsUI_C.ExecuteUbergraph_SurvivalEffectsUI
struct USurvivalEffectsUI_C_ExecuteUbergraph_SurvivalEffectsUI_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
