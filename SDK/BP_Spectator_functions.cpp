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
//		Name   -> Function BP_Spectator.BP_Spectator_C.SetAvatarsToBanner
//		Flags  -> ()
// Parameters:
//		class UW_Banner_C*                                 Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::SetAvatarsToBanner(class UW_Banner_C* Banner, class ASurvivorMasterBP_C* Survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.SetAvatarsToBanner");

	ABP_Spectator_C_SetAvatarsToBanner_Params params {};
	params.Banner = Banner;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.GetNext_IgnoreMeStart
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             DefaultPointProp                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKillerMasterBP_C*                           Killer                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::GetNext_IgnoreMeStart(class ASurvivorMasterBP_C** Survivor, class USceneComponent** DefaultPointProp, class AKillerMasterBP_C** Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.GetNext_IgnoreMeStart");

	ABP_Spectator_C_GetNext_IgnoreMeStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivor != nullptr)
		*Survivor = params.Survivor;
	if (DefaultPointProp != nullptr)
		*DefaultPointProp = params.DefaultPointProp;
	if (Killer != nullptr)
		*Killer = params.Killer;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.GetPrevProphunt
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Ac                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             DefaultPointProp                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::GetPrevProphunt(class AActor** Ac, class USceneComponent** DefaultPointProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.GetPrevProphunt");

	ABP_Spectator_C_GetPrevProphunt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ac != nullptr)
		*Ac = params.Ac;
	if (DefaultPointProp != nullptr)
		*DefaultPointProp = params.DefaultPointProp;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.GetNextProphunt
//		Flags  -> ()
// Parameters:
//		class APawn*                                       Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             DefaultPointProp                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::GetNextProphunt(class APawn** Player, class USceneComponent** DefaultPointProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.GetNextProphunt");

	ABP_Spectator_C_GetNextProphunt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (DefaultPointProp != nullptr)
		*DefaultPointProp = params.DefaultPointProp;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.GetPrev
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Ac                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             DefaultPointProp                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::GetPrev(class AActor** Ac, class USceneComponent** DefaultPointProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.GetPrev");

	ABP_Spectator_C_GetPrev_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ac != nullptr)
		*Ac = params.Ac;
	if (DefaultPointProp != nullptr)
		*DefaultPointProp = params.DefaultPointProp;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.GetNext
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             DefaultPointProp                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKillerMasterBP_C*                           Killer                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::GetNext(class ASurvivorMasterBP_C** Survivor, class USceneComponent** DefaultPointProp, class AKillerMasterBP_C** Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.GetNext");

	ABP_Spectator_C_GetNext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivor != nullptr)
		*Survivor = params.Survivor;
	if (DefaultPointProp != nullptr)
		*DefaultPointProp = params.DefaultPointProp;
	if (Killer != nullptr)
		*Killer = params.Killer;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void ABP_Spectator_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.Timeline_0__FinishedFunc");

	ABP_Spectator_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void ABP_Spectator_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.Timeline_0__UpdateFunc");

	ABP_Spectator_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpActEvt_Previous Player_K2Node_InputActionEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Spectator_C::InpActEvt_Previous_Player_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpActEvt_Previous Player_K2Node_InputActionEvent_3");

	ABP_Spectator_C_InpActEvt_Previous_Player_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpActEvt_Next Player_K2Node_InputActionEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Spectator_C::InpActEvt_Next_Player_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpActEvt_Next Player_K2Node_InputActionEvent_2");

	ABP_Spectator_C_InpActEvt_Next_Player_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpActEvt_E_K2Node_InputKeyEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Spectator_C::InpActEvt_E_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpActEvt_E_K2Node_InputKeyEvent_1");

	ABP_Spectator_C_InpActEvt_E_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C. Pick Up Survivor_K2Node_InputActionEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Spectator_C::_Pick_Up_Survivor_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C. Pick Up Survivor_K2Node_InputActionEvent_1");

	ABP_Spectator_C__Pick_Up_Survivor_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_Spectator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ReceiveBeginPlay");

	ABP_Spectator_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	ABP_Spectator_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	ABP_Spectator_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.NicknameRotationUpdate
//		Flags  -> ()
void ABP_Spectator_C::NicknameRotationUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.NicknameRotationUpdate");

	ABP_Spectator_C_NicknameRotationUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ReceiveTick");

	ABP_Spectator_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.NextSurvCustomChange
