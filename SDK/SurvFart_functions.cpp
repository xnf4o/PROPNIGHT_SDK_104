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
//		Name   -> Function SurvFart.SurvFart_C.Cast
//		Flags  -> ()
void USurvFart_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvFart.SurvFart_C.Cast");

	USurvFart_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvFart.SurvFart_C.MulticastFart
//		Flags  -> ()
void USurvFart_C::MulticastFart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvFart.SurvFart_C.MulticastFart");

	USurvFart_C_MulticastFart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvFart.SurvFart_C.ServerFart
//		Flags  -> ()
void USurvFart_C::ServerFart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvFart.SurvFart_C.ServerFart");

	USurvFart_C_ServerFart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvFart.SurvFart_C.ExecuteUbergraph_SurvFart
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvFart_C::ExecuteUbergraph_SurvFart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvFart.SurvFart_C.ExecuteUbergraph_SurvFart");

	USurvFart_C_ExecuteUbergraph_SurvFart_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
