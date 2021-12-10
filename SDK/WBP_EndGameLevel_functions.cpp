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
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.SortCategories
//		Flags  -> ()
// Parameters:
//		bool                                               IsKiller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<TEnumAsByte<KillerCategory_EKillerCategory>> KillerCategories                                           (Parm, OutParm)
//		TArray<TEnumAsByte<SurvCategory_ESurvCategory>>    SurvCategories                                             (Parm, OutParm)
//		TArray<int>                                        IndexArray                                                 (Parm, OutParm)
void UWBP_EndGameLevel_C::SortCategories(bool IsKiller, TArray<TEnumAsByte<KillerCategory_EKillerCategory>>* KillerCategories, TArray<TEnumAsByte<SurvCategory_ESurvCategory>>* SurvCategories, TArray<int>* IndexArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.SortCategories");

	UWBP_EndGameLevel_C_SortCategories_Params params {};
	params.IsKiller = IsKiller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KillerCategories != nullptr)
		*KillerCategories = params.KillerCategories;
	if (SurvCategories != nullptr)
		*SurvCategories = params.SurvCategories;
	if (IndexArray != nullptr)
		*IndexArray = params.IndexArray;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.Init
//		Flags  -> ()
// Parameters:
void UWBP_EndGameLevel_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.Init");

	UWBP_EndGameLevel_C_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.Finished_B822A274428F00E5EB53C7ABDFF43BB6
//		Flags  -> ()
void UWBP_EndGameLevel_C::Finished_B822A274428F00E5EB53C7ABDFF43BB6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.Finished_B822A274428F00E5EB53C7ABDFF43BB6");

	UWBP_EndGameLevel_C_Finished_B822A274428F00E5EB53C7ABDFF43BB6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnNextLevel
//		Flags  -> ()
// Parameters:
//		float                                              RemainsExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalExp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EndGameLevel_C::OnNextLevel(float RemainsExp, float TotalExp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnNextLevel");

	UWBP_EndGameLevel_C_OnNextLevel_Params params {};
	params.RemainsExp = RemainsExp;
	params.TotalExp = TotalExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.AchieveReward
//		Flags  -> ()
void UWBP_EndGameLevel_C::AchieveReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.AchieveReward");

	UWBP_EndGameLevel_C_AchieveReward_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.InitReward
//		Flags  -> ()
// Parameters:
//		struct FName                                       SkinName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EndGameLevel_C::InitReward(const struct FName& SkinName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.InitReward");

	UWBP_EndGameLevel_C_InitReward_Params params {};
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.Construct
//		Flags  -> ()
void UWBP_EndGameLevel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.Construct");

	UWBP_EndGameLevel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnFillingAnimationFinished
//		Flags  -> ()
void UWBP_EndGameLevel_C::OnFillingAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnFillingAnimationFinished");

	UWBP_EndGameLevel_C_OnFillingAnimationFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.PlayAppearanceAnim
//		Flags  -> ()
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EndGameLevel_C::PlayAppearanceAnim(float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.PlayAppearanceAnim");

	UWBP_EndGameLevel_C_PlayAppearanceAnim_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.ExecuteUbergraph_WBP_EndGameLevel
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EndGameLevel_C::ExecuteUbergraph_WBP_EndGameLevel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.ExecuteUbergraph_WBP_EndGameLevel");

	UWBP_EndGameLevel_C_ExecuteUbergraph_WBP_EndGameLevel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnCalculationFinished__DelegateSignature
//		Flags  -> ()
void UWBP_EndGameLevel_C::OnCalculationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnCalculationFinished__DelegateSignature");

	UWBP_EndGameLevel_C_OnCalculationFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
