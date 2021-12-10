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

// BlueprintGeneratedClass PC_MainMenu.PC_MainMenu_C
// 0x01C8 (FullSize[0x0788] - InheritedSize[0x05C0])
class APC_MainMenu_C : public APC_PropnightMainMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_BanManager_C*                            BP_BanManager;                                             // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PC_MenuPlayfabCustomGames_C*             BP_PC_MenuPlayfabCustomGames;                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PC_MenuPlayfab_C*                        BP_PC_MenuPlayfab;                                         // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HTTP_Wrapper_C*                          BP_HTTP_Wrapper;                                           // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayFabTitleID;                                            // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     LoginDataSlotName;                                         // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsLoggedIn;                                                // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBusy;                                                    // 0x0619(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_77ZB[0x6];                                     // 0x061A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ServerListReq;                                             // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     BuildId;                                                   // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                     ServerListResponse;                                        // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasActiveServer;                                           // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C8SC[0x7];                                     // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActiveSessionID;                                           // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Address;                                                   // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                     ServerDetailsRequest;                                      // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ServerDetailsResponse;                                     // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Opaopa;                                                    // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0698(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     SaveNameData;                                              // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class USaveGame*                                   UserDataLocal;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Logined;                                                   // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G83L[0x7];                                     // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMainMenuCameraActor_C*                      CameraActor;                                               // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Tab;                                                       // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RYMX[0x4];                                     // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerId;                                                  // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsCreatingServer;                                          // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UQHA[0x3];                                     // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AutoJoinAttempts;                                          // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAutoConnect;                                             // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearching;                                               // 0x06F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UIDW[0x6];                                     // 0x06F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPingQoSInfo>                        LastPingQoSResult;                                         // 0x06F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPlayfabReady;                                            // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMatchFoundEvent;                                         // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsExit;                                                    // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5BJ1[0x7];                                     // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     stringCheat;                                               // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsPlayfabBackend;                                          // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9RSG[0x7];                                     // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestRequestJSON*                          VaRestRequest;                                             // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      lootbox;                                                   // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnBeginSteamCheck;                                         // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnBeginLoginPlayfab;                                       // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSteamCheckError;                                         // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PC_MainMenu.PC_MainMenu_C");
		return ptr;
	}



	void GetIsPlayfabBackend(bool* Is);
	void GetIsExit(bool* Is);
	void GetServerId(struct FString* ID);
	void HandleAndSortPings(TArray<struct FPingQoSInfo>* Pings, TArray<struct FPingQoSInfo>* SortedRes);
	void CheatNumbers(const struct FString& S);
	void MakeSearchData(int Role, class UPlayFabJsonObject** Data);
	void LoadToPS();
	void LoadUserData(bool* NewParam);
	void AddSession(const struct FBlueprintSessionResult& session);
	void IsValidSession(const struct FBlueprintSessionResult& session, bool* IsValid);
	void SetListServersV2(TArray<struct FBlueprintSessionResult>* Sessions);
	void ClearServers();
	void CanJoin(bool* Can);
	void GetServersDev();
	void SetListServers(TArray<class UObject*>* Servers);
	void UnmarkBusy();
	void MarkBusy();
	void SetPlayFabId(const struct FString& ID);
	void SaveLoginData(const struct FString& Login);
	void GetID(struct FString* ID);
	void GetLoginData(bool* HasData, class USG_EOSDeviceLogin_C** Data);
	void InpActEvt_Escape_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void OnFailure_B03CFE9141A130F504FC5BB140CBD9F7();
	void OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7();
	void InpActEvt_F4_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnSearchFail();
	void OnCancelTicket();
	void OnMatch();
	void OnMatchFail();
	void OnLoginOK();
	void OnPreConnect();
	void FailSessionList();
	void ResetAutoConnect();
	void FailJoin();
	void FailCreateSession();
	void ResetButtonVisibility();
	void CancelSearch();
	void OnSessionCreated(const struct FString& Map);
	void FindGame();
	void GetServersV2();
	void CreateServerV2(bool Private, const struct FString& MapName);
	void ReceiveBeginPlay();
	void OnTravelError();
	void OnNetworkError();
	void OnError();
	void OnLoginFail();
	void OnResponse(const struct FString& response);
	void ListServers(int Tab);
	void CreateServerV4(const struct FString& Map, const struct FString& Mode, const struct FString& Region);
	void JoinToTicket(const struct FString& Ticket);
	void CreateLobby();
	void OnPingCompleted(TArray<struct FPingQoSInfo> Result);
	void OnSearchOK();
	void OnMatchFound();
	void QWE();
	void OnFoundSessions(TArray<struct FBlueprintSessionResult> Sessions);
	void CreateServerV3(const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings);
	void ReceiveTick(float DeltaSeconds);
	void AfterServerError();
	void CloseTicket();
	void ManualSearch();
	void SettingsExecute();
	void loginedEos();
	void StartSearch(int Role);
	void EnablePlayfabBackend();
	void Upload();
	void StartPollPlayfabServers(const struct FString& Region);
	void ConfigureRegions(TArray<struct FPingQoSInfo> Regions);
	void ContinuePollPlayfabServers(const struct FString& SkipToken);
	void SetServerPageSize(int Size);
	void StopPoll();
	void DisablePlayfabBackend();
	void LoginWithEOSDevice();
	void ExecuteUbergraph_PC_MainMenu(int EntryPoint);
	void OnSteamCheckError__DelegateSignature();
	void OnBeginLoginPlayfab__DelegateSignature();
	void OnBeginSteamCheck__DelegateSignature();
	void OnMatchFoundEvent__DelegateSignature();
	void OnPlayfabReady__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
