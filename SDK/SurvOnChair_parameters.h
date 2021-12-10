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

// Function SurvOnChair.SurvOnChair_C.K2_Tick
struct USurvOnChair_C_K2_Tick_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvOnChair.SurvOnChair_C.K2_OnEnterCameraMode
struct USurvOnChair_C_K2_OnEnterCameraMode_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvOnChair.SurvOnChair_C.K2_OnExitCameraMode
struct USurvOnChair_C_K2_OnExitCameraMode_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvOnChair.SurvOnChair_C.ExecuteUbergraph_SurvOnChair
struct USurvOnChair_C_ExecuteUbergraph_SurvOnChair_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
