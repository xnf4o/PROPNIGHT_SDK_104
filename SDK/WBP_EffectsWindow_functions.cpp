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
//		Name   -> Function WBP_EffectsWindow.WBP_EffectsWindow_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EffectsWindow_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectsWindow.WBP_EffectsWindow_C.PreConstruct");

	UWBP_EffectsWindow_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectsWindow.WBP_EffectsWindow_C.Add Status
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_EffectsWindow_C::Add_Status(int Index, float Duration, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectsWindow.WBP_EffectsWindow_C.Add Status");

	UWBP_EffectsWindow_C_Add_Status_Params params {};
	params.Index = Index;
	params.Duration = Duration;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectsWindow.WBP_EffectsWindow_C.ExecuteUbergraph_WBP_EffectsWindow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EffectsWindow_C::ExecuteUbergraph_WBP_EffectsWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectsWindow.WBP_EffectsWindow_C.ExecuteUbergraph_WBP_EffectsWindow");

	UWBP_EffectsWindow_C_ExecuteUbergraph_WBP_EffectsWindow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
