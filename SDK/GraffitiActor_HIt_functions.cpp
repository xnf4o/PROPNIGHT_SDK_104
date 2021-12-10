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
//		Name   -> Function GraffitiActor_HIt.GraffitiActor_Hit_C.SoundServ
//		Flags  -> ()
void AGraffitiActor_Hit_C::SoundServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor_HIt.GraffitiActor_Hit_C.SoundServ");

	AGraffitiActor_Hit_C_SoundServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor_HIt.GraffitiActor_Hit_C.ReceiveBeginPlay
//		Flags  -> ()
void AGraffitiActor_Hit_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor_HIt.GraffitiActor_Hit_C.ReceiveBeginPlay");

	AGraffitiActor_Hit_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor_HIt.GraffitiActor_Hit_C.Drawer
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGraffitiActor_Hit_C::Drawer(class AKillerMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor_HIt.GraffitiActor_Hit_C.Drawer");

	AGraffitiActor_Hit_C_Drawer_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GraffitiActor_HIt.GraffitiActor_Hit_C.ExecuteUbergraph_GraffitiActor_Hit
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGraffitiActor_Hit_C::ExecuteUbergraph_GraffitiActor_Hit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GraffitiActor_HIt.GraffitiActor_Hit_C.ExecuteUbergraph_GraffitiActor_Hit");

	AGraffitiActor_Hit_C_ExecuteUbergraph_GraffitiActor_Hit_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
