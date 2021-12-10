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

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Tick
struct UWBP_EffectBloodLust_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Level_Up
struct UWBP_EffectBloodLust_C_Level_Up_Params
{
};

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Construct
struct UWBP_EffectBloodLust_C_Construct_Params
{
};

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.PreConstruct
struct UWBP_EffectBloodLust_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.LevelRush?
struct UWBP_EffectBloodLust_C_LevelRush__Params
{
	float                                              Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SSSR;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AstralIn_;                                                 // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Hunter_LevelRush
struct UWBP_EffectBloodLust_C_Hunter_LevelRush_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Chase_;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.ExecuteUbergraph_WBP_EffectBloodLust
struct UWBP_EffectBloodLust_C_ExecuteUbergraph_WBP_EffectBloodLust_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
