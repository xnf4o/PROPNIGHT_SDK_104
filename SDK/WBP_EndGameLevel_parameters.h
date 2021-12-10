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

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.SortCategories
struct UWBP_EndGameLevel_C_SortCategories_Params
{
	bool                                               IsKiller;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<TEnumAsByte<KillerCategory_EKillerCategory>> KillerCategories;                                          // 0x0008(0x0010)  (Parm, OutParm)
	TArray<TEnumAsByte<SurvCategory_ESurvCategory>>    SurvCategories;                                            // 0x0018(0x0010)  (Parm, OutParm)
	TArray<int>                                        IndexArray;                                                // 0x0028(0x0010)  (Parm, OutParm)
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.Init
struct UWBP_EndGameLevel_C_Init_Params
{
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.Finished_B822A274428F00E5EB53C7ABDFF43BB6
struct UWBP_EndGameLevel_C_Finished_B822A274428F00E5EB53C7ABDFF43BB6_Params
{
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnNextLevel
struct UWBP_EndGameLevel_C_OnNextLevel_Params
{
	float                                              RemainsExp;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalExp;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.AchieveReward
struct UWBP_EndGameLevel_C_AchieveReward_Params
{
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.InitReward
struct UWBP_EndGameLevel_C_InitReward_Params
{
	struct FName                                       SkinName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.Construct
struct UWBP_EndGameLevel_C_Construct_Params
{
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnFillingAnimationFinished
struct UWBP_EndGameLevel_C_OnFillingAnimationFinished_Params
{
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.PlayAppearanceAnim
struct UWBP_EndGameLevel_C_PlayAppearanceAnim_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.ExecuteUbergraph_WBP_EndGameLevel
struct UWBP_EndGameLevel_C_ExecuteUbergraph_WBP_EndGameLevel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EndGameLevel.WBP_EndGameLevel_C.OnCalculationFinished__DelegateSignature
struct UWBP_EndGameLevel_C_OnCalculationFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
