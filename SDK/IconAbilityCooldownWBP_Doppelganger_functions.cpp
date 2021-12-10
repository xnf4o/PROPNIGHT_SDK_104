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
//		Name   -> Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.GetText_2
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UIconAbilityCooldownWBP_Doppelganger_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.GetText_2");

	UIconAbilityCooldownWBP_Doppelganger_C_GetText_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.GetText_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UIconAbilityCooldownWBP_Doppelganger_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.GetText_1");

	UIconAbilityCooldownWBP_Doppelganger_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.Construct
//		Flags  -> ()
void UIconAbilityCooldownWBP_Doppelganger_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.Construct");

	UIconAbilityCooldownWBP_Doppelganger_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconAbilityCooldownWBP_Doppelganger_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.Tick");

	UIconAbilityCooldownWBP_Doppelganger_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.ExecuteUbergraph_IconAbilityCooldownWBP_Doppelganger
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconAbilityCooldownWBP_Doppelganger_C::ExecuteUbergraph_IconAbilityCooldownWBP_Doppelganger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP_Doppelganger.IconAbilityCooldownWBP_Doppelganger_C.ExecuteUbergraph_IconAbilityCooldownWBP_Doppelganger");

	UIconAbilityCooldownWBP_Doppelganger_C_ExecuteUbergraph_IconAbilityCooldownWBP_Doppelganger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
