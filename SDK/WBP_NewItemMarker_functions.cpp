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
//		Name   -> Function WBP_NewItemMarker.WBP_NewItemMarker_C.SetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NewItemMarker_C::SetVisible(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_NewItemMarker.WBP_NewItemMarker_C.SetVisible");

	UWBP_NewItemMarker_C_SetVisible_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_NewItemMarker.WBP_NewItemMarker_C.Construct
//		Flags  -> ()
void UWBP_NewItemMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_NewItemMarker.WBP_NewItemMarker_C.Construct");

	UWBP_NewItemMarker_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_NewItemMarker.WBP_NewItemMarker_C.ExecuteUbergraph_WBP_NewItemMarker
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewItemMarker_C::ExecuteUbergraph_WBP_NewItemMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_NewItemMarker.WBP_NewItemMarker_C.ExecuteUbergraph_WBP_NewItemMarker");

	UWBP_NewItemMarker_C_ExecuteUbergraph_WBP_NewItemMarker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
