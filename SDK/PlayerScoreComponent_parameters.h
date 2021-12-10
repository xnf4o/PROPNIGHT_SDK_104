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

// Function PlayerScoreComponent.PlayerScoreComponent_C.AnimateNickname
struct UPlayerScoreComponent_C_AnimateNickname_Params
{
	bool                                               IsForwardDirection;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.SurvStyle
struct UPlayerScoreComponent_C_SurvStyle_Params
{
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.KillerStyle
struct UPlayerScoreComponent_C_KillerStyle_Params
{
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.SetIsEmpty
struct UPlayerScoreComponent_C_SetIsEmpty_Params
{
	bool                                               Empty;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.GetPing
struct UPlayerScoreComponent_C_GetPing_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.GetScore
struct UPlayerScoreComponent_C_GetScore_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.Construct
struct UPlayerScoreComponent_C_Construct_Params
{
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.Tick
struct UPlayerScoreComponent_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.GetInfo
struct UPlayerScoreComponent_C_GetInfo_Params
{
	class APawn*                                       Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.SetMute
struct UPlayerScoreComponent_C_SetMute_Params
{
	bool                                               Mute;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.BndEvt__PlayerScoreComponent_PlayerScoreComponentButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UPlayerScoreComponent_C_BndEvt__PlayerScoreComponent_PlayerScoreComponentButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.AnimateNicknameTick
struct UPlayerScoreComponent_C_AnimateNicknameTick_Params
{
};

// Function PlayerScoreComponent.PlayerScoreComponent_C.ExecuteUbergraph_PlayerScoreComponent
struct UPlayerScoreComponent_C_ExecuteUbergraph_PlayerScoreComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
