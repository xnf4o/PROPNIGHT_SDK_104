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
//		Name   -> Function WBP_LastChance.WBP_LastChance_C.Construct
//		Flags  -> ()
void UWBP_LastChance_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LastChance.WBP_LastChance_C.Construct");

	UWBP_LastChance_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LastChance.WBP_LastChance_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LastChance_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LastChance.WBP_LastChance_C.Tick");

	UWBP_LastChance_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LastChance.WBP_LastChance_C.ShowLastChance
//		Flags  -> ()
void UWBP_LastChance_C::ShowLastChance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LastChance.WBP_LastChance_C.ShowLastChance");

	UWBP_LastChance_C_ShowLastChance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LastChance.WBP_LastChance_C.HideLastChance
//		Flags  -> ()
void UWBP_LastChance_C::HideLastChance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LastChance.WBP_LastChance_C.HideLastChance");

	UWBP_LastChance_C_HideLastChance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_LastChance.WBP_LastChance_C.ExecuteUbergraph_WBP_LastChance
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LastChance_C::ExecuteUbergraph_WBP_LastChance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LastChance.WBP_LastChance_C.ExecuteUbergraph_WBP_LastChance");

	UWBP_LastChance_C_ExecuteUbergraph_WBP_LastChance_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
