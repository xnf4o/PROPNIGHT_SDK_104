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

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.FullAlarmEndSkillCheck
struct USurvivalSkillCheckWidget_C_FullAlarmEndSkillCheck_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StopSkillCheckAndFail
struct USurvivalSkillCheckWidget_C_StopSkillCheckAndFail_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheckNoDelay
struct USurvivalSkillCheckWidget_C_EndSkillCheckNoDelay_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSuccess
struct USurvivalSkillCheckWidget_C_SendSuccess_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSkillCheck
struct USurvivalSkillCheckWidget_C_SendSkillCheck_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendServer
struct USurvivalSkillCheckWidget_C_SendServer_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Great;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Failed;                                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     Actor;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Surv;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendMulticast
struct USurvivalSkillCheckWidget_C_SendMulticast_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Great;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Failed;                                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     Actor;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Surv;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendFailed
struct USurvivalSkillCheckWidget_C_SendFailed_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendGreat
struct USurvivalSkillCheckWidget_C_SendGreat_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.PreConstruct
struct USurvivalSkillCheckWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePressV2
struct USurvivalSkillCheckWidget_C_SpacePressV2_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Construct
struct USurvivalSkillCheckWidget_C_Construct_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Tick
struct USurvivalSkillCheckWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheck
struct USurvivalSkillCheckWidget_C_EndSkillCheck_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartWarning
struct USurvivalSkillCheckWidget_C_StartWarning_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.HideGameStuff
struct USurvivalSkillCheckWidget_C_HideGameStuff_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePress
struct USurvivalSkillCheckWidget_C_SpacePress_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartSkillCheck
struct USurvivalSkillCheckWidget_C_StartSkillCheck_Params
{
};

// Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.ExecuteUbergraph_SurvivalSkillCheckWidget
struct USurvivalSkillCheckWidget_C_ExecuteUbergraph_SurvivalSkillCheckWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
