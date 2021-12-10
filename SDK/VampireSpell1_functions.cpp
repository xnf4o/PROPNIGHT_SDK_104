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
//		Name   -> Function VampireSpell1.VampireSpell1_C.Cast
//		Flags  -> ()
void UVampireSpell1_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.Cast");

	UVampireSpell1_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell1.VampireSpell1_C.StartServ
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVampireSpell1_C::StartServ(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.StartServ");

	UVampireSpell1_C_StartServ_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell1.VampireSpell1_C.StartMulti
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVampireSpell1_C::StartMulti(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.StartMulti");

	UVampireSpell1_C_StartMulti_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell1.VampireSpell1_C.StartLocal
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVampireSpell1_C::StartLocal(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.StartLocal");

	UVampireSpell1_C_StartLocal_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell1.VampireSpell1_C.Consume
//		Flags  -> ()
void UVampireSpell1_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.Consume");

	UVampireSpell1_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell1.VampireSpell1_C.Dash
//		Flags  -> ()
void UVampireSpell1_C::Dash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.Dash");

	UVampireSpell1_C_Dash_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireSpell1.VampireSpell1_C.ExecuteUbergraph_VampireSpell1
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireSpell1_C::ExecuteUbergraph_VampireSpell1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireSpell1.VampireSpell1_C.ExecuteUbergraph_VampireSpell1");

	UVampireSpell1_C_ExecuteUbergraph_VampireSpell1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
