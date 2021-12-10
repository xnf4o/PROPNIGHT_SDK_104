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

// BlueprintGeneratedClass GI_Prophunt.GI_Prophunt_C
// 0x05F9 (FullSize[0x08B1] - InheritedSize[0x02B8])
class UGI_Prophunt_C : public UProphuntGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FString                                     PlayFabUserID;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Nickname;                                                  // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FName                                       HostLevel;                                                 // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>             NewVar_1;                                                  // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USaveGame*                                   NewVar_2;                                                  // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sensivity;                                                 // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BAdvertise;                                                // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GQT0[0x3];                                     // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_AudioHandles                             AudioHandles;                                              // 0x0318(0x0020) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldJoin;                                                // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IRHJ[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Avatar;                                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MapIndex;                                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BMPH[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Blacklist;                                                 // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SuccessJoin;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DelayedSearch;                                             // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMO1[0x6];                                     // 0x0362(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionId;                                                 // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               afterMenu;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B7SU[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapName;                                                   // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayerInfo                                 PlayerInfo;                                                // 0x0390(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               LoggedIn;                                                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZ92[0x3];                                     // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SurvSkinID;                                                // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Exp;                                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Lvl;                                                       // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentageLVL;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YX0D[0x4];                                     // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SurvSkinArray;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USaveGame*                                   UserDataSave;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SaveName;                                                  // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               LoginSuccess;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E523[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_GameSettings                             ServerGameSettings;                                        // 0x03F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0410(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               NeedMainMenuFadeOut;                                       // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ARXN[0x3];                                     // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              XAxis;                                                     // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YAxis;                                                     // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9ZMA[0x4];                                     // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SurvPerk1;                                                 // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SurvPerk2;                                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SurvPerk3;                                                 // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KillerPerk1;                                               // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KillerPerk2;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KillerPerk3;                                               // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ServiceAddress;                                            // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ServerRegion;                                              // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsActualServer;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BCUA[0x3];                                     // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BuildNumber;                                               // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ServerName;                                                // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ServerError_;                                              // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L79O[0x7];                                     // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TitlePlayerID;                                             // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     SteamUserID;                                               // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsPlayfabServer;                                           // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C8ZS[0x7];                                     // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KillerID;                                                  // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsMatchmaking;                                             // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CW5E[0x7];                                     // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Char_Selected_Skin_Ids;                                    // 0x0508(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SteamLoggedIn;                                             // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SteamLobbyCreated;                                         // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5TGA[0x6];                                     // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComeOnline;                                              // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnGoneOffline;                                             // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               AmILobbyMember;                                            // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A98Q[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserToInvite;                                              // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>                  PlayfabMatchPlayers;                                       // 0x0558(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnEnterLobby;                                              // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLeftLobby;                                               // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FPingQoSInfo>                        Pings;                                                     // 0x0588(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_MenuReason_E_MenuReason>             OpenMenuReason;                                            // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GoingToMenu;                                               // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               JoinSteamLobbyAtStartup;                                   // 0x059A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_79IW[0x5];                                     // 0x059B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JoinLobbyID;                                               // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               DevCheat_;                                                 // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LFZ7[0x7];                                     // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class USkeletalMesh*>                    SkinsAndId;                                                // 0x05B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        SkinIDThatsPlayerOwns;                                     // 0x0608(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LootBoxCount;                                              // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BFS0[0x4];                                     // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, int>                                     SelectedSkinIDs;                                           // 0x0620(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Coins;                                                     // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OpenedLootBoxCount;                                        // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedBannerID;                                          // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GLOBAL_XP;                                                 // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMR_SURV;                                                  // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMR_KILLER;                                                // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XP_ForNextLVL;                                             // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XP_ForLvl;                                                 // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DWK6[0x4];                                     // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPingQoSInfo>                        CachedSortedPings;                                         // 0x0698(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsNewSkin;                                                 // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNewBanner;                                               // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNewAvatar;                                               // 0x06AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNewTags;                                                 // 0x06AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DM7K[0x4];                                     // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, bool>                                    IsSkinCustomizationNew;                                    // 0x06B0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        ArrAvatarPlayerOwn;                                        // 0x0700(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        ArrBannerPlayerOwn;                                        // 0x0710(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        ArrTagsPlayerOwn;                                          // 0x0720(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, bool>                                    IsAvatarCustomizationNew;                                  // 0x0730(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, bool>                                    IsBannerCustomizationNew;                                  // 0x0780(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, bool>                                    IsTagsCustomizationNew;                                    // 0x07D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AvatarID;                                                  // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UnlockAllSkins;                                            // 0x0824(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SHS7[0x3];                                     // 0x0825(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CachedBuildId;                                             // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               DisableAllSkins;                                           // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GBUP[0x7];                                     // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CS_SessionId;                                              // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CS_Region;                                                 // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ShouldCreateLobby;                                         // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R6EH[0x7];                                     // 0x0861(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LD_CustomGameAddress;                                      // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Invert_Mouse_Y_;                                           // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_91LY[0x7];                                     // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestRequestJSON*                          SessionAuthRequest;                                        // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadingScreen_C*                          LoadingScreenWidget;                                       // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ClearLobbyUI;                                              // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FString                                     CurrentLobbyID;                                            // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               DltSkinsFromLB;                                            // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GI_Prophunt.GI_Prophunt_C");
		return ptr;
	}



	void GetLoadingScreenWidget(class UW_LoadingScreen_C** LoadingScreenRef);
	void LoadCulture();
	void SaveCulture(const struct FString& Culture);
	void GetAvatarID(int* AvatarID);
	void GetIsAvatarsCustomizationNew(TMap<int, bool>* AvatarMap);
	void GetIsTagsCustomizationNew(TMap<int, bool>* TagMap);
	void GetIsBannerCustomizationNew(TMap<int, bool>* BannerMap);
	void GetAvatarsThatPlayerOwn(TArray<int>* AvatarIDs);
	void GetTagsThatPlayerOwn(TArray<int>* TagIDs);
	void GetBannerThatPlayerOwn(TArray<int>* BannerIDs);
	void GetIsSkinCustomizationNew(TMap<int, bool>* IsCustomizatioNew);
	void GetIsNewAvatar(bool* IsNewAvatar);
	void GetIsNewTags(bool* IsNewTags);
	void GetIsNewBanner(bool* IsNewBanner);
	void GetIsNewSkin(bool* IsNewSkin);
	void GetTagID(int* TagID);
	void GetBannerID(int* BannerID);
	void GetCountOpenedLootBox(int* lootbox);
	void GetLootboxCount(int* lootbox);
	void GetCoins(int* Coins);
	void GetSelectedSkinsID(TMap<int, int>* GetSkinID);
	void GetSkinThatPlayerOwn(TArray<int>* OwnSkinIds);
	void GetSkin(TMap<int, class USkeletalMesh*>* Skin);
	void GetSkinID(int* ID);
	void GetPlayfabUserID(struct FString* UserId);
	void GetSteamPlayerID(struct FString* ID);
	void GetPlayfabBuildID(struct FString* BuildId);
	void GetTitlePlayerID(struct FString* ID);
	void GetLobbyDataBP(const struct FString& Key, struct FString* Value);
	void GetLobbyMembersCount(int* Members);
	void GetShouldCreateLobby(bool* Val);
	void Get_GC_Data(struct FString* Region, struct FString* session);
	void GetCachedBuildId(struct FString* BuildId);
	void GetRandomMap3(struct FString* MapName);
	void GetRandomMap2(struct FString* Map);
	void GetLobbyOwner(struct FString* OwnerID);
	void IsAnyoneOnLobby(bool* Result);
	void GetAmILobbyMember(bool* Member);
	void GetPings(TArray<struct FPingQoSInfo>* Pings);
	void GetSteamFriendList(TArray<struct FSteamFriend>* Friends);
	void IsLobbyOwner(bool* Owner);
	void GetLobbyPlayfabPlayers(TArray<struct FString>* Players);
	void GetIsMatchmaking(bool* Is);
	void GetKillerID(struct FString* ID);
	void GetIsWithEditor(bool* IsEditor);
	void IsPlayfabServerV2(bool* Is);
	void GetServerId(struct FString* ID);
	void GetServerName(struct FString* Name);
	void GetBuildNumber(int* BuildNumber);
	void GetIsActualServer(bool* IsActual);
	void GetServerRegion(struct FString* Region);
	void GetServiceAddress(struct FString* Address);
	void GetServerSettings(struct FS_ServerSettings* ServerSettings);
	void GetPlayerName(struct FString* Nickname);
	void GetGameSettings(struct FS_GameSettings* GameSettings);
	void IsLoggedIn(bool* IsLoggedIn);
	void GetAudioHandles(struct FS_AudioHandles* AudioHandles);
	void IsPublic(bool* Public);
	void SendSteamAuthTicket(const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& OnFail, const struct FString& Ticket);
	void GetRandom3Map(struct FString* MapName);
	void GetRandom2Map(struct FString* Map);
	void ReturnSkinID(TEnumAsByte<SurvChars_ESurvChars> Chars, int* IDs);
	void SkinArraySelector(TEnumAsByte<SurvChars_ESurvChars> char_, TArray<struct FName>* Rows);
	void AddSkinToUserArray(TEnumAsByte<SurvChars_ESurvChars> char_, int ID);
	void SkinIdChecker(TEnumAsByte<SurvChars_ESurvChars> char_, int ID, bool* Valid_);
	void SkinIDChanger(TEnumAsByte<SurvChars_ESurvChars> char_, int ID);
	void SkinIdsValidator();
	void SaveUserDataSave();
	void LoadCreateUserDataSave();
	void CalculateLvl();
	void RemoveLoadingScreenGI();
	void CallLoadingScreen(const struct FText& Text);
	void DestroyMenuSound();
	void DestroySounds();
	void AddSession(const struct FBlueprintSessionResult& session);
	void IsValidSession(const struct FBlueprintSessionResult& session, bool* Valid);
	void OpenMainMenu();
	void OpenTravelMap();
	void Load();
	void SetNickname(const struct FString& Name, class UTexture2D* Avatar, const struct FPlayerInfo& Info);
	void OnFailure_49C7C79B485E157459C63B825AF3BC18();
	void OnSuccess_49C7C79B485E157459C63B825AF3BC18();
	void OnFailure_321C18DA43882CCF1DFCECB1A74CEA66();
	void OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66();
	void OnFailure_FF1A61F44A16A337704E8C9EDF5577EE();
	void OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE();
	void OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1();
	void OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1();
	void OnFailure_6EFFFD8E4448DE29D489E89B29222869(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_6EFFFD8E4448DE29D489E89B29222869(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure_5552813A4E43EF2C3804F1B579829FDD();
	void OnSuccess_5552813A4E43EF2C3804F1B579829FDD();
	void OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data);
	void OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE(const struct FEOSPlayerDataStorageReadFileCallbackInfo& Data);
	void OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data);
	void ReceiveShutdown();
	void Starter(bool Private, const struct FString& Map);
	void MainMenu();
	void Search();
	void ReceiveInit();
	void LeaveAndSearch();
	void CancelSearch();
	void StopMusicMainMenu();
	void SetLoggedIn(bool IsLogged);
	void UploadUserData();
	void ClearUserData();
	void CreateServerWithSettings(const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings);
	void HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType);
	void SetServiceAddress(const struct FString& Address);
	void SetGameServerSettings(const struct FS_GameSettings& GameSettings, const struct FS_ServerSettings& ServerSettings);
	void SetServerRegion(const struct FString& Region);
	void SetActualServer();
	void SetServerName(const struct FString& Name);
	void SetServerId(const struct FString& ID);
	void SetPlayfabUserID(const struct FString& UserId);
	void SetTitlePlayerID(const struct FString& ID);
	void STEAM();
	void SetKillerID(const struct FString& ID);
	void SetIsMatchMaking(bool Is);
	void RunSteamCallback();
	void OnUserEnterLobby(const struct FString& Name, const struct FString& ID);
	void OnUserLeaveLobby(const struct FString& Name, const struct FString& ID);
	void OnJoinLobby(const struct FString& LobbyId);
	void OnLobbyUserDataUpdated(const struct FString& ID, const struct FString& Entity);
	void OnLobbyCreatedExt();
	void OnSteamMessage(const struct FString& Ticket);
	void CreateSteamLobby();
	void NotifySteamLobbyStartSearch(const struct FString& Ticket);
	void NotifySteamLobbyConnect(const struct FString& Address);
	void OnFriendComeOnline(const struct FString& ID);
	void OnFriendGoneOffline(const struct FString& ID);
	void LeaveLobby();
	void BecomeLobbyOwner();
	void InviteFriendToLobby(const struct FString& ID);
	void NotifySteamLobbyStopSearch();
	void StopSearch();
	void SetPlayfabMatchPlayers(TArray<class UPlayFabJsonObject*> Players);
	void SetPings(TArray<struct FPingQoSInfo> Pings);
	void ConnectMatchmakingGame(const struct FString& Address);
	void SetMenuLoaded();
	void HandleStartupSteamInvite();
	void RestoreLobby();
	void SetSkinID(int ID);
	void SetSkin(int CharacterId, class USkeletalMesh* SkeletalMesh, int SelectedSkinID);
	void AddSkinThatPlayerOwn(int SkinID);
	void SetSelectedSkinOnLoad();
	void HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer);
	void Join(const struct FBlueprintSessionResult& session);
	void AddCoins(int Coins);
	void LoadSettings();
	void AddLootBox(int lootbox);
	void DecreaseLootBox(int lootbox);
	void DecreaseCoins(int Coins);
	void On_EOS_Login(bool bWasSuccessful, const struct FString& ErrorStr);
	void SetCountOpenedLootBox();
	void On_Waiting_Test_Event_plz_work();
	void SetBannerID(int BannerID);
	void SetTagID(int TagID);
	void ConnectCustomGame(const struct FString& Address);
	void SetIsNewAvatar(bool IsNewAvatar);
	void SetIsNewTags(bool IsNewTags);
	void SetIsNewBanner(bool IsNewBanner);
	void SetIsNewSkin(bool IsNewSkin);
	void SetIsSkinCustomizationNew(int SkinID, bool IsNew);
	void AddAvatarsThatPlayerOwn(int AvatarID);
	void AddTagsThatPlayerOwn(int TagID);
	void AddBannerThatPlayerOwn(int BannerID);
	void SetIsAvatarsCustomizationNew(int AvatarsID, bool IsTagNew);
	void SetIsTagsCustomizationNew(int TagsID, bool IsTagNew);
	void SetIsBannerCustomizationNew(int BannerID, bool IsBannerNew);
	void SetAvatarID(int AvatarID);
	void SetCachedBuildId(const struct FString& BuildId);
	void Set_CS_Data(const struct FString& SessionId, const struct FString& Region);
	void SetShouldCreateLobby(bool Val);
	void NotifyConnetCustomGame(const struct FString& Address);
	void SetIsInMainMenuBP(bool Val);
	void SetCustomGameData(const struct FString& Address);
	void SetLobbyDataBP(const struct FString& Key, const struct FString& Value);
	void OnGetSessionTicketResponse(bool Success, const struct FString& Ticket);
	void OnAuthOK(class UVaRestRequestJSON* Request);
	void OnAuthFail(class UVaRestRequestJSON* Request);
	void On_Request_Encrypted_App_Ticket(const struct FString& Ticket);
	void SetLoadingScreenWidget(class UW_LoadingScreen_C* WidgetRef);
	void ExecuteUbergraph_GI_Prophunt(int EntryPoint);
	void ClearLobbyUI__DelegateSignature();
	void OnLeftLobby__DelegateSignature(const struct FString& Name, const struct FString& SteamId);
	void OnEnterLobby__DelegateSignature(const struct FString& Name, const struct FString& SteamId);
	void OnGoneOffline__DelegateSignature(const struct FString& ID);
	void OnComeOnline__DelegateSignature(const struct FString& ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
