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
//		Name   -> Function W_Banner.W_Banner_C.Get_Image_Avater_Brush_1
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UW_Banner_C::Get_Image_Avater_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.Get_Image_Avater_Brush_1");

	UW_Banner_C_Get_Image_Avater_Brush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.Get_TextBlock_Name_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_Banner_C::Get_TextBlock_Name_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.Get_TextBlock_Name_Text_1");

	UW_Banner_C_Get_TextBlock_Name_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.OnLoaded_3A62C99E44DD2525A6939F9FBBB52687
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Banner_C::OnLoaded_3A62C99E44DD2525A6939F9FBBB52687(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.OnLoaded_3A62C99E44DD2525A6939F9FBBB52687");

	UW_Banner_C_OnLoaded_3A62C99E44DD2525A6939F9FBBB52687_Params params {};
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.OnLoaded_924C32314A2EEBA10D4A848BACEE2204
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Banner_C::OnLoaded_924C32314A2EEBA10D4A848BACEE2204(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.OnLoaded_924C32314A2EEBA10D4A848BACEE2204");

	UW_Banner_C_OnLoaded_924C32314A2EEBA10D4A848BACEE2204_Params params {};
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.OnLoaded_458029EF4F1AF3D0A4540491873CBCE7
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Banner_C::OnLoaded_458029EF4F1AF3D0A4540491873CBCE7(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.OnLoaded_458029EF4F1AF3D0A4540491873CBCE7");

	UW_Banner_C_OnLoaded_458029EF4F1AF3D0A4540491873CBCE7_Params params {};
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Banner_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.PreConstruct");

	UW_Banner_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.Construct
//		Flags  -> ()
void UW_Banner_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.Construct");

	UW_Banner_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.SetAvatarSurv
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UW_Banner_C::SetAvatarSurv(TEnumAsByte<SurvChars_ESurvChars> SurvChar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.SetAvatarSurv");

	UW_Banner_C_SetAvatarSurv_Params params {};
	params.SurvChar = SurvChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.setKillerAvatar
//		Flags  -> ()
void UW_Banner_C::setKillerAvatar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.setKillerAvatar");

	UW_Banner_C_setKillerAvatar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.SetNickname
//		Flags  -> ()
// Parameters:
//		struct FText                                       Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_Banner_C::SetNickname(const struct FText& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.SetNickname");

	UW_Banner_C_SetNickname_Params params {};
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.SetText_TAG
//		Flags  -> ()
// Parameters:
//		struct FText                                       BannerText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_Banner_C::SetText_TAG(const struct FText& BannerText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.SetText_TAG");

	UW_Banner_C_SetText_TAG_Params params {};
	params.BannerText = BannerText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.SetBannerInfo
//		Flags  -> ()
// Parameters:
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Banner_C::SetBannerInfo(int AvatarID, int BannerID, int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.SetBannerInfo");

	UW_Banner_C_SetBannerInfo_Params params {};
	params.AvatarID = AvatarID;
	params.BannerID = BannerID;
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.ShowBanner
//		Flags  -> ()
void UW_Banner_C::ShowBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.ShowBanner");

	UW_Banner_C_ShowBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.HideBanner
//		Flags  -> ()
void UW_Banner_C::HideBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.HideBanner");

	UW_Banner_C_HideBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.SetLeaveKillerAvatar
//		Flags  -> ()
// Parameters:
//		struct FEndGamePlayerData                          PlayerInforamtion                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_Banner_C::SetLeaveKillerAvatar(const struct FEndGamePlayerData& PlayerInforamtion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.SetLeaveKillerAvatar");

	UW_Banner_C_SetLeaveKillerAvatar_Params params {};
	params.PlayerInforamtion = PlayerInforamtion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.SetRandom_ForDefault
//		Flags  -> ()
void UW_Banner_C::SetRandom_ForDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.SetRandom_ForDefault");

	UW_Banner_C_SetRandom_ForDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.DefaultText_TagStyle
//		Flags  -> ()
void UW_Banner_C::DefaultText_TagStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.DefaultText_TagStyle");

	UW_Banner_C_DefaultText_TagStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Banner.W_Banner_C.ExecuteUbergraph_W_Banner
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Banner_C::ExecuteUbergraph_W_Banner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Banner.W_Banner_C.ExecuteUbergraph_W_Banner");

	UW_Banner_C_ExecuteUbergraph_W_Banner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
