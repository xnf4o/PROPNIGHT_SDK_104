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
//		Name   -> Function ProgressBarWBP.ProgressBarWBP_C.GetPercent_1
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UProgressBarWBP_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProgressBarWBP.ProgressBarWBP_C.GetPercent_1");

	UProgressBarWBP_C_GetPercent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProgressBarWBP.ProgressBarWBP_C.Construct
//		Flags  -> ()
void UProgressBarWBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProgressBarWBP.ProgressBarWBP_C.Construct");

	UProgressBarWBP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProgressBarWBP.ProgressBarWBP_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressBarWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProgressBarWBP.ProgressBarWBP_C.Tick");

	UProgressBarWBP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProgressBarWBP.ProgressBarWBP_C.ChangeName
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UProgressBarWBP_C::ChangeName(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProgressBarWBP.ProgressBarWBP_C.ChangeName");

	UProgressBarWBP_C_ChangeName_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProgressBarWBP.ProgressBarWBP_C.ChangeButton
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UProgressBarWBP_C::ChangeButton(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProgressBarWBP.ProgressBarWBP_C.ChangeButton");

	UProgressBarWBP_C_ChangeButton_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProgressBarWBP.ProgressBarWBP_C.ExecuteUbergraph_ProgressBarWBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressBarWBP_C::ExecuteUbergraph_ProgressBarWBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProgressBarWBP.ProgressBarWBP_C.ExecuteUbergraph_ProgressBarWBP");

	UProgressBarWBP_C_ExecuteUbergraph_ProgressBarWBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
