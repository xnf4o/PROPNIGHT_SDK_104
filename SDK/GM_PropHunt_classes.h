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

// BlueprintGeneratedClass GM_PropHunt.GM_PropHunt_C
// 0x00B0 (FullSize[0x0370] - InheritedSize[0x02C0])
class AGM_PropHunt_C : public APropnightGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPlayfabServerComponent*                     PlayfabServer;                                             // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ServerReporter_C*                        BP_ServerReporter;                                         // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGameStarted;                                             // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ABVA[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Seconds;                                                   // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayersCount;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G8GR[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ShutdownServerHandle;                                      // 0x02F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              ShutdownTimer;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RoundTime;                                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APropnightBeaconHost*                        BeaconHost;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LockTravel;                                                // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StopTimer_;                                                // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StartNextGameTimer_;                                       // 0x030A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O0ZV[0x1];                                     // 0x030B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NextGameTimer;                                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MatchTime;                                                 // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlayerReloadingAlarm;                                    // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5AYV[0x3];                                     // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ANewAlarmBP_C*>                       alarms;                                                    // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FString                                     Status;                                                    // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MapName;                                                   // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class APC_PropHunt_C*>                      PlayfabPlayers;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               CustomSession;                                             // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HNCY[0x7];                                     // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayfabKillerID;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GM_PropHunt.GM_PropHunt_C");
		return ptr;
	}



	void GetPlayfabPlayers(TArray<class APC_PropHunt_C*>* Players);
	void GetServerCapacity(int* Capacity);
	void GetMap(struct FString* Map);
	void GetMode(struct FString* Mode);
	void GetStatus(struct FString* Status);
	void GetPlayersCount(int* Count);
	void SetAllPlayersHightlightPlyers();
	void AddHightlightsPlayerInformation(class APC_PropHunt_C* Player_Cottroller);
	void GetNextMap(struct FString* NextMap);
	void Get_Random_Surv(const struct FString& KillerID, struct FString* NextKiller);
	void SetStatus(const struct FString& Status);
	void GetMapName(struct FString* MapName);
	void GetGameSettings(struct FString* Map, struct FString* Mode, int* Players);
	void PrintError(const struct FString& Text);
	void IsPublic(bool* Public);
	void Update_SessionInfo();
	void IsPlayfabServer(bool* IsIt);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartGame();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void ConfirmPlayerJoined(const struct FString& PlayFabPlayerID, class APC_PropHunt_C* Controller);
	void K2_OnLogout(class AController* ExitingController);
	void RaiseLobby();
	void GmEndGame(bool IsKillerWin);
	void TravelToLevel(const struct FString& LevelName);
	void StartTutorial();
	void SetupServer();
	void playerCalling(bool IsPlayer, class ANewAlarmBP_C* alarms);
	void SetPlayfabKillerID(const struct FString& KillerID);
	void ExecuteUbergraph_GM_PropHunt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
