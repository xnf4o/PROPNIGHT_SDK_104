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
//		Name   -> Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeIn
//		Flags  -> ()
void UEffectsHUDWidget_C::StartFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeIn");

	UEffectsHUDWidget_C_StartFadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeOut
//		Flags  -> ()
// Parameters:
//		bool                                               CheckFade_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEffectsHUDWidget_C::StartFadeOut(bool CheckFade_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeOut");

	UEffectsHUDWidget_C_StartFadeOut_Params params {};
	params.CheckFade_ = CheckFade_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EffectsHUDWidget.EffectsHUDWidget_C.FadeCustom
//		Flags  -> ()
void UEffectsHUDWidget_C::FadeCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EffectsHUDWidget.EffectsHUDWidget_C.FadeCustom");

	UEffectsHUDWidget_C_FadeCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeInCustom
//		Flags  -> ()
void UEffectsHUDWidget_C::StartFadeInCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EffectsHUDWidget.EffectsHUDWidget_C.StartFadeInCustom");

	UEffectsHUDWidget_C_StartFadeInCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EffectsHUDWidget.EffectsHUDWidget_C.ExecuteUbergraph_EffectsHUDWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEffectsHUDWidget_C::ExecuteUbergraph_EffectsHUDWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EffectsHUDWidget.EffectsHUDWidget_C.ExecuteUbergraph_EffectsHUDWidget");

	UEffectsHUDWidget_C_ExecuteUbergraph_EffectsHUDWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
