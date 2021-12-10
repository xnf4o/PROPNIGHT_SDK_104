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
//		Name   -> Function GrannyAstral.GrannyAstral_C.ReceiveBeginPlay
//		Flags  -> ()
void UGrannyAstral_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.ReceiveBeginPlay");

	UGrannyAstral_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGrannyAstral_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.ReceiveTick");

	UGrannyAstral_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.Cast
//		Flags  -> ()
void UGrannyAstral_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.Cast");

	UGrannyAstral_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.VisibilityKillerServer
//		Flags  -> ()
// Parameters:
//		bool                                               SkillActive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGrannyAstral_C::VisibilityKillerServer(bool SkillActive_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.VisibilityKillerServer");

	UGrannyAstral_C_VisibilityKillerServer_Params params {};
	params.SkillActive_ = SkillActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.VisibilityKillerMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               SkillActive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGrannyAstral_C::VisibilityKillerMulticast(bool SkillActive_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.VisibilityKillerMulticast");

	UGrannyAstral_C_VisibilityKillerMulticast_Params params {};
	params.SkillActive_ = SkillActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.TeleportCurrentPosition
//		Flags  -> ()
void UGrannyAstral_C::TeleportCurrentPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.TeleportCurrentPosition");

	UGrannyAstral_C_TeleportCurrentPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.TeleportOldPosition
//		Flags  -> ()
void UGrannyAstral_C::TeleportOldPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.TeleportOldPosition");

	UGrannyAstral_C_TeleportOldPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.TeleportOldPositionActivate
//		Flags  -> ()
void UGrannyAstral_C::TeleportOldPositionActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.TeleportOldPositionActivate");

	UGrannyAstral_C_TeleportOldPositionActivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.TeleportNewPositionActivate
//		Flags  -> ()
void UGrannyAstral_C::TeleportNewPositionActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.TeleportNewPositionActivate");

	UGrannyAstral_C_TeleportNewPositionActivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.DestroySpawnedMeshServer
//		Flags  -> ()
void UGrannyAstral_C::DestroySpawnedMeshServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.DestroySpawnedMeshServer");

	UGrannyAstral_C_DestroySpawnedMeshServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.DestroySpawnedMeshMulticast
//		Flags  -> ()
void UGrannyAstral_C::DestroySpawnedMeshMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.DestroySpawnedMeshMulticast");

	UGrannyAstral_C_DestroySpawnedMeshMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.TeleportKillerServer
//		Flags  -> ()
void UGrannyAstral_C::TeleportKillerServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.TeleportKillerServer");

	UGrannyAstral_C_TeleportKillerServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.TeleportKillerMulticast
//		Flags  -> ()
void UGrannyAstral_C::TeleportKillerMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.TeleportKillerMulticast");

	UGrannyAstral_C_TeleportKillerMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.CameraPPChanger
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGrannyAstral_C::CameraPPChanger(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.CameraPPChanger");

	UGrannyAstral_C_CameraPPChanger_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.InvisibleEvent
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGrannyAstral_C::InvisibleEvent(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.InvisibleEvent");

	UGrannyAstral_C_InvisibleEvent_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.OnInvoke
//		Flags  -> ()
void UGrannyAstral_C::OnInvoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.OnInvoke");

	UGrannyAstral_C_OnInvoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.Consume
//		Flags  -> ()
void UGrannyAstral_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.Consume");

	UGrannyAstral_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyAstral.GrannyAstral_C.ExecuteUbergraph_GrannyAstral
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGrannyAstral_C::ExecuteUbergraph_GrannyAstral(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyAstral.GrannyAstral_C.ExecuteUbergraph_GrannyAstral");

	UGrannyAstral_C_ExecuteUbergraph_GrannyAstral_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
