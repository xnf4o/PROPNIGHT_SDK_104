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
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.GetContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_CustomGame_C::GetContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.GetContentHeight");

	UW_PlayCardContent_CustomGame_C_GetContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.GetTextContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_CustomGame_C::GetTextContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.GetTextContentHeight");

	UW_PlayCardContent_CustomGame_C_GetTextContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.Construct
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.Construct");

	UW_PlayCardContent_CustomGame_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_CustomGame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.Tick");

	UW_PlayCardContent_CustomGame_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.OnInit
//		Flags  -> ()
// Parameters:
//		struct FText                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_PlayCardContent_CustomGame_C::OnInit(const struct FText& Name, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.OnInit");

	UW_PlayCardContent_CustomGame_C_OnInit_Params params {};
	params.Name = Name;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_BndEvt__W_PlayCardContent_CustomGame_Button_CreateGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_BndEvt__W_PlayCardContent_CustomGame_Button_ServerBrowser_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.LockingLogic
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::LockingLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.LockingLogic");

	UW_PlayCardContent_CustomGame_C_LockingLogic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.ExecuteUbergraph_W_PlayCardContent_CustomGame
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_CustomGame_C::ExecuteUbergraph_W_PlayCardContent_CustomGame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.ExecuteUbergraph_W_PlayCardContent_CustomGame");

	UW_PlayCardContent_CustomGame_C_ExecuteUbergraph_W_PlayCardContent_CustomGame_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.ServerBrowser_OnClicked__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::ServerBrowser_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.ServerBrowser_OnClicked__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_ServerBrowser_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.CreateGame_OnClicked__DelegateSignature
//		Flags  -> ()
void UW_PlayCardContent_CustomGame_C::CreateGame_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent_CustomGame.W_PlayCardContent_CustomGame_C.CreateGame_OnClicked__DelegateSignature");

	UW_PlayCardContent_CustomGame_C_CreateGame_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
