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
//		Name   -> Function Curse.Curse_C.BoostExitServ
//		Flags  -> ()
// Parameters:
//		class AExit_C*                                     Exit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::BoostExitServ(class AExit_C* Exit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.BoostExitServ");

	UCurse_C_BoostExitServ_Params params {};
	params.Exit = Exit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.BoostExitMulti
//		Flags  -> ()
// Parameters:
//		class AExit_C*                                     Exit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::BoostExitMulti(class AExit_C* Exit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.BoostExitMulti");

	UCurse_C_BoostExitMulti_Params params {};
	params.Exit = Exit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.LootboxBlockServ
//		Flags  -> ()
// Parameters:
//		class ALootBox_C*                                  lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::LootboxBlockServ(class ALootBox_C* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.LootboxBlockServ");

	UCurse_C_LootboxBlockServ_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.LootboxBlockMulti
//		Flags  -> ()
// Parameters:
//		class ALootBox_C*                                  lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::LootboxBlockMulti(class ALootBox_C* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.LootboxBlockMulti");

	UCurse_C_LootboxBlockMulti_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.BoostAlarmServ
//		Flags  -> ()
// Parameters:
//		class ANewAlarmBP_C*                               Alarm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::BoostAlarmServ(class ANewAlarmBP_C* Alarm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.BoostAlarmServ");

	UCurse_C_BoostAlarmServ_Params params {};
	params.Alarm = Alarm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.BoostAlarmMulti
//		Flags  -> ()
// Parameters:
//		class ANewAlarmBP_C*                               Alarm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::BoostAlarmMulti(class ANewAlarmBP_C* Alarm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.BoostAlarmMulti");

	UCurse_C_BoostAlarmMulti_Params params {};
	params.Alarm = Alarm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.Cast
//		Flags  -> ()
void UCurse_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.Cast");

	UCurse_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.ReceiveTick");

	UCurse_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.BoostChairServ
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::BoostChairServ(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.BoostChairServ");

	UCurse_C_BoostChairServ_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.BoostChairMulti
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::BoostChairMulti(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.BoostChairMulti");

	UCurse_C_BoostChairMulti_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.Consume
//		Flags  -> ()
void UCurse_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.Consume");

	UCurse_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Curse.Curse_C.ExecuteUbergraph_Curse
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCurse_C::ExecuteUbergraph_Curse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Curse.Curse_C.ExecuteUbergraph_Curse");

	UCurse_C_ExecuteUbergraph_Curse_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
