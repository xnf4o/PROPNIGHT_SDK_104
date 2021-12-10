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

// Function SG_Playfab.SG_Playfab_C.GetID
struct USG_Playfab_C_GetID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SG_Playfab.SG_Playfab_C.SetID
struct USG_Playfab_C_SetID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SG_Playfab.SG_Playfab_C.ExecuteUbergraph_SG_Playfab
struct USG_Playfab_C_ExecuteUbergraph_SG_Playfab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
