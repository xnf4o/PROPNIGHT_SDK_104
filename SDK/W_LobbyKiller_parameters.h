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

// Function W_LobbyKiller.W_LobbyKiller_C.SetFirst
struct UW_LobbyKiller_C_SetFirst_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.AnimUP
struct UW_LobbyKiller_C_AnimUP_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.AnimDOWN
struct UW_LobbyKiller_C_AnimDOWN_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UW_LobbyKiller_C_BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.HoverButton
struct UW_LobbyKiller_C_HoverButton_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.SetButtonInfo
struct UW_LobbyKiller_C_SetButtonInfo_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MiniLobby_C*                              Owner;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyKiller.W_LobbyKiller_C.ResetButton
struct UW_LobbyKiller_C_ResetButton_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UW_LobbyKiller_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.Tick
struct UW_LobbyKiller_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyKiller.W_LobbyKiller_C.Construct
struct UW_LobbyKiller_C_Construct_Params
{
};

// Function W_LobbyKiller.W_LobbyKiller_C.ExecuteUbergraph_W_LobbyKiller
struct UW_LobbyKiller_C_ExecuteUbergraph_W_LobbyKiller_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
