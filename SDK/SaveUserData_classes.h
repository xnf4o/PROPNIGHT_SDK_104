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

// BlueprintGeneratedClass SaveUserData.SaveUserData_C
// 0x021F (FullSize[0x0247] - InheritedSize[0x0028])
class USaveUserData_C : public USaveGame
{
public:
	int                                                SurvSkinID;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5R2R[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SurvSkinArray;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Exp;                                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IEN1[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, int>                                     CharSelectedSkinIds;                                       // 0x0048(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        ArrayOfSkinsThatPlayerOwn;                                 // 0x0098(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Coins;                                                     // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                lootbox;                                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OpenedLootBoxCount;                                        // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedBannerID;                                          // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GLOBAL_XP;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMR_SURV;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMR_KILLER;                                                // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNewSkin;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNewBanner;                                               // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNewTag;                                                  // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNewAvatar;                                               // 0x00CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I8U6[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, bool>                                    IsSkinCustomNew;                                           // 0x00D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        BannerThatPlayerOwnArr;                                    // 0x0120(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        TagsThatPlayerOwnArr;                                      // 0x0130(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        AvatarThatPlayerOwnArr;                                    // 0x0140(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, bool>                                    IsAvatarCustomNew;                                         // 0x0150(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, bool>                                    IsBannerCustomNew;                                         // 0x01A0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, bool>                                    IsTagsCustomNew;                                           // 0x01F0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AvatarID;                                                  // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UnlockAllSkins;                                            // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableAllSkin;                                            // 0x0245(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DltSkin;                                                   // 0x0246(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SaveUserData.SaveUserData_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
