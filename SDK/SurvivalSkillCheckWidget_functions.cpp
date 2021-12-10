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
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.FullAlarmEndSkillCheck
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::FullAlarmEndSkillCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.FullAlarmEndSkillCheck");

	USurvivalSkillCheckWidget_C_FullAlarmEndSkillCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StopSkillCheckAndFail
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::StopSkillCheckAndFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StopSkillCheckAndFail");

	USurvivalSkillCheckWidget_C_StopSkillCheckAndFail_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheckNoDelay
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::EndSkillCheckNoDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheckNoDelay");

	USurvivalSkillCheckWidget_C_EndSkillCheckNoDelay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSuccess
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::SendSuccess(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSuccess");

	USurvivalSkillCheckWidget_C_SendSuccess_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSkillCheck
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::SendSkillCheck(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendSkillCheck");

	USurvivalSkillCheckWidget_C_SendSkillCheck_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendServer
//		Flags  -> ()
// Parameters:
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Great                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Failed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::SendServer(bool Success, bool Great, bool Failed, class UObject* Actor, class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendServer");

	USurvivalSkillCheckWidget_C_SendServer_Params params {};
	params.Success = Success;
	params.Great = Great;
	params.Failed = Failed;
	params.Actor = Actor;
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Great                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Failed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::SendMulticast(bool Success, bool Great, bool Failed, class UObject* Actor, class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendMulticast");

	USurvivalSkillCheckWidget_C_SendMulticast_Params params {};
	params.Success = Success;
	params.Great = Great;
	params.Failed = Failed;
	params.Actor = Actor;
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendFailed
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::SendFailed(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendFailed");

	USurvivalSkillCheckWidget_C_SendFailed_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendGreat
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::SendGreat(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SendGreat");

	USurvivalSkillCheckWidget_C_SendGreat_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvivalSkillCheckWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.PreConstruct");

	USurvivalSkillCheckWidget_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePressV2
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::SpacePressV2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePressV2");

	USurvivalSkillCheckWidget_C_SpacePressV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Construct
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Construct");

	USurvivalSkillCheckWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.Tick");

	USurvivalSkillCheckWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheck
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::EndSkillCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.EndSkillCheck");

	USurvivalSkillCheckWidget_C_EndSkillCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartWarning
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::StartWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartWarning");

	USurvivalSkillCheckWidget_C_StartWarning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.HideGameStuff
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::HideGameStuff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.HideGameStuff");

	USurvivalSkillCheckWidget_C_HideGameStuff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePress
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::SpacePress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.SpacePress");

	USurvivalSkillCheckWidget_C_SpacePress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartSkillCheck
//		Flags  -> ()
void USurvivalSkillCheckWidget_C::StartSkillCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.StartSkillCheck");

	USurvivalSkillCheckWidget_C_StartSkillCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.ExecuteUbergraph_SurvivalSkillCheckWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalSkillCheckWidget_C::ExecuteUbergraph_SurvivalSkillCheckWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkillCheckWidget.SurvivalSkillCheckWidget_C.ExecuteUbergraph_SurvivalSkillCheckWidget");

	USurvivalSkillCheckWidget_C_ExecuteUbergraph_SurvivalSkillCheckWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
