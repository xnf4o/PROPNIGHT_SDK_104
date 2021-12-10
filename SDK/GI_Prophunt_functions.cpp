// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetLoadingScreenWidget
//		Flags  -> ()
// Parameters:
//		class UW_LoadingScreen_C*                          LoadingScreenRef                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetLoadingScreenWidget(class UW_LoadingScreen_C** LoadingScreenRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetLoadingScreenWidget");

	UGI_Prophunt_C_GetLoadingScreenWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoadingScreenRef != nullptr)
		*LoadingScreenRef = params.LoadingScreenRef;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.LoadCulture
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::LoadCulture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.LoadCulture");

	UGI_Prophunt_C_LoadCulture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SaveCulture
//		Flags  -> ()
// Parameters:
//		struct FString                                     Culture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SaveCulture(const struct FString& Culture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SaveCulture");

	UGI_Prophunt_C_SaveCulture_Params params {};
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetAvatarID
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetAvatarID(int* AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetAvatarID");

	UGI_Prophunt_C_GetAvatarID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvatarID != nullptr)
		*AvatarID = params.AvatarID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsAvatarsCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    AvatarMap                                                  (Parm, OutParm)
void UGI_Prophunt_C::GetIsAvatarsCustomizationNew(TMap<int, bool>* AvatarMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsAvatarsCustomizationNew");

	UGI_Prophunt_C_GetIsAvatarsCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvatarMap != nullptr)
		*AvatarMap = params.AvatarMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsTagsCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    TagMap                                                     (Parm, OutParm)
void UGI_Prophunt_C::GetIsTagsCustomizationNew(TMap<int, bool>* TagMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsTagsCustomizationNew");

	UGI_Prophunt_C_GetIsTagsCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagMap != nullptr)
		*TagMap = params.TagMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsBannerCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    BannerMap                                                  (Parm, OutParm)
void UGI_Prophunt_C::GetIsBannerCustomizationNew(TMap<int, bool>* BannerMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsBannerCustomizationNew");

	UGI_Prophunt_C_GetIsBannerCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BannerMap != nullptr)
		*BannerMap = params.BannerMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetAvatarsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        AvatarIDs                                                  (Parm, OutParm)
void UGI_Prophunt_C::GetAvatarsThatPlayerOwn(TArray<int>* AvatarIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetAvatarsThatPlayerOwn");

	UGI_Prophunt_C_GetAvatarsThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvatarIDs != nullptr)
		*AvatarIDs = params.AvatarIDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetTagsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        TagIDs                                                     (Parm, OutParm)
void UGI_Prophunt_C::GetTagsThatPlayerOwn(TArray<int>* TagIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetTagsThatPlayerOwn");

	UGI_Prophunt_C_GetTagsThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagIDs != nullptr)
		*TagIDs = params.TagIDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetBannerThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        BannerIDs                                                  (Parm, OutParm)
void UGI_Prophunt_C::GetBannerThatPlayerOwn(TArray<int>* BannerIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetBannerThatPlayerOwn");

	UGI_Prophunt_C_GetBannerThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BannerIDs != nullptr)
		*BannerIDs = params.BannerIDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsSkinCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    IsCustomizatioNew                                          (Parm, OutParm)
