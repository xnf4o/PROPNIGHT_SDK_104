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

// Function W_Banner.W_Banner_C.Get_Image_Avater_Brush_1
struct UW_Banner_C_Get_Image_Avater_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function W_Banner.W_Banner_C.Get_TextBlock_Name_Text_1
struct UW_Banner_C_Get_TextBlock_Name_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_Banner.W_Banner_C.OnLoaded_3A62C99E44DD2525A6939F9FBBB52687
struct UW_Banner_C_OnLoaded_3A62C99E44DD2525A6939F9FBBB52687_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Banner.W_Banner_C.OnLoaded_924C32314A2EEBA10D4A848BACEE2204
struct UW_Banner_C_OnLoaded_924C32314A2EEBA10D4A848BACEE2204_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Banner.W_Banner_C.OnLoaded_458029EF4F1AF3D0A4540491873CBCE7
struct UW_Banner_C_OnLoaded_458029EF4F1AF3D0A4540491873CBCE7_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Banner.W_Banner_C.PreConstruct
struct UW_Banner_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Banner.W_Banner_C.Construct
struct UW_Banner_C_Construct_Params
{
};

// Function W_Banner.W_Banner_C.SetAvatarSurv
struct UW_Banner_C_SetAvatarSurv_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function W_Banner.W_Banner_C.setKillerAvatar
struct UW_Banner_C_setKillerAvatar_Params
{
};

// Function W_Banner.W_Banner_C.SetNickname
struct UW_Banner_C_SetNickname_Params
{
	struct FText                                       Nickname;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_Banner.W_Banner_C.SetText_TAG
struct UW_Banner_C_SetText_TAG_Params
{
	struct FText                                       BannerText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_Banner.W_Banner_C.SetBannerInfo
struct UW_Banner_C_SetBannerInfo_Params
{
	int                                                AvatarID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BannerID;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Banner.W_Banner_C.ShowBanner
struct UW_Banner_C_ShowBanner_Params
{
};

// Function W_Banner.W_Banner_C.HideBanner
struct UW_Banner_C_HideBanner_Params
{
};

// Function W_Banner.W_Banner_C.SetLeaveKillerAvatar
struct UW_Banner_C_SetLeaveKillerAvatar_Params
{
	struct FEndGamePlayerData                          PlayerInforamtion;                                         // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_Banner.W_Banner_C.SetRandom_ForDefault
struct UW_Banner_C_SetRandom_ForDefault_Params
{
};

// Function W_Banner.W_Banner_C.DefaultText_TagStyle
struct UW_Banner_C_DefaultText_TagStyle_Params
{
};

// Function W_Banner.W_Banner_C.ExecuteUbergraph_W_Banner
struct UW_Banner_C_ExecuteUbergraph_W_Banner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
