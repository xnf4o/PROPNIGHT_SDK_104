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
//		Name   -> Function SkillPoints.SkillPoints_C.GetText_2
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText USkillPoints_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.GetText_2");

	USkillPoints_C_GetText_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.GetText_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText USkillPoints_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.GetText_1");

	USkillPoints_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.GetColorAndOpacity_1
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor USkillPoints_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.GetColorAndOpacity_1");

	USkillPoints_C_GetColorAndOpacity_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.Get_TextBlock_1_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText USkillPoints_C::Get_TextBlock_1_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.Get_TextBlock_1_Text_1");

	USkillPoints_C_Get_TextBlock_1_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.GetVisibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility USkillPoints_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.GetVisibility_1");

	USkillPoints_C_GetVisibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SetTextsSkill
//		Flags  -> ()
void USkillPoints_C::SetTextsSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SetTextsSkill");

	USkillPoints_C_SetTextsSkill_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SelectedSkillUpStop
//		Flags  -> ()
void USkillPoints_C::SelectedSkillUpStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SelectedSkillUpStop");

	USkillPoints_C_SelectedSkillUpStop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SelectedSkillUpStart
//		Flags  -> ()
void USkillPoints_C::SelectedSkillUpStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SelectedSkillUpStart");

	USkillPoints_C_SelectedSkillUpStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SurvClassCheck
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvClass_ESurvClass>                  Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillPoints_C::SurvClassCheck(TEnumAsByte<SurvClass_ESurvClass> Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SurvClassCheck");

	USkillPoints_C_SurvClassCheck_Params params {};
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.DeselectAll
//		Flags  -> ()
void USkillPoints_C::DeselectAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.DeselectAll");

	USkillPoints_C_DeselectAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SetSkill
//		Flags  -> ()
// Parameters:
//		int                                                SkillNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OffSound_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkillPoints_C::SetSkill(int SkillNumber, bool OffSound_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SetSkill");

	USkillPoints_C_SetSkill_Params params {};
	params.SkillNumber = SkillNumber;
	params.OffSound_ = OffSound_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SetSkillTexts
//		Flags  -> ()
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USkillPoints_C::SetSkillTexts(const struct FText& Title, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SetSkillTexts");

	USkillPoints_C_SetSkillTexts_Params params {};
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.KillerIconCreate
//		Flags  -> ()
void USkillPoints_C::KillerIconCreate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.KillerIconCreate");

	USkillPoints_C_KillerIconCreate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SurvIconCreate
//		Flags  -> ()
void USkillPoints_C::SurvIconCreate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SurvIconCreate");

	USkillPoints_C_SurvIconCreate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.SwitchWindow
//		Flags  -> ()
void USkillPoints_C::SwitchWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.SwitchWindow");

	USkillPoints_C_SwitchWindow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillPoints_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.Tick");

	USkillPoints_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.Construct
//		Flags  -> ()
void USkillPoints_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.Construct");

	USkillPoints_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SkillPoints.SkillPoints_C.ExecuteUbergraph_SkillPoints
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillPoints_C::ExecuteUbergraph_SkillPoints(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkillPoints.SkillPoints_C.ExecuteUbergraph_SkillPoints");

	USkillPoints_C_ExecuteUbergraph_SkillPoints_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
