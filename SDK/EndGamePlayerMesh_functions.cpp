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
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndGamePlayerMesh_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.ReceiveTick");

	AEndGamePlayerMesh_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetPlayerMesh
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndGamePlayerMesh_C::GetPlayerMesh(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetPlayerMesh");

	AEndGamePlayerMesh_C_GetPlayerMesh_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdate
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EndGameStatus_EndGameStatus>           Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndGamePlayerMesh_C::StatusUpdate(TEnumAsByte<EndGameStatus_EndGameStatus> Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdate");

	AEndGamePlayerMesh_C_StatusUpdate_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibility
//		Flags  -> ()
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AEndGamePlayerMesh_C::SwitchVisibility(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibility");

	AEndGamePlayerMesh_C_SwitchVisibility_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdateLocal
//		Flags  -> ()
void AEndGamePlayerMesh_C::StatusUpdateLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdateLocal");

	AEndGamePlayerMesh_C_StatusUpdateLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetSurvMaterials
//		Flags  -> ()
void AEndGamePlayerMesh_C::GetSurvMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetSurvMaterials");

	AEndGamePlayerMesh_C_GetSurvMaterials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.MaterialsDefault
//		Flags  -> ()
void AEndGamePlayerMesh_C::MaterialsDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.MaterialsDefault");

	AEndGamePlayerMesh_C_MaterialsDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.DeathEffectEvent
//		Flags  -> ()
void AEndGamePlayerMesh_C::DeathEffectEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.DeathEffectEvent");

	AEndGamePlayerMesh_C_DeathEffectEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.StartDeathEffect
//		Flags  -> ()
void AEndGamePlayerMesh_C::StartDeathEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.StartDeathEffect");

	AEndGamePlayerMesh_C_StartDeathEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.SurvDeathSound
//		Flags  -> ()
void AEndGamePlayerMesh_C::SurvDeathSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.SurvDeathSound");

	AEndGamePlayerMesh_C_SurvDeathSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.SpawnCoin
//		Flags  -> ()
void AEndGamePlayerMesh_C::SpawnCoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.SpawnCoin");

	AEndGamePlayerMesh_C_SpawnCoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibilityLocal
//		Flags  -> ()
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AEndGamePlayerMesh_C::SwitchVisibilityLocal(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibilityLocal");

	AEndGamePlayerMesh_C_SwitchVisibilityLocal_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.ShowNickname
//		Flags  -> ()
// Parameters:
//		class UCineCameraComponent*                        LookAtCamera                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndGamePlayerMesh_C::ShowNickname(class UCineCameraComponent* LookAtCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.ShowNickname");

	AEndGamePlayerMesh_C_ShowNickname_Params params {};
	params.LookAtCamera = LookAtCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGamePlayerMesh.EndGamePlayerMesh_C.ExecuteUbergraph_EndGamePlayerMesh
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndGamePlayerMesh_C::ExecuteUbergraph_EndGamePlayerMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGamePlayerMesh.EndGamePlayerMesh_C.ExecuteUbergraph_EndGamePlayerMesh");

	AEndGamePlayerMesh_C_ExecuteUbergraph_EndGamePlayerMesh_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
