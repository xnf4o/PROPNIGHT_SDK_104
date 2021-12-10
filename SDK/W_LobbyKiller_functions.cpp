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
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.SetFirst
//		Flags  -> ()
void UW_LobbyKiller_C::SetFirst()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.SetFirst");

	UW_LobbyKiller_C_SetFirst_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.AnimUP
//		Flags  -> ()
void UW_LobbyKiller_C::AnimUP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.AnimUP");

	UW_LobbyKiller_C_AnimUP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.AnimDOWN
//		Flags  -> ()
void UW_LobbyKiller_C::AnimDOWN()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.AnimDOWN");

	UW_LobbyKiller_C_AnimDOWN_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_LobbyKiller_C::BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_LobbyKiller_C_BndEvt__W_LobbyKiller_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.HoverButton
//		Flags  -> ()
void UW_LobbyKiller_C::HoverButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.HoverButton");

	UW_LobbyKiller_C_HoverButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.SetButtonInfo
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UW_MiniLobby_C*                              Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyKiller_C::SetButtonInfo(TEnumAsByte<KillerType_EKillerType> KillerType, class UW_MiniLobby_C* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.SetButtonInfo");

	UW_LobbyKiller_C_SetButtonInfo_Params params {};
	params.KillerType = KillerType;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.ResetButton
//		Flags  -> ()
void UW_LobbyKiller_C::ResetButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.ResetButton");

	UW_LobbyKiller_C_ResetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_LobbyKiller_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UW_LobbyKiller_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyKiller_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.Tick");

	UW_LobbyKiller_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.Construct
//		Flags  -> ()
void UW_LobbyKiller_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.Construct");

	UW_LobbyKiller_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LobbyKiller.W_LobbyKiller_C.ExecuteUbergraph_W_LobbyKiller
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LobbyKiller_C::ExecuteUbergraph_W_LobbyKiller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LobbyKiller.W_LobbyKiller_C.ExecuteUbergraph_W_LobbyKiller");

	UW_LobbyKiller_C_ExecuteUbergraph_W_LobbyKiller_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
