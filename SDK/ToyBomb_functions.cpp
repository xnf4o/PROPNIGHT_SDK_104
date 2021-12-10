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
//		Name   -> Function ToyBomb.ToyBomb_C.OnRep_BAnim
//		Flags  -> ()
void UToyBomb_C::OnRep_BAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.OnRep_BAnim");

	UToyBomb_C_OnRep_BAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ToyBomb.ToyBomb_C.SpawnServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     v3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     v3Forw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UToyBomb_C::SpawnServ(const struct FVector& v3, const struct FVector& v3Forw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.SpawnServ");

	UToyBomb_C_SpawnServ_Params params {};
	params.v3 = v3;
	params.v3Forw = v3Forw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ToyBomb.ToyBomb_C.SpawnMulti
//		Flags  -> ()
void UToyBomb_C::SpawnMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.SpawnMulti");

	UToyBomb_C_SpawnMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ToyBomb.ToyBomb_C.SpawnAnimServ
//		Flags  -> ()
void UToyBomb_C::SpawnAnimServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.SpawnAnimServ");

	UToyBomb_C_SpawnAnimServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ToyBomb.ToyBomb_C.Consume
//		Flags  -> ()
void UToyBomb_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.Consume");

	UToyBomb_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ToyBomb.ToyBomb_C.Cast
//		Flags  -> ()
void UToyBomb_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.Cast");

	UToyBomb_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ToyBomb.ToyBomb_C.ExecuteUbergraph_ToyBomb
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UToyBomb_C::ExecuteUbergraph_ToyBomb(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ToyBomb.ToyBomb_C.ExecuteUbergraph_ToyBomb");

	UToyBomb_C_ExecuteUbergraph_ToyBomb_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
