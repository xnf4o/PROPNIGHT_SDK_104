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
//		Name   -> Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.IsCD
//		Flags  -> ()
// Parameters:
//		bool                                               CD                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SoundChatCoolDown_C::IsCD(bool* CD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.IsCD");

	UWBP_SoundChatCoolDown_C_IsCD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CD != nullptr)
		*CD = params.CD;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.Finished_43C8EAF04B9D1A26CD3EE29C94725E84
//		Flags  -> ()
void UWBP_SoundChatCoolDown_C::Finished_43C8EAF04B9D1A26CD3EE29C94725E84()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.Finished_43C8EAF04B9D1A26CD3EE29C94725E84");

	UWBP_SoundChatCoolDown_C_Finished_43C8EAF04B9D1A26CD3EE29C94725E84_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.StartCoolDownAnimation
//		Flags  -> ()
void UWBP_SoundChatCoolDown_C::StartCoolDownAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.StartCoolDownAnimation");

	UWBP_SoundChatCoolDown_C_StartCoolDownAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.ExecuteUbergraph_WBP_SoundChatCoolDown
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SoundChatCoolDown_C::ExecuteUbergraph_WBP_SoundChatCoolDown(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.ExecuteUbergraph_WBP_SoundChatCoolDown");

	UWBP_SoundChatCoolDown_C_ExecuteUbergraph_WBP_SoundChatCoolDown_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.OnFinished__DelegateSignature
//		Flags  -> ()
void UWBP_SoundChatCoolDown_C::OnFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatCoolDown.WBP_SoundChatCoolDown_C.OnFinished__DelegateSignature");

	UWBP_SoundChatCoolDown_C_OnFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
