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

// WidgetBlueprintGeneratedClass WBP_InGameBannerScreen.WBP_InGameBannerScreen_C
// 0x002F (FullSize[0x028F] - InheritedSize[0x0260])
class UWBP_InGameBannerScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            Show_Anim;                                                 // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_CaughtBy;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Banner_C*                                 W_Banner;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                                ShowTimer;                                                 // 0x0280(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsBannerVisible;                                          // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSpectatorMode;                                           // 0x028D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCaughtByBanner;                                          // 0x028E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameBannerScreen.WBP_InGameBannerScreen_C");
		return ptr;
	}



	void SetSpectatorMode(bool Spectator);
	void ShowBanner(float Time, const struct FText& BannerHeaderText);
	void HideBanner();
	void SetBannerInfo(class APS_PropHunt_C* PS);
	void SetNickname(const struct FString& Nickname);
	void SetSurvAvatar(TEnumAsByte<SurvChars_ESurvChars> char_);
	void ShowSurvSpectatorBanner(const struct FString& Nickname, TEnumAsByte<SurvChars_ESurvChars> char_, class APS_PropHunt_C* PS);
	void ExecuteUbergraph_WBP_InGameBannerScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
