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

// Function W_PlayScreen.W_PlayScreen_C.Construct
struct UW_PlayScreen_C_Construct_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.InitPath
struct UW_PlayScreen_C_InitPath_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.PlayScreenToMainMenu
struct UW_PlayScreen_C_PlayScreenToMainMenu_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.ListenForEscape
struct UW_PlayScreen_C_ListenForEscape_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.PreConstruct
struct UW_PlayScreen_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayScreen.W_PlayScreen_C.Move
struct UW_PlayScreen_C_Move_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayScreen.W_PlayScreen_C.OpenServerBrowser
struct UW_PlayScreen_C_OpenServerBrowser_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.ShowContent
struct UW_PlayScreen_C_ShowContent_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.HideContent
struct UW_PlayScreen_C_HideContent_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.ESC_Handler
struct UW_PlayScreen_C_ESC_Handler_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.OpenCreateGame
struct UW_PlayScreen_C_OpenCreateGame_Params
{
};

// Function W_PlayScreen.W_PlayScreen_C.ExecuteUbergraph_W_PlayScreen
struct UW_PlayScreen_C_ExecuteUbergraph_W_PlayScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
