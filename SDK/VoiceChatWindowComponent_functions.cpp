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
//		Name   -> Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.Get_VoiceChatBox_Visibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UVoiceChatWindowComponent_C::Get_VoiceChatBox_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.Get_VoiceChatBox_Visibility_1");

	UVoiceChatWindowComponent_C_Get_VoiceChatBox_Visibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.SendOwner
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceChatWindowComponent_C::SendOwner(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.SendOwner");

	UVoiceChatWindowComponent_C_SendOwner_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.ExecuteUbergraph_VoiceChatWindowComponent
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceChatWindowComponent_C::ExecuteUbergraph_VoiceChatWindowComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoiceChatWindowComponent.VoiceChatWindowComponent_C.ExecuteUbergraph_VoiceChatWindowComponent");

	UVoiceChatWindowComponent_C_ExecuteUbergraph_VoiceChatWindowComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
