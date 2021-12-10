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
//		Name   -> Function EasyVoiceChat.VoiceFunctionLibrary.GetAllPawnsFromState
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       CurrentPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class APawn*> UVoiceFunctionLibrary::GetAllPawnsFromState(class UObject* WorldContextObject, class APawn* CurrentPlayer, float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyVoiceChat.VoiceFunctionLibrary.GetAllPawnsFromState");

	UVoiceFunctionLibrary_GetAllPawnsFromState_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CurrentPlayer = CurrentPlayer;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EasyVoiceChat.VoipAudioComponent.PlayVoiceData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVoipAudioComponent::PlayVoiceData(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyVoiceChat.VoipAudioComponent.PlayVoiceData");

	UVoipAudioComponent_PlayVoiceData_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EasyVoiceChat.VoipManagerComponent.OnVoiceGeneratedBP
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              VoiceBuffer                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              MicLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoipManagerComponent::OnVoiceGeneratedBP(TArray<unsigned char> VoiceBuffer, float MicLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyVoiceChat.VoipManagerComponent.OnVoiceGeneratedBP");

	UVoipManagerComponent_OnVoiceGeneratedBP_Params params {};
	params.VoiceBuffer = VoiceBuffer;
	params.MicLevel = MicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EasyVoiceChat.VoipManagerComponent.OnPlayerStopTalking
//		Flags  -> ()
void UVoipManagerComponent::OnPlayerStopTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyVoiceChat.VoipManagerComponent.OnPlayerStopTalking");

	UVoipManagerComponent_OnPlayerStopTalking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EasyVoiceChat.VoipManagerComponent.OnPlayerStartTalking
//		Flags  -> ()
void UVoipManagerComponent::OnPlayerStartTalking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyVoiceChat.VoipManagerComponent.OnPlayerStartTalking");

	UVoipManagerComponent_OnPlayerStartTalking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EasyVoiceChat.VoipManagerComponent.InitVoice
//		Flags  -> ()
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoipManagerComponent::InitVoice(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyVoiceChat.VoipManagerComponent.InitVoice");

	UVoipManagerComponent_InitVoice_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
