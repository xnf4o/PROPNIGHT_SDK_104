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

// Class EOSCoreWeb.EOSWebAuthLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSWebAuthLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebAuthLibrary");
		return ptr;
	}



	void RequestAuthAccessToken(const struct FScriptDelegate& Callback, const struct FRequestAuthAccessTokenRequest& Request);
	void InitiateEpicAuthentication(const struct FScriptDelegate& Callback, const struct FInitiateEpicAuthenticationRequest& Request);
};

// Class EOSCoreWeb.EOSWebConnectLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSWebConnectLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebConnectLibrary");
		return ptr;
	}



	void RequestAccessToken(const struct FRequestAccessTokenRequest& Request, const struct FScriptDelegate& Callback);
};

// Class EOSCoreWeb.EOSWebPlayerTicketLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSWebPlayerTicketLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebPlayerTicketLibrary");
		return ptr;
	}



	void SubmitTicket(const struct FString& WebApiKey, const struct FSubmitTicketRequest& Request, const struct FScriptDelegate& Callback);
};

// Class EOSCoreWeb.EOSWebShared
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSWebShared : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebShared");
		return ptr;
	}



	void GetPublicIp(const struct FScriptDelegate& Callback);
};

// Class EOSCoreWeb.EOSWebVoiceLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSWebVoiceLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebVoiceLibrary");
		return ptr;
	}



	void RemoveParticipant(const struct FString& AccessToken, const struct FString& ProductUserId, const struct FString& DeploymentId, const struct FString& RoomName, const struct FScriptDelegate& Callback);
	void ModifyParticipant(const struct FString& AccessToken, const struct FString& ProductUserId, const struct FString& DeploymentId, const struct FString& RoomName, bool bHardMuted, const struct FScriptDelegate& Callback);
	void CreateRoomToken(const struct FString& AccessToken, TArray<struct FWebRequestParticipantData> Participants, const struct FString& DeploymentId, const struct FString& RoomName, const struct FScriptDelegate& Callback);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
