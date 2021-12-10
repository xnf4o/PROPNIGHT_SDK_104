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

// Class PlayfabServer.PlayfabServerComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UPlayfabServerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PlayfabServer.PlayfabServerComponent");
		return ptr;
	}



	void UnregisterPlayer(const struct FString& PlayerId);
	void ShutdownServer();
	void RegisterPlayer(const struct FString& PlayerId);
	void PlayfabReady();
	TArray<struct FString> GetStartPlayers();
	struct FString GetPlayfabSession();
	struct FString GetPlayfabRegion();
	struct FString GetPlayfabCookie();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
