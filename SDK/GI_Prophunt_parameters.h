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
// Parameters
//---------------------------------------------------------------------------

// Function GI_Prophunt.GI_Prophunt_C.GetLoadingScreenWidget
struct UGI_Prophunt_C_GetLoadingScreenWidget_Params
{
	class UW_LoadingScreen_C*                          LoadingScreenRef;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.LoadCulture
struct UGI_Prophunt_C_LoadCulture_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SaveCulture
struct UGI_Prophunt_C_SaveCulture_Params
{
	struct FString                                     Culture;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetAvatarID
struct UGI_Prophunt_C_GetAvatarID_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsAvatarsCustomizationNew
struct UGI_Prophunt_C_GetIsAvatarsCustomizationNew_Params
{
	TMap<int, bool>                                    AvatarMap;                                                 // 0x0000(0x0050)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsTagsCustomizationNew
struct UGI_Prophunt_C_GetIsTagsCustomizationNew_Params
{
	TMap<int, bool>                                    TagMap;                                                    // 0x0000(0x0050)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsBannerCustomizationNew
struct UGI_Prophunt_C_GetIsBannerCustomizationNew_Params
{
	TMap<int, bool>                                    BannerMap;                                                 // 0x0000(0x0050)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetAvatarsThatPlayerOwn
struct UGI_Prophunt_C_GetAvatarsThatPlayerOwn_Params
{
	TArray<int>                                        AvatarIDs;                                                 // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetTagsThatPlayerOwn
struct UGI_Prophunt_C_GetTagsThatPlayerOwn_Params
{
	TArray<int>                                        TagIDs;                                                    // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetBannerThatPlayerOwn
struct UGI_Prophunt_C_GetBannerThatPlayerOwn_Params
{
	TArray<int>                                        BannerIDs;                                                 // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsSkinCustomizationNew
struct UGI_Prophunt_C_GetIsSkinCustomizationNew_Params
{
	TMap<int, bool>                                    IsCustomizatioNew;                                         // 0x0000(0x0050)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsNewAvatar
struct UGI_Prophunt_C_GetIsNewAvatar_Params
{
	bool                                               IsNewAvatar;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsNewTags
struct UGI_Prophunt_C_GetIsNewTags_Params
{
	bool                                               IsNewTags;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsNewBanner
struct UGI_Prophunt_C_GetIsNewBanner_Params
{
	bool                                               IsNewBanner;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsNewSkin
struct UGI_Prophunt_C_GetIsNewSkin_Params
{
	bool                                               IsNewSkin;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetTagID
struct UGI_Prophunt_C_GetTagID_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetBannerID
struct UGI_Prophunt_C_GetBannerID_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetCountOpenedLootBox
struct UGI_Prophunt_C_GetCountOpenedLootBox_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetLootboxCount
struct UGI_Prophunt_C_GetLootboxCount_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetCoins
struct UGI_Prophunt_C_GetCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetSelectedSkinsID
struct UGI_Prophunt_C_GetSelectedSkinsID_Params
{
	TMap<int, int>                                     GetSkinID;                                                 // 0x0000(0x0050)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetSkinThatPlayerOwn
struct UGI_Prophunt_C_GetSkinThatPlayerOwn_Params
{
	TArray<int>                                        OwnSkinIds;                                                // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetSkin
struct UGI_Prophunt_C_GetSkin_Params
{
	TMap<int, class USkeletalMesh*>                    Skin;                                                      // 0x0000(0x0050)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetSkinID
struct UGI_Prophunt_C_GetSkinID_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetPlayfabUserID
struct UGI_Prophunt_C_GetPlayfabUserID_Params
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetSteamPlayerID
struct UGI_Prophunt_C_GetSteamPlayerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetPlayfabBuildID
struct UGI_Prophunt_C_GetPlayfabBuildID_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetTitlePlayerID
struct UGI_Prophunt_C_GetTitlePlayerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetLobbyDataBP
struct UGI_Prophunt_C_GetLobbyDataBP_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetLobbyMembersCount
struct UGI_Prophunt_C_GetLobbyMembersCount_Params
{
	int                                                Members;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetShouldCreateLobby
struct UGI_Prophunt_C_GetShouldCreateLobby_Params
{
	bool                                               Val;                                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.Get_GC_Data
struct UGI_Prophunt_C_Get_GC_Data_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     session;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetCachedBuildId
struct UGI_Prophunt_C_GetCachedBuildId_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetRandomMap3
struct UGI_Prophunt_C_GetRandomMap3_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetRandomMap2
struct UGI_Prophunt_C_GetRandomMap2_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetLobbyOwner
struct UGI_Prophunt_C_GetLobbyOwner_Params
{
	struct FString                                     OwnerID;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.IsAnyoneOnLobby
struct UGI_Prophunt_C_IsAnyoneOnLobby_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetAmILobbyMember
struct UGI_Prophunt_C_GetAmILobbyMember_Params
{
	bool                                               Member;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetPings
struct UGI_Prophunt_C_GetPings_Params
{
	TArray<struct FPingQoSInfo>                        Pings;                                                     // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetSteamFriendList
struct UGI_Prophunt_C_GetSteamFriendList_Params
{
	TArray<struct FSteamFriend>                        Friends;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.IsLobbyOwner
struct UGI_Prophunt_C_IsLobbyOwner_Params
{
	bool                                               Owner;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetLobbyPlayfabPlayers
struct UGI_Prophunt_C_GetLobbyPlayfabPlayers_Params
{
	TArray<struct FString>                             Players;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsMatchmaking
struct UGI_Prophunt_C_GetIsMatchmaking_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetKillerID
struct UGI_Prophunt_C_GetKillerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsWithEditor
struct UGI_Prophunt_C_GetIsWithEditor_Params
{
	bool                                               IsEditor;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.IsPlayfabServerV2
struct UGI_Prophunt_C_IsPlayfabServerV2_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetServerId
struct UGI_Prophunt_C_GetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetServerName
struct UGI_Prophunt_C_GetServerName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetBuildNumber
struct UGI_Prophunt_C_GetBuildNumber_Params
{
	int                                                BuildNumber;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetIsActualServer
struct UGI_Prophunt_C_GetIsActualServer_Params
{
	bool                                               IsActual;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetServerRegion
struct UGI_Prophunt_C_GetServerRegion_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetServiceAddress
struct UGI_Prophunt_C_GetServiceAddress_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetServerSettings
struct UGI_Prophunt_C_GetServerSettings_Params
{
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetPlayerName
struct UGI_Prophunt_C_GetPlayerName_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetGameSettings
struct UGI_Prophunt_C_GetGameSettings_Params
{
	struct FS_GameSettings                             GameSettings;                                              // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.IsLoggedIn
struct UGI_Prophunt_C_IsLoggedIn_Params
{
	bool                                               IsLoggedIn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.GetAudioHandles
struct UGI_Prophunt_C_GetAudioHandles_Params
{
	struct FS_AudioHandles                             AudioHandles;                                              // 0x0000(0x0020)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.IsPublic
struct UGI_Prophunt_C_IsPublic_Params
{
	bool                                               Public;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SendSteamAuthTicket
struct UGI_Prophunt_C_SendSteamAuthTicket_Params
{
	struct FScriptDelegate                             onSuccess;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FScriptDelegate                             OnFail;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FString                                     Ticket;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetRandom3Map
struct UGI_Prophunt_C_GetRandom3Map_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.GetRandom2Map
struct UGI_Prophunt_C_GetRandom2Map_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.ReturnSkinID
struct UGI_Prophunt_C_ReturnSkinID_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  Chars;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IDs;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SkinArraySelector
struct UGI_Prophunt_C_SkinArraySelector_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               Rows;                                                      // 0x0008(0x0010)  (Parm, OutParm)
};

// Function GI_Prophunt.GI_Prophunt_C.AddSkinToUserArray
struct UGI_Prophunt_C_AddSkinToUserArray_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SkinIdChecker
struct UGI_Prophunt_C_SkinIdChecker_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid_;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SkinIDChanger
struct UGI_Prophunt_C_SkinIDChanger_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SkinIdsValidator
struct UGI_Prophunt_C_SkinIdsValidator_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SaveUserDataSave
struct UGI_Prophunt_C_SaveUserDataSave_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.LoadCreateUserDataSave
struct UGI_Prophunt_C_LoadCreateUserDataSave_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.CalculateLvl
struct UGI_Prophunt_C_CalculateLvl_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.RemoveLoadingScreenGI
struct UGI_Prophunt_C_RemoveLoadingScreenGI_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.CallLoadingScreen
struct UGI_Prophunt_C_CallLoadingScreen_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GI_Prophunt.GI_Prophunt_C.DestroyMenuSound
struct UGI_Prophunt_C_DestroyMenuSound_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.DestroySounds
struct UGI_Prophunt_C_DestroySounds_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.AddSession
struct UGI_Prophunt_C_AddSession_Params
{
	struct FBlueprintSessionResult                     session;                                                   // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GI_Prophunt.GI_Prophunt_C.IsValidSession
struct UGI_Prophunt_C_IsValidSession_Params
{
	struct FBlueprintSessionResult                     session;                                                   // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Valid;                                                     // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.OpenMainMenu
struct UGI_Prophunt_C_OpenMainMenu_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OpenTravelMap
struct UGI_Prophunt_C_OpenTravelMap_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.Load
struct UGI_Prophunt_C_Load_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetNickname
struct UGI_Prophunt_C_SetNickname_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  Avatar;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfo                                 Info;                                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnFailure_49C7C79B485E157459C63B825AF3BC18
struct UGI_Prophunt_C_OnFailure_49C7C79B485E157459C63B825AF3BC18_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnSuccess_49C7C79B485E157459C63B825AF3BC18
struct UGI_Prophunt_C_OnSuccess_49C7C79B485E157459C63B825AF3BC18_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnFailure_321C18DA43882CCF1DFCECB1A74CEA66
struct UGI_Prophunt_C_OnFailure_321C18DA43882CCF1DFCECB1A74CEA66_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66
struct UGI_Prophunt_C_OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnFailure_FF1A61F44A16A337704E8C9EDF5577EE
struct UGI_Prophunt_C_OnFailure_FF1A61F44A16A337704E8C9EDF5577EE_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE
struct UGI_Prophunt_C_OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1
struct UGI_Prophunt_C_OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1
struct UGI_Prophunt_C_OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnFailure_6EFFFD8E4448DE29D489E89B29222869
struct UGI_Prophunt_C_OnFailure_6EFFFD8E4448DE29D489E89B29222869_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.OnSuccess_6EFFFD8E4448DE29D489E89B29222869
struct UGI_Prophunt_C_OnSuccess_6EFFFD8E4448DE29D489E89B29222869_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.OnFailure_5552813A4E43EF2C3804F1B579829FDD
struct UGI_Prophunt_C_OnFailure_5552813A4E43EF2C3804F1B579829FDD_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnSuccess_5552813A4E43EF2C3804F1B579829FDD
struct UGI_Prophunt_C_OnSuccess_5552813A4E43EF2C3804F1B579829FDD_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C
struct UGI_Prophunt_C_OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C_Params
{
	struct FEOSPlayerDataStorageWriteFileCallbackInfo  Data;                                                      // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE
struct UGI_Prophunt_C_OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE_Params
{
	struct FEOSPlayerDataStorageReadFileCallbackInfo   Data;                                                      // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1
struct UGI_Prophunt_C_OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1_Params
{
	struct FEOSPlayerDataStorageWriteFileCallbackInfo  Data;                                                      // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.ReceiveShutdown
struct UGI_Prophunt_C_ReceiveShutdown_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.Starter
struct UGI_Prophunt_C_Starter_Params
{
	bool                                               Private;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Map;                                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.MainMenu
struct UGI_Prophunt_C_MainMenu_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.Search
struct UGI_Prophunt_C_Search_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.ReceiveInit
struct UGI_Prophunt_C_ReceiveInit_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.LeaveAndSearch
struct UGI_Prophunt_C_LeaveAndSearch_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.CancelSearch
struct UGI_Prophunt_C_CancelSearch_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.StopMusicMainMenu
struct UGI_Prophunt_C_StopMusicMainMenu_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetLoggedIn
struct UGI_Prophunt_C_SetLoggedIn_Params
{
	bool                                               IsLogged;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.UploadUserData
struct UGI_Prophunt_C_UploadUserData_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.ClearUserData
struct UGI_Prophunt_C_ClearUserData_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.CreateServerWithSettings
struct UGI_Prophunt_C_CreateServerWithSettings_Params
{
	struct FS_GameSettings                             Settings;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.HandleTravelError
struct UGI_Prophunt_C_HandleTravelError_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetServiceAddress
struct UGI_Prophunt_C_SetServiceAddress_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetGameServerSettings
struct UGI_Prophunt_C_SetGameServerSettings_Params
{
	struct FS_GameSettings                             GameSettings;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetServerRegion
struct UGI_Prophunt_C_SetServerRegion_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetActualServer
struct UGI_Prophunt_C_SetActualServer_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetServerName
struct UGI_Prophunt_C_SetServerName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetServerId
struct UGI_Prophunt_C_SetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetPlayfabUserID
struct UGI_Prophunt_C_SetPlayfabUserID_Params
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetTitlePlayerID
struct UGI_Prophunt_C_SetTitlePlayerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.STEAM
struct UGI_Prophunt_C_STEAM_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetKillerID
struct UGI_Prophunt_C_SetKillerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsMatchMaking
struct UGI_Prophunt_C_SetIsMatchMaking_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.RunSteamCallback
struct UGI_Prophunt_C_RunSteamCallback_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnUserEnterLobby
struct UGI_Prophunt_C_OnUserEnterLobby_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnUserLeaveLobby
struct UGI_Prophunt_C_OnUserLeaveLobby_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnJoinLobby
struct UGI_Prophunt_C_OnJoinLobby_Params
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnLobbyUserDataUpdated
struct UGI_Prophunt_C_OnLobbyUserDataUpdated_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Entity;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnLobbyCreatedExt
struct UGI_Prophunt_C_OnLobbyCreatedExt_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnSteamMessage
struct UGI_Prophunt_C_OnSteamMessage_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.CreateSteamLobby
struct UGI_Prophunt_C_CreateSteamLobby_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStartSearch
struct UGI_Prophunt_C_NotifySteamLobbyStartSearch_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyConnect
struct UGI_Prophunt_C_NotifySteamLobbyConnect_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnFriendComeOnline
struct UGI_Prophunt_C_OnFriendComeOnline_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnFriendGoneOffline
struct UGI_Prophunt_C_OnFriendGoneOffline_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.LeaveLobby
struct UGI_Prophunt_C_LeaveLobby_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.BecomeLobbyOwner
struct UGI_Prophunt_C_BecomeLobbyOwner_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.InviteFriendToLobby
struct UGI_Prophunt_C_InviteFriendToLobby_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStopSearch
struct UGI_Prophunt_C_NotifySteamLobbyStopSearch_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.StopSearch
struct UGI_Prophunt_C_StopSearch_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetPlayfabMatchPlayers
struct UGI_Prophunt_C_SetPlayfabMatchPlayers_Params
{
	TArray<class UPlayFabJsonObject*>                  Players;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.SetPings
struct UGI_Prophunt_C_SetPings_Params
{
	TArray<struct FPingQoSInfo>                        Pings;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GI_Prophunt.GI_Prophunt_C.ConnectMatchmakingGame
struct UGI_Prophunt_C_ConnectMatchmakingGame_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetMenuLoaded
struct UGI_Prophunt_C_SetMenuLoaded_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.HandleStartupSteamInvite
struct UGI_Prophunt_C_HandleStartupSteamInvite_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.RestoreLobby
struct UGI_Prophunt_C_RestoreLobby_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetSkinID
struct UGI_Prophunt_C_SetSkinID_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetSkin
struct UGI_Prophunt_C_SetSkin_Params
{
	int                                                CharacterId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedSkinID;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.AddSkinThatPlayerOwn
struct UGI_Prophunt_C_AddSkinThatPlayerOwn_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetSelectedSkinOnLoad
struct UGI_Prophunt_C_SetSelectedSkinOnLoad_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.HandleNetworkError
struct UGI_Prophunt_C_HandleNetworkError_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.Join
struct UGI_Prophunt_C_Join_Params
{
	struct FBlueprintSessionResult                     session;                                                   // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GI_Prophunt.GI_Prophunt_C.AddCoins
struct UGI_Prophunt_C_AddCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.LoadSettings
struct UGI_Prophunt_C_LoadSettings_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.AddLootBox
struct UGI_Prophunt_C_AddLootBox_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.DecreaseLootBox
struct UGI_Prophunt_C_DecreaseLootBox_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.DecreaseCoins
struct UGI_Prophunt_C_DecreaseCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.On EOS Login
struct UGI_Prophunt_C_On_EOS_Login_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ErrorStr;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetCountOpenedLootBox
struct UGI_Prophunt_C_SetCountOpenedLootBox_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.On Waiting Test Event plz work
struct UGI_Prophunt_C_On_Waiting_Test_Event_plz_work_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.SetBannerID
struct UGI_Prophunt_C_SetBannerID_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetTagID
struct UGI_Prophunt_C_SetTagID_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.ConnectCustomGame
struct UGI_Prophunt_C_ConnectCustomGame_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsNewAvatar
struct UGI_Prophunt_C_SetIsNewAvatar_Params
{
	bool                                               IsNewAvatar;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsNewTags
struct UGI_Prophunt_C_SetIsNewTags_Params
{
	bool                                               IsNewTags;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsNewBanner
struct UGI_Prophunt_C_SetIsNewBanner_Params
{
	bool                                               IsNewBanner;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsNewSkin
struct UGI_Prophunt_C_SetIsNewSkin_Params
{
	bool                                               IsNewSkin;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsSkinCustomizationNew
struct UGI_Prophunt_C_SetIsSkinCustomizationNew_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNew;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.AddAvatarsThatPlayerOwn
struct UGI_Prophunt_C_AddAvatarsThatPlayerOwn_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.AddTagsThatPlayerOwn
struct UGI_Prophunt_C_AddTagsThatPlayerOwn_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.AddBannerThatPlayerOwn
struct UGI_Prophunt_C_AddBannerThatPlayerOwn_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsAvatarsCustomizationNew
struct UGI_Prophunt_C_SetIsAvatarsCustomizationNew_Params
{
	int                                                AvatarsID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTagNew;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsTagsCustomizationNew
struct UGI_Prophunt_C_SetIsTagsCustomizationNew_Params
{
	int                                                TagsID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTagNew;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsBannerCustomizationNew
struct UGI_Prophunt_C_SetIsBannerCustomizationNew_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBannerNew;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetAvatarID
struct UGI_Prophunt_C_SetAvatarID_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetCachedBuildId
struct UGI_Prophunt_C_SetCachedBuildId_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.Set_CS_Data
struct UGI_Prophunt_C_Set_CS_Data_Params
{
	struct FString                                     SessionId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetShouldCreateLobby
struct UGI_Prophunt_C_SetShouldCreateLobby_Params
{
	bool                                               Val;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.NotifyConnetCustomGame
struct UGI_Prophunt_C_NotifyConnetCustomGame_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetIsInMainMenuBP
struct UGI_Prophunt_C_SetIsInMainMenuBP_Params
{
	bool                                               Val;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GI_Prophunt.GI_Prophunt_C.SetCustomGameData
struct UGI_Prophunt_C_SetCustomGameData_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetLobbyDataBP
struct UGI_Prophunt_C_SetLobbyDataBP_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnGetSessionTicketResponse
struct UGI_Prophunt_C_OnGetSessionTicketResponse_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Ticket;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnAuthOK
struct UGI_Prophunt_C_OnAuthOK_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnAuthFail
struct UGI_Prophunt_C_OnAuthFail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.On Request Encrypted App Ticket
struct UGI_Prophunt_C_On_Request_Encrypted_App_Ticket_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.SetLoadingScreenWidget
struct UGI_Prophunt_C_SetLoadingScreenWidget_Params
{
	class UW_LoadingScreen_C*                          WidgetRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.ExecuteUbergraph_GI_Prophunt
struct UGI_Prophunt_C_ExecuteUbergraph_GI_Prophunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.ClearLobbyUI__DelegateSignature
struct UGI_Prophunt_C_ClearLobbyUI__DelegateSignature_Params
{
};

// Function GI_Prophunt.GI_Prophunt_C.OnLeftLobby__DelegateSignature
struct UGI_Prophunt_C_OnLeftLobby__DelegateSignature_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SteamId;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnEnterLobby__DelegateSignature
struct UGI_Prophunt_C_OnEnterLobby__DelegateSignature_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SteamId;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnGoneOffline__DelegateSignature
struct UGI_Prophunt_C_OnGoneOffline__DelegateSignature_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GI_Prophunt.GI_Prophunt_C.OnComeOnline__DelegateSignature
struct UGI_Prophunt_C_OnComeOnline__DelegateSignature_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
