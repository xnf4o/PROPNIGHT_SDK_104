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

// Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_3
struct UWBP_LevelProgress_C_SequenceEvent__ENTRYPOINTWBP_LevelProgress_3_Params
{
	class UTextBlock*                                  Text_CurrentLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_2
struct UWBP_LevelProgress_C_SequenceEvent__ENTRYPOINTWBP_LevelProgress_2_Params
{
	class UTextBlock*                                  Text_CurrentLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.SequenceEvent__ENTRYPOINTWBP_LevelProgress_1
struct UWBP_LevelProgress_C_SequenceEvent__ENTRYPOINTWBP_LevelProgress_1_Params
{
	class UTextBlock*                                  Text_CurrentLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.TimerCallOnFillingFinished
struct UWBP_LevelProgress_C_TimerCallOnFillingFinished_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.SkipFilling
struct UWBP_LevelProgress_C_SkipFilling_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.Pointification
struct UWBP_LevelProgress_C_Pointification_Params
{
	struct FText                                       TextIn;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TextOut;                                                   // 0x0018(0x0018)  (Parm, OutParm)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.CalculateLevel
struct UWBP_LevelProgress_C_CalculateLevel_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Update_UI;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateUIBarOnly;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Update_LevelBar;                                           // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateAnimTarget;                                          // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Level;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumXP;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumXP;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.StartFilling
struct UWBP_LevelProgress_C_StartFilling_Params
{
	float                                              UpdateValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.AnimTick
struct UWBP_LevelProgress_C_AnimTick_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.SetLevelBarValue
struct UWBP_LevelProgress_C_SetLevelBarValue_Params
{
	float                                              Min;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpdateAnimTarget;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_1
struct UWBP_LevelProgress_C_Text_CurrentLevel_Event_1_Params
{
	class UTextBlock*                                  Text_CurrentLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_2
struct UWBP_LevelProgress_C_Text_CurrentLevel_Event_2_Params
{
	class UTextBlock*                                  Text_CurrentLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.Text_CurrentLevel_Event_3
struct UWBP_LevelProgress_C_Text_CurrentLevel_Event_3_Params
{
	class UTextBlock*                                  Text_CurrentLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.PreConstruct
struct UWBP_LevelProgress_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.MoveMaxLevel
struct UWBP_LevelProgress_C_MoveMaxLevel_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.NewLevel_AnimPlay
struct UWBP_LevelProgress_C_NewLevel_AnimPlay_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.StartMoving_Anim
struct UWBP_LevelProgress_C_StartMoving_Anim_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.MovingAnimTick
struct UWBP_LevelProgress_C_MovingAnimTick_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.ExecuteUbergraph_WBP_LevelProgress
struct UWBP_LevelProgress_C_ExecuteUbergraph_WBP_LevelProgress_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.OnFillingFinished__DelegateSignature
struct UWBP_LevelProgress_C_OnFillingFinished__DelegateSignature_Params
{
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.OnChangedValue__DelegateSignature
struct UWBP_LevelProgress_C_OnChangedValue__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LevelProgress.WBP_LevelProgress_C.OnFilled__DelegateSignature
struct UWBP_LevelProgress_C_OnFilled__DelegateSignature_Params
{
	float                                              RemainsExp;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalExp;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
