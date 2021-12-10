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

// Function SoundChat.SoundChat_C.isVisibleScoreTable
struct USoundChat_C_isVisibleScoreTable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function SoundChat.SoundChat_C.CheckPlayablePlayer
struct USoundChat_C_CheckPlayablePlayer_Params
{
	int                                                SoundIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MenuIndex;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChat.SoundChat_C.SendSound
struct USoundChat_C_SendSound_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChat.SoundChat_C.CheckStatusSurvForDropItem
struct USoundChat_C_CheckStatusSurvForDropItem_Params
{
	bool                                               Call_;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SoundChat.SoundChat_C.OnPaint
struct USoundChat_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function SoundChat.SoundChat_C.1MenuClose
struct USoundChat_C__1MenuClose_Params
{
};

// Function SoundChat.SoundChat_C.StartListenKeys
struct USoundChat_C_StartListenKeys_Params
{
};

// Function SoundChat.SoundChat_C.2Menu
struct USoundChat_C__2Menu_Params
{
};

// Function SoundChat.SoundChat_C.1Menu
struct USoundChat_C__1Menu_Params
{
};

// Function SoundChat.SoundChat_C.Set1
struct USoundChat_C_Set1_Params
{
};

// Function SoundChat.SoundChat_C.Set2
struct USoundChat_C_Set2_Params
{
};

// Function SoundChat.SoundChat_C.Set3
struct USoundChat_C_Set3_Params
{
};

// Function SoundChat.SoundChat_C.Set4
struct USoundChat_C_Set4_Params
{
};

// Function SoundChat.SoundChat_C.Set5
struct USoundChat_C_Set5_Params
{
};

// Function SoundChat.SoundChat_C.Set6
struct USoundChat_C_Set6_Params
{
};

// Function SoundChat.SoundChat_C.Set7
struct USoundChat_C_Set7_Params
{
};

// Function SoundChat.SoundChat_C.Set8
struct USoundChat_C_Set8_Params
{
};

// Function SoundChat.SoundChat_C.Set9
struct USoundChat_C_Set9_Params
{
};

// Function SoundChat.SoundChat_C.Set0
struct USoundChat_C_Set0_Params
{
};

// Function SoundChat.SoundChat_C.StopListenKeys
struct USoundChat_C_StopListenKeys_Params
{
};

// Function SoundChat.SoundChat_C.OpenChatMenu2
struct USoundChat_C_OpenChatMenu2_Params
{
};

// Function SoundChat.SoundChat_C.OpenChatMenu1
struct USoundChat_C_OpenChatMenu1_Params
{
};

// Function SoundChat.SoundChat_C.Tick
struct USoundChat_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChat.SoundChat_C.Construct
struct USoundChat_C_Construct_Params
{
};

// Function SoundChat.SoundChat_C.GetSoundChatOwner
struct USoundChat_C_GetSoundChatOwner_Params
{
};

// Function SoundChat.SoundChat_C.Enteract_Pressed
struct USoundChat_C_Enteract_Pressed_Params
{
};

// Function SoundChat.SoundChat_C.Enteract_Released
struct USoundChat_C_Enteract_Released_Params
{
};

// Function SoundChat.SoundChat_C.2MenuClose
struct USoundChat_C__2MenuClose_Params
{
};

// Function SoundChat.SoundChat_C.Close
struct USoundChat_C_Close_Params
{
};

// Function SoundChat.SoundChat_C.StopListenEndGame
struct USoundChat_C_StopListenEndGame_Params
{
};

// Function SoundChat.SoundChat_C.Enteract_Pressed_Inv
struct USoundChat_C_Enteract_Pressed_Inv_Params
{
};

// Function SoundChat.SoundChat_C.Enteract_Released_Inv
struct USoundChat_C_Enteract_Released_Inv_Params
{
};

// Function SoundChat.SoundChat_C.OpenInventory
struct USoundChat_C_OpenInventory_Params
{
};

// Function SoundChat.SoundChat_C.Close_inventory
struct USoundChat_C_Close_inventory_Params
{
};

// Function SoundChat.SoundChat_C.CloseInventoryMenu
struct USoundChat_C_CloseInventoryMenu_Params
{
};

// Function SoundChat.SoundChat_C.BindSoundChatComponent
struct USoundChat_C_BindSoundChatComponent_Params
{
	class USoundChatSounds_C*                          Component;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChat.SoundChat_C.StartCoolDown
struct USoundChat_C_StartCoolDown_Params
{
};

// Function SoundChat.SoundChat_C.BndEvt__SoundChat_SoundCommand_Radial_K2Node_ComponentBoundEvent_0_OnCoolDownFinished__DelegateSignature
struct USoundChat_C_BndEvt__SoundChat_SoundCommand_Radial_K2Node_ComponentBoundEvent_0_OnCoolDownFinished__DelegateSignature_Params
{
};

// Function SoundChat.SoundChat_C.ExecuteUbergraph_SoundChat
struct USoundChat_C_ExecuteUbergraph_SoundChat_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
