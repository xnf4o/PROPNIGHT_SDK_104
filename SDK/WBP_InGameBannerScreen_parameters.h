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

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetSpectatorMode
struct UWBP_InGameBannerScreen_C_SetSpectatorMode_Params
{
	bool                                               Spectator;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ShowBanner
struct UWBP_InGameBannerScreen_C_ShowBanner_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       BannerHeaderText;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.HideBanner
struct UWBP_InGameBannerScreen_C_HideBanner_Params
{
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetBannerInfo
struct UWBP_InGameBannerScreen_C_SetBannerInfo_Params
{
	class APS_PropHunt_C*                              PS;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetNickname
struct UWBP_InGameBannerScreen_C_SetNickname_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.SetSurvAvatar
struct UWBP_InGameBannerScreen_C_SetSurvAvatar_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ShowSurvSpectatorBanner
struct UWBP_InGameBannerScreen_C_ShowSurvSpectatorBanner_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APS_PropHunt_C*                              PS;                                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InGameBannerScreen.WBP_InGameBannerScreen_C.ExecuteUbergraph_WBP_InGameBannerScreen
struct UWBP_InGameBannerScreen_C_ExecuteUbergraph_WBP_InGameBannerScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
