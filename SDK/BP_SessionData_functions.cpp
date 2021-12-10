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
//		Name   -> Function BP_SessionData.BP_SessionData_C.SetWidget
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SessionData_C::SetWidget(class UObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.SetWidget");

	UBP_SessionData_C_SetWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SessionData.BP_SessionData_C.OnSelected
//		Flags  -> ()
void UBP_SessionData_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.OnSelected");

	UBP_SessionData_C_OnSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SessionData.BP_SessionData_C.OnDeselect
//		Flags  -> ()
void UBP_SessionData_C::OnDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.OnDeselect");

	UBP_SessionData_C_OnDeselect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SessionData.BP_SessionData_C.CancelPing
//		Flags  -> ()
void UBP_SessionData_C::CancelPing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.CancelPing");

	UBP_SessionData_C_CancelPing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SessionData.BP_SessionData_C.Add
//		Flags  -> ()
void UBP_SessionData_C::Add()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.Add");

	UBP_SessionData_C_Add_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SessionData.BP_SessionData_C.Remove
//		Flags  -> ()
void UBP_SessionData_C::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.Remove");

	UBP_SessionData_C_Remove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SessionData.BP_SessionData_C.ExecuteUbergraph_BP_SessionData
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SessionData_C::ExecuteUbergraph_BP_SessionData(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SessionData.BP_SessionData_C.ExecuteUbergraph_BP_SessionData");

	UBP_SessionData_C_ExecuteUbergraph_BP_SessionData_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
