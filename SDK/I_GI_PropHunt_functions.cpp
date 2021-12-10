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
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetLoadingScreenWidget
//		Flags  -> ()
// Parameters:
//		class UW_LoadingScreen_C*                          LoadingScreenRef                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetLoadingScreenWidget(class UW_LoadingScreen_C** LoadingScreenRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetLoadingScreenWidget");

	UI_GI_PropHunt_C_GetLoadingScreenWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoadingScreenRef != nullptr)
		*LoadingScreenRef = params.LoadingScreenRef;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetLoadingScreenWidget
//		Flags  -> ()
// Parameters:
//		class UW_LoadingScreen_C*                          WidgetRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SetLoadingScreenWidget(class UW_LoadingScreen_C* WidgetRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetLoadingScreenWidget");

	UI_GI_PropHunt_C_SetLoadingScreenWidget_Params params {};
	params.WidgetRef = WidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.LoadCulture
//		Flags  -> ()
void UI_GI_PropHunt_C::LoadCulture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.LoadCulture");

	UI_GI_PropHunt_C_LoadCulture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SaveCulture
//		Flags  -> ()
// Parameters:
//		struct FString                                     Culture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SaveCulture(const struct FString& Culture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SaveCulture");

	UI_GI_PropHunt_C_SaveCulture_Params params {};
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetAvatarID
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetAvatarID(int* AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetAvatarID");

	UI_GI_PropHunt_C_GetAvatarID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvatarID != nullptr)
		*AvatarID = params.AvatarID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetAvatarID
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SetAvatarID(int AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetAvatarID");

	UI_GI_PropHunt_C_SetAvatarID_Params params {};
	params.AvatarID = AvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsAvatarsCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    AvatarMap                                                  (Parm, OutParm)
void UI_GI_PropHunt_C::GetIsAvatarsCustomizationNew(TMap<int, bool>* AvatarMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsAvatarsCustomizationNew");

	UI_GI_PropHunt_C_GetIsAvatarsCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvatarMap != nullptr)
		*AvatarMap = params.AvatarMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsTagsCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    TagMap                                                     (Parm, OutParm)
void UI_GI_PropHunt_C::GetIsTagsCustomizationNew(TMap<int, bool>* TagMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsTagsCustomizationNew");

	UI_GI_PropHunt_C_GetIsTagsCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagMap != nullptr)
		*TagMap = params.TagMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsBannerCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    BannerMap                                                  (Parm, OutParm)
void UI_GI_PropHunt_C::GetIsBannerCustomizationNew(TMap<int, bool>* BannerMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsBannerCustomizationNew");

	UI_GI_PropHunt_C_GetIsBannerCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BannerMap != nullptr)
		*BannerMap = params.BannerMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsAvatarsCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                AvatarsID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsTagNew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsAvatarsCustomizationNew(int AvatarsID, bool IsTagNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsAvatarsCustomizationNew");

	UI_GI_PropHunt_C_SetIsAvatarsCustomizationNew_Params params {};
	params.AvatarsID = AvatarsID;
	params.IsTagNew = IsTagNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsTagsCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                TagsID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsTagNew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsTagsCustomizationNew(int TagsID, bool IsTagNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsTagsCustomizationNew");

	UI_GI_PropHunt_C_SetIsTagsCustomizationNew_Params params {};
	params.TagsID = TagsID;
	params.IsTagNew = IsTagNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsBannerCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsBannerNew                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsBannerCustomizationNew(int BannerID, bool IsBannerNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsBannerCustomizationNew");

	UI_GI_PropHunt_C_SetIsBannerCustomizationNew_Params params {};
	params.BannerID = BannerID;
	params.IsBannerNew = IsBannerNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetAvatarsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        AvatarIDs                                                  (Parm, OutParm)
void UI_GI_PropHunt_C::GetAvatarsThatPlayerOwn(TArray<int>* AvatarIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetAvatarsThatPlayerOwn");

	UI_GI_PropHunt_C_GetAvatarsThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvatarIDs != nullptr)
		*AvatarIDs = params.AvatarIDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetTagsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        TagIDs                                                     (Parm, OutParm)
void UI_GI_PropHunt_C::GetTagsThatPlayerOwn(TArray<int>* TagIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetTagsThatPlayerOwn");

	UI_GI_PropHunt_C_GetTagsThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagIDs != nullptr)
		*TagIDs = params.TagIDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetBannerThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        BannerIDs                                                  (Parm, OutParm)
void UI_GI_PropHunt_C::GetBannerThatPlayerOwn(TArray<int>* BannerIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetBannerThatPlayerOwn");

	UI_GI_PropHunt_C_GetBannerThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BannerIDs != nullptr)
		*BannerIDs = params.BannerIDs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.AddAvatarsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::AddAvatarsThatPlayerOwn(int AvatarID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.AddAvatarsThatPlayerOwn");

	UI_GI_PropHunt_C_AddAvatarsThatPlayerOwn_Params params {};
	params.AvatarID = AvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.AddTagsThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::AddTagsThatPlayerOwn(int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.AddTagsThatPlayerOwn");

	UI_GI_PropHunt_C_AddTagsThatPlayerOwn_Params params {};
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.AddBannerThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::AddBannerThatPlayerOwn(int BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.AddBannerThatPlayerOwn");

	UI_GI_PropHunt_C_AddBannerThatPlayerOwn_Params params {};
	params.BannerID = BannerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsSkinCustomizationNew
//		Flags  -> ()
// Parameters:
//		TMap<int, bool>                                    IsCustomizatioNew                                          (Parm, OutParm)
void UI_GI_PropHunt_C::GetIsSkinCustomizationNew(TMap<int, bool>* IsCustomizatioNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsSkinCustomizationNew");

	UI_GI_PropHunt_C_GetIsSkinCustomizationNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCustomizatioNew != nullptr)
		*IsCustomizatioNew = params.IsCustomizatioNew;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsSkinCustomizationNew
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsSkinCustomizationNew(int SkinID, bool IsNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsSkinCustomizationNew");

	UI_GI_PropHunt_C_SetIsSkinCustomizationNew_Params params {};
	params.SkinID = SkinID;
	params.IsNew = IsNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewAvatar
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewAvatar                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::GetIsNewAvatar(bool* IsNewAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewAvatar");

	UI_GI_PropHunt_C_GetIsNewAvatar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewAvatar != nullptr)
		*IsNewAvatar = params.IsNewAvatar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewTags
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewTags                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::GetIsNewTags(bool* IsNewTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewTags");

	UI_GI_PropHunt_C_GetIsNewTags_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewTags != nullptr)
		*IsNewTags = params.IsNewTags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewBanner
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewBanner                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::GetIsNewBanner(bool* IsNewBanner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewBanner");

	UI_GI_PropHunt_C_GetIsNewBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewBanner != nullptr)
		*IsNewBanner = params.IsNewBanner;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewSkin
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewSkin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::GetIsNewSkin(bool* IsNewSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetIsNewSkin");

	UI_GI_PropHunt_C_GetIsNewSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNewSkin != nullptr)
		*IsNewSkin = params.IsNewSkin;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewAvatar
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewAvatar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsNewAvatar(bool IsNewAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewAvatar");

	UI_GI_PropHunt_C_SetIsNewAvatar_Params params {};
	params.IsNewAvatar = IsNewAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewTags
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsNewTags(bool IsNewTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewTags");

	UI_GI_PropHunt_C_SetIsNewTags_Params params {};
	params.IsNewTags = IsNewTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewBanner
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewBanner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsNewBanner(bool IsNewBanner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewBanner");

	UI_GI_PropHunt_C_SetIsNewBanner_Params params {};
	params.IsNewBanner = IsNewBanner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewSkin
//		Flags  -> ()
// Parameters:
//		bool                                               IsNewSkin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_GI_PropHunt_C::SetIsNewSkin(bool IsNewSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetIsNewSkin");

	UI_GI_PropHunt_C_SetIsNewSkin_Params params {};
	params.IsNewSkin = IsNewSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetTagID
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetTagID(int* TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetTagID");

	UI_GI_PropHunt_C_GetTagID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagID != nullptr)
		*TagID = params.TagID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetTagID
//		Flags  -> ()
// Parameters:
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SetTagID(int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetTagID");

	UI_GI_PropHunt_C_SetTagID_Params params {};
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetBannerID
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetBannerID(int* BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetBannerID");

	UI_GI_PropHunt_C_GetBannerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BannerID != nullptr)
		*BannerID = params.BannerID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetBannerID
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SetBannerID(int BannerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetBannerID");

	UI_GI_PropHunt_C_SetBannerID_Params params {};
	params.BannerID = BannerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetCountOpenedLootBox
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetCountOpenedLootBox(int* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetCountOpenedLootBox");

	UI_GI_PropHunt_C_GetCountOpenedLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (lootbox != nullptr)
		*lootbox = params.lootbox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetCountOpenedLootBox
//		Flags  -> ()
void UI_GI_PropHunt_C::SetCountOpenedLootBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetCountOpenedLootBox");

	UI_GI_PropHunt_C_SetCountOpenedLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.DecreaseLootBox
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::DecreaseLootBox(int lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.DecreaseLootBox");

	UI_GI_PropHunt_C_DecreaseLootBox_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.DecreaseCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::DecreaseCoins(int Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.DecreaseCoins");

	UI_GI_PropHunt_C_DecreaseCoins_Params params {};
	params.Coins = Coins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetLootboxCount
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetLootboxCount(int* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetLootboxCount");

	UI_GI_PropHunt_C_GetLootboxCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (lootbox != nullptr)
		*lootbox = params.lootbox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.AddLootBox
//		Flags  -> ()
// Parameters:
//		int                                                lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::AddLootBox(int lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.AddLootBox");

	UI_GI_PropHunt_C_AddLootBox_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetCoins(int* Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetCoins");

	UI_GI_PropHunt_C_GetCoins_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Coins != nullptr)
		*Coins = params.Coins;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.AddCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::AddCoins(int Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.AddCoins");

	UI_GI_PropHunt_C_AddCoins_Params params {};
	params.Coins = Coins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetSelectedSkinsID
//		Flags  -> ()
// Parameters:
//		TMap<int, int>                                     GetSkinID                                                  (Parm, OutParm)
void UI_GI_PropHunt_C::GetSelectedSkinsID(TMap<int, int>* GetSkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetSelectedSkinsID");

	UI_GI_PropHunt_C_GetSelectedSkinsID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetSkinID != nullptr)
		*GetSkinID = params.GetSkinID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.AddSkinThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::AddSkinThatPlayerOwn(int SkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.AddSkinThatPlayerOwn");

	UI_GI_PropHunt_C_AddSkinThatPlayerOwn_Params params {};
	params.SkinID = SkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkinThatPlayerOwn
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        OwnSkinIds                                                 (Parm, OutParm)
void UI_GI_PropHunt_C::GetSkinThatPlayerOwn(TArray<int>* OwnSkinIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkinThatPlayerOwn");

	UI_GI_PropHunt_C_GetSkinThatPlayerOwn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnSkinIds != nullptr)
		*OwnSkinIds = params.OwnSkinIds;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkin
//		Flags  -> ()
// Parameters:
//		TMap<int, class USkeletalMesh*>                    Skin                                                       (Parm, OutParm)
void UI_GI_PropHunt_C::GetSkin(TMap<int, class USkeletalMesh*>* Skin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkin");

	UI_GI_PropHunt_C_GetSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skin != nullptr)
		*Skin = params.Skin;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetSkin
//		Flags  -> ()
// Parameters:
//		int                                                CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SelectedSkinID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SetSkin(int CharacterId, class USkeletalMesh* SkeletalMesh, int SelectedSkinID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetSkin");

	UI_GI_PropHunt_C_SetSkin_Params params {};
	params.CharacterId = CharacterId;
	params.SkeletalMesh = SkeletalMesh;
	params.SelectedSkinID = SelectedSkinID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.SetSkinID
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::SetSkinID(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.SetSkinID");

	UI_GI_PropHunt_C_SetSkinID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkinID
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GI_PropHunt_C::GetSkinID(int* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GI_PropHunt.I_GI_PropHunt_C.GetSkinID");

	UI_GI_PropHunt_C_GetSkinID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
