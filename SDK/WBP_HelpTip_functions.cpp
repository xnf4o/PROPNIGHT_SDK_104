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
//		Name   -> Function WBP_HelpTip.WBP_HelpTip_C.SetContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HelpTip_C::SetContentHeight(float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HelpTip.WBP_HelpTip_C.SetContentHeight");

	UWBP_HelpTip_C_SetContentHeight_Params params {};
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HelpTip.WBP_HelpTip_C.GetContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HelpTip_C::GetContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HelpTip.WBP_HelpTip_C.GetContentHeight");

	UWBP_HelpTip_C_GetContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HelpTip.WBP_HelpTip_C.InitHint
//		Flags  -> ()
// Parameters:
void UWBP_HelpTip_C::InitHint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HelpTip.WBP_HelpTip_C.InitHint");

	UWBP_HelpTip_C_InitHint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HelpTip.WBP_HelpTip_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HelpTip_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HelpTip.WBP_HelpTip_C.PreConstruct");

	UWBP_HelpTip_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HelpTip.WBP_HelpTip_C.ExecuteUbergraph_WBP_HelpTip
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HelpTip_C::ExecuteUbergraph_WBP_HelpTip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HelpTip.WBP_HelpTip_C.ExecuteUbergraph_WBP_HelpTip");

	UWBP_HelpTip_C_ExecuteUbergraph_WBP_HelpTip_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
