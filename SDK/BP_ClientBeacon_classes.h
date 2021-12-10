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

// BlueprintGeneratedClass BP_ClientBeacon.BP_ClientBeacon_C
// 0x0038 (FullSize[0x02E8] - InheritedSize[0x02B0])
class ABP_ClientBeacon_C : public APropnightOnlineBeaconClient
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                     ServerEntry;                                               // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Players;                                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_313J[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   SendTime;                                                  // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   ReceiveTime;                                               // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_SessionData_C*                           session;                                                   // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClientBeacon.BP_ClientBeacon_C");
		return ptr;
	}



	void GetServerStatus(struct FString* Status);
	void ResponseServerInfo(const struct FString& ServerName, const struct FString& MapName, int Players, const struct FString& Status);
	void RequireServerInfo();
	void OnReady();
	void PingRequest();
	void PingResponse(const struct FString& Map, bool IsMatchmaking, const struct FString& ServerName);
	void PingRequestV2();
	void PingResponseV2(const struct FString& Map, bool IsMatchmaking, const struct FString& ServerName, int BuildNumber, bool IsLobby);
	void OnBeaconFailure();
	void ExecuteUbergraph_BP_ClientBeacon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
