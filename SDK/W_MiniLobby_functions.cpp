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
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ControlChatTipVisibility
//		Flags  -> ()
// Parameters:
void UW_MiniLobby_C::ControlChatTipVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ControlChatTipVisibility");

	UW_MiniLobby_C_ControlChatTipVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.InitChatTip
//		Flags  -> ()
// Parameters:
void UW_MiniLobby_C::InitChatTip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.InitChatTip");

	UW_MiniLobby_C_InitChatTip_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.OnGenerateWidget_2
//		Flags  -> ()
// Parameters:
//		struct FString                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_MiniLobby_C::OnGenerateWidget_2(const struct FString& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.OnGenerateWidget_2");

	UW_MiniLobby_C_OnGenerateWidget_2_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.OnGenerateWidget_1
//		Flags  -> ()
// Parameters:
//		struct FString                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_MiniLobby_C::OnGenerateWidget_1(const struct FString& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.OnGenerateWidget_1");

	UW_MiniLobby_C_OnGenerateWidget_1_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.IsProphunt
//		Flags  -> ()
// Parameters:
//		bool                                               IsProphunt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::IsProphunt(bool* IsProphunt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.IsProphunt");

	UW_MiniLobby_C_IsProphunt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsProphunt != nullptr)
		*IsProphunt = params.IsProphunt;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.GetSurvivorsCount
