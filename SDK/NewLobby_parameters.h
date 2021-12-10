#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function NewLobby.NewLobby_C.HideAll
struct ANewLobby_C_HideAll_Params
{
};

// Function NewLobby.NewLobby_C.HideActor
struct ANewLobby_C_HideActor_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewLobby.NewLobby_C.SwitchCamera
struct ANewLobby_C_SwitchCamera_Params
{
	bool                                               ThisCamera_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewLobby.NewLobby_C.CharacterSwitcher
struct ANewLobby_C_CharacterSwitcher_Params
{
	TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewLobby.NewLobby_C.ReceiveTick
struct ANewLobby_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewLobby.NewLobby_C.ReceiveBeginPlay
struct ANewLobby_C_ReceiveBeginPlay_Params
{
};

// Function NewLobby.NewLobby_C.ExecuteUbergraph_NewLobby
struct ANewLobby_C_ExecuteUbergraph_NewLobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
