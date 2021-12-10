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

// Function SkillPoints.SkillPoints_C.GetText_2
struct USkillPoints_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function SkillPoints.SkillPoints_C.GetText_1
struct USkillPoints_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function SkillPoints.SkillPoints_C.GetColorAndOpacity_1
struct USkillPoints_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillPoints.SkillPoints_C.Get_TextBlock_1_Text_1
struct USkillPoints_C_Get_TextBlock_1_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function SkillPoints.SkillPoints_C.GetVisibility_1
struct USkillPoints_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillPoints.SkillPoints_C.SetTextsSkill
struct USkillPoints_C_SetTextsSkill_Params
{
};

// Function SkillPoints.SkillPoints_C.SelectedSkillUpStop
struct USkillPoints_C_SelectedSkillUpStop_Params
{
};

// Function SkillPoints.SkillPoints_C.SelectedSkillUpStart
struct USkillPoints_C_SelectedSkillUpStart_Params
{
};

// Function SkillPoints.SkillPoints_C.SurvClassCheck
struct USkillPoints_C_SurvClassCheck_Params
{
	TEnumAsByte<SurvClass_ESurvClass>                  Class;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillPoints.SkillPoints_C.DeselectAll
struct USkillPoints_C_DeselectAll_Params
{
};

// Function SkillPoints.SkillPoints_C.SetSkill
struct USkillPoints_C_SetSkill_Params
{
	int                                                SkillNumber;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OffSound_;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SkillPoints.SkillPoints_C.SetSkillTexts
struct USkillPoints_C_SetSkillTexts_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SkillPoints.SkillPoints_C.KillerIconCreate
struct USkillPoints_C_KillerIconCreate_Params
{
};

// Function SkillPoints.SkillPoints_C.SurvIconCreate
struct USkillPoints_C_SurvIconCreate_Params
{
};

// Function SkillPoints.SkillPoints_C.SwitchWindow
struct USkillPoints_C_SwitchWindow_Params
{
};

// Function SkillPoints.SkillPoints_C.Tick
struct USkillPoints_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SkillPoints.SkillPoints_C.Construct
struct USkillPoints_C_Construct_Params
{
};

// Function SkillPoints.SkillPoints_C.ExecuteUbergraph_SkillPoints
struct USkillPoints_C_ExecuteUbergraph_SkillPoints_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
