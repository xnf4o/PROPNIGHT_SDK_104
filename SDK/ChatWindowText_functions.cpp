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
//		Name   -> Function ChatWindowText.ChatWindowText_C.IsClipped
//		Flags  -> ()
// Parameters:
//		bool                                               IsClipped                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatWindowText_C::IsClipped(bool* IsClipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.IsClipped");

	UChatWindowText_C_IsClipped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsClipped != nullptr)
		*IsClipped = params.IsClipped;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.Construct
//		Flags  -> ()
void UChatWindowText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.Construct");

	UChatWindowText_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.StartHiding
//		Flags  -> ()
// Parameters:
//		float                                              TimeOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindowText_C::StartHiding(float TimeOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.StartHiding");

	UChatWindowText_C_StartHiding_Params params {};
	params.TimeOffset = TimeOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.StartDisplaying
//		Flags  -> ()
void UChatWindowText_C::StartDisplaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.StartDisplaying");

	UChatWindowText_C_StartDisplaying_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.HidingTick
//		Flags  -> ()
void UChatWindowText_C::HidingTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.HidingTick");

	UChatWindowText_C_HidingTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.DisplayingTick
//		Flags  -> ()
void UChatWindowText_C::DisplayingTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.DisplayingTick");

	UChatWindowText_C_DisplayingTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.HiddenMessage
//		Flags  -> ()
void UChatWindowText_C::HiddenMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.HiddenMessage");

	UChatWindowText_C_HiddenMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.ShowMessage
//		Flags  -> ()
void UChatWindowText_C::ShowMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.ShowMessage");

	UChatWindowText_C_ShowMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindowText.ChatWindowText_C.ExecuteUbergraph_ChatWindowText
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindowText_C::ExecuteUbergraph_ChatWindowText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindowText.ChatWindowText_C.ExecuteUbergraph_ChatWindowText");

	UChatWindowText_C_ExecuteUbergraph_ChatWindowText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
