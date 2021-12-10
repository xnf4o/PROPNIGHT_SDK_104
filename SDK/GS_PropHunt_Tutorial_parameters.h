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

// Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ReceiveTick
struct AGS_PropHunt_Tutorial_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.DecreaseAlarmsCountEvent
struct AGS_PropHunt_Tutorial_C_DecreaseAlarmsCountEvent_Params
{
	TArray<class AActor*>                              Surfs;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.SurvTutorialEnd
struct AGS_PropHunt_Tutorial_C_SurvTutorialEnd_Params
{
};

// Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.Wipe
struct AGS_PropHunt_Tutorial_C_Wipe_Params
{
};

// Function GS_PropHunt_Tutorial.GS_PropHunt_Tutorial_C.ExecuteUbergraph_GS_PropHunt_Tutorial
struct AGS_PropHunt_Tutorial_C_ExecuteUbergraph_GS_PropHunt_Tutorial_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
