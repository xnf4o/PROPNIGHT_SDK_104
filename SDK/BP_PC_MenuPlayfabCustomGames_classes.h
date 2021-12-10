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

// BlueprintGeneratedClass BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C
// 0x019C (FullSize[0x024C] - InheritedSize[0x00B0])
class UBP_PC_MenuPlayfabCustomGames_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVaRestRequestJSON*                          VaRestRequest;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ApiKey;                                                    // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ServerBuildID;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          VaRestCreateServerReq;                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsBusy;                                                    // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZL6L[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CS_Map;                                                    // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CS_Name;                                                   // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CS_Region;                                                 // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<E_RequestType_E_RequestType>           NextRequestV2;                                             // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0PXK[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PageSize;                                                  // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopPoll;                                                  // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OJRE[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CG_Port;                                                   // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_BuildID;                                               // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_ListServers;                                           // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_CreateServer;                                          // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CG_Address;                                                // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<E_RequestType_E_RequestType>           CurrentRequest;                                            // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CZH3[0x3];                                     // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Errors;                                                    // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SkipToken;                                                 // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_Prod_BuildID;                                          // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_Prod_ListServers;                                      // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_Prod_CreateServer;                                     // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ApiKey_Prod;                                               // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_Prod_GetActualBuildNumber;                             // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          VaRestBuildNumberReq;                                      // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BuildNumberErrors;                                         // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XJA8[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CG_SessionId;                                              // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CG_Region;                                                 // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     URL_Prod_CheckTicket;                                      // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     SteamTicket;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                SteamTicketCounter;                                        // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C");
		return ptr;
	}



	void GetCachedBuildId(struct FString* BuildId);
	void OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void RetrieveServerBuildId();
	void OnListServersOK(class UVaRestRequestJSON* Request);
	void OnListServersFail(class UVaRestRequestJSON* Request);
	void RetrieveServerList(const struct FString& Region, const struct FString& SkipToken);
	void ServerLisetOK(class UVaRestRequestJSON* Request);
	void ServerListFail(class UVaRestRequestJSON* Request);
	void CreateServer(const struct FString& Map, const struct FString& ServerName, const struct FString& Region);
	void CreateServerOK(class UVaRestRequestJSON* Request);
	void CreateServerFail(class UVaRestRequestJSON* Request);
	void SetBusy(TEnumAsByte<E_RequestType_E_RequestType> Type);
	void Release();
	void ContinuePollServers(const struct FString& SkipToken);
	void DoGetBuildIdRequest(bool IsRetry);
	void DoGetServerListRequest(const struct FString& Region, const struct FString& SkipToken, bool IsRetry);
	void DoCreateServerRequest(const struct FString& Map, const struct FString& ServerName, const struct FString& Region, bool IsRetry);
	void OKGetBuildNumber(class UVaRestRequestJSON* Request);
	void FailGetBuildNumber(class UVaRestRequestJSON* Request);
	void DoGetBuildNumber(bool IsRetry);
	void GetActualBuildNumber();
	void JoinCustomGame(const struct FString& SessionId, const struct FString& Region);
	void CG_OK(const struct FMultiplayerGetMultiplayerServerDetailsResponse& Result, class UObject* customData);
	void CG_Fail(const struct FPlayFabError& Error, class UObject* customData);
	void DoCheckSteamTicket(bool IsRetry, const struct FString& Ticket);
	void CheckTicketOK(class UVaRestRequestJSON* Request);
	void CheckTicketFail(class UVaRestRequestJSON* Request);
	void CheckSteamTicket(const struct FString& Ticket);
	void ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
