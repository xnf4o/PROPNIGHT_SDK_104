#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MiniLobbyPawn.MiniLobbyPawn_C.OnRep_Surv Char
struct AMiniLobbyPawn_C_OnRep_Surv_Char_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_2
struct AMiniLobbyPawn_C_InpActEvt_V_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.InpActEvt_V_K2Node_InputKeyEvent_1
struct AMiniLobbyPawn_C_InpActEvt_V_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.CreateSurvMesh
struct AMiniLobbyPawn_C_CreateSurvMesh_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveTick
struct AMiniLobbyPawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.SendNickname
struct AMiniLobbyPawn_C_SendNickname_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  Avatar;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfo                                 infp;                                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarApplyMulti
struct AMiniLobbyPawn_C_AvatarApplyMulti_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.AvatarUpdate
struct AMiniLobbyPawn_C_AvatarUpdate_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.SetLocationCamLobby
struct AMiniLobbyPawn_C_SetLocationCamLobby_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.AcceptServerInfo
struct AMiniLobbyPawn_C_AcceptServerInfo_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Public;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyCamInit
struct AMiniLobbyPawn_C_LobbyCamInit_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.RequireServerInfo
struct AMiniLobbyPawn_C_RequireServerInfo_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.SendBecomeSpectator
struct AMiniLobbyPawn_C_SendBecomeSpectator_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ProcessRequiredLobbyState
struct AMiniLobbyPawn_C_ProcessRequiredLobbyState_Params
{
	struct FS_LobbyStateTransport                      State;                                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameSettings                             Settings;                                                  // 0x0068(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0088(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.RequireLobbyState
struct AMiniLobbyPawn_C_RequireLobbyState_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyWaitEnd
struct AMiniLobbyPawn_C_LobbyWaitEnd_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ReceivePossessed
struct AMiniLobbyPawn_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.OpenLobby
struct AMiniLobbyPawn_C_OpenLobby_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.LobbyReturn
struct AMiniLobbyPawn_C_LobbyReturn_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.InitVoice
struct AMiniLobbyPawn_C_InitVoice_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.SendVoiceStatusServer
struct AMiniLobbyPawn_C_SendVoiceStatusServer_Params
{
	bool                                               VoiceActive_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveVoice
struct AMiniLobbyPawn_C_ReceiveVoice_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ServVoiceProc
struct AMiniLobbyPawn_C_ServVoiceProc_Params
{
	TArray<unsigned char>                              CompressedVoiceData;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature
struct AMiniLobbyPawn_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature_Params
{
	TArray<unsigned char>                              VoiceData;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              MicLevel;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.CreateKillerMesh
struct AMiniLobbyPawn_C_CreateKillerMesh_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.InitUI
struct AMiniLobbyPawn_C_InitUI_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.SendKillerType
struct AMiniLobbyPawn_C_SendKillerType_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerChar;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ServLobbyWaitEndV2
struct AMiniLobbyPawn_C_ServLobbyWaitEndV2_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ReceiveBeginPlay
struct AMiniLobbyPawn_C_ReceiveBeginPlay_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.SendSurvType
struct AMiniLobbyPawn_C_SendSurvType_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.EndGameCamera
struct AMiniLobbyPawn_C_EndGameCamera_Params
{
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.Puk
struct AMiniLobbyPawn_C_Puk_Params
{
	struct FS_GameSettings                             Game_Settings;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           Server_Settings;                                           // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FString                                     Server_ID;                                                 // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function MiniLobbyPawn.MiniLobbyPawn_C.ExecuteUbergraph_MiniLobbyPawn
struct AMiniLobbyPawn_C_ExecuteUbergraph_MiniLobbyPawn_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
