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
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       QuestText                                                  (Parm, OutParm)
void UW_Tutorial_Quest_C::SetText(struct FText* QuestText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetText");

	UW_Tutorial_Quest_C_SetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestText != nullptr)
		*QuestText = params.QuestText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.Get_TextBlock_Q1_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_Tutorial_Quest_C::Get_TextBlock_Q1_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.Get_TextBlock_Q1_Text_1");

	UW_Tutorial_Quest_C_Get_TextBlock_Q1_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetDialogue
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_Tutorial_Quest_C::SetDialogue(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetDialogue");

	UW_Tutorial_Quest_C_SetDialogue_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetQuest
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tutorial_Quest_C::SetQuest(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetQuest");

	UW_Tutorial_Quest_C_SetQuest_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Tutorial_Quest_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.PreConstruct");

	UW_Tutorial_Quest_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.Construct
//		Flags  -> ()
void UW_Tutorial_Quest_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.Construct");

	UW_Tutorial_Quest_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tutorial_Quest_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.Tick");

	UW_Tutorial_Quest_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.StartAnimKeys
//		Flags  -> ()
void UW_Tutorial_Quest_C::StartAnimKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.StartAnimKeys");

	UW_Tutorial_Quest_C_StartAnimKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.EndAnimKeys
//		Flags  -> ()
void UW_Tutorial_Quest_C::EndAnimKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.EndAnimKeys");

	UW_Tutorial_Quest_C_EndAnimKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetQuestText
//		Flags  -> ()
void UW_Tutorial_Quest_C::SetQuestText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.SetQuestText");

	UW_Tutorial_Quest_C_SetQuestText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.QuestCompleted
//		Flags  -> ()
void UW_Tutorial_Quest_C::QuestCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.QuestCompleted");

	UW_Tutorial_Quest_C_QuestCompleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.QuestNotCompleted
//		Flags  -> ()
void UW_Tutorial_Quest_C::QuestNotCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.QuestNotCompleted");

	UW_Tutorial_Quest_C_QuestNotCompleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.ShowQuest
//		Flags  -> ()
void UW_Tutorial_Quest_C::ShowQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.ShowQuest");

	UW_Tutorial_Quest_C_ShowQuest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.HideQuest
//		Flags  -> ()
void UW_Tutorial_Quest_C::HideQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.HideQuest");

	UW_Tutorial_Quest_C_HideQuest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.CustomEvent_1
//		Flags  -> ()
void UW_Tutorial_Quest_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.CustomEvent_1");

	UW_Tutorial_Quest_C_CustomEvent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.NextQuest
//		Flags  -> ()
void UW_Tutorial_Quest_C::NextQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.NextQuest");

	UW_Tutorial_Quest_C_NextQuest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Tutorial_Quest.W_Tutorial_Quest_C.ExecuteUbergraph_W_Tutorial_Quest
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tutorial_Quest_C::ExecuteUbergraph_W_Tutorial_Quest(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Tutorial_Quest.W_Tutorial_Quest_C.ExecuteUbergraph_W_Tutorial_Quest");

	UW_Tutorial_Quest_C_ExecuteUbergraph_W_Tutorial_Quest_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
