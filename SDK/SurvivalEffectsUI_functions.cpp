// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.GetVisibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USurvivalEffectsUI_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.GetVisibility_1");

	USurvivalEffectsUI_C_GetVisibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalEffectsUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.Tick");

	USurvivalEffectsUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.HitEffect
//		Flags  -> ()
void USurvivalEffectsUI_C::HitEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.HitEffect");

	USurvivalEffectsUI_C_HitEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.BleedingEffect
//		Flags  -> ()
// Parameters:
//		bool                                               Bleeding_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvivalEffectsUI_C::BleedingEffect(bool Bleeding_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.BleedingEffect");

	USurvivalEffectsUI_C_BleedingEffect_Params params {};
	params.Bleeding_ = Bleeding_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeIn
//		Flags  -> ()
void USurvivalEffectsUI_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeIn");

	USurvivalEffectsUI_C_FadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeOut
//		Flags  -> ()
void USurvivalEffectsUI_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.FadeOut");

	USurvivalEffectsUI_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalEffectsUI.SurvivalEffectsUI_C.ExecuteUbergraph_SurvivalEffectsUI
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalEffectsUI_C::ExecuteUbergraph_SurvivalEffectsUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalEffectsUI.SurvivalEffectsUI_C.ExecuteUbergraph_SurvivalEffectsUI");

	USurvivalEffectsUI_C_ExecuteUbergraph_SurvivalEffectsUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
