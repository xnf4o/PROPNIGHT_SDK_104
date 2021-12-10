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

// Class OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UCreateEOSSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8A4[0xA0];                                    // 0x0050(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy");
		return ptr;
	}



	class UCreateEOSSessionCallbackProxy* Create_EOS_Session(class UObject* WorldContextObject, TMap<struct FString, struct FEOSSessionSetting> SessionSettings, const struct FString& SessionName, int PublicConnections);
};

// Class OnlineSubsystemEOSCore.EOSCoreSettings
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreSettings : public UDeveloperSettings
{
public:
	struct FString                                     DefaultConfigurationName;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TickBudgetInMilliseconds;                                  // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYH0[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IOSClientId;                                               // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AndroidClientId;                                           // 0x0060(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSConfig>                          EOSConfigurations;                                         // 0x0070(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.EOSCoreSettings");
		return ptr;
	}



};

// Class OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy
// 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
class UFindEOSSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSA5[0x98];                                    // 0x0040(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy");
		return ptr;
	}



	void OnCompleted(bool bSuccessful);
	class UFindEOSSessionsCallbackProxy* FindEOSSessions(class UObject* WorldContextObject, TMap<struct FString, struct FEOSSessionSearchSetting> searchSettings, int MaxResults);
};

// Class OnlineSubsystemEOSCore.NetConnectionEOSCore
// 0x0008 (FullSize[0x1B98] - InheritedSize[0x1B90])
class UNetConnectionEOSCore : public UIpConnection
{
public:
	unsigned char                                      UnknownData_XYQD[0x8];                                     // 0x1B90(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.NetConnectionEOSCore");
		return ptr;
	}



};

// Class OnlineSubsystemEOSCore.NetDriverEOSCore
// 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
class UNetDriverEOSCore : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                            // 0x07B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUsingP2PSockets;                                        // 0x07B9(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0UZZ[0x6];                                     // 0x07BA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.NetDriverEOSCore");
		return ptr;
	}



};

// Class OnlineSubsystemEOSCore.EOSSubsystemLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSSubsystemLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.EOSSubsystemLibrary");
		return ptr;
	}



	void StopListeningForSessionInvites(class APlayerController* PlayerController);
	void ListenForSessionInvites(class APlayerController* PlayerController, const struct FScriptDelegate& Callback);
};

// Class OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UUpdateEOSSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZUH5[0x88];                                    // 0x0040(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy");
		return ptr;
	}



	class UUpdateEOSSessionCallbackProxy* Update_EOS_Session(class UObject* WorldContextObject, TMap<struct FString, struct FEOSSessionSearchSetting> Settings, const struct FString& SessionName, int PublicConnections);
	void OnCompleted(const struct FName& SessionName, bool bWasSuccessful);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
