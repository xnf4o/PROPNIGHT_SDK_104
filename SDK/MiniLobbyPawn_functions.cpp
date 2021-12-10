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
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.OnRep_Surv Char
//		Flags  -> ()
void AMiniLobbyPawn_C::OnRep_Surv_Char()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.OnRep_Surv Char");

	AMiniLobbyPawn_C_OnRep_Surv_Char_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMiniLobbyPawn_C::InpActEvt_V_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_2");

	AMiniLobbyPawn_C_InpActEvt_V_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMiniLobbyPawn_C::InpActEvt_V_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_1");

	AMiniLobbyPawn_C_InpActEvt_V_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.CreateSurvMesh
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::CreateSurvMesh(TEnumAsByte<SurvChars_ESurvChars> SurvChar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.CreateSurvMesh");

	AMiniLobbyPawn_C_CreateSurvMesh_Params params {};
	params.SurvChar = SurvChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveTick");

	AMiniLobbyPawn_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.SendNickname
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPlayerInfo                                 infp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::SendNickname(const struct FString& Nickname, class UTexture2D* Avatar, const struct FPlayerInfo& infp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.SendNickname");

	AMiniLobbyPawn_C_SendNickname_Params params {};
	params.Nickname = Nickname;
	params.Avatar = Avatar;
	params.infp = infp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarApplyMulti
//		Flags  -> ()
void AMiniLobbyPawn_C::AvatarApplyMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarApplyMulti");

	AMiniLobbyPawn_C_AvatarApplyMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarUpdate
//		Flags  -> ()
void AMiniLobbyPawn_C::AvatarUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarUpdate");

	AMiniLobbyPawn_C_AvatarUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.SetLocationCamLobby
//		Flags  -> ()
void AMiniLobbyPawn_C::SetLocationCamLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.SetLocationCamLobby");

	AMiniLobbyPawn_C_SetLocationCamLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.AcceptServerInfo
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Public                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMiniLobbyPawn_C::AcceptServerInfo(const struct FString& MapName, bool Public)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.AcceptServerInfo");

	AMiniLobbyPawn_C_AcceptServerInfo_Params params {};
	params.MapName = MapName;
	params.Public = Public;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyCamInit
//		Flags  -> ()
void AMiniLobbyPawn_C::LobbyCamInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyCamInit");

	AMiniLobbyPawn_C_LobbyCamInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.RequireServerInfo
//		Flags  -> ()
void AMiniLobbyPawn_C::RequireServerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.RequireServerInfo");

	AMiniLobbyPawn_C_RequireServerInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.SendBecomeSpectator
//		Flags  -> ()
void AMiniLobbyPawn_C::SendBecomeSpectator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.SendBecomeSpectator");

	AMiniLobbyPawn_C_SendBecomeSpectator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ProcessRequiredLobbyState
//		Flags  -> ()
// Parameters:
//		struct FS_LobbyStateTransport                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FS_GameSettings                             Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           ServerSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMiniLobbyPawn_C::ProcessRequiredLobbyState(const struct FS_LobbyStateTransport& State, const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ProcessRequiredLobbyState");

	AMiniLobbyPawn_C_ProcessRequiredLobbyState_Params params {};
	params.State = State;
	params.Settings = Settings;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.RequireLobbyState
//		Flags  -> ()
void AMiniLobbyPawn_C::RequireLobbyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.RequireLobbyState");

	AMiniLobbyPawn_C_RequireLobbyState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyWaitEnd
//		Flags  -> ()
void AMiniLobbyPawn_C::LobbyWaitEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyWaitEnd");

	AMiniLobbyPawn_C_LobbyWaitEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ReceivePossessed
//		Flags  -> ()
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ReceivePossessed");

	AMiniLobbyPawn_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.OpenLobby
//		Flags  -> ()
void AMiniLobbyPawn_C::OpenLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.OpenLobby");

	AMiniLobbyPawn_C_OpenLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyReturn
//		Flags  -> ()
void AMiniLobbyPawn_C::LobbyReturn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyReturn");

	AMiniLobbyPawn_C_LobbyReturn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.InitVoice
//		Flags  -> ()
void AMiniLobbyPawn_C::InitVoice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.InitVoice");

	AMiniLobbyPawn_C_InitVoice_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.SendVoiceStatusServer
//		Flags  -> ()
// Parameters:
//		bool                                               VoiceActive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMiniLobbyPawn_C::SendVoiceStatusServer(bool VoiceActive_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.SendVoiceStatusServer");

	AMiniLobbyPawn_C_SendVoiceStatusServer_Params params {};
	params.VoiceActive_ = VoiceActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveVoice
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AMiniLobbyPawn_C::ReceiveVoice(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveVoice");

	AMiniLobbyPawn_C_ReceiveVoice_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ServVoiceProc
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AMiniLobbyPawn_C::ServVoiceProc(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ServVoiceProc");

	AMiniLobbyPawn_C_ServVoiceProc_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              VoiceData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              MicLevel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature");

	AMiniLobbyPawn_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature_Params params {};
	params.VoiceData = VoiceData;
	params.MicLevel = MicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.CreateKillerMesh
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::CreateKillerMesh(TEnumAsByte<KillerType_EKillerType> KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.CreateKillerMesh");

	AMiniLobbyPawn_C_CreateKillerMesh_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.InitUI
//		Flags  -> ()
void AMiniLobbyPawn_C::InitUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.InitUI");

	AMiniLobbyPawn_C_InitUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.SendKillerType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerChar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::SendKillerType(TEnumAsByte<KillerType_EKillerType> KillerChar, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.SendKillerType");

	AMiniLobbyPawn_C_SendKillerType_Params params {};
	params.KillerChar = KillerChar;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ServLobbyWaitEndV2
//		Flags  -> ()
void AMiniLobbyPawn_C::ServLobbyWaitEndV2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ServLobbyWaitEndV2");

	AMiniLobbyPawn_C_ServLobbyWaitEndV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveBeginPlay
//		Flags  -> ()
void AMiniLobbyPawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveBeginPlay");

	AMiniLobbyPawn_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.SendSurvType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::SendSurvType(TEnumAsByte<SurvChars_ESurvChars> SurvChar, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.SendSurvType");

	AMiniLobbyPawn_C_SendSurvType_Params params {};
	params.SurvChar = SurvChar;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.EndGameCamera
//		Flags  -> ()
void AMiniLobbyPawn_C::EndGameCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.EndGameCamera");

	AMiniLobbyPawn_C_EndGameCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.Puk
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             Game_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           Server_Settings                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FString                                     Server_ID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::Puk(const struct FS_GameSettings& Game_Settings, const struct FS_ServerSettings& Server_Settings, const struct FString& Server_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.Puk");

	AMiniLobbyPawn_C_Puk_Params params {};
	params.Game_Settings = Game_Settings;
	params.Server_Settings = Server_Settings;
	params.Server_ID = Server_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MiniLobbyPawn.MiniLobbyPawn_C.ExecuteUbergraph_MiniLobbyPawn
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniLobbyPawn_C::ExecuteUbergraph_MiniLobbyPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MiniLobbyPawn.MiniLobbyPawn_C.ExecuteUbergraph_MiniLobbyPawn");

	AMiniLobbyPawn_C_ExecuteUbergraph_MiniLobbyPawn_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
