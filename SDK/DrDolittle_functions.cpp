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
//		Name   -> Function DrDolittle.DrDolittle_C.ReceiveBeginPlay
//		Flags  -> ()
void UDrDolittle_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DrDolittle.DrDolittle_C.ReceiveBeginPlay");

	UDrDolittle_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DrDolittle.DrDolittle_C.ExecuteUbergraph_DrDolittle
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDrDolittle_C::ExecuteUbergraph_DrDolittle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DrDolittle.DrDolittle_C.ExecuteUbergraph_DrDolittle");

	UDrDolittle_C_ExecuteUbergraph_DrDolittle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
