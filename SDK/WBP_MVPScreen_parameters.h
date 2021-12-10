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

// Function WBP_MVPScreen.WBP_MVPScreen_C.GetPlayerInformationFromSlotName
struct UWBP_MVPScreen_C_GetPlayerInformationFromSlotName_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  CharType;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEndGamePlayerData                          PlyerInformation;                                          // 0x0018(0x0058)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_MVPScreen.WBP_MVPScreen_C.GetLeaveKiller
struct UWBP_MVPScreen_C_GetLeaveKiller_Params
{
	struct FEndGamePlayerData                          PlayerInformation;                                         // 0x0000(0x0058)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_MVPScreen.WBP_MVPScreen_C.Construct
struct UWBP_MVPScreen_C_Construct_Params
{
};

// Function WBP_MVPScreen.WBP_MVPScreen_C.ShowMVPScreen
struct UWBP_MVPScreen_C_ShowMVPScreen_Params
{
};

// Function WBP_MVPScreen.WBP_MVPScreen_C.RemoveMVPScreen
struct UWBP_MVPScreen_C_RemoveMVPScreen_Params
{
};

// Function WBP_MVPScreen.WBP_MVPScreen_C.Init
struct UWBP_MVPScreen_C_Init_Params
{
};

// Function WBP_MVPScreen.WBP_MVPScreen_C.ExecuteUbergraph_WBP_MVPScreen
struct UWBP_MVPScreen_C_ExecuteUbergraph_WBP_MVPScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