//		Flags  -> ()
void ABP_Spectator_C::NextSurvCustomChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.NextSurvCustomChange");

	ABP_Spectator_C_NextSurvCustomChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.DetachAndFade
//		Flags  -> ()
void ABP_Spectator_C::DetachAndFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.DetachAndFade");

	ABP_Spectator_C_DetachAndFade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.SwitchSpectator
//		Flags  -> ()
// Parameters:
//		bool                                               Spectating_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Spectator_C::SwitchSpectator(bool Spectating_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.SwitchSpectator");

	ABP_Spectator_C_SwitchSpectator_Params params {};
	params.Spectating_ = Spectating_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.EndSpectate
//		Flags  -> ()
void ABP_Spectator_C::EndSpectate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.EndSpectate");

	ABP_Spectator_C_EndSpectate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ExitColl
//		Flags  -> ()
void ABP_Spectator_C::ExitColl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ExitColl");

	ABP_Spectator_C_ExitColl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ReceivePossessed
//		Flags  -> ()
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ReceivePossessed");

	ABP_Spectator_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InitVoice
//		Flags  -> ()
void ABP_Spectator_C::InitVoice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InitVoice");

	ABP_Spectator_C_InitVoice_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              VoiceData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              MicLevel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature");

	ABP_Spectator_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature_Params params {};
	params.VoiceData = VoiceData;
	params.MicLevel = MicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ServVoiceProc
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Spectator_C::ServVoiceProc(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ServVoiceProc");

	ABP_Spectator_C_ServVoiceProc_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ReceiveVoice
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Spectator_C::ReceiveVoice(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ReceiveVoice");

	ABP_Spectator_C_ReceiveVoice_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.SendVoiceStatusServer
//		Flags  -> ()
// Parameters:
//		bool                                               VoiceActive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Spectator_C::SendVoiceStatusServer(bool VoiceActive_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.SendVoiceStatusServer");

	ABP_Spectator_C_SendVoiceStatusServer_Params params {};
	params.VoiceActive_ = VoiceActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ReceiveDestroyed
//		Flags  -> ()
void ABP_Spectator_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ReceiveDestroyed");

	ABP_Spectator_C_ReceiveDestroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ExecuteE
//		Flags  -> ()
void ABP_Spectator_C::ExecuteE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ExecuteE");

	ABP_Spectator_C_ExecuteE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39");

	ABP_Spectator_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54");

	ABP_Spectator_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.CameraChair
//		Flags  -> ()
void ABP_Spectator_C::CameraChair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.CameraChair");

	ABP_Spectator_C_CameraChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.SurvOnChairCamera
//		Flags  -> ()
void ABP_Spectator_C::SurvOnChairCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.SurvOnChairCamera");

	ABP_Spectator_C_SurvOnChairCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.GetNameSurvWidget
//		Flags  -> ()
void ABP_Spectator_C::GetNameSurvWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.GetNameSurvWidget");

	ABP_Spectator_C_GetNameSurvWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ClientDestroySpectatorUI
//		Flags  -> ()
void ABP_Spectator_C::ClientDestroySpectatorUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ClientDestroySpectatorUI");

	ABP_Spectator_C_ClientDestroySpectatorUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.SelfHelp_MULTI
//		Flags  -> ()
void ABP_Spectator_C::SelfHelp_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.SelfHelp_MULTI");

	ABP_Spectator_C_SelfHelp_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.SelfHelp_SERV
//		Flags  -> ()
void ABP_Spectator_C::SelfHelp_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.SelfHelp_SERV");

	ABP_Spectator_C_SelfHelp_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ProgressBar
//		Flags  -> ()
void ABP_Spectator_C::ProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ProgressBar");

	ABP_Spectator_C_ProgressBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.StartProgressbar
//		Flags  -> ()
void ABP_Spectator_C::StartProgressbar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.StartProgressbar");

	ABP_Spectator_C_StartProgressbar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.CamShake
//		Flags  -> ()
void ABP_Spectator_C::CamShake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.CamShake");

	ABP_Spectator_C_CamShake_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Spectator.BP_Spectator_C.ExecuteUbergraph_BP_Spectator
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Spectator_C::ExecuteUbergraph_BP_Spectator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Spectator.BP_Spectator_C.ExecuteUbergraph_BP_Spectator");

	ABP_Spectator_C_ExecuteUbergraph_BP_Spectator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
