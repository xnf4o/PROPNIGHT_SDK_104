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

// Function I_GMProp.I_GMProp_C.SetPlayfabKillerID
struct UI_GMProp_C_SetPlayfabKillerID_Params
{
	struct FString                                     KillerID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function I_GMProp.I_GMProp_C.GetPlayfabPlayers
struct UI_GMProp_C_GetPlayfabPlayers_Params
{
	TArray<class APC_PropHunt_C*>                      Players;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function I_GMProp.I_GMProp_C.GetServerCapacity
struct UI_GMProp_C_GetServerCapacity_Params
{
	int                                                Capacity;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GMProp.I_GMProp_C.GetMode
struct UI_GMProp_C_GetMode_Params
{
	struct FString                                     Mode;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function I_GMProp.I_GMProp_C.GetMap
struct UI_GMProp_C_GetMap_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function I_GMProp.I_GMProp_C.GetStatus
struct UI_GMProp_C_GetStatus_Params
{
	struct FString                                     Status;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function I_GMProp.I_GMProp_C.GetPlayersCount
struct UI_GMProp_C_GetPlayersCount_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GMProp.I_GMProp_C.playerCalling
struct UI_GMProp_C_playerCalling_Params
{
	bool                                               IsPlayer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ANewAlarmBP_C*                               alarms;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
