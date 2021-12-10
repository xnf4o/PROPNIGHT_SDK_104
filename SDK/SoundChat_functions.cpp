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
//		Name   -> Function SoundChat.SoundChat_C.isVisibleScoreTable
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USoundChat_C::isVisibleScoreTable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.isVisibleScoreTable");

	USoundChat_C_isVisibleScoreTable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.CheckPlayablePlayer
//		Flags  -> ()
// Parameters:
//		int                                                SoundIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MenuIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChat_C::CheckPlayablePlayer(int SoundIndex, int MenuIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.CheckPlayablePlayer");

	USoundChat_C_CheckPlayablePlayer_Params params {};
	params.SoundIndex = SoundIndex;
	params.MenuIndex = MenuIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.SendSound
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChat_C::SendSound(int Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.SendSound");

	USoundChat_C_SendSound_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.CheckStatusSurvForDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               Call_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USoundChat_C::CheckStatusSurvForDropItem(bool* Call_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.CheckStatusSurvForDropItem");

	USoundChat_C_CheckStatusSurvForDropItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Call_ != nullptr)
		*Call_ = params.Call_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.OnPaint
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void USoundChat_C::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.OnPaint");

	USoundChat_C_OnPaint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.1MenuClose
//		Flags  -> ()
void USoundChat_C::_1MenuClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.1MenuClose");

	USoundChat_C__1MenuClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.StartListenKeys
//		Flags  -> ()
void USoundChat_C::StartListenKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.StartListenKeys");

	USoundChat_C_StartListenKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.2Menu
//		Flags  -> ()
void USoundChat_C::_2Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.2Menu");

	USoundChat_C__2Menu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.1Menu
//		Flags  -> ()
void USoundChat_C::_1Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.1Menu");

	USoundChat_C__1Menu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set1
//		Flags  -> ()
void USoundChat_C::Set1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set1");

	USoundChat_C_Set1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set2
//		Flags  -> ()
void USoundChat_C::Set2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set2");

	USoundChat_C_Set2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set3
//		Flags  -> ()
void USoundChat_C::Set3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set3");

	USoundChat_C_Set3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set4
//		Flags  -> ()
void USoundChat_C::Set4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set4");

	USoundChat_C_Set4_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set5
//		Flags  -> ()
void USoundChat_C::Set5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set5");

	USoundChat_C_Set5_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set6
//		Flags  -> ()
void USoundChat_C::Set6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set6");

	USoundChat_C_Set6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set7
//		Flags  -> ()
void USoundChat_C::Set7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set7");

	USoundChat_C_Set7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set8
//		Flags  -> ()
void USoundChat_C::Set8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set8");

	USoundChat_C_Set8_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set9
//		Flags  -> ()
void USoundChat_C::Set9()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set9");

	USoundChat_C_Set9_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Set0
//		Flags  -> ()
void USoundChat_C::Set0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Set0");

	USoundChat_C_Set0_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.StopListenKeys
//		Flags  -> ()
void USoundChat_C::StopListenKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.StopListenKeys");

	USoundChat_C_StopListenKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.OpenChatMenu2
//		Flags  -> ()
void USoundChat_C::OpenChatMenu2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.OpenChatMenu2");

	USoundChat_C_OpenChatMenu2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.OpenChatMenu1
//		Flags  -> ()
void USoundChat_C::OpenChatMenu1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.OpenChatMenu1");

	USoundChat_C_OpenChatMenu1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Tick");

	USoundChat_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Construct
//		Flags  -> ()
void USoundChat_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Construct");

	USoundChat_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.GetSoundChatOwner
//		Flags  -> ()
void USoundChat_C::GetSoundChatOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.GetSoundChatOwner");

	USoundChat_C_GetSoundChatOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Enteract_Pressed
//		Flags  -> ()
void USoundChat_C::Enteract_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Enteract_Pressed");

	USoundChat_C_Enteract_Pressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Enteract_Released
//		Flags  -> ()
void USoundChat_C::Enteract_Released()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Enteract_Released");

	USoundChat_C_Enteract_Released_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.2MenuClose
//		Flags  -> ()
void USoundChat_C::_2MenuClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.2MenuClose");

	USoundChat_C__2MenuClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Close
//		Flags  -> ()
void USoundChat_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Close");

	USoundChat_C_Close_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.StopListenEndGame
//		Flags  -> ()
void USoundChat_C::StopListenEndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.StopListenEndGame");

	USoundChat_C_StopListenEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Enteract_Pressed_Inv
//		Flags  -> ()
void USoundChat_C::Enteract_Pressed_Inv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Enteract_Pressed_Inv");

	USoundChat_C_Enteract_Pressed_Inv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Enteract_Released_Inv
//		Flags  -> ()
void USoundChat_C::Enteract_Released_Inv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Enteract_Released_Inv");

	USoundChat_C_Enteract_Released_Inv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.OpenInventory
//		Flags  -> ()
void USoundChat_C::OpenInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.OpenInventory");

	USoundChat_C_OpenInventory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.Close_inventory
//		Flags  -> ()
void USoundChat_C::Close_inventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.Close_inventory");

	USoundChat_C_Close_inventory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.CloseInventoryMenu
//		Flags  -> ()
void USoundChat_C::CloseInventoryMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.CloseInventoryMenu");

	USoundChat_C_CloseInventoryMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.BindSoundChatComponent
//		Flags  -> ()
// Parameters:
//		class USoundChatSounds_C*                          Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChat_C::BindSoundChatComponent(class USoundChatSounds_C* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.BindSoundChatComponent");

	USoundChat_C_BindSoundChatComponent_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.StartCoolDown
//		Flags  -> ()
void USoundChat_C::StartCoolDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.StartCoolDown");

	USoundChat_C_StartCoolDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.BndEvt__SoundChat_SoundCommand_Radial_K2Node_ComponentBoundEvent_0_OnCoolDownFinished__DelegateSignature
//		Flags  -> ()
void USoundChat_C::BndEvt__SoundChat_SoundCommand_Radial_K2Node_ComponentBoundEvent_0_OnCoolDownFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.BndEvt__SoundChat_SoundCommand_Radial_K2Node_ComponentBoundEvent_0_OnCoolDownFinished__DelegateSignature");

	USoundChat_C_BndEvt__SoundChat_SoundCommand_Radial_K2Node_ComponentBoundEvent_0_OnCoolDownFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChat.SoundChat_C.ExecuteUbergraph_SoundChat
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChat_C::ExecuteUbergraph_SoundChat(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChat.SoundChat_C.ExecuteUbergraph_SoundChat");

	USoundChat_C_ExecuteUbergraph_SoundChat_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
