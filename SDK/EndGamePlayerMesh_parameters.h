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

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.ReceiveTick
struct AEndGamePlayerMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetPlayerMesh
struct AEndGamePlayerMesh_C_GetPlayerMesh_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdate
struct AEndGamePlayerMesh_C_StatusUpdate_Params
{
	TEnumAsByte<EndGameStatus_EndGameStatus>           Status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibility
struct AEndGamePlayerMesh_C_SwitchVisibility_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.StatusUpdateLocal
struct AEndGamePlayerMesh_C_StatusUpdateLocal_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.GetSurvMaterials
struct AEndGamePlayerMesh_C_GetSurvMaterials_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.MaterialsDefault
struct AEndGamePlayerMesh_C_MaterialsDefault_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.DeathEffectEvent
struct AEndGamePlayerMesh_C_DeathEffectEvent_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.StartDeathEffect
struct AEndGamePlayerMesh_C_StartDeathEffect_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.SurvDeathSound
struct AEndGamePlayerMesh_C_SurvDeathSound_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.SpawnCoin
struct AEndGamePlayerMesh_C_SpawnCoin_Params
{
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.SwitchVisibilityLocal
struct AEndGamePlayerMesh_C_SwitchVisibilityLocal_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.ShowNickname
struct AEndGamePlayerMesh_C_ShowNickname_Params
{
	class UCineCameraComponent*                        LookAtCamera;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EndGamePlayerMesh.EndGamePlayerMesh_C.ExecuteUbergraph_EndGamePlayerMesh
struct AEndGamePlayerMesh_C_ExecuteUbergraph_EndGamePlayerMesh_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
