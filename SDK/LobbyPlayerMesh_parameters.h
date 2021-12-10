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

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.CheckSetSkin
struct ALobbyPlayerMesh_C_CheckSetSkin_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Mesh;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.RedGirlSkin
struct ALobbyPlayerMesh_C_RedGirlSkin_Params
{
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.SkinCheat
struct ALobbyPlayerMesh_C_SkinCheat_Params
{
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.NewFunction_1
struct ALobbyPlayerMesh_C_NewFunction_1_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.Skin IDDuplicat Checker
struct ALobbyPlayerMesh_C_Skin_IDDuplicat_Checker_Params
{
	bool                                               Bool;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.SurvSkinChanger
struct ALobbyPlayerMesh_C_SurvSkinChanger_Params
{
	TEnumAsByte<LobbyCharacter_ELobbyCharacter>        char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveBeginPlay
struct ALobbyPlayerMesh_C_ReceiveBeginPlay_Params
{
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveTick
struct ALobbyPlayerMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.ChangeMesh
struct ALobbyPlayerMesh_C_ChangeMesh_Params
{
	TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalBlock_;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ScaleLock_;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.HideAll
struct ALobbyPlayerMesh_C_HideAll_Params
{
	bool                                               OnlyMesh_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.SetPlayerState
struct ALobbyPlayerMesh_C_SetPlayerState_Params
{
	class APS_PropHunt_C*                              Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalBlock_;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.EndGame
struct ALobbyPlayerMesh_C_EndGame_Params
{
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.ScaleChange
struct ALobbyPlayerMesh_C_ScaleChange_Params
{
};

// Function LobbyPlayerMesh.LobbyPlayerMesh_C.ExecuteUbergraph_LobbyPlayerMesh
struct ALobbyPlayerMesh_C_ExecuteUbergraph_LobbyPlayerMesh_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