//		Flags  -> ()
// Parameters:
//		int                                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::GetSurvivorsCount(int* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.GetSurvivorsCount");

	UW_MiniLobby_C_GetSurvivorsCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.GetSlotCountByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::GetSlotCountByName(const struct FString& Name, int* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.GetSlotCountByName");

	UW_MiniLobby_C_GetSlotCountByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.GetKillersCount
//		Flags  -> ()
// Parameters:
//		int                                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::GetKillersCount(int* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.GetKillersCount");

	UW_MiniLobby_C_GetKillersCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.GetSlotByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UW_Slot_C*                                   Slot                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UW_SlotM_C*                                  SlotM                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::GetSlotByName(const struct FString& Name, class UW_Slot_C** Slot, class UW_SlotM_C** SlotM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.GetSlotByName");

	UW_MiniLobby_C_GetSlotByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
	if (SlotM != nullptr)
		*SlotM = params.SlotM;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.Construct
//		Flags  -> ()
void UW_MiniLobby_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.Construct");

	UW_MiniLobby_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.Tick");

	UW_MiniLobby_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.UpdateLobbyState
//		Flags  -> ()
void UW_MiniLobby_C::UpdateLobbyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.UpdateLobbyState");

	UW_MiniLobby_C_UpdateLobbyState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_207_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_207_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.UpdateServerInfo
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Public                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::UpdateServerInfo(const struct FString& MapName, bool Public)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.UpdateServerInfo");

	UW_MiniLobby_C_UpdateServerInfo_Params params {};
	params.MapName = MapName;
	params.Public = Public;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__RefreshList_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__RefreshList_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__RefreshList_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__RefreshList_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.StartGameAttempt
//		Flags  -> ()
void UW_MiniLobby_C::StartGameAttempt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.StartGameAttempt");

	UW_MiniLobby_C_StartGameAttempt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.Cancel
//		Flags  -> ()
void UW_MiniLobby_C::Cancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.Cancel");

	UW_MiniLobby_C_Cancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.CreateButtons
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
void UW_MiniLobby_C::CreateButtons(bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.CreateButtons");

	UW_MiniLobby_C_CreateButtons_Params params {};
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.CreateSurvButtons
//		Flags  -> ()
// Parameters:
//		bool                                               Propnight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::CreateSurvButtons(bool Propnight_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.CreateSurvButtons");

	UW_MiniLobby_C_CreateSurvButtons_Params params {};
	params.Propnight_ = Propnight_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.CreateKillerButtons
//		Flags  -> ()
// Parameters:
//		bool                                               Propnight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::CreateKillerButtons(bool Propnight_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.CreateKillerButtons");

	UW_MiniLobby_C_CreateKillerButtons_Params params {};
	params.Propnight_ = Propnight_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_207_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_207_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_207_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_207_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.KillerChange
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::KillerChange(TEnumAsByte<KillerType_EKillerType> KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.KillerChange");

	UW_MiniLobby_C_KillerChange_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.SurvChange
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::SurvChange(TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.SurvChange");

	UW_MiniLobby_C_SurvChange_Params params {};
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.CreateSurvSkillsButtons
//		Flags  -> ()
void UW_MiniLobby_C::CreateSurvSkillsButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.CreateSurvSkillsButtons");

	UW_MiniLobby_C_CreateSurvSkillsButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.SurvSkillChange
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvSkills_ESurvSkills>                SurvSkill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::SurvSkillChange(TEnumAsByte<SurvSkills_ESurvSkills> SurvSkill)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.SurvSkillChange");

	UW_MiniLobby_C_SurvSkillChange_Params params {};
	params.SurvSkill = SurvSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.CreateSlots
//		Flags  -> ()
void UW_MiniLobby_C::CreateSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.CreateSlots");

	UW_MiniLobby_C_CreateSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ClearButtons
//		Flags  -> ()
void UW_MiniLobby_C::ClearButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ClearButtons");

	UW_MiniLobby_C_ClearButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_25_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.HideSwap
//		Flags  -> ()
void UW_MiniLobby_C::HideSwap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.HideSwap");

	UW_MiniLobby_C_HideSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.StartGameButton
//		Flags  -> ()
void UW_MiniLobby_C::StartGameButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.StartGameButton");

	UW_MiniLobby_C_StartGameButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ReadyCustom
//		Flags  -> ()
void UW_MiniLobby_C::ReadyCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ReadyCustom");

	UW_MiniLobby_C_ReadyCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.PlayMusicCustom
//		Flags  -> ()
void UW_MiniLobby_C::PlayMusicCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.PlayMusicCustom");

	UW_MiniLobby_C_PlayMusicCustom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ButtonSwitch
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::ButtonSwitch(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ButtonSwitch");

	UW_MiniLobby_C_ButtonSwitch_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_272_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_272_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_272_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_272_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_KillerBoost_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__Button_KillerBoost_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_KillerBoost_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__Button_KillerBoost_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.HideBoosterWidget
//		Flags  -> ()
// Parameters:
//		bool                                               isKillerSlot_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::HideBoosterWidget(bool isKillerSlot_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.HideBoosterWidget");

	UW_MiniLobby_C_HideBoosterWidget_Params params {};
	params.isKillerSlot_ = isKillerSlot_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.W8Slots
//		Flags  -> ()
void UW_MiniLobby_C::W8Slots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.W8Slots");

	UW_MiniLobby_C_W8Slots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ResetSwaps
//		Flags  -> ()
void UW_MiniLobby_C::ResetSwaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ResetSwaps");

	UW_MiniLobby_C_ResetSwaps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MiniLobby_C::BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.UpdateLobbyTime
//		Flags  -> ()
void UW_MiniLobby_C::UpdateLobbyTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.UpdateLobbyTime");

	UW_MiniLobby_C_UpdateLobbyTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MiniLobby_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.PreConstruct");

	UW_MiniLobby_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ClearSwap_LeaveFromServer
//		Flags  -> ()
// Parameters:
//		class APawn*                                       LeftPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::ClearSwap_LeaveFromServer(class APawn* LeftPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ClearSwap_LeaveFromServer");

	UW_MiniLobby_C_ClearSwap_LeaveFromServer_Params params {};
	params.LeftPlayer = LeftPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.LosesFocusWidget
//		Flags  -> ()
void UW_MiniLobby_C::LosesFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.LosesFocusWidget");

	UW_MiniLobby_C_LosesFocusWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.HoverFocusButton
//		Flags  -> ()
void UW_MiniLobby_C::HoverFocusButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.HoverFocusButton");

	UW_MiniLobby_C_HoverFocusButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.CheckPerk
//		Flags  -> ()
void UW_MiniLobby_C::CheckPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.CheckPerk");

	UW_MiniLobby_C_CheckPerk_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ShowInviteFriends
//		Flags  -> ()
void UW_MiniLobby_C::ShowInviteFriends()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ShowInviteFriends");

	UW_MiniLobby_C_ShowInviteFriends_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MiniLobby.W_MiniLobby_C.ExecuteUbergraph_W_MiniLobby
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MiniLobby_C::ExecuteUbergraph_W_MiniLobby(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MiniLobby.W_MiniLobby_C.ExecuteUbergraph_W_MiniLobby");

	UW_MiniLobby_C_ExecuteUbergraph_W_MiniLobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
