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
//		Name   -> Function SoundCommandKiller.SoundCommandKiller_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundCommandKiller_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundCommandKiller.SoundCommandKiller_C.ReceiveTick");

	USoundCommandKiller_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundCommandKiller.SoundCommandKiller_C.PlaySound_Killer
//		Flags  -> ()
// Parameters:
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundCommandKiller_C::PlaySound_Killer(int KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundCommandKiller.SoundCommandKiller_C.PlaySound_Killer");

	USoundCommandKiller_C_PlaySound_Killer_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundCommandKiller.SoundCommandKiller_C.PlayOnServer
//		Flags  -> ()
// Parameters:
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundCommandKiller_C::PlayOnServer(int KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundCommandKiller.SoundCommandKiller_C.PlayOnServer");

	USoundCommandKiller_C_PlayOnServer_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundCommandKiller.SoundCommandKiller_C.Multicast_Play
//		Flags  -> ()
// Parameters:
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundCommandKiller_C::Multicast_Play(int KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundCommandKiller.SoundCommandKiller_C.Multicast_Play");

	USoundCommandKiller_C_Multicast_Play_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundCommandKiller.SoundCommandKiller_C.ExecuteUbergraph_SoundCommandKiller
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundCommandKiller_C::ExecuteUbergraph_SoundCommandKiller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundCommandKiller.SoundCommandKiller_C.ExecuteUbergraph_SoundCommandKiller");

	USoundCommandKiller_C_ExecuteUbergraph_SoundCommandKiller_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
