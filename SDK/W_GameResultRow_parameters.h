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

// Function W_GameResultRow.W_GameResultRow_C.AnimateNickname
struct UW_GameResultRow_C_AnimateNickname_Params
{
	bool                                               IsForwardDirection;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GameResultRow.W_GameResultRow_C.GetText_1
struct UW_GameResultRow_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResultRow.W_GameResultRow_C.Construct
struct UW_GameResultRow_C_Construct_Params
{
};

// Function W_GameResultRow.W_GameResultRow_C.Tick
struct UW_GameResultRow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResultRow.W_GameResultRow_C.SetData
struct UW_GameResultRow_C_SetData_Params
{
	class APS_PropHunt_C*                              PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResultRow.W_GameResultRow_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_GameResultRow_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResultRow.W_GameResultRow_C.AnimateNicknameTick
struct UW_GameResultRow_C_AnimateNicknameTick_Params
{
};

// Function W_GameResultRow.W_GameResultRow_C.ExecuteUbergraph_W_GameResultRow
struct UW_GameResultRow_C_ExecuteUbergraph_W_GameResultRow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
