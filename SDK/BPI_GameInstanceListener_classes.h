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

// BlueprintGeneratedClass BPI_GameInstanceListener.BPI_GameInstanceListener_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_GameInstanceListener_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GameInstanceListener.BPI_GameInstanceListener_C");
		return ptr;
	}



	void CloseTicket();
	void JoinToTicket(const struct FString& Ticket);
	void GetServerId(struct FString* ID);
	void OnFoundSessions(TArray<struct FBlueprintSessionResult> Sessions);
	void FailSessionList();
	void OnTravelError();
	void OnNetworkError();
	void FailJoin();
	void FailCreateSession();
	void OnSessionCreated(const struct FString& Map);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
