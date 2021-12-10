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

// BlueprintGeneratedClass I_GI_PropHunt.I_GI_PropHunt_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_GI_PropHunt_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass I_GI_PropHunt.I_GI_PropHunt_C");
		return ptr;
	}



	void GetLoadingScreenWidget(class UW_LoadingScreen_C** LoadingScreenRef);
	void SetLoadingScreenWidget(class UW_LoadingScreen_C* WidgetRef);
	void LoadCulture();
	void SaveCulture(const struct FString& Culture);
	void GetAvatarID(int* AvatarID);
	void SetAvatarID(int AvatarID);
	void GetIsAvatarsCustomizationNew(TMap<int, bool>* AvatarMap);
	void GetIsTagsCustomizationNew(TMap<int, bool>* TagMap);
	void GetIsBannerCustomizationNew(TMap<int, bool>* BannerMap);
	void SetIsAvatarsCustomizationNew(int AvatarsID, bool IsTagNew);
	void SetIsTagsCustomizationNew(int TagsID, bool IsTagNew);
	void SetIsBannerCustomizationNew(int BannerID, bool IsBannerNew);
	void GetAvatarsThatPlayerOwn(TArray<int>* AvatarIDs);
	void GetTagsThatPlayerOwn(TArray<int>* TagIDs);
	void GetBannerThatPlayerOwn(TArray<int>* BannerIDs);
	void AddAvatarsThatPlayerOwn(int AvatarID);
	void AddTagsThatPlayerOwn(int TagID);
	void AddBannerThatPlayerOwn(int BannerID);
	void GetIsSkinCustomizationNew(TMap<int, bool>* IsCustomizatioNew);
	void SetIsSkinCustomizationNew(int SkinID, bool IsNew);
	void GetIsNewAvatar(bool* IsNewAvatar);
	void GetIsNewTags(bool* IsNewTags);
	void GetIsNewBanner(bool* IsNewBanner);
	void GetIsNewSkin(bool* IsNewSkin);
	void SetIsNewAvatar(bool IsNewAvatar);
	void SetIsNewTags(bool IsNewTags);
	void SetIsNewBanner(bool IsNewBanner);
	void SetIsNewSkin(bool IsNewSkin);
	void GetTagID(int* TagID);
	void SetTagID(int TagID);
	void GetBannerID(int* BannerID);
	void SetBannerID(int BannerID);
	void GetCountOpenedLootBox(int* lootbox);
	void SetCountOpenedLootBox();
	void DecreaseLootBox(int lootbox);
	void DecreaseCoins(int Coins);
	void GetLootboxCount(int* lootbox);
	void AddLootBox(int lootbox);
	void GetCoins(int* Coins);
	void AddCoins(int Coins);
	void GetSelectedSkinsID(TMap<int, int>* GetSkinID);
	void AddSkinThatPlayerOwn(int SkinID);
	void GetSkinThatPlayerOwn(TArray<int>* OwnSkinIds);
	void GetSkin(TMap<int, class USkeletalMesh*>* Skin);
	void SetSkin(int CharacterId, class USkeletalMesh* SkeletalMesh, int SelectedSkinID);
	void SetSkinID(int ID);
	void GetSkinID(int* ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
