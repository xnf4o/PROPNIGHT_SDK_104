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
//		Name   -> Function AlarmProgressWidget.AlarmProgressWidget_C.GetPercent_1
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAlarmProgressWidget_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmProgressWidget.AlarmProgressWidget_C.GetPercent_1");

	UAlarmProgressWidget_C_GetPercent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmProgressWidget.AlarmProgressWidget_C.Construct
//		Flags  -> ()
void UAlarmProgressWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmProgressWidget.AlarmProgressWidget_C.Construct");

	UAlarmProgressWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmProgressWidget.AlarmProgressWidget_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmProgressWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmProgressWidget.AlarmProgressWidget_C.Tick");

	UAlarmProgressWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmProgressWidget.AlarmProgressWidget_C.ExecuteUbergraph_AlarmProgressWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmProgressWidget_C::ExecuteUbergraph_AlarmProgressWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmProgressWidget.AlarmProgressWidget_C.ExecuteUbergraph_AlarmProgressWidget");

	UAlarmProgressWidget_C_ExecuteUbergraph_AlarmProgressWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
