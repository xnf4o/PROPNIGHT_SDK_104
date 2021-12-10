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
//		Name   -> Function HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C.ClearWidgets
//		Flags  -> ()
void AHUD_PropHunt_Tutorial_C::ClearWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C.ClearWidgets");

	AHUD_PropHunt_Tutorial_C_ClearWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C.HitMarkRemove
//		Flags  -> ()
void AHUD_PropHunt_Tutorial_C::HitMarkRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C.HitMarkRemove");

	AHUD_PropHunt_Tutorial_C_HitMarkRemove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C.ExecuteUbergraph_HUD_PropHunt_Tutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_Tutorial_C::ExecuteUbergraph_HUD_PropHunt_Tutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt_Tutorial.HUD_PropHunt_Tutorial_C.ExecuteUbergraph_HUD_PropHunt_Tutorial");

	AHUD_PropHunt_Tutorial_C_ExecuteUbergraph_HUD_PropHunt_Tutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
