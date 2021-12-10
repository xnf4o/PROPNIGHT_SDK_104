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

// Function CoolDownWBP.CoolDownWBP_C.Get_HorBox_Spy_Middle_Visibility_1
struct UCoolDownWBP_C_Get_HorBox_Spy_Middle_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.GetAbilityIconByName
struct UCoolDownWBP_C_GetAbilityIconByName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UIconAbilityCooldownWBP_C*                   AbilitiIconWidget;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.TextCleaner
struct UCoolDownWBP_C_TextCleaner_Params
{
};

// Function CoolDownWBP.CoolDownWBP_C.GetText_1
struct UCoolDownWBP_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function CoolDownWBP.CoolDownWBP_C.GetPercent_2
struct UCoolDownWBP_C_GetPercent_2_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.GetPercent_1
struct UCoolDownWBP_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.PreConstruct
struct UCoolDownWBP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CoolDownWBP.CoolDownWBP_C.Tick
struct UCoolDownWBP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.AbilityIconOn
struct UCoolDownWBP_C_AbilityIconOn_Params
{
};

// Function CoolDownWBP.CoolDownWBP_C.SwitchImage
struct UCoolDownWBP_C_SwitchImage_Params
{
	struct FString                                     Skill;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                SkillNumber;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.ChangeCooldownTime
struct UCoolDownWBP_C_ChangeCooldownTime_Params
{
	float                                              CDTime;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SpellName;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.CDTimeCustom
struct UCoolDownWBP_C_CDTimeCustom_Params
{
	struct FString                                     Spell;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              F;                                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CoolDownWBP.CoolDownWBP_C.ExecuteUbergraph_CoolDownWBP
struct UCoolDownWBP_C_ExecuteUbergraph_CoolDownWBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
