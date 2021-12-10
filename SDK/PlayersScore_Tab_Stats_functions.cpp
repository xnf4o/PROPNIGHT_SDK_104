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
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UPlayersScore_Tab_Stats_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnMouseButtonDown");

	UPlayersScore_Tab_Stats_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Pointification
//		Flags  -> ()
// Parameters:
//		struct FText                                       TextIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       TextOut                                                    (Parm, OutParm)
void UPlayersScore_Tab_Stats_C::Pointification(const struct FText& TextIn, struct FText* TextOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Pointification");

	UPlayersScore_Tab_Stats_C_Pointification_Params params {};
	params.TextIn = TextIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextOut != nullptr)
		*TextOut = params.TextOut;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CreateEmptySlots
//		Flags  -> ()
// Parameters:
void UPlayersScore_Tab_Stats_C::CreateEmptySlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CreateEmptySlots");

	UPlayersScore_Tab_Stats_C_CreateEmptySlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CalculateWindowSize
//		Flags  -> ()
// Parameters:
void UPlayersScore_Tab_Stats_C::CalculateWindowSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CalculateWindowSize");

	UPlayersScore_Tab_Stats_C_CalculateWindowSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Create Player Widget
//		Flags  -> ()
// Parameters:
//		class APawn*                                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayersScore_Tab_Stats_C::Create_Player_Widget(class APawn* Player, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Create Player Widget");

	UPlayersScore_Tab_Stats_C_Create_Player_Widget_Params params {};
	params.Player = Player;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Finished_4108FCA54759C3018047DF936F937547
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::Finished_4108FCA54759C3018047DF936F937547()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Finished_4108FCA54759C3018047DF936F937547");

	UPlayersScore_Tab_Stats_C_Finished_4108FCA54759C3018047DF936F937547_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayersScore_Tab_Stats_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PreConstruct");

	UPlayersScore_Tab_Stats_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Construct
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Construct");

	UPlayersScore_Tab_Stats_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayersScore_Tab_Stats_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Tick");

	UPlayersScore_Tab_Stats_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.LoadPlayers
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::LoadPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.LoadPlayers");

	UPlayersScore_Tab_Stats_C_LoadPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.GetPlayers
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::GetPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.GetPlayers");

	UPlayersScore_Tab_Stats_C_GetPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OpenWidget
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::OpenWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OpenWidget");

	UPlayersScore_Tab_Stats_C_OpenWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CloseWidget
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::CloseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CloseWidget");

	UPlayersScore_Tab_Stats_C_CloseWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PrintTextZeroScore
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::PrintTextZeroScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PrintTextZeroScore");

	UPlayersScore_Tab_Stats_C_PrintTextZeroScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnSwapNotification
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::OnSwapNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnSwapNotification");

	UPlayersScore_Tab_Stats_C_OnSwapNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.BlockAndOff
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::BlockAndOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.BlockAndOff");

	UPlayersScore_Tab_Stats_C_BlockAndOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowScoreSurv
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::ShowScoreSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowScoreSurv");

	UPlayersScore_Tab_Stats_C_ShowScoreSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.DisableScore
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::DisableScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.DisableScore");

	UPlayersScore_Tab_Stats_C_DisableScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowReportMenu
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayersScore_Tab_Stats_C::ShowReportMenu(const struct FVector2D& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowReportMenu");

	UPlayersScore_Tab_Stats_C_ShowReportMenu_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.RemoveReportMessage
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::RemoveReportMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.RemoveReportMessage");

	UPlayersScore_Tab_Stats_C_RemoveReportMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.RemoveReportWindow
//		Flags  -> ()
void UPlayersScore_Tab_Stats_C::RemoveReportWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.RemoveReportWindow");

	UPlayersScore_Tab_Stats_C_RemoveReportWindow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ClickReportButton
//		Flags  -> ()
// Parameters:
//		int                                                NumberButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayersScore_Tab_Stats_C::ClickReportButton(int NumberButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ClickReportButton");

	UPlayersScore_Tab_Stats_C_ClickReportButton_Params params {};
	params.NumberButton = NumberButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ExecuteUbergraph_PlayersScore_Tab_Stats
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayersScore_Tab_Stats_C::ExecuteUbergraph_PlayersScore_Tab_Stats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ExecuteUbergraph_PlayersScore_Tab_Stats");

	UPlayersScore_Tab_Stats_C_ExecuteUbergraph_PlayersScore_Tab_Stats_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
