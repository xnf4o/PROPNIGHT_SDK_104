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

// Function BP_BanManager.BP_BanManager_C.GetBanExpiration
struct UBP_BanManager_C_GetBanExpiration_Params
{
	int                                                Minutes;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seconds;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BanManager.BP_BanManager_C.IsBanned
struct UBP_BanManager_C_IsBanned_Params
{
	bool                                               Banned;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BanManager.BP_BanManager_C.Ban
struct UBP_BanManager_C_Ban_Params
{
	int                                                Minutes;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BanManager.BP_BanManager_C.LoadSavedSlot
struct UBP_BanManager_C_LoadSavedSlot_Params
{
};

// Function BP_BanManager.BP_BanManager_C.ExecuteUbergraph_BP_BanManager
struct UBP_BanManager_C_ExecuteUbergraph_BP_BanManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
