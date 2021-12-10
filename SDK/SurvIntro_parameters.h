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

// Function SurvIntro.SurvIntro_C.StartTimeline__FinishedFunc
struct ASurvIntro_C_StartTimeline__FinishedFunc_Params
{
};

// Function SurvIntro.SurvIntro_C.StartTimeline__UpdateFunc
struct ASurvIntro_C_StartTimeline__UpdateFunc_Params
{
};

// Function SurvIntro.SurvIntro_C.NicknameRotate
struct ASurvIntro_C_NicknameRotate_Params
{
};

// Function SurvIntro.SurvIntro_C.NicknameToggle
struct ASurvIntro_C_NicknameToggle_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvIntro.SurvIntro_C.End
struct ASurvIntro_C_End_Params
{
};

// Function SurvIntro.SurvIntro_C.ReceiveTick
struct ASurvIntro_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvIntro.SurvIntro_C.ReceiveBeginPlay
struct ASurvIntro_C_ReceiveBeginPlay_Params
{
};

// Function SurvIntro.SurvIntro_C.ChangeFOV
struct ASurvIntro_C_ChangeFOV_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvIntro.SurvIntro_C.ChangeValueFOV
struct ASurvIntro_C_ChangeValueFOV_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvIntro.SurvIntro_C.ExecuteUbergraph_SurvIntro
struct ASurvIntro_C_ExecuteUbergraph_SurvIntro_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
