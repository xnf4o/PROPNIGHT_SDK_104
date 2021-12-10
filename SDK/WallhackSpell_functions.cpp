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
//		Name   -> Function WallhackSpell.WallhackSpell_C.Cast
//		Flags  -> ()
void UWallhackSpell_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WallhackSpell.WallhackSpell_C.Cast");

	UWallhackSpell_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WallhackSpell.WallhackSpell_C.Uncast
//		Flags  -> ()
void UWallhackSpell_C::Uncast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WallhackSpell.WallhackSpell_C.Uncast");

	UWallhackSpell_C_Uncast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WallhackSpell.WallhackSpell_C.ExecuteUbergraph_WallhackSpell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWallhackSpell_C::ExecuteUbergraph_WallhackSpell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WallhackSpell.WallhackSpell_C.ExecuteUbergraph_WallhackSpell");

	UWallhackSpell_C_ExecuteUbergraph_WallhackSpell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
