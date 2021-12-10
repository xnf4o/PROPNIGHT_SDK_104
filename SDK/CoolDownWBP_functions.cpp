// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.Get_HorBox_Spy_Middle_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UCoolDownWBP_C::Get_HorBox_Spy_Middle_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.Get_HorBox_Spy_Middle_Visibility_1");

	UCoolDownWBP_C_Get_HorBox_Spy_Middle_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.GetAbilityIconByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UIconAbilityCooldownWBP_C*                   AbilitiIconWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoolDownWBP_C::GetAbilityIconByName(const struct FString& Name, class UIconAbilityCooldownWBP_C** AbilitiIconWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.GetAbilityIconByName");

	UCoolDownWBP_C_GetAbilityIconByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AbilitiIconWidget != nullptr)
		*AbilitiIconWidget = params.AbilitiIconWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.TextCleaner
//		Flags  -> ()
// Parameters:
void UCoolDownWBP_C::TextCleaner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.TextCleaner");

	UCoolDownWBP_C_TextCleaner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.GetText_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UCoolDownWBP_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.GetText_1");

	UCoolDownWBP_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.GetPercent_2
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCoolDownWBP_C::GetPercent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.GetPercent_2");

	UCoolDownWBP_C_GetPercent_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.GetPercent_1
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UCoolDownWBP_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.GetPercent_1");

	UCoolDownWBP_C_GetPercent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCoolDownWBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.PreConstruct");

	UCoolDownWBP_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoolDownWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.Tick");

	UCoolDownWBP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.AbilityIconOn
//		Flags  -> ()
void UCoolDownWBP_C::AbilityIconOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.AbilityIconOn");

	UCoolDownWBP_C_AbilityIconOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.SwitchImage
//		Flags  -> ()
// Parameters:
//		struct FString                                     Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                SkillNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoolDownWBP_C::SwitchImage(const struct FString& Skill, int SkillNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.SwitchImage");

	UCoolDownWBP_C_SwitchImage_Params params {};
	params.Skill = Skill;
	params.SkillNumber = SkillNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.ChangeCooldownTime
//		Flags  -> ()
// Parameters:
//		float                                              CDTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SpellName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UCoolDownWBP_C::ChangeCooldownTime(float CDTime, const struct FString& SpellName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.ChangeCooldownTime");

	UCoolDownWBP_C_ChangeCooldownTime_Params params {};
	params.CDTime = CDTime;
	params.SpellName = SpellName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.CDTimeCustom
//		Flags  -> ()
// Parameters:
//		struct FString                                     Spell                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              F                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoolDownWBP_C::CDTimeCustom(const struct FString& Spell, float F)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.CDTimeCustom");

	UCoolDownWBP_C_CDTimeCustom_Params params {};
	params.Spell = Spell;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoolDownWBP.CoolDownWBP_C.ExecuteUbergraph_CoolDownWBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCoolDownWBP_C::ExecuteUbergraph_CoolDownWBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoolDownWBP.CoolDownWBP_C.ExecuteUbergraph_CoolDownWBP");

	UCoolDownWBP_C_ExecuteUbergraph_CoolDownWBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
