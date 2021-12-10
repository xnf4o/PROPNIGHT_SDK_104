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
//		Name   -> Function WBP_Tip.WBP_Tip_C.LoadTip
//		Flags  -> ()
// Parameters:
//		struct FName                                       TipName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tip_C::LoadTip(const struct FName& TipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.LoadTip");

	UWBP_Tip_C_LoadTip_Params params {};
	params.TipName = TipName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Tip_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.PreConstruct");

	UWBP_Tip_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.RemoveTips
//		Flags  -> ()
void UWBP_Tip_C::RemoveTips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.RemoveTips");

	UWBP_Tip_C_RemoveTips_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.Construct
//		Flags  -> ()
void UWBP_Tip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.Construct");

	UWBP_Tip_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.Tick");

	UWBP_Tip_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.Show
//		Flags  -> ()
void UWBP_Tip_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.Show");

	UWBP_Tip_C_Show_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.SetCurrentTip
//		Flags  -> ()
// Parameters:
//		int                                                TipIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tip_C::SetCurrentTip(int TipIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.SetCurrentTip");

	UWBP_Tip_C_SetCurrentTip_Params params {};
	params.TipIndex = TipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.ShowCurrentTip
//		Flags  -> ()
void UWBP_Tip_C::ShowCurrentTip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.ShowCurrentTip");

	UWBP_Tip_C_ShowCurrentTip_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Tip.WBP_Tip_C.ExecuteUbergraph_WBP_Tip
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tip_C::ExecuteUbergraph_WBP_Tip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tip.WBP_Tip_C.ExecuteUbergraph_WBP_Tip");

	UWBP_Tip_C_ExecuteUbergraph_WBP_Tip_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
