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
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.ReceiveTick");

	USoundChatSounds_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::SoundChatMenu1(int Sound, TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1");

	USoundChatSounds_C_SoundChatMenu1_Params params {};
	params.Sound = Sound;
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::SoundChatMenu2(int Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2");

	USoundChatSounds_C_SoundChatMenu2_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1Serv
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::SoundChatMenu1Serv(int Sound, TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1Serv");

	USoundChatSounds_C_SoundChatMenu1Serv_Params params {};
	params.Sound = Sound;
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2Serv
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::SoundChatMenu2Serv(int Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2Serv");

	USoundChatSounds_C_SoundChatMenu2Serv_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.SendSoundChat
//		Flags  -> ()
// Parameters:
//		int                                                Menu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::SendSoundChat(int Menu, int Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.SendSoundChat");

	USoundChatSounds_C_SendSoundChat_Params params {};
	params.Menu = Menu;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.StopCurrentSound
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Menu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::StopCurrentSound(int Sound, int Menu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.StopCurrentSound");

	USoundChatSounds_C_StopCurrentSound_Params params {};
	params.Sound = Sound;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.Sound3D
//		Flags  -> ()
// Parameters:
//		int                                                SoundIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::Sound3D(int SoundIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.Sound3D");

	USoundChatSounds_C_Sound3D_Params params {};
	params.SoundIndex = SoundIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.ExecuteUbergraph_SoundChatSounds
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundChatSounds_C::ExecuteUbergraph_SoundChatSounds(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.ExecuteUbergraph_SoundChatSounds");

	USoundChatSounds_C_ExecuteUbergraph_SoundChatSounds_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundChatSounds.SoundChatSounds_C.OnStartedCD__DelegateSignature
//		Flags  -> ()
void USoundChatSounds_C::OnStartedCD__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundChatSounds.SoundChatSounds_C.OnStartedCD__DelegateSignature");

	USoundChatSounds_C_OnStartedCD__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
