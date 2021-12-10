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
//		Name   -> Function Bomb.Bomb_C.OnRep_KRef
//		Flags  -> ()
void ABomb_C::OnRep_KRef()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bomb.Bomb_C.OnRep_KRef");

	ABomb_C_OnRep_KRef_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Bomb.Bomb_C.ReceiveBeginPlay
//		Flags  -> ()
void ABomb_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bomb.Bomb_C.ReceiveBeginPlay");

	ABomb_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Bomb.Bomb_C.Detonate
//		Flags  -> ()
void ABomb_C::Detonate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bomb.Bomb_C.Detonate");

	ABomb_C_Detonate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Bomb.Bomb_C.InitKiller
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABomb_C::InitKiller(class AKillerMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bomb.Bomb_C.InitKiller");

	ABomb_C_InitKiller_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Bomb.Bomb_C.ExecuteUbergraph_Bomb
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABomb_C::ExecuteUbergraph_Bomb(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bomb.Bomb_C.ExecuteUbergraph_Bomb");

	ABomb_C_ExecuteUbergraph_Bomb_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
