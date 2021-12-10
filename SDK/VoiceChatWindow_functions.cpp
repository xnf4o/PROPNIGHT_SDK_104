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
//		Name   -> Function VoiceChatWindow.VoiceChatWindow_C.Construct
//		Flags  -> ()
void UVoiceChatWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoiceChatWindow.VoiceChatWindow_C.Construct");

	UVoiceChatWindow_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VoiceChatWindow.VoiceChatWindow_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceChatWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoiceChatWindow.VoiceChatWindow_C.Tick");

	UVoiceChatWindow_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VoiceChatWindow.VoiceChatWindow_C.ExecuteUbergraph_VoiceChatWindow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceChatWindow_C::ExecuteUbergraph_VoiceChatWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VoiceChatWindow.VoiceChatWindow_C.ExecuteUbergraph_VoiceChatWindow");

	UVoiceChatWindow_C_ExecuteUbergraph_VoiceChatWindow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
