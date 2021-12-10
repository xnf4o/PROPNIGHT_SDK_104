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

// Function W_PlayCard.W_PlayCard_C.HoverAnimationTick
struct UW_PlayCard_C_HoverAnimationTick_Params
{
};

// Function W_PlayCard.W_PlayCard_C.HoverAnimation
struct UW_PlayCard_C_HoverAnimation_Params
{
	bool                                               isForwarDirection;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayCard.W_PlayCard_C.GetContentHeight
struct UW_PlayCard_C_GetContentHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCard.W_PlayCard_C.GetTextHeightContent
struct UW_PlayCard_C_GetTextHeightContent_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCard.W_PlayCard_C.SetBlocked
struct UW_PlayCard_C_SetBlocked_Params
{
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayCard.W_PlayCard_C.OnMouseButtonDown
struct UW_PlayCard_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function W_PlayCard.W_PlayCard_C.PreConstruct
struct UW_PlayCard_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayCard.W_PlayCard_C.Tick
struct UW_PlayCard_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCard.W_PlayCard_C.OnMouseEnter
struct UW_PlayCard_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_PlayCard.W_PlayCard_C.OnMouseLeave
struct UW_PlayCard_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_PlayCard.W_PlayCard_C.BigSize
struct UW_PlayCard_C_BigSize_Params
{
};

// Function W_PlayCard.W_PlayCard_C.LowSize
struct UW_PlayCard_C_LowSize_Params
{
};

// Function W_PlayCard.W_PlayCard_C.ExecuteUbergraph_W_PlayCard
struct UW_PlayCard_C_ExecuteUbergraph_W_PlayCard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCard.W_PlayCard_C.ServerBrowser_OnClicked__DelegateSignature
struct UW_PlayCard_C_ServerBrowser_OnClicked__DelegateSignature_Params
{
};

// Function W_PlayCard.W_PlayCard_C.CreateGame_OnClicked__DelegateSignature
struct UW_PlayCard_C_CreateGame_OnClicked__DelegateSignature_Params
{
};

// Function W_PlayCard.W_PlayCard_C.SearchGame_OnClicked__DelegateSignature
struct UW_PlayCard_C_SearchGame_OnClicked__DelegateSignature_Params
{
	TEnumAsByte<E_RoleType_E_RoleType>                 Role;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
