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
//		Name   -> Function NewLobby.NewLobby_C.HideAll
//		Flags  -> ()
void ANewLobby_C::HideAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.HideAll");

	ANewLobby_C_HideAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobby.NewLobby_C.HideActor
//		Flags  -> ()
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewLobby_C::HideActor(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.HideActor");

	ANewLobby_C_HideActor_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobby.NewLobby_C.SwitchCamera
//		Flags  -> ()
// Parameters:
//		bool                                               ThisCamera_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANewLobby_C::SwitchCamera(bool ThisCamera_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.SwitchCamera");

	ANewLobby_C_SwitchCamera_Params params {};
	params.ThisCamera_ = ThisCamera_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobby.NewLobby_C.CharacterSwitcher
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobby_C::CharacterSwitcher(TEnumAsByte<LobbyCharacter_ELobbyCharacter> Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.CharacterSwitcher");

	ANewLobby_C_CharacterSwitcher_Params params {};
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobby.NewLobby_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobby_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.ReceiveTick");

	ANewLobby_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobby.NewLobby_C.ReceiveBeginPlay
//		Flags  -> ()
void ANewLobby_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.ReceiveBeginPlay");

	ANewLobby_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function NewLobby.NewLobby_C.ExecuteUbergraph_NewLobby
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANewLobby_C::ExecuteUbergraph_NewLobby(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NewLobby.NewLobby_C.ExecuteUbergraph_NewLobby");

	ANewLobby_C_ExecuteUbergraph_NewLobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
