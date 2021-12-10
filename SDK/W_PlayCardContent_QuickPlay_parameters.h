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

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.CheckBanInitial
struct UW_PlayCardContent_QuickPlay_C_CheckBanInitial_Params
{
	bool                                               IsBanned;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.GetContentHeight
struct UW_PlayCardContent_QuickPlay_C_GetContentHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.GetTextContentHeight
struct UW_PlayCardContent_QuickPlay_C_GetTextContentHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.OnInit
struct UW_PlayCardContent_QuickPlay_C_OnInit_Params
{
	struct FText                                       Name;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_PlayCardContent_QuickPlay_C_BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UW_PlayCardContent_QuickPlay_C_BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UW_PlayCardContent_QuickPlay_C_BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Tick
struct UW_PlayCardContent_QuickPlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTooManyPlayers
struct UW_PlayCardContent_QuickPlay_C_ShowTooManyPlayers_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTeamLeaderOnly
struct UW_PlayCardContent_QuickPlay_C_ShowTeamLeaderOnly_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTeamLeaderOnlyLocked
struct UW_PlayCardContent_QuickPlay_C_ShowTeamLeaderOnlyLocked_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Construct
struct UW_PlayCardContent_QuickPlay_C_Construct_Params
{
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.PreConstruct
struct UW_PlayCardContent_QuickPlay_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Search
struct UW_PlayCardContent_QuickPlay_C_Search_Params
{
	TEnumAsByte<E_RoleType_E_RoleType>                 Role;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ExecuteUbergraph_W_PlayCardContent_QuickPlay
struct UW_PlayCardContent_QuickPlay_C_ExecuteUbergraph_W_PlayCardContent_QuickPlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
