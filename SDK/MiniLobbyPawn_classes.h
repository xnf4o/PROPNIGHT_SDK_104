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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MiniLobbyPawn.MiniLobbyPawn_C
// 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
class AMiniLobbyPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVoipManagerComponent*                       VoipManager;                                               // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FString                                     Nickname;                                                  // 0x0298(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2D*                                  Avatar;                                                    // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class A3DLobbyMesh_C*                              LobbyMesh;                                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvSkin;                                                  // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MVLV[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfo                                 InfoMiniLobby;                                             // 0x02C0(0x0018) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                     Temp1;                                                     // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Temp2;                                                     // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ACamLobby_C*                                 LobbyCamRef;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               VoiceActive_;                                              // 0x02F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Allow_Voice;                                               // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EBNV[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoipAudioComponent*                         VoipAudio;                                                 // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  Surv_Char;                                                 // 0x0308(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KillerChar;                                                // 0x0309(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5OWJ[0x6];                                     // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANewLobby_C*                                 NewLobbyReference;                                         // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANewLobbyV2_C*                               LobbyV2;                                                   // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadingTutorial_C*                        WLoadingT;                                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MiniLobbyPawn.MiniLobbyPawn_C");
		return ptr;
	}



	void OnRep_Surv_Char();
	void InpActEvt_V_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void CreateSurvMesh(TEnumAsByte<SurvChars_ESurvChars> SurvChar);
	void ReceiveTick(float DeltaSeconds);
	void SendNickname(const struct FString& Nickname, class UTexture2D* Avatar, const struct FPlayerInfo& infp);
	void AvatarApplyMulti();
	void AvatarUpdate();
	void SetLocationCamLobby();
	void AcceptServerInfo(const struct FString& MapName, bool Public);
	void LobbyCamInit();
	void RequireServerInfo();
	void SendBecomeSpectator();
	void ProcessRequiredLobbyState(const struct FS_LobbyStateTransport& State, const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings);
	void RequireLobbyState();
	void LobbyWaitEnd();
	void ReceivePossessed(class AController* NewController);
	void OpenLobby();
	void LobbyReturn();
	void InitVoice();
	void SendVoiceStatusServer(bool VoiceActive_);
	void ReceiveVoice(TArray<unsigned char> CompressedVoiceData);
	void ServVoiceProc(TArray<unsigned char> CompressedVoiceData);
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_0_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel);
	void CreateKillerMesh(TEnumAsByte<KillerType_EKillerType> KillerType);
	void InitUI();
	void SendKillerType(TEnumAsByte<KillerType_EKillerType> KillerChar, class UObject* Object);
	void ServLobbyWaitEndV2();
	void ReceiveBeginPlay();
	void SendSurvType(TEnumAsByte<SurvChars_ESurvChars> SurvChar, class UObject* Object);
	void EndGameCamera();
	void Puk(const struct FS_GameSettings& Game_Settings, const struct FS_ServerSettings& Server_Settings, const struct FString& Server_ID);
	void ExecuteUbergraph_MiniLobbyPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
