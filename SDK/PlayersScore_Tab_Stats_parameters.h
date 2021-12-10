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

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnMouseButtonDown
struct UPlayersScore_Tab_Stats_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Pointification
struct UPlayersScore_Tab_Stats_C_Pointification_Params
{
	struct FText                                       TextIn;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TextOut;                                                   // 0x0018(0x0018)  (Parm, OutParm)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CreateEmptySlots
struct UPlayersScore_Tab_Stats_C_CreateEmptySlots_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CalculateWindowSize
struct UPlayersScore_Tab_Stats_C_CalculateWindowSize_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Create Player Widget
struct UPlayersScore_Tab_Stats_C_Create_Player_Widget_Params
{
	class APawn*                                       Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Finished_4108FCA54759C3018047DF936F937547
struct UPlayersScore_Tab_Stats_C_Finished_4108FCA54759C3018047DF936F937547_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PreConstruct
struct UPlayersScore_Tab_Stats_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Construct
struct UPlayersScore_Tab_Stats_C_Construct_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.Tick
struct UPlayersScore_Tab_Stats_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.LoadPlayers
struct UPlayersScore_Tab_Stats_C_LoadPlayers_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.GetPlayers
struct UPlayersScore_Tab_Stats_C_GetPlayers_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OpenWidget
struct UPlayersScore_Tab_Stats_C_OpenWidget_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.CloseWidget
struct UPlayersScore_Tab_Stats_C_CloseWidget_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.PrintTextZeroScore
struct UPlayersScore_Tab_Stats_C_PrintTextZeroScore_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.OnSwapNotification
struct UPlayersScore_Tab_Stats_C_OnSwapNotification_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.BlockAndOff
struct UPlayersScore_Tab_Stats_C_BlockAndOff_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowScoreSurv
struct UPlayersScore_Tab_Stats_C_ShowScoreSurv_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.DisableScore
struct UPlayersScore_Tab_Stats_C_DisableScore_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ShowReportMenu
struct UPlayersScore_Tab_Stats_C_ShowReportMenu_Params
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.RemoveReportMessage
struct UPlayersScore_Tab_Stats_C_RemoveReportMessage_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.RemoveReportWindow
struct UPlayersScore_Tab_Stats_C_RemoveReportWindow_Params
{
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ClickReportButton
struct UPlayersScore_Tab_Stats_C_ClickReportButton_Params
{
	int                                                NumberButton;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayersScore_Tab_Stats.PlayersScore_Tab_Stats_C.ExecuteUbergraph_PlayersScore_Tab_Stats
struct UPlayersScore_Tab_Stats_C_ExecuteUbergraph_PlayersScore_Tab_Stats_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
