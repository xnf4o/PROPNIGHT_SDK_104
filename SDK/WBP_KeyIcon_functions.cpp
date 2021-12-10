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
//		Name   -> Function WBP_KeyIcon.WBP_KeyIcon_C.SetActionName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyIcon_C::SetActionName(const struct FName& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyIcon.WBP_KeyIcon_C.SetActionName");

	UWBP_KeyIcon_C_SetActionName_Params params {};
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_KeyIcon.WBP_KeyIcon_C.SetButtonContent
//		Flags  -> ()
// Parameters:
void UWBP_KeyIcon_C::SetButtonContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyIcon.WBP_KeyIcon_C.SetButtonContent");

	UWBP_KeyIcon_C_SetButtonContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_KeyIcon.WBP_KeyIcon_C.SetButtonStyle
//		Flags  -> ()
// Parameters:
//		bool                                               ShowBorder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyIcon_C::SetButtonStyle(bool ShowBorder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyIcon.WBP_KeyIcon_C.SetButtonStyle");

	UWBP_KeyIcon_C_SetButtonStyle_Params params {};
	params.ShowBorder = ShowBorder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_KeyIcon.WBP_KeyIcon_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyIcon.WBP_KeyIcon_C.PreConstruct");

	UWBP_KeyIcon_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_KeyIcon.WBP_KeyIcon_C.ExecuteUbergraph_WBP_KeyIcon
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyIcon_C::ExecuteUbergraph_WBP_KeyIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyIcon.WBP_KeyIcon_C.ExecuteUbergraph_WBP_KeyIcon");

	UWBP_KeyIcon_C_ExecuteUbergraph_WBP_KeyIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
