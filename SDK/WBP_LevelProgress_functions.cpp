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
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_3
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  Text_CurrentLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::SequenceEvent__ENTRYPOINTWBP_LevelProgress_3(class UTextBlock* Text_CurrentLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_3");

	UWBP_LevelProgress_C_SequenceEvent__ENTRYPOINTWBP_LevelProgress_3_Params params {};
	params.Text_CurrentLevel = Text_CurrentLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_2
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  Text_CurrentLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::SequenceEvent__ENTRYPOINTWBP_LevelProgress_2(class UTextBlock* Text_CurrentLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_2");

	UWBP_LevelProgress_C_SequenceEvent__ENTRYPOINTWBP_LevelProgress_2_Params params {};
	params.Text_CurrentLevel = Text_CurrentLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_1
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  Text_CurrentLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::SequenceEvent__ENTRYPOINTWBP_LevelProgress_1(class UTextBlock* Text_CurrentLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_1");

	UWBP_LevelProgress_C_SequenceEvent__ENTRYPOINTWBP_LevelProgress_1_Params params {};
	params.Text_CurrentLevel = Text_CurrentLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.TimerCallOnFillingFinished
//		Flags  -> ()
void UWBP_LevelProgress_C::TimerCallOnFillingFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.TimerCallOnFillingFinished");

	UWBP_LevelProgress_C_TimerCallOnFillingFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.SkipFilling
//		Flags  -> ()
// Parameters:
void UWBP_LevelProgress_C::SkipFilling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.SkipFilling");

	UWBP_LevelProgress_C_SkipFilling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.Pointification
//		Flags  -> ()
// Parameters:
//		struct FText                                       TextIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       TextOut                                                    (Parm, OutParm)
void UWBP_LevelProgress_C::Pointification(const struct FText& TextIn, struct FText* TextOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.Pointification");

	UWBP_LevelProgress_C_Pointification_Params params {};
	params.TextIn = TextIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextOut != nullptr)
		*TextOut = params.TextOut;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.CalculateLevel
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Update_UI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               UpdateUIBarOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Update_LevelBar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               UpdateAnimTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MinimumXP                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaximumXP                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::CalculateLevel(int Exp, bool Update_UI, bool UpdateUIBarOnly, bool Update_LevelBar, bool UpdateAnimTarget, int* Level, float* MinimumXP, float* MaximumXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.CalculateLevel");

	UWBP_LevelProgress_C_CalculateLevel_Params params {};
	params.Exp = Exp;
	params.Update_UI = Update_UI;
	params.UpdateUIBarOnly = UpdateUIBarOnly;
	params.Update_LevelBar = Update_LevelBar;
	params.UpdateAnimTarget = UpdateAnimTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
	if (MinimumXP != nullptr)
		*MinimumXP = params.MinimumXP;
	if (MaximumXP != nullptr)
		*MaximumXP = params.MaximumXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.StartFilling
//		Flags  -> ()
// Parameters:
//		float                                              UpdateValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::StartFilling(float UpdateValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.StartFilling");

	UWBP_LevelProgress_C_StartFilling_Params params {};
	params.UpdateValue = UpdateValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.AnimTick
//		Flags  -> ()
// Parameters:
void UWBP_LevelProgress_C::AnimTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.AnimTick");

	UWBP_LevelProgress_C_AnimTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.SetLevelBarValue
//		Flags  -> ()
// Parameters:
//		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UpdateAnimTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LevelProgress_C::SetLevelBarValue(float Min, float Max, float Value, bool UpdateAnimTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.SetLevelBarValue");

	UWBP_LevelProgress_C_SetLevelBarValue_Params params {};
	params.Min = Min;
	params.Max = Max;
	params.Value = Value;
	params.UpdateAnimTarget = UpdateAnimTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_1
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  Text_CurrentLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::Text_CurrentLevel_Event_1(class UTextBlock* Text_CurrentLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_1");

	UWBP_LevelProgress_C_Text_CurrentLevel_Event_1_Params params {};
	params.Text_CurrentLevel = Text_CurrentLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_2
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  Text_CurrentLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::Text_CurrentLevel_Event_2(class UTextBlock* Text_CurrentLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_2");

	UWBP_LevelProgress_C_Text_CurrentLevel_Event_2_Params params {};
	params.Text_CurrentLevel = Text_CurrentLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_3
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  Text_CurrentLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::Text_CurrentLevel_Event_3(class UTextBlock* Text_CurrentLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_3");

	UWBP_LevelProgress_C_Text_CurrentLevel_Event_3_Params params {};
	params.Text_CurrentLevel = Text_CurrentLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LevelProgress_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.PreConstruct");

	UWBP_LevelProgress_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.MoveMaxLevel
//		Flags  -> ()
void UWBP_LevelProgress_C::MoveMaxLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.MoveMaxLevel");

	UWBP_LevelProgress_C_MoveMaxLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.NewLevel_AnimPlay
//		Flags  -> ()
void UWBP_LevelProgress_C::NewLevel_AnimPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.NewLevel_AnimPlay");

	UWBP_LevelProgress_C_NewLevel_AnimPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.StartMoving_Anim
//		Flags  -> ()
void UWBP_LevelProgress_C::StartMoving_Anim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.StartMoving_Anim");

	UWBP_LevelProgress_C_StartMoving_Anim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.MovingAnimTick
//		Flags  -> ()
void UWBP_LevelProgress_C::MovingAnimTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.MovingAnimTick");

	UWBP_LevelProgress_C_MovingAnimTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.ExecuteUbergraph_WBP_LevelProgress
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::ExecuteUbergraph_WBP_LevelProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.ExecuteUbergraph_WBP_LevelProgress");

	UWBP_LevelProgress_C_ExecuteUbergraph_WBP_LevelProgress_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.OnFillingFinished__DelegateSignature
//		Flags  -> ()
void UWBP_LevelProgress_C::OnFillingFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.OnFillingFinished__DelegateSignature");

	UWBP_LevelProgress_C_OnFillingFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.OnChangedValue__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::OnChangedValue__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.OnChangedValue__DelegateSignature");

	UWBP_LevelProgress_C_OnChangedValue__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LevelProgress.WBP_LevelProgress_C.OnFilled__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              RemainsExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalExp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LevelProgress_C::OnFilled__DelegateSignature(float RemainsExp, float TotalExp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LevelProgress.WBP_LevelProgress_C.OnFilled__DelegateSignature");

	UWBP_LevelProgress_C_OnFilled__DelegateSignature_Params params {};
	params.RemainsExp = RemainsExp;
	params.TotalExp = TotalExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
