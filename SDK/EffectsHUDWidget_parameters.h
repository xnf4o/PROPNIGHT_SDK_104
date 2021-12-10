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

// Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeIn
struct UEffectsHUDWidget_C_StartFadeIn_Params
{
};

// Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeOut
struct UEffectsHUDWidget_C_StartFadeOut_Params
{
	bool                                               CheckFade_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EffectsHUDWidget.EffectsHUDWidget_C.FadeCustom
struct UEffectsHUDWidget_C_FadeCustom_Params
{
};

// Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeInCustom
struct UEffectsHUDWidget_C_StartFadeInCustom_Params
{
};

// Function EffectsHUDWidget.EffectsHUDWidget_C.ExecuteUbergraph_EffectsHUDWidget
struct UEffectsHUDWidget_C_ExecuteUbergraph_EffectsHUDWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
