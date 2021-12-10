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

// Function SurvStatusWBP.SurvStatusWBP_C.textN
struct USurvStatusWBP_C_textN_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvStatusWBP.SurvStatusWBP_C.PreConstruct
struct USurvStatusWBP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvStatusWBP.SurvStatusWBP_C.Construct
struct USurvStatusWBP_C_Construct_Params
{
};

// Function SurvStatusWBP.SurvStatusWBP_C.SurvRefGetter
struct USurvStatusWBP_C_SurvRefGetter_Params
{
};

// Function SurvStatusWBP.SurvStatusWBP_C.LoadPlayers
struct USurvStatusWBP_C_LoadPlayers_Params
{
};

// Function SurvStatusWBP.SurvStatusWBP_C.statusChangedClient
struct USurvStatusWBP_C_statusChangedClient_Params
{
};

// Function SurvStatusWBP.SurvStatusWBP_C.Tick
struct USurvStatusWBP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvStatusWBP.SurvStatusWBP_C.ExecuteUbergraph_SurvStatusWBP
struct USurvStatusWBP_C_ExecuteUbergraph_SurvStatusWBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
