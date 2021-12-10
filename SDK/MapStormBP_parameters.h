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

// Function MapStormBP.MapStormBP_C.PlayFMOD
struct AMapStormBP_C_PlayFMOD_Params
{
};

// Function MapStormBP.MapStormBP_C.WindowsChange
struct AMapStormBP_C_WindowsChange_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapStormBP.MapStormBP_C.BeamsChange
struct AMapStormBP_C_BeamsChange_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MapStormBP.MapStormBP_C.LightsChange
struct AMapStormBP_C_LightsChange_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewParam1;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MapStormBP.MapStormBP_C.Timeline_0__FinishedFunc
struct AMapStormBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function MapStormBP.MapStormBP_C.Timeline_0__UpdateFunc
struct AMapStormBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function MapStormBP.MapStormBP_C.Timeline_1__FinishedFunc
struct AMapStormBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function MapStormBP.MapStormBP_C.Timeline_1__UpdateFunc
struct AMapStormBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function MapStormBP.MapStormBP_C.ReceiveBeginPlay
struct AMapStormBP_C_ReceiveBeginPlay_Params
{
};

// Function MapStormBP.MapStormBP_C.ReceiveTick
struct AMapStormBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MapStormBP.MapStormBP_C.LightEvent
struct AMapStormBP_C_LightEvent_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewParam2;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MapStormBP.MapStormBP_C.LightsOffServ
struct AMapStormBP_C_LightsOffServ_Params
{
};

// Function MapStormBP.MapStormBP_C.LightsOffMulti
struct AMapStormBP_C_LightsOffMulti_Params
{
};

// Function MapStormBP.MapStormBP_C.RandomizerTimeServ
struct AMapStormBP_C_RandomizerTimeServ_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MapStormBP.MapStormBP_C.RandomizerTime
struct AMapStormBP_C_RandomizerTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MapStormBP.MapStormBP_C.StormBlocker
struct AMapStormBP_C_StormBlocker_Params
{
};

// Function MapStormBP.MapStormBP_C.ExecuteUbergraph_MapStormBP
struct AMapStormBP_C_ExecuteUbergraph_MapStormBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
