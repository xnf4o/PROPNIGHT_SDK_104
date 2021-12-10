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

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.Done_Alarm
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_Done_Alarm_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.Fade_Out
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_Fade_Out_Params
{
};

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.SurvDead
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_SurvDead_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.SurvSaved
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_SurvSaved_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.ExecuteUbergraph_IconAbilityCooldownAlarmWBP_Survivor_Middle
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_ExecuteUbergraph_IconAbilityCooldownAlarmWBP_Survivor_Middle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.OnAvatarNotificationHidden__DelegateSignature
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_OnAvatarNotificationHidden__DelegateSignature_Params
{
};

// Function IconAbilityCooldownAlarmWBP_Survivor_Middle.IconAbilityCooldownAlarmWBP_Survivor_Middle_C.OnAlarmNotificationIsHiddenManually__DelegateSignature
struct UIconAbilityCooldownAlarmWBP_Survivor_Middle_C_OnAlarmNotificationIsHiddenManually__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
