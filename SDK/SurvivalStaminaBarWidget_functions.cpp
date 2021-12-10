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
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Get_Progress_1_Percent_1
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USurvivalStaminaBarWidget_C::Get_Progress_1_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Get_Progress_1_Percent_1");

	USurvivalStaminaBarWidget_C_Get_Progress_1_Percent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.GetStaminaPercent
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USurvivalStaminaBarWidget_C::GetStaminaPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.GetStaminaPercent");

	USurvivalStaminaBarWidget_C_GetStaminaPercent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Construct
//		Flags  -> ()
void USurvivalStaminaBarWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Construct");

	USurvivalStaminaBarWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalStaminaBarWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.Tick");

	USurvivalStaminaBarWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.PlayHideAnim
//		Flags  -> ()
void USurvivalStaminaBarWidget_C::PlayHideAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.PlayHideAnim");

	USurvivalStaminaBarWidget_C_PlayHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.InterruptHideAnim
//		Flags  -> ()
void USurvivalStaminaBarWidget_C::InterruptHideAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.InterruptHideAnim");

	USurvivalStaminaBarWidget_C_InterruptHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.ExecuteUbergraph_SurvivalStaminaBarWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalStaminaBarWidget_C::ExecuteUbergraph_SurvivalStaminaBarWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalStaminaBarWidget.SurvivalStaminaBarWidget_C.ExecuteUbergraph_SurvivalStaminaBarWidget");

	USurvivalStaminaBarWidget_C_ExecuteUbergraph_SurvivalStaminaBarWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
