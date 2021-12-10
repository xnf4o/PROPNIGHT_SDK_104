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
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.CheckBanInitial
//		Flags  -> ()
// Parameters:
//		bool                                               IsBanned                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PlayCardContent_QuickPlay_C::CheckBanInitial(bool* IsBanned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.CheckBanInitial");

	UW_PlayCardContent_QuickPlay_C_CheckBanInitial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBanned != nullptr)
		*IsBanned = params.IsBanned;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.GetContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_QuickPlay_C::GetContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.GetContentHeight");

	UW_PlayCardContent_QuickPlay_C_GetContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.GetTextContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_QuickPlay_C::GetTextContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.GetTextContentHeight");

	UW_PlayCardContent_QuickPlay_C_GetTextContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.OnInit
//		Flags  -> ()
// Parameters:
//		struct FText                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_PlayCardContent_QuickPlay_C::OnInit(const struct FText& Name, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.OnInit");

	UW_PlayCardContent_QuickPlay_C_OnInit_Params params {};
	params.Name = Name;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_PlayCardContent_QuickPlay_C_BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_PlayCardContent_QuickPlay_C_BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_PlayCardContent_QuickPlay_C_BndEvt__W_PlayCardContent_QuickPlay_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_QuickPlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Tick");

	UW_PlayCardContent_QuickPlay_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTooManyPlayers
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::ShowTooManyPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTooManyPlayers");

	UW_PlayCardContent_QuickPlay_C_ShowTooManyPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTeamLeaderOnly
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::ShowTeamLeaderOnly()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTeamLeaderOnly");

	UW_PlayCardContent_QuickPlay_C_ShowTeamLeaderOnly_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTeamLeaderOnlyLocked
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::ShowTeamLeaderOnlyLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ShowTeamLeaderOnlyLocked");

	UW_PlayCardContent_QuickPlay_C_ShowTeamLeaderOnlyLocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Construct
//		Flags  -> ()
void UW_PlayCardContent_QuickPlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Construct");

	UW_PlayCardContent_QuickPlay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PlayCardContent_QuickPlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.PreConstruct");

	UW_PlayCardContent_QuickPlay_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Search
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<E_RoleType_E_RoleType>                 Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_QuickPlay_C::Search(TEnumAsByte<E_RoleType_E_RoleType> Role)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.Search");

	UW_PlayCardContent_QuickPlay_C_Search_Params params {};
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ExecuteUbergraph_W_PlayCardContent_QuickPlay
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_QuickPlay_C::ExecuteUbergraph_W_PlayCardContent_QuickPlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_QuickPlay.W_PlayCardContent_QuickPlay_C.ExecuteUbergraph_W_PlayCardContent_QuickPlay");

	UW_PlayCardContent_QuickPlay_C_ExecuteUbergraph_W_PlayCardContent_QuickPlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
