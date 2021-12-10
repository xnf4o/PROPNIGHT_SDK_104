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
//		Name   -> Function WBP_SoundChatMiniCooldDown.WBP_SoundChatMiniCooldDown_C.Finished_12B7912E48D208B85A24378624477337
//		Flags  -> ()
void UWBP_SoundChatMiniCooldDown_C::Finished_12B7912E48D208B85A24378624477337()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatMiniCooldDown.WBP_SoundChatMiniCooldDown_C.Finished_12B7912E48D208B85A24378624477337");

	UWBP_SoundChatMiniCooldDown_C_Finished_12B7912E48D208B85A24378624477337_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SoundChatMiniCooldDown.WBP_SoundChatMiniCooldDown_C.StartCoolDownAnimation
//		Flags  -> ()
void UWBP_SoundChatMiniCooldDown_C::StartCoolDownAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatMiniCooldDown.WBP_SoundChatMiniCooldDown_C.StartCoolDownAnimation");

	UWBP_SoundChatMiniCooldDown_C_StartCoolDownAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SoundChatMiniCooldDown.WBP_SoundChatMiniCooldDown_C.ExecuteUbergraph_WBP_SoundChatMiniCooldDown
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SoundChatMiniCooldDown_C::ExecuteUbergraph_WBP_SoundChatMiniCooldDown(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SoundChatMiniCooldDown.WBP_SoundChatMiniCooldDown_C.ExecuteUbergraph_WBP_SoundChatMiniCooldDown");

	UWBP_SoundChatMiniCooldDown_C_ExecuteUbergraph_WBP_SoundChatMiniCooldDown_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
