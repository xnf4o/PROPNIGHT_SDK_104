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
//		Name   -> Function Test0_MAIN_MENU_4.Test0_MAIN_MENU_C.ReceiveBeginPlay
//		Flags  -> ()
void ATest0_MAIN_MENU_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Test0_MAIN_MENU_4.Test0_MAIN_MENU_C.ReceiveBeginPlay");

	ATest0_MAIN_MENU_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Test0_MAIN_MENU_4.Test0_MAIN_MENU_C.ExecuteUbergraph_Test0_MAIN_MENU_4
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATest0_MAIN_MENU_C::ExecuteUbergraph_Test0_MAIN_MENU_4(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Test0_MAIN_MENU_4.Test0_MAIN_MENU_C.ExecuteUbergraph_Test0_MAIN_MENU_4");

	ATest0_MAIN_MENU_C_ExecuteUbergraph_Test0_MAIN_MENU_4_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
