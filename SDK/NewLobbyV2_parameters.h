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

// Function NewLobbyV2.NewLobbyV2_C.ReceiveBeginPlay
struct ANewLobbyV2_C_ReceiveBeginPlay_Params
{
};

// Function NewLobbyV2.NewLobbyV2_C.ReceiveTick
struct ANewLobbyV2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewLobbyV2.NewLobbyV2_C.SwitchCamera
struct ANewLobbyV2_C_SwitchCamera_Params
{
	bool                                               ThisCamera_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewLobbyV2.NewLobbyV2_C.PlayerVisibleType
struct ANewLobbyV2_C_PlayerVisibleType_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewLobbyV2.NewLobbyV2_C.ChangePlayerMesh
struct ANewLobbyV2_C_ChangePlayerMesh_Params
{
	int                                                Player;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APS_PropHunt_C*                              PlayerState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               local_;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewLobbyV2.NewLobbyV2_C.SwitchLocalPlayerMesh
struct ANewLobbyV2_C_SwitchLocalPlayerMesh_Params
{
	TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewLobbyV2.NewLobbyV2_C.HideAll
struct ANewLobbyV2_C_HideAll_Params
{
};

// Function NewLobbyV2.NewLobbyV2_C.UpdateSlots
struct ANewLobbyV2_C_UpdateSlots_Params
{
};

// Function NewLobbyV2.NewLobbyV2_C.OnlySlotsUpdate
struct ANewLobbyV2_C_OnlySlotsUpdate_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewLobbyV2.NewLobbyV2_C.BeforeDestroy
struct ANewLobbyV2_C_BeforeDestroy_Params
{
};

// Function NewLobbyV2.NewLobbyV2_C.ExecuteUbergraph_NewLobbyV2
struct ANewLobbyV2_C_ExecuteUbergraph_NewLobbyV2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
