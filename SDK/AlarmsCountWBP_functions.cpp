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
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.GetRemainingDurationOfAnimation
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RemainingTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::GetRemainingDurationOfAnimation(class UWidgetAnimation* Animation, float* RemainingTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.GetRemainingDurationOfAnimation");

	UAlarmsCountWBP_C_GetRemainingDurationOfAnimation_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Get_HorizontalBox_GameMode_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAlarmsCountWBP_C::Get_HorizontalBox_GameMode_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Get_HorizontalBox_GameMode_Visibility_1");

	UAlarmsCountWBP_C_Get_HorizontalBox_GameMode_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Get_ReadyText_3_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAlarmsCountWBP_C::Get_ReadyText_3_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Get_ReadyText_3_Text_1");

	UAlarmsCountWBP_C_Get_ReadyText_3_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.GetText_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAlarmsCountWBP_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.GetText_1");

	UAlarmsCountWBP_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.GetCountSurv
//		Flags  -> ()
// Parameters:
//		struct FText                                       SurvCount                                                  (Parm, OutParm)
void UAlarmsCountWBP_C::GetCountSurv(struct FText* SurvCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.GetCountSurv");

	UAlarmsCountWBP_C_GetCountSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvCount != nullptr)
		*SurvCount = params.SurvCount;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Get_KillerSee_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAlarmsCountWBP_C::Get_KillerSee_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Get_KillerSee_Text_1");

	UAlarmsCountWBP_C_Get_KillerSee_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Get_HMLMIcon_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAlarmsCountWBP_C::Get_HMLMIcon_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Get_HMLMIcon_Visibility_1");

	UAlarmsCountWBP_C_Get_HMLMIcon_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Get_KillerSee_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAlarmsCountWBP_C::Get_KillerSee_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Get_KillerSee_Visibility_1");

	UAlarmsCountWBP_C_Get_KillerSee_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.GetSeconds
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAlarmsCountWBP_C::GetSeconds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.GetSeconds");

	UAlarmsCountWBP_C_GetSeconds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.GetMinutes
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UAlarmsCountWBP_C::GetMinutes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.GetMinutes");

	UAlarmsCountWBP_C_GetMinutes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.HardModeFunc
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAlarmsCountWBP_C::HardModeFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.HardModeFunc");

	UAlarmsCountWBP_C_HardModeFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.LastManStandingFunc
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UAlarmsCountWBP_C::LastManStandingFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.LastManStandingFunc");

	UAlarmsCountWBP_C_LastManStandingFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_8815FCE84CCB0DBB127326A3EF146B7B
//		Flags  -> ()
void UAlarmsCountWBP_C::Finished_8815FCE84CCB0DBB127326A3EF146B7B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_8815FCE84CCB0DBB127326A3EF146B7B");

	UAlarmsCountWBP_C_Finished_8815FCE84CCB0DBB127326A3EF146B7B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_1D822A1F4C4A5D3A4D0039A3024F6B5D
//		Flags  -> ()
void UAlarmsCountWBP_C::Finished_1D822A1F4C4A5D3A4D0039A3024F6B5D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_1D822A1F4C4A5D3A4D0039A3024F6B5D");

	UAlarmsCountWBP_C_Finished_1D822A1F4C4A5D3A4D0039A3024F6B5D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_EEF0B14F408F0997123CB3A5C21862F4
//		Flags  -> ()
void UAlarmsCountWBP_C::Finished_EEF0B14F408F0997123CB3A5C21862F4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_EEF0B14F408F0997123CB3A5C21862F4");

	UAlarmsCountWBP_C_Finished_EEF0B14F408F0997123CB3A5C21862F4_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_57A1E6EE457CDFDBE2D560A73D93F82E
//		Flags  -> ()
void UAlarmsCountWBP_C::Finished_57A1E6EE457CDFDBE2D560A73D93F82E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_57A1E6EE457CDFDBE2D560A73D93F82E");

	UAlarmsCountWBP_C_Finished_57A1E6EE457CDFDBE2D560A73D93F82E_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_70183A994FAC25A59FA71B99492571BE
//		Flags  -> ()
void UAlarmsCountWBP_C::Finished_70183A994FAC25A59FA71B99492571BE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_70183A994FAC25A59FA71B99492571BE");

	UAlarmsCountWBP_C_Finished_70183A994FAC25A59FA71B99492571BE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_9F7266A9451CEADDEAD257AE8B506A76
//		Flags  -> ()
void UAlarmsCountWBP_C::Finished_9F7266A9451CEADDEAD257AE8B506A76()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Finished_9F7266A9451CEADDEAD257AE8B506A76");

	UAlarmsCountWBP_C_Finished_9F7266A9451CEADDEAD257AE8B506A76_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.SurvRemain
//		Flags  -> ()
// Parameters:
//		int                                                OnChairSurv                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::SurvRemain(int OnChairSurv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.SurvRemain");

	UAlarmsCountWBP_C_SurvRemain_Params params {};
	params.OnChairSurv = OnChairSurv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.LastManStanding
//		Flags  -> ()
void UAlarmsCountWBP_C::LastManStanding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.LastManStanding");

	UAlarmsCountWBP_C_LastManStanding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.CallNotification
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GameplayNotificationType_EGameplayNotificationType> Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::CallNotification(TEnumAsByte<GameplayNotificationType_EGameplayNotificationType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.CallNotification");

	UAlarmsCountWBP_C_CallNotification_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.DecreaseAlarmEvent
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv_AlarmDone                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::DecreaseAlarmEvent(class AActor* Surv_AlarmDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.DecreaseAlarmEvent");

	UAlarmsCountWBP_C_DecreaseAlarmEvent_Params params {};
	params.Surv_AlarmDone = Surv_AlarmDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Tick");

	UAlarmsCountWBP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.Construct
//		Flags  -> ()
void UAlarmsCountWBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.Construct");

	UAlarmsCountWBP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.EyeAnim
//		Flags  -> ()
void UAlarmsCountWBP_C::EyeAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.EyeAnim");

	UAlarmsCountWBP_C_EyeAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.TimerControlUI
//		Flags  -> ()
// Parameters:
//		bool                                               Add_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::TimerControlUI(bool Add_, int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.TimerControlUI");

	UAlarmsCountWBP_C_TimerControlUI_Params params {};
	params.Add_ = Add_;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.StopGameEnd
//		Flags  -> ()
void UAlarmsCountWBP_C::StopGameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.StopGameEnd");

	UAlarmsCountWBP_C_StopGameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.OnAlarmsDoneHandler
//		Flags  -> ()
void UAlarmsCountWBP_C::OnAlarmsDoneHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.OnAlarmsDoneHandler");

	UAlarmsCountWBP_C_OnAlarmsDoneHandler_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.OnSurvSavedNotification
//		Flags  -> ()
void UAlarmsCountWBP_C::OnSurvSavedNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.OnSurvSavedNotification");

	UAlarmsCountWBP_C_OnSurvSavedNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.OnEscapeNotification
//		Flags  -> ()
void UAlarmsCountWBP_C::OnEscapeNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.OnEscapeNotification");

	UAlarmsCountWBP_C_OnEscapeNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.OnSurvDeadNotification
//		Flags  -> ()
void UAlarmsCountWBP_C::OnSurvDeadNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.OnSurvDeadNotification");

	UAlarmsCountWBP_C_OnSurvDeadNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.LastManStand
//		Flags  -> ()
void UAlarmsCountWBP_C::LastManStand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.LastManStand");

	UAlarmsCountWBP_C_LastManStand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.OnLastSurvAnimFinishedHandler
//		Flags  -> ()
void UAlarmsCountWBP_C::OnLastSurvAnimFinishedHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.OnLastSurvAnimFinishedHandler");

	UAlarmsCountWBP_C_OnLastSurvAnimFinishedHandler_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.ExecuteUbergraph_AlarmsCountWBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlarmsCountWBP_C::ExecuteUbergraph_AlarmsCountWBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.ExecuteUbergraph_AlarmsCountWBP");

	UAlarmsCountWBP_C_ExecuteUbergraph_AlarmsCountWBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmsCountWBP.AlarmsCountWBP_C.OnLastSurmAnimFinished__DelegateSignature
//		Flags  -> ()
void UAlarmsCountWBP_C::OnLastSurmAnimFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmsCountWBP.AlarmsCountWBP_C.OnLastSurmAnimFinished__DelegateSignature");

	UAlarmsCountWBP_C_OnLastSurmAnimFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
