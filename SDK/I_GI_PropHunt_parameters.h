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

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetLoadingScreenWidget
struct UI_GI_PropHunt_C_GetLoadingScreenWidget_Params
{
	class UW_LoadingScreen_C*                          LoadingScreenRef;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetLoadingScreenWidget
struct UI_GI_PropHunt_C_SetLoadingScreenWidget_Params
{
	class UW_LoadingScreen_C*                          WidgetRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.LoadCulture
struct UI_GI_PropHunt_C_LoadCulture_Params
{
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SaveCulture
struct UI_GI_PropHunt_C_SaveCulture_Params
{
	struct FString                                     Culture;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetAvatarID
struct UI_GI_PropHunt_C_GetAvatarID_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetAvatarID
struct UI_GI_PropHunt_C_SetAvatarID_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsAvatarsCustomizationNew
struct UI_GI_PropHunt_C_GetIsAvatarsCustomizationNew_Params
{
	TMap<int, bool>                                    AvatarMap;                                                 // 0x0000(0x0050)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsTagsCustomizationNew
struct UI_GI_PropHunt_C_GetIsTagsCustomizationNew_Params
{
	TMap<int, bool>                                    TagMap;                                                    // 0x0000(0x0050)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsBannerCustomizationNew
struct UI_GI_PropHunt_C_GetIsBannerCustomizationNew_Params
{
	TMap<int, bool>                                    BannerMap;                                                 // 0x0000(0x0050)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsAvatarsCustomizationNew
struct UI_GI_PropHunt_C_SetIsAvatarsCustomizationNew_Params
{
	int                                                AvatarsID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTagNew;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsTagsCustomizationNew
struct UI_GI_PropHunt_C_SetIsTagsCustomizationNew_Params
{
	int                                                TagsID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTagNew;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsBannerCustomizationNew
struct UI_GI_PropHunt_C_SetIsBannerCustomizationNew_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBannerNew;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetAvatarsThatPlayerOwn
struct UI_GI_PropHunt_C_GetAvatarsThatPlayerOwn_Params
{
	TArray<int>                                        AvatarIDs;                                                 // 0x0000(0x0010)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetTagsThatPlayerOwn
struct UI_GI_PropHunt_C_GetTagsThatPlayerOwn_Params
{
	TArray<int>                                        TagIDs;                                                    // 0x0000(0x0010)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetBannerThatPlayerOwn
struct UI_GI_PropHunt_C_GetBannerThatPlayerOwn_Params
{
	TArray<int>                                        BannerIDs;                                                 // 0x0000(0x0010)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.AddAvatarsThatPlayerOwn
struct UI_GI_PropHunt_C_AddAvatarsThatPlayerOwn_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.AddTagsThatPlayerOwn
struct UI_GI_PropHunt_C_AddTagsThatPlayerOwn_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.AddBannerThatPlayerOwn
struct UI_GI_PropHunt_C_AddBannerThatPlayerOwn_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsSkinCustomizationNew
struct UI_GI_PropHunt_C_GetIsSkinCustomizationNew_Params
{
	TMap<int, bool>                                    IsCustomizatioNew;                                         // 0x0000(0x0050)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsSkinCustomizationNew
struct UI_GI_PropHunt_C_SetIsSkinCustomizationNew_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNew;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewAvatar
struct UI_GI_PropHunt_C_GetIsNewAvatar_Params
{
	bool                                               IsNewAvatar;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewTags
struct UI_GI_PropHunt_C_GetIsNewTags_Params
{
	bool                                               IsNewTags;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewBanner
struct UI_GI_PropHunt_C_GetIsNewBanner_Params
{
	bool                                               IsNewBanner;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewSkin
struct UI_GI_PropHunt_C_GetIsNewSkin_Params
{
	bool                                               IsNewSkin;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewAvatar
struct UI_GI_PropHunt_C_SetIsNewAvatar_Params
{
	bool                                               IsNewAvatar;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewTags
struct UI_GI_PropHunt_C_SetIsNewTags_Params
{
	bool                                               IsNewTags;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewBanner
struct UI_GI_PropHunt_C_SetIsNewBanner_Params
{
	bool                                               IsNewBanner;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewSkin
struct UI_GI_PropHunt_C_SetIsNewSkin_Params
{
	bool                                               IsNewSkin;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetTagID
struct UI_GI_PropHunt_C_GetTagID_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetTagID
struct UI_GI_PropHunt_C_SetTagID_Params
{
	int                                                TagID;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetBannerID
struct UI_GI_PropHunt_C_GetBannerID_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetBannerID
struct UI_GI_PropHunt_C_SetBannerID_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetCountOpenedLootBox
struct UI_GI_PropHunt_C_GetCountOpenedLootBox_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetCountOpenedLootBox
struct UI_GI_PropHunt_C_SetCountOpenedLootBox_Params
{
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.DecreaseLootBox
struct UI_GI_PropHunt_C_DecreaseLootBox_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.DecreaseCoins
struct UI_GI_PropHunt_C_DecreaseCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetLootboxCount
struct UI_GI_PropHunt_C_GetLootboxCount_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.AddLootBox
struct UI_GI_PropHunt_C_AddLootBox_Params
{
	int                                                lootbox;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetCoins
struct UI_GI_PropHunt_C_GetCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.AddCoins
struct UI_GI_PropHunt_C_AddCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetSelectedSkinsID
struct UI_GI_PropHunt_C_GetSelectedSkinsID_Params
{
	TMap<int, int>                                     GetSkinID;                                                 // 0x0000(0x0050)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.AddSkinThatPlayerOwn
struct UI_GI_PropHunt_C_AddSkinThatPlayerOwn_Params
{
	int                                                SkinID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkinThatPlayerOwn
struct UI_GI_PropHunt_C_GetSkinThatPlayerOwn_Params
{
	TArray<int>                                        OwnSkinIds;                                                // 0x0000(0x0010)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkin
struct UI_GI_PropHunt_C_GetSkin_Params
{
	TMap<int, class USkeletalMesh*>                    Skin;                                                      // 0x0000(0x0050)  (Parm, OutParm)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetSkin
struct UI_GI_PropHunt_C_SetSkin_Params
{
	int                                                CharacterId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedSkinID;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.SetSkinID
struct UI_GI_PropHunt_C_SetSkinID_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkinID
struct UI_GI_PropHunt_C_GetSkinID_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
