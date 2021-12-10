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

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetText
struct UW_Tutorial_Quest_C_SetText_Params
{
	struct FText                                       QuestText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.Get_TextBlock_Q1_Text_1
struct UW_Tutorial_Quest_C_Get_TextBlock_Q1_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetDialogue
struct UW_Tutorial_Quest_C_SetDialogue_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetQuest
struct UW_Tutorial_Quest_C_SetQuest_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.PreConstruct
struct UW_Tutorial_Quest_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.Construct
struct UW_Tutorial_Quest_C_Construct_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.Tick
struct UW_Tutorial_Quest_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.StartAnimKeys
struct UW_Tutorial_Quest_C_StartAnimKeys_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.EndAnimKeys
struct UW_Tutorial_Quest_C_EndAnimKeys_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetQuestText
struct UW_Tutorial_Quest_C_SetQuestText_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.QuestCompleted
struct UW_Tutorial_Quest_C_QuestCompleted_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.QuestNotCompleted
struct UW_Tutorial_Quest_C_QuestNotCompleted_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.ShowQuest
struct UW_Tutorial_Quest_C_ShowQuest_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.HideQuest
struct UW_Tutorial_Quest_C_HideQuest_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.CustomEvent_1
struct UW_Tutorial_Quest_C_CustomEvent_1_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.NextQuest
struct UW_Tutorial_Quest_C_NextQuest_Params
{
};

// Function W_Tutorial_Quest.W_Tutorial_Quest_C.ExecuteUbergraph_W_Tutorial_Quest
struct UW_Tutorial_Quest_C_ExecuteUbergraph_W_Tutorial_Quest_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
