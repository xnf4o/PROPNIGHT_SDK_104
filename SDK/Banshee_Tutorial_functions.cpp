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
//		Name   -> Function Banshee_Tutorial.Banshee_Tutorial_C.ReceiveBeginPlay
//		Flags  -> ()
void ABanshee_Tutorial_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Banshee_Tutorial.Banshee_Tutorial_C.ReceiveBeginPlay");

	ABanshee_Tutorial_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Banshee_Tutorial.Banshee_Tutorial_C.pickup
//		Flags  -> ()
void ABanshee_Tutorial_C::pickup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Banshee_Tutorial.Banshee_Tutorial_C.pickup");

	ABanshee_Tutorial_C_pickup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Banshee_Tutorial.Banshee_Tutorial_C.ChairEvent
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABanshee_Tutorial_C::ChairEvent(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Banshee_Tutorial.Banshee_Tutorial_C.ChairEvent");

	ABanshee_Tutorial_C_ChairEvent_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Banshee_Tutorial.Banshee_Tutorial_C.ExecuteUbergraph_Banshee_Tutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABanshee_Tutorial_C::ExecuteUbergraph_Banshee_Tutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Banshee_Tutorial.Banshee_Tutorial_C.ExecuteUbergraph_Banshee_Tutorial");

	ABanshee_Tutorial_C_ExecuteUbergraph_Banshee_Tutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
