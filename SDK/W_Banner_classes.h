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

// WidgetBlueprintGeneratedClass W_Banner.W_Banner_C
// 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
class UW_Banner_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            ShowHide_Anim;                                             // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_Avatar;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_AvatarBG;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_AvatarFrameBG;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Banner;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                                RetainerBox_1;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_38;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Name;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Tag;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_text;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      DataTableBanner[0x28];                                     // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DataTableAvatar[0x28];                                     // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DTTags[0x28];                                              // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                RandomNumber;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PUQ8[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Object_Avatar;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object_Banner;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object_Tag;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Banner.W_Banner_C");
		return ptr;
	}



	struct FSlateBrush Get_Image_Avater_Brush_1();
	struct FText Get_TextBlock_Name_Text_1();
	void OnLoaded_3A62C99E44DD2525A6939F9FBBB52687(class UObject* Loaded);
	void OnLoaded_924C32314A2EEBA10D4A848BACEE2204(class UObject* Loaded);
	void OnLoaded_458029EF4F1AF3D0A4540491873CBCE7(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetAvatarSurv(TEnumAsByte<SurvChars_ESurvChars> SurvChar);
	void setKillerAvatar();
	void SetNickname(const struct FText& Nickname);
	void SetText_TAG(const struct FText& BannerText);
	void SetBannerInfo(int AvatarID, int BannerID, int TagID);
	void ShowBanner();
	void HideBanner();
	void SetLeaveKillerAvatar(const struct FEndGamePlayerData& PlayerInforamtion);
	void SetRandom_ForDefault();
	void DefaultText_TagStyle();
	void ExecuteUbergraph_W_Banner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
