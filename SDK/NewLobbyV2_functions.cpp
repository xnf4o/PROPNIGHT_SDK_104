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
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.ReceiveBeginPlay
//		Flags  -> ()
void ANewLobbyV2_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.ReceiveBeginPlay");

	ANewLobbyV2_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobbyV2_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.ReceiveTick");

	ANewLobbyV2_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.SwitchCamera
//		Flags  -> ()
// Parameters:
//		bool                                               ThisCamera_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewLobbyV2_C::SwitchCamera(bool ThisCamera_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.SwitchCamera");

	ANewLobbyV2_C_SwitchCamera_Params params {};
	params.ThisCamera_ = ThisCamera_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.PlayerVisibleType
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewLobbyV2_C::PlayerVisibleType(bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.PlayerVisibleType");

	ANewLobbyV2_C_PlayerVisibleType_Params params {};
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.ChangePlayerMesh
//		Flags  -> ()
// Parameters:
//		int                                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APS_PropHunt_C*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               local_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobbyV2_C::ChangePlayerMesh(int Player, class APS_PropHunt_C* PlayerState, bool local_, TEnumAsByte<LobbyCharacter_ELobbyCharacter> Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.ChangePlayerMesh");

	ANewLobbyV2_C_ChangePlayerMesh_Params params {};
	params.Player = Player;
	params.PlayerState = PlayerState;
	params.local_ = local_;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.SwitchLocalPlayerMesh
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobbyV2_C::SwitchLocalPlayerMesh(TEnumAsByte<LobbyCharacter_ELobbyCharacter> Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.SwitchLocalPlayerMesh");

	ANewLobbyV2_C_SwitchLocalPlayerMesh_Params params {};
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.HideAll
//		Flags  -> ()
void ANewLobbyV2_C::HideAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.HideAll");

	ANewLobbyV2_C_HideAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.UpdateSlots
//		Flags  -> ()
void ANewLobbyV2_C::UpdateSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.UpdateSlots");

	ANewLobbyV2_C_UpdateSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.OnlySlotsUpdate
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewLobbyV2_C::OnlySlotsUpdate(bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.OnlySlotsUpdate");

	ANewLobbyV2_C_OnlySlotsUpdate_Params params {};
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.BeforeDestroy
//		Flags  -> ()
void ANewLobbyV2_C::BeforeDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.BeforeDestroy");

	ANewLobbyV2_C_BeforeDestroy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobbyV2.NewLobbyV2_C.ExecuteUbergraph_NewLobbyV2
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobbyV2_C::ExecuteUbergraph_NewLobbyV2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobbyV2.NewLobbyV2_C.ExecuteUbergraph_NewLobbyV2");

	ANewLobbyV2_C_ExecuteUbergraph_NewLobbyV2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
