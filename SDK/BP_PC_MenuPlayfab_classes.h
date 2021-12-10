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

// BlueprintGeneratedClass BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UBP_PC_MenuPlayfab_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPlayFabJsonObject*                          ListServerRes;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PollTicket;                                                // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A8VD[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TicketId;                                                  // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     QueueName;                                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MatchId;                                                   // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          PlayerEntity;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          LastData;                                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Give_Up_After_Seconds;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ErrorsInARow;                                              // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PollDelay;                                                 // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InitialPollDelay;                                          // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsJoinRetry;                                               // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6YGS[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JoinTicketID;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C");
		return ptr;
	}



	void GetQueueName(struct FString* Name);
	void MakePingRequest(const struct FMultiplayerListQosServersForTitleResponse& ListQosServers);
	void Ticket_Member(class UPlayFabJsonObject* Data, class UPlayFabJsonObject** RMember);
	void PlayersToEntities(TArray<struct FString>* Players, TArray<class UPlayFabJsonObject*>* Entities);
	void GetPortByName(const struct FString& Name, class UPlayFabJsonObject* ServerDetails, int* Port);
	void MakeInfoRequest(class UPlayFabJsonObject** res);
	void MakeTicketCreator(class UPlayFabJsonObject* Data, class UPlayFabJsonObject** Result);
	void MakeListRequest(class UPlayFabJsonObject** Request);
	void GetBuidID(struct FString* BuildId);
	void GetSteamID(struct FString* ID);
	void GetDevID(struct FString* ID);
	void GetID(const struct FString& Key, struct FString* ID);
	void ObtainSteamID(struct FString* ID);
	void ObtainDevID(struct FString* ID);
	void SaveID(const struct FString& ID, const struct FString& Key);
	void LoadSteamID(bool* Has, struct FString* ID);
	void LoadDevID(bool* Has, struct FString* ID);
	void LoadID(const struct FString& Key, bool* Has, struct FString* ID);
	void OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_38B701DD4151EECD732D4887140B423E(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void ReceiveBeginPlay();
	void LoginDev();
	void CreateServer(const struct FString& Cookie);
	void CreateServerOK(const struct FMultiplayerRequestMultiplayerServerResponse& Result, class UObject* customData);
	void CreateServerFail(const struct FPlayFabError& Error, class UObject* customData);
	void ListServers();
	void ListServersOK(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
	void ListServersFail(const struct FPlayFabError& Error, class UObject* customData);
	void Search(const struct FString& Queue, class UPlayFabJsonObject* Data);
	void SearchOK(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
	void SearchFail(const struct FPlayFabError& Error, class UObject* customData);
	void ReceiveTick(float DeltaSeconds);
	void CheckTicket();
	void CheckTicketOK(const struct FMultiplayerGetMatchmakingTicketResult& Result, class UObject* customData);
	void CheckTicketFail(const struct FPlayFabError& Error, class UObject* customData);
	void CancelSearch();
	void CancelSearchOK(const struct FMultiplayerCancelMatchmakingTicketResult& Result, class UObject* customData);
	void CancelSearchFail(const struct FPlayFabError& Error, class UObject* customData);
	void GetMatch();
	void GetMatchOK(const struct FMultiplayerGetMatchResult& Result, class UObject* customData);
	void GetMatchFail(const struct FPlayFabError& Error, class UObject* customData);
	void LoginSteam();
	void Login(const struct FString& ID);
	void LoginOK(const struct FClientLoginResult& Result, class UObject* customData);
	void LoginFail(const struct FPlayFabError& Error, class UObject* customData);
	void CancelAllTickets();
	void CancelAllTicketsOK(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
	void CancelAllTicketsFail(const struct FPlayFabError& Error, class UObject* customData);
	void JoinTicket(const struct FString& Ticket, class UPlayFabJsonObject* DataObject);
	void JoinTicketOK(const struct FMultiplayerJoinMatchmakingTicketResult& Result, class UObject* customData);
	void JoinTicketFail(const struct FPlayFabError& Error, class UObject* customData);
	void OnQosServersSuccess(const struct FMultiplayerListQosServersForTitleResponse& Result, class UObject* customData);
	void OnQosServersFailure(const struct FPlayFabError& Error, class UObject* customData);
	void CallPingRequest(bool Include_All_Regions);
	void OnTicketCanceled();
	void ExecuteUbergraph_BP_PC_MenuPlayfab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