void UGI_Prophunt_C::GetIsSkinCustomizationNew(TMap<int, bool>* IsCustomizatioNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsSkinCustomizationNew");

	UGI_Prophunt_C_GetIsSkinCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCustomizatioNew != nullptr)
		*IsCustomizatioNew = params.IsCustomizatioNew;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsNewAvatar
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewAvatar                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsNewAvatar(bool* IsNewAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsNewAvatar");

	UGI_Prophunt_C_GetIsNewAvatar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewAvatar != nullptr)
		*IsNewAvatar = params.IsNewAvatar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsNewTags
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewTags                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsNewTags(bool* IsNewTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsNewTags");

	UGI_Prophunt_C_GetIsNewTags_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewTags != nullptr)
		*IsNewTags = params.IsNewTags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsNewBanner
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewBanner                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsNewBanner(bool* IsNewBanner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsNewBanner");

	UGI_Prophunt_C_GetIsNewBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewBanner != nullptr)
		*IsNewBanner = params.IsNewBanner;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsNewSkin
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewSkin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsNewSkin(bool* IsNewSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsNewSkin");

	UGI_Prophunt_C_GetIsNewSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewSkin != nullptr)
		*IsNewSkin = params.IsNewSkin;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetTagID
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetTagID(int* TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetTagID");

	UGI_Prophunt_C_GetTagID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagID != nullptr)
		*TagID = params.TagID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetBannerID
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetBannerID(int* BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetBannerID");

	UGI_Prophunt_C_GetBannerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BannerID != nullptr)
		*BannerID = params.BannerID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetCountOpenedLootBox
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetCountOpenedLootBox(int* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetCountOpenedLootBox");

	UGI_Prophunt_C_GetCountOpenedLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (lootbox != nullptr)
		*lootbox = params.lootbox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetLootboxCount
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetLootboxCount(int* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetLootboxCount");

	UGI_Prophunt_C_GetLootboxCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (lootbox != nullptr)
		*lootbox = params.lootbox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetCoins(int* Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetCoins");

	UGI_Prophunt_C_GetCoins_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Coins != nullptr)
		*Coins = params.Coins;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetSelectedSkinsID
//		Flags  -> ()
// Parameters:
//		TMap<int, int>                                     GetSkinID                                                  (Parm, OutParm)
void UGI_Prophunt_C::GetSelectedSkinsID(TMap<int, int>* GetSkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetSelectedSkinsID");

	UGI_Prophunt_C_GetSelectedSkinsID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetSkinID != nullptr)
		*GetSkinID = params.GetSkinID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetSkinThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        OwnSkinIds                                                 (Parm, OutParm)
void UGI_Prophunt_C::GetSkinThatPlayerOwn(TArray<int>* OwnSkinIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetSkinThatPlayerOwn");

	UGI_Prophunt_C_GetSkinThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnSkinIds != nullptr)
		*OwnSkinIds = params.OwnSkinIds;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetSkin
//		Flags  -> ()
// Parameters:
//		TMap<int, class USkeletalMesh*>                    Skin                                                       (Parm, OutParm)
void UGI_Prophunt_C::GetSkin(TMap<int, class USkeletalMesh*>* Skin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetSkin");

	UGI_Prophunt_C_GetSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skin != nullptr)
		*Skin = params.Skin;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetSkinID
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetSkinID(int* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetSkinID");

	UGI_Prophunt_C_GetSkinID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetPlayfabUserID
//		Flags  -> ()
// Parameters:
//		struct FString                                     UserId                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetPlayfabUserID(struct FString* UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetPlayfabUserID");

	UGI_Prophunt_C_GetPlayfabUserID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserId != nullptr)
		*UserId = params.UserId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetSteamPlayerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetSteamPlayerID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetSteamPlayerID");

	UGI_Prophunt_C_GetSteamPlayerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetPlayfabBuildID
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetPlayfabBuildID(struct FString* BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetPlayfabBuildID");

	UGI_Prophunt_C_GetPlayfabBuildID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildId != nullptr)
		*BuildId = params.BuildId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetTitlePlayerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetTitlePlayerID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetTitlePlayerID");

	UGI_Prophunt_C_GetTitlePlayerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetLobbyDataBP
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetLobbyDataBP(const struct FString& Key, struct FString* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetLobbyDataBP");

	UGI_Prophunt_C_GetLobbyDataBP_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetLobbyMembersCount
//		Flags  -> ()
// Parameters:
//		int                                                Members                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetLobbyMembersCount(int* Members)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetLobbyMembersCount");

	UGI_Prophunt_C_GetLobbyMembersCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Members != nullptr)
		*Members = params.Members;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetShouldCreateLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Val                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetShouldCreateLobby(bool* Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetShouldCreateLobby");

	UGI_Prophunt_C_GetShouldCreateLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Val != nullptr)
		*Val = params.Val;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.Get_GC_Data
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     session                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::Get_GC_Data(struct FString* Region, struct FString* session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.Get_GC_Data");

	UGI_Prophunt_C_Get_GC_Data_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;
	if (session != nullptr)
		*session = params.session;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetCachedBuildId
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetCachedBuildId(struct FString* BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetCachedBuildId");

	UGI_Prophunt_C_GetCachedBuildId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildId != nullptr)
		*BuildId = params.BuildId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetRandomMap3
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetRandomMap3(struct FString* MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetRandomMap3");

	UGI_Prophunt_C_GetRandomMap3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetRandomMap2
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetRandomMap2(struct FString* Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetRandomMap2");

	UGI_Prophunt_C_GetRandomMap2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetLobbyOwner
//		Flags  -> ()
// Parameters:
//		struct FString                                     OwnerID                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetLobbyOwner(struct FString* OwnerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetLobbyOwner");

	UGI_Prophunt_C_GetLobbyOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnerID != nullptr)
		*OwnerID = params.OwnerID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.IsAnyoneOnLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::IsAnyoneOnLobby(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.IsAnyoneOnLobby");

	UGI_Prophunt_C_IsAnyoneOnLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetAmILobbyMember
//		Flags  -> ()
// Parameters:
//		bool                                               Member                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetAmILobbyMember(bool* Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetAmILobbyMember");

	UGI_Prophunt_C_GetAmILobbyMember_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Member != nullptr)
		*Member = params.Member;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetPings
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Pings                                                      (Parm, OutParm)
void UGI_Prophunt_C::GetPings(TArray<struct FPingQoSInfo>* Pings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetPings");

	UGI_Prophunt_C_GetPings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pings != nullptr)
		*Pings = params.Pings;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetSteamFriendList
//		Flags  -> ()
// Parameters:
//		TArray<struct FSteamFriend>                        Friends                                                    (Parm, OutParm)
void UGI_Prophunt_C::GetSteamFriendList(TArray<struct FSteamFriend>* Friends)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetSteamFriendList");

	UGI_Prophunt_C_GetSteamFriendList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.IsLobbyOwner
//		Flags  -> ()
// Parameters:
//		bool                                               Owner                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::IsLobbyOwner(bool* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.IsLobbyOwner");

	UGI_Prophunt_C_IsLobbyOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetLobbyPlayfabPlayers
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             Players                                                    (Parm, OutParm)
void UGI_Prophunt_C::GetLobbyPlayfabPlayers(TArray<struct FString>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetLobbyPlayfabPlayers");

	UGI_Prophunt_C_GetLobbyPlayfabPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsMatchmaking
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsMatchmaking(bool* Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsMatchmaking");

	UGI_Prophunt_C_GetIsMatchmaking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetKillerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetKillerID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetKillerID");

	UGI_Prophunt_C_GetKillerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsWithEditor
//		Flags  -> ()
// Parameters:
//		bool                                               IsEditor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsWithEditor(bool* IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsWithEditor");

	UGI_Prophunt_C_GetIsWithEditor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEditor != nullptr)
		*IsEditor = params.IsEditor;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.IsPlayfabServerV2
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::IsPlayfabServerV2(bool* Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.IsPlayfabServerV2");

	UGI_Prophunt_C_IsPlayfabServerV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetServerId(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetServerId");

	UGI_Prophunt_C_GetServerId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetServerName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetServerName(struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetServerName");

	UGI_Prophunt_C_GetServerName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetBuildNumber
//		Flags  -> ()
// Parameters:
//		int                                                BuildNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetBuildNumber(int* BuildNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetBuildNumber");

	UGI_Prophunt_C_GetBuildNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildNumber != nullptr)
		*BuildNumber = params.BuildNumber;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetIsActualServer
//		Flags  -> ()
// Parameters:
//		bool                                               IsActual                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::GetIsActualServer(bool* IsActual)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetIsActualServer");

	UGI_Prophunt_C_GetIsActualServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsActual != nullptr)
		*IsActual = params.IsActual;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetServerRegion
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetServerRegion(struct FString* Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetServerRegion");

	UGI_Prophunt_C_GetServerRegion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetServiceAddress
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetServiceAddress(struct FString* Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetServiceAddress");

	UGI_Prophunt_C_GetServiceAddress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Address != nullptr)
		*Address = params.Address;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetServerSettings
//		Flags  -> ()
// Parameters:
//		struct FS_ServerSettings                           ServerSettings                                             (Parm, OutParm, HasGetValueTypeHash)
void UGI_Prophunt_C::GetServerSettings(struct FS_ServerSettings* ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetServerSettings");

	UGI_Prophunt_C_GetServerSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServerSettings != nullptr)
		*ServerSettings = params.ServerSettings;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetPlayerName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetPlayerName(struct FString* Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetPlayerName");

	UGI_Prophunt_C_GetPlayerName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Nickname != nullptr)
		*Nickname = params.Nickname;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetGameSettings
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             GameSettings                                               (Parm, OutParm, HasGetValueTypeHash)
void UGI_Prophunt_C::GetGameSettings(struct FS_GameSettings* GameSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetGameSettings");

	UGI_Prophunt_C_GetGameSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSettings != nullptr)
		*GameSettings = params.GameSettings;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.IsLoggedIn
//		Flags  -> ()
// Parameters:
//		bool                                               IsLoggedIn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::IsLoggedIn(bool* IsLoggedIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.IsLoggedIn");

	UGI_Prophunt_C_IsLoggedIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetAudioHandles
//		Flags  -> ()
// Parameters:
//		struct FS_AudioHandles                             AudioHandles                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetAudioHandles(struct FS_AudioHandles* AudioHandles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetAudioHandles");

	UGI_Prophunt_C_GetAudioHandles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioHandles != nullptr)
		*AudioHandles = params.AudioHandles;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.IsPublic
//		Flags  -> ()
// Parameters:
//		bool                                               Public                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::IsPublic(bool* Public)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.IsPublic");

	UGI_Prophunt_C_IsPublic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Public != nullptr)
		*Public = params.Public;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SendSteamAuthTicket
//		Flags  -> ()
// Parameters:
//		struct FScriptDelegate                             onSuccess                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
//		struct FScriptDelegate                             OnFail                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SendSteamAuthTicket(const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& OnFail, const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SendSteamAuthTicket");

	UGI_Prophunt_C_SendSteamAuthTicket_Params params {};
	params.onSuccess = onSuccess;
	params.OnFail = OnFail;
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetRandom3Map
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetRandom3Map(struct FString* MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetRandom3Map");

	UGI_Prophunt_C_GetRandom3Map_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.GetRandom2Map
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::GetRandom2Map(struct FString* Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.GetRandom2Map");

	UGI_Prophunt_C_GetRandom2Map_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ReturnSkinID
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  Chars                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IDs                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::ReturnSkinID(TEnumAsByte<SurvChars_ESurvChars> Chars, int* IDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ReturnSkinID");

	UGI_Prophunt_C_ReturnSkinID_Params params {};
	params.Chars = Chars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IDs != nullptr)
		*IDs = params.IDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SkinArraySelector
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FName>                               Rows                                                       (Parm, OutParm)
void UGI_Prophunt_C::SkinArraySelector(TEnumAsByte<SurvChars_ESurvChars> char_, TArray<struct FName>* Rows)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SkinArraySelector");

	UGI_Prophunt_C_SkinArraySelector_Params params {};
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rows != nullptr)
		*Rows = params.Rows;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddSkinToUserArray
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddSkinToUserArray(TEnumAsByte<SurvChars_ESurvChars> char_, int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddSkinToUserArray");

	UGI_Prophunt_C_AddSkinToUserArray_Params params {};
	params.char_ = char_;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SkinIdChecker
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Valid_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SkinIdChecker(TEnumAsByte<SurvChars_ESurvChars> char_, int ID, bool* Valid_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SkinIdChecker");

	UGI_Prophunt_C_SkinIdChecker_Params params {};
	params.char_ = char_;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid_ != nullptr)
		*Valid_ = params.Valid_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SkinIDChanger
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SkinIDChanger(TEnumAsByte<SurvChars_ESurvChars> char_, int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SkinIDChanger");

	UGI_Prophunt_C_SkinIDChanger_Params params {};
	params.char_ = char_;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SkinIdsValidator
//		Flags  -> ()
void UGI_Prophunt_C::SkinIdsValidator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SkinIdsValidator");

	UGI_Prophunt_C_SkinIdsValidator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SaveUserDataSave
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::SaveUserDataSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SaveUserDataSave");

	UGI_Prophunt_C_SaveUserDataSave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.LoadCreateUserDataSave
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::LoadCreateUserDataSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.LoadCreateUserDataSave");

	UGI_Prophunt_C_LoadCreateUserDataSave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.CalculateLvl
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::CalculateLvl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.CalculateLvl");

	UGI_Prophunt_C_CalculateLvl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.RemoveLoadingScreenGI
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::RemoveLoadingScreenGI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.RemoveLoadingScreenGI");

	UGI_Prophunt_C_RemoveLoadingScreenGI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.CallLoadingScreen
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UGI_Prophunt_C::CallLoadingScreen(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.CallLoadingScreen");

	UGI_Prophunt_C_CallLoadingScreen_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.DestroyMenuSound
//		Flags  -> ()
void UGI_Prophunt_C::DestroyMenuSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.DestroyMenuSound");

	UGI_Prophunt_C_DestroyMenuSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.DestroySounds
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::DestroySounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.DestroySounds");

	UGI_Prophunt_C_DestroySounds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddSession
//		Flags  -> ()
// Parameters:
//		struct FBlueprintSessionResult                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UGI_Prophunt_C::AddSession(const struct FBlueprintSessionResult& session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddSession");

	UGI_Prophunt_C_AddSession_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.IsValidSession
//		Flags  -> ()
// Parameters:
//		struct FBlueprintSessionResult                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::IsValidSession(const struct FBlueprintSessionResult& session, bool* Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.IsValidSession");

	UGI_Prophunt_C_IsValidSession_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OpenMainMenu
//		Flags  -> ()
void UGI_Prophunt_C::OpenMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OpenMainMenu");

	UGI_Prophunt_C_OpenMainMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OpenTravelMap
//		Flags  -> ()
void UGI_Prophunt_C::OpenTravelMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OpenTravelMap");

	UGI_Prophunt_C_OpenTravelMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.Load
//		Flags  -> ()
// Parameters:
void UGI_Prophunt_C::Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.Load");

	UGI_Prophunt_C_Load_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetNickname
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPlayerInfo                                 Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetNickname(const struct FString& Name, class UTexture2D* Avatar, const struct FPlayerInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetNickname");

	UGI_Prophunt_C_SetNickname_Params params {};
	params.Name = Name;
	params.Avatar = Avatar;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFailure_49C7C79B485E157459C63B825AF3BC18
//		Flags  -> ()
void UGI_Prophunt_C::OnFailure_49C7C79B485E157459C63B825AF3BC18()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFailure_49C7C79B485E157459C63B825AF3BC18");

	UGI_Prophunt_C_OnFailure_49C7C79B485E157459C63B825AF3BC18_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSuccess_49C7C79B485E157459C63B825AF3BC18
//		Flags  -> ()
void UGI_Prophunt_C::OnSuccess_49C7C79B485E157459C63B825AF3BC18()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSuccess_49C7C79B485E157459C63B825AF3BC18");

	UGI_Prophunt_C_OnSuccess_49C7C79B485E157459C63B825AF3BC18_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFailure_321C18DA43882CCF1DFCECB1A74CEA66
//		Flags  -> ()
void UGI_Prophunt_C::OnFailure_321C18DA43882CCF1DFCECB1A74CEA66()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFailure_321C18DA43882CCF1DFCECB1A74CEA66");

	UGI_Prophunt_C_OnFailure_321C18DA43882CCF1DFCECB1A74CEA66_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66
//		Flags  -> ()
void UGI_Prophunt_C::OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66");

	UGI_Prophunt_C_OnSuccess_321C18DA43882CCF1DFCECB1A74CEA66_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFailure_FF1A61F44A16A337704E8C9EDF5577EE
//		Flags  -> ()
void UGI_Prophunt_C::OnFailure_FF1A61F44A16A337704E8C9EDF5577EE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFailure_FF1A61F44A16A337704E8C9EDF5577EE");

	UGI_Prophunt_C_OnFailure_FF1A61F44A16A337704E8C9EDF5577EE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE
//		Flags  -> ()
void UGI_Prophunt_C::OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE");

	UGI_Prophunt_C_OnSuccess_FF1A61F44A16A337704E8C9EDF5577EE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1
//		Flags  -> ()
void UGI_Prophunt_C::OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1");

	UGI_Prophunt_C_OnFailure_2A6E2DD84B5C4681F578EC9F2612F2A1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1
//		Flags  -> ()
void UGI_Prophunt_C::OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1");

	UGI_Prophunt_C_OnSuccess_2A6E2DD84B5C4681F578EC9F2612F2A1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFailure_6EFFFD8E4448DE29D489E89B29222869
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::OnFailure_6EFFFD8E4448DE29D489E89B29222869(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFailure_6EFFFD8E4448DE29D489E89B29222869");

	UGI_Prophunt_C_OnFailure_6EFFFD8E4448DE29D489E89B29222869_Params params {};
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSuccess_6EFFFD8E4448DE29D489E89B29222869
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::OnSuccess_6EFFFD8E4448DE29D489E89B29222869(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSuccess_6EFFFD8E4448DE29D489E89B29222869");

	UGI_Prophunt_C_OnSuccess_6EFFFD8E4448DE29D489E89B29222869_Params params {};
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFailure_5552813A4E43EF2C3804F1B579829FDD
//		Flags  -> ()
void UGI_Prophunt_C::OnFailure_5552813A4E43EF2C3804F1B579829FDD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFailure_5552813A4E43EF2C3804F1B579829FDD");

	UGI_Prophunt_C_OnFailure_5552813A4E43EF2C3804F1B579829FDD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSuccess_5552813A4E43EF2C3804F1B579829FDD
//		Flags  -> ()
void UGI_Prophunt_C::OnSuccess_5552813A4E43EF2C3804F1B579829FDD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSuccess_5552813A4E43EF2C3804F1B579829FDD");

	UGI_Prophunt_C_OnSuccess_5552813A4E43EF2C3804F1B579829FDD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C
//		Flags  -> ()
// Parameters:
//		struct FEOSPlayerDataStorageWriteFileCallbackInfo  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C");

	UGI_Prophunt_C_OnCallback_EEF41E9C4D3FF1502CE1019B13F1EE6C_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE
//		Flags  -> ()
// Parameters:
//		struct FEOSPlayerDataStorageReadFileCallbackInfo   Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE(const struct FEOSPlayerDataStorageReadFileCallbackInfo& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE");

	UGI_Prophunt_C_OnCallback_FE915BDD40ECC4BAB5B13ABC83A9B8CE_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1
//		Flags  -> ()
// Parameters:
//		struct FEOSPlayerDataStorageWriteFileCallbackInfo  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1");

	UGI_Prophunt_C_OnCallback_EEF41E9C4D3FF1502CE1019B679E9FE1_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ReceiveShutdown
//		Flags  -> ()
void UGI_Prophunt_C::ReceiveShutdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ReceiveShutdown");

	UGI_Prophunt_C_ReceiveShutdown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.Starter
//		Flags  -> ()
// Parameters:
//		bool                                               Private                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::Starter(bool Private, const struct FString& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.Starter");

	UGI_Prophunt_C_Starter_Params params {};
	params.Private = Private;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.MainMenu
//		Flags  -> ()
void UGI_Prophunt_C::MainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.MainMenu");

	UGI_Prophunt_C_MainMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.Search
//		Flags  -> ()
void UGI_Prophunt_C::Search()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.Search");

	UGI_Prophunt_C_Search_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ReceiveInit
//		Flags  -> ()
void UGI_Prophunt_C::ReceiveInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ReceiveInit");

	UGI_Prophunt_C_ReceiveInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.LeaveAndSearch
//		Flags  -> ()
void UGI_Prophunt_C::LeaveAndSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.LeaveAndSearch");

	UGI_Prophunt_C_LeaveAndSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.CancelSearch
//		Flags  -> ()
void UGI_Prophunt_C::CancelSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.CancelSearch");

	UGI_Prophunt_C_CancelSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.StopMusicMainMenu
//		Flags  -> ()
void UGI_Prophunt_C::StopMusicMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.StopMusicMainMenu");

	UGI_Prophunt_C_StopMusicMainMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetLoggedIn
//		Flags  -> ()
// Parameters:
//		bool                                               IsLogged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetLoggedIn(bool IsLogged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetLoggedIn");

	UGI_Prophunt_C_SetLoggedIn_Params params {};
	params.IsLogged = IsLogged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.UploadUserData
//		Flags  -> ()
void UGI_Prophunt_C::UploadUserData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.UploadUserData");

	UGI_Prophunt_C_UploadUserData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ClearUserData
//		Flags  -> ()
void UGI_Prophunt_C::ClearUserData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ClearUserData");

	UGI_Prophunt_C_ClearUserData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.CreateServerWithSettings
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           ServerSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UGI_Prophunt_C::CreateServerWithSettings(const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.CreateServerWithSettings");

	UGI_Prophunt_C_CreateServerWithSettings_Params params {};
	params.Settings = Settings;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.HandleTravelError
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETravelFailure>                 FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.HandleTravelError");

	UGI_Prophunt_C_HandleTravelError_Params params {};
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetServiceAddress
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetServiceAddress(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetServiceAddress");

	UGI_Prophunt_C_SetServiceAddress_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetGameServerSettings
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             GameSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           ServerSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UGI_Prophunt_C::SetGameServerSettings(const struct FS_GameSettings& GameSettings, const struct FS_ServerSettings& ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetGameServerSettings");

	UGI_Prophunt_C_SetGameServerSettings_Params params {};
	params.GameSettings = GameSettings;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetServerRegion
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetServerRegion(const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetServerRegion");

	UGI_Prophunt_C_SetServerRegion_Params params {};
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetActualServer
//		Flags  -> ()
void UGI_Prophunt_C::SetActualServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetActualServer");

	UGI_Prophunt_C_SetActualServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetServerName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetServerName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetServerName");

	UGI_Prophunt_C_SetServerName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetServerId(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetServerId");

	UGI_Prophunt_C_SetServerId_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetPlayfabUserID
//		Flags  -> ()
// Parameters:
//		struct FString                                     UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetPlayfabUserID(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetPlayfabUserID");

	UGI_Prophunt_C_SetPlayfabUserID_Params params {};
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetTitlePlayerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetTitlePlayerID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetTitlePlayerID");

	UGI_Prophunt_C_SetTitlePlayerID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.STEAM
//		Flags  -> ()
void UGI_Prophunt_C::STEAM()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.STEAM");

	UGI_Prophunt_C_STEAM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetKillerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetKillerID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetKillerID");

	UGI_Prophunt_C_SetKillerID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsMatchMaking
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsMatchMaking(bool Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsMatchMaking");

	UGI_Prophunt_C_SetIsMatchMaking_Params params {};
	params.Is = Is;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.RunSteamCallback
//		Flags  -> ()
void UGI_Prophunt_C::RunSteamCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.RunSteamCallback");

	UGI_Prophunt_C_RunSteamCallback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnUserEnterLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnUserEnterLobby(const struct FString& Name, const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnUserEnterLobby");

	UGI_Prophunt_C_OnUserEnterLobby_Params params {};
	params.Name = Name;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnUserLeaveLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnUserLeaveLobby(const struct FString& Name, const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnUserLeaveLobby");

	UGI_Prophunt_C_OnUserLeaveLobby_Params params {};
	params.Name = Name;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnJoinLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     LobbyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnJoinLobby(const struct FString& LobbyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnJoinLobby");

	UGI_Prophunt_C_OnJoinLobby_Params params {};
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnLobbyUserDataUpdated
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Entity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnLobbyUserDataUpdated(const struct FString& ID, const struct FString& Entity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnLobbyUserDataUpdated");

	UGI_Prophunt_C_OnLobbyUserDataUpdated_Params params {};
	params.ID = ID;
	params.Entity = Entity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnLobbyCreatedExt
//		Flags  -> ()
void UGI_Prophunt_C::OnLobbyCreatedExt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnLobbyCreatedExt");

	UGI_Prophunt_C_OnLobbyCreatedExt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnSteamMessage
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnSteamMessage(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnSteamMessage");

	UGI_Prophunt_C_OnSteamMessage_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.CreateSteamLobby
//		Flags  -> ()
void UGI_Prophunt_C::CreateSteamLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.CreateSteamLobby");

	UGI_Prophunt_C_CreateSteamLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStartSearch
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::NotifySteamLobbyStartSearch(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStartSearch");

	UGI_Prophunt_C_NotifySteamLobbyStartSearch_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyConnect
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::NotifySteamLobbyConnect(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyConnect");

	UGI_Prophunt_C_NotifySteamLobbyConnect_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFriendComeOnline
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnFriendComeOnline(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFriendComeOnline");

	UGI_Prophunt_C_OnFriendComeOnline_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnFriendGoneOffline
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnFriendGoneOffline(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnFriendGoneOffline");

	UGI_Prophunt_C_OnFriendGoneOffline_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.LeaveLobby
//		Flags  -> ()
void UGI_Prophunt_C::LeaveLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.LeaveLobby");

	UGI_Prophunt_C_LeaveLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.BecomeLobbyOwner
//		Flags  -> ()
void UGI_Prophunt_C::BecomeLobbyOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.BecomeLobbyOwner");

	UGI_Prophunt_C_BecomeLobbyOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.InviteFriendToLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::InviteFriendToLobby(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.InviteFriendToLobby");

	UGI_Prophunt_C_InviteFriendToLobby_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStopSearch
//		Flags  -> ()
void UGI_Prophunt_C::NotifySteamLobbyStopSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.NotifySteamLobbyStopSearch");

	UGI_Prophunt_C_NotifySteamLobbyStopSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.StopSearch
//		Flags  -> ()
void UGI_Prophunt_C::StopSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.StopSearch");

	UGI_Prophunt_C_StopSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetPlayfabMatchPlayers
//		Flags  -> ()
// Parameters:
//		TArray<class UPlayFabJsonObject*>                  Players                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::SetPlayfabMatchPlayers(TArray<class UPlayFabJsonObject*> Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetPlayfabMatchPlayers");

	UGI_Prophunt_C_SetPlayfabMatchPlayers_Params params {};
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetPings
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Pings                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGI_Prophunt_C::SetPings(TArray<struct FPingQoSInfo> Pings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetPings");

	UGI_Prophunt_C_SetPings_Params params {};
	params.Pings = Pings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ConnectMatchmakingGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::ConnectMatchmakingGame(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ConnectMatchmakingGame");

	UGI_Prophunt_C_ConnectMatchmakingGame_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetMenuLoaded
//		Flags  -> ()
void UGI_Prophunt_C::SetMenuLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetMenuLoaded");

	UGI_Prophunt_C_SetMenuLoaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.HandleStartupSteamInvite
//		Flags  -> ()
void UGI_Prophunt_C::HandleStartupSteamInvite()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.HandleStartupSteamInvite");

	UGI_Prophunt_C_HandleStartupSteamInvite_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.RestoreLobby
//		Flags  -> ()
void UGI_Prophunt_C::RestoreLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.RestoreLobby");

	UGI_Prophunt_C_RestoreLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetSkinID
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetSkinID(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetSkinID");

	UGI_Prophunt_C_SetSkinID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetSkin
//		Flags  -> ()
// Parameters:
//		int                                                CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SelectedSkinID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetSkin(int CharacterId, class USkeletalMesh* SkeletalMesh, int SelectedSkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetSkin");

	UGI_Prophunt_C_SetSkin_Params params {};
	params.CharacterId = CharacterId;
	params.SkeletalMesh = SkeletalMesh;
	params.SelectedSkinID = SelectedSkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddSkinThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddSkinThatPlayerOwn(int SkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddSkinThatPlayerOwn");

	UGI_Prophunt_C_AddSkinThatPlayerOwn_Params params {};
	params.SkinID = SkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetSelectedSkinOnLoad
//		Flags  -> ()
void UGI_Prophunt_C::SetSelectedSkinOnLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetSelectedSkinOnLoad");

	UGI_Prophunt_C_SetSelectedSkinOnLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.HandleNetworkError
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ENetworkFailure>                FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsServer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.HandleNetworkError");

	UGI_Prophunt_C_HandleNetworkError_Params params {};
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.Join
//		Flags  -> ()
// Parameters:
//		struct FBlueprintSessionResult                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UGI_Prophunt_C::Join(const struct FBlueprintSessionResult& session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.Join");

	UGI_Prophunt_C_Join_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddCoins(int Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddCoins");

	UGI_Prophunt_C_AddCoins_Params params {};
	params.Coins = Coins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.LoadSettings
//		Flags  -> ()
void UGI_Prophunt_C::LoadSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.LoadSettings");

	UGI_Prophunt_C_LoadSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddLootBox
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddLootBox(int lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddLootBox");

	UGI_Prophunt_C_AddLootBox_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.DecreaseLootBox
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::DecreaseLootBox(int lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.DecreaseLootBox");

	UGI_Prophunt_C_DecreaseLootBox_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.DecreaseCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::DecreaseCoins(int Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.DecreaseCoins");

	UGI_Prophunt_C_DecreaseCoins_Params params {};
	params.Coins = Coins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.On EOS Login
//		Flags  -> ()
// Parameters:
//		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     ErrorStr                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::On_EOS_Login(bool bWasSuccessful, const struct FString& ErrorStr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.On EOS Login");

	UGI_Prophunt_C_On_EOS_Login_Params params {};
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorStr = ErrorStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetCountOpenedLootBox
//		Flags  -> ()
void UGI_Prophunt_C::SetCountOpenedLootBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetCountOpenedLootBox");

	UGI_Prophunt_C_SetCountOpenedLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.On Waiting Test Event plz work
//		Flags  -> ()
void UGI_Prophunt_C::On_Waiting_Test_Event_plz_work()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.On Waiting Test Event plz work");

	UGI_Prophunt_C_On_Waiting_Test_Event_plz_work_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetBannerID
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetBannerID(int BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetBannerID");

	UGI_Prophunt_C_SetBannerID_Params params {};
	params.BannerID = BannerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetTagID
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetTagID(int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetTagID");

	UGI_Prophunt_C_SetTagID_Params params {};
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ConnectCustomGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::ConnectCustomGame(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ConnectCustomGame");

	UGI_Prophunt_C_ConnectCustomGame_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsNewAvatar
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewAvatar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsNewAvatar(bool IsNewAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsNewAvatar");

	UGI_Prophunt_C_SetIsNewAvatar_Params params {};
	params.IsNewAvatar = IsNewAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsNewTags
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsNewTags(bool IsNewTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsNewTags");

	UGI_Prophunt_C_SetIsNewTags_Params params {};
	params.IsNewTags = IsNewTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsNewBanner
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewBanner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsNewBanner(bool IsNewBanner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsNewBanner");

	UGI_Prophunt_C_SetIsNewBanner_Params params {};
	params.IsNewBanner = IsNewBanner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsNewSkin
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewSkin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsNewSkin(bool IsNewSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsNewSkin");

	UGI_Prophunt_C_SetIsNewSkin_Params params {};
	params.IsNewSkin = IsNewSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsSkinCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsSkinCustomizationNew(int SkinID, bool IsNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsSkinCustomizationNew");

	UGI_Prophunt_C_SetIsSkinCustomizationNew_Params params {};
	params.SkinID = SkinID;
	params.IsNew = IsNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddAvatarsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddAvatarsThatPlayerOwn(int AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddAvatarsThatPlayerOwn");

	UGI_Prophunt_C_AddAvatarsThatPlayerOwn_Params params {};
	params.AvatarID = AvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddTagsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddTagsThatPlayerOwn(int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddTagsThatPlayerOwn");

	UGI_Prophunt_C_AddTagsThatPlayerOwn_Params params {};
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.AddBannerThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::AddBannerThatPlayerOwn(int BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.AddBannerThatPlayerOwn");

	UGI_Prophunt_C_AddBannerThatPlayerOwn_Params params {};
	params.BannerID = BannerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsAvatarsCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                AvatarsID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsTagNew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsAvatarsCustomizationNew(int AvatarsID, bool IsTagNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsAvatarsCustomizationNew");

	UGI_Prophunt_C_SetIsAvatarsCustomizationNew_Params params {};
	params.AvatarsID = AvatarsID;
	params.IsTagNew = IsTagNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsTagsCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                TagsID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsTagNew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsTagsCustomizationNew(int TagsID, bool IsTagNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsTagsCustomizationNew");

	UGI_Prophunt_C_SetIsTagsCustomizationNew_Params params {};
	params.TagsID = TagsID;
	params.IsTagNew = IsTagNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsBannerCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsBannerNew                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsBannerCustomizationNew(int BannerID, bool IsBannerNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsBannerCustomizationNew");

	UGI_Prophunt_C_SetIsBannerCustomizationNew_Params params {};
	params.BannerID = BannerID;
	params.IsBannerNew = IsBannerNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetAvatarID
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetAvatarID(int AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetAvatarID");

	UGI_Prophunt_C_SetAvatarID_Params params {};
	params.AvatarID = AvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetCachedBuildId
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetCachedBuildId(const struct FString& BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetCachedBuildId");

	UGI_Prophunt_C_SetCachedBuildId_Params params {};
	params.BuildId = BuildId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.Set_CS_Data
//		Flags  -> ()
// Parameters:
//		struct FString                                     SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::Set_CS_Data(const struct FString& SessionId, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.Set_CS_Data");

	UGI_Prophunt_C_Set_CS_Data_Params params {};
	params.SessionId = SessionId;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetShouldCreateLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetShouldCreateLobby(bool Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetShouldCreateLobby");

	UGI_Prophunt_C_SetShouldCreateLobby_Params params {};
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.NotifyConnetCustomGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::NotifyConnetCustomGame(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.NotifyConnetCustomGame");

	UGI_Prophunt_C_NotifyConnetCustomGame_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetIsInMainMenuBP
//		Flags  -> ()
// Parameters:
//		bool                                               Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_Prophunt_C::SetIsInMainMenuBP(bool Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetIsInMainMenuBP");

	UGI_Prophunt_C_SetIsInMainMenuBP_Params params {};
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetCustomGameData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetCustomGameData(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetCustomGameData");

	UGI_Prophunt_C_SetCustomGameData_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetLobbyDataBP
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetLobbyDataBP(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetLobbyDataBP");

	UGI_Prophunt_C_SetLobbyDataBP_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnGetSessionTicketResponse
//		Flags  -> ()
// Parameters:
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnGetSessionTicketResponse(bool Success, const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnGetSessionTicketResponse");

	UGI_Prophunt_C_OnGetSessionTicketResponse_Params params {};
	params.Success = Success;
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnAuthOK
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnAuthOK(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnAuthOK");

	UGI_Prophunt_C_OnAuthOK_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnAuthFail
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnAuthFail(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnAuthFail");

	UGI_Prophunt_C_OnAuthFail_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.On Request Encrypted App Ticket
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::On_Request_Encrypted_App_Ticket(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.On Request Encrypted App Ticket");

	UGI_Prophunt_C_On_Request_Encrypted_App_Ticket_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.SetLoadingScreenWidget
//		Flags  -> ()
// Parameters:
//		class UW_LoadingScreen_C*                          WidgetRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::SetLoadingScreenWidget(class UW_LoadingScreen_C* WidgetRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.SetLoadingScreenWidget");

	UGI_Prophunt_C_SetLoadingScreenWidget_Params params {};
	params.WidgetRef = WidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ExecuteUbergraph_GI_Prophunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_Prophunt_C::ExecuteUbergraph_GI_Prophunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ExecuteUbergraph_GI_Prophunt");

	UGI_Prophunt_C_ExecuteUbergraph_GI_Prophunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.ClearLobbyUI__DelegateSignature
//		Flags  -> ()
void UGI_Prophunt_C::ClearLobbyUI__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.ClearLobbyUI__DelegateSignature");

	UGI_Prophunt_C_ClearLobbyUI__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnLeftLobby__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnLeftLobby__DelegateSignature(const struct FString& Name, const struct FString& SteamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnLeftLobby__DelegateSignature");

	UGI_Prophunt_C_OnLeftLobby__DelegateSignature_Params params {};
	params.Name = Name;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnEnterLobby__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnEnterLobby__DelegateSignature(const struct FString& Name, const struct FString& SteamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnEnterLobby__DelegateSignature");

	UGI_Prophunt_C_OnEnterLobby__DelegateSignature_Params params {};
	params.Name = Name;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnGoneOffline__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnGoneOffline__DelegateSignature(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnGoneOffline__DelegateSignature");

	UGI_Prophunt_C_OnGoneOffline__DelegateSignature_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GI_Prophunt.GI_Prophunt_C.OnComeOnline__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UGI_Prophunt_C::OnComeOnline__DelegateSignature(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GI_Prophunt.GI_Prophunt_C.OnComeOnline__DelegateSignature");

	UGI_Prophunt_C_OnComeOnline__DelegateSignature_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
