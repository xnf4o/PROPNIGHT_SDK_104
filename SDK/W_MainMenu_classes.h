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

// WidgetBlueprintGeneratedClass W_MainMenu.W_MainMenu_C
// 0x0F20 (FullSize[0x1180] - InheritedSize[0x0260])
class UW_MainMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            HideSocAndVer_Anim;                                        // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show_BanNotification;                                      // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            HideSocialNetworks_Anim;                                   // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowHide_Social;                                           // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeBlur;                                                  // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            QuitMove_Anim;                                             // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SettingsMove_Anim;                                         // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            TutorialMove_Anim;                                         // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PlayMove_Anim;                                             // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            BackButton_Anim;                                           // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Chat_Anim;                                                 // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ChangeSwitcherWidget_Anim;                                 // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Logo_Anim;                                                 // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            MainMenu_Appearance_Anim;                                  // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  BuildNumber;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button;                                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_79;                                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_198;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_525;                                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_632;                                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Discord_Link;                                       // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Facebook_Link;                                      // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Instagram_Link;                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Lootbox;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Play;                                               // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_QUIT;                                               // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Settings;                                           // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Tutorial;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Twitter_Link;                                       // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_NewMainMenu;                                   // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindow_C*                               ChatWindow;                                                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ClearPerkButton;                                           // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_Social;                                      // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_60;                                                  // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_88;                                                  // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_114;                                                 // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_284;                                                 // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_421;                                                 // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_905;                                                 // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_FadeBG;                                              // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     KillerPerkButton;                                          // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_RedLine;                                           // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Perk1;                                                     // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Perk1Name;                                                 // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Perk2;                                                     // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Perk2Name;                                                 // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Perk3;                                                     // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Perk3Name;                                                 // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PerkDesc;                                                  // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              PerkList;                                                  // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PerkName;                                                  // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PerkWindow;                                                // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              PlayerType;                                                // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBar_KB;                                            // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBar_Mouse;                                         // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_BackButton;                                        // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_Buttons;                                           // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SurvPerkButton;                                            // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              TestSkinHBox;                                              // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TestSkinVBox;                                              // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Lootbox;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Play;                                            // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Quit;                                            // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Settings;                                        // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Timer;                                           // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Tutorial;                                        // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PlayScreen_C*                             W_PlayScreen;                                              // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PressAnyKeyScreen_C*                      W_PressAnyKeyScreen;                                       // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CustomizationMenu_C*                    WBP_CustomizationMenu;                                     // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LootboxMain_C*                          WBP_LootboxMain;                                           // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NewItemMarker_C*                        WBP_NewItemMarker_Skins;                                   // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuickSearch_C*                          WBP_QuickSearch;                                           // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuitDialog_C*                           WBP_QuitDialog;                                            // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ServerMessage_C*                        WBP_ServerMessage;                                         // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SocialUI_C*                             WBP_SocialUI;                                              // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_MainMenu;                                   // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                NumberOfSessions;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9KDD[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x04E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MinPing;                                                   // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VR0T[0x4];                                     // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlueprintSessionResult                     AvialableSession;                                          // 0x0500(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Found_;                                                    // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_THZU[0x3];                                     // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayers;                                                // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HostLevel;                                                 // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGI_Prophunt_C*                              GI;                                                        // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ServPing;                                                  // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SettingsOpen_;                                             // 0x0624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SearchingOpen_;                                            // 0x0625(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SQEL[0x2];                                     // 0x0626(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                intValue;                                                  // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LXGY[0x4];                                     // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          arrayImg;                                                  // 0x0630(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             arrayName;                                                 // 0x0640(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFMODEventInstance                          MainMenuSound;                                             // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MenuSoundStarted_;                                         // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7ZSJ[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UButton*                                     LastKnowButton;                                            // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                FocusedStyleButton;                                        // 0x0668(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                UnFocusedStyleButton;                                      // 0x08E0(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SettingButtonIsHover_;                                     // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HCG2[0x7];                                     // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UButton*>                             ButtonsArray;                                              // 0x0B60(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UObject*>                             ImgNormalArray;                                            // 0x0B70(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             ImgHoverArray;                                             // 0x0B80(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             ImgPressedArray;                                           // 0x0B90(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ButtonsIndex;                                              // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ButtonImageSize_Normal;                                    // 0x0BA4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ButtonImageSize_Hovered;                                   // 0x0BAC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ButtonImageSizePressed;                                    // 0x0BB4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_54OA[0x4];                                     // 0x0BBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UButton*>                             Buttons_LinksArray;                                        // 0x0BC0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UTextBlock*>                          TextBlockArray;                                            // 0x0BD0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UObject*>                             ImgPressedLinksArray;                                      // 0x0BE0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             ImgNormalLinksArray;                                       // 0x0BF0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             ImgHoverLinksArray;                                        // 0x0C00(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   ButtonImageSize_Links;                                     // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockButtonIsHover_;                                       // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GR8H[0x3];                                     // 0x0C19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillersCount;                                              // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvCount;                                                 // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UL7J[0x4];                                     // 0x0C24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBP_SessionData_C*>                   SessionList;                                               // 0x0C28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsInventoryButtonHovered_;                                 // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPlayButtonHovered_;                                      // 0x0C39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPracticeButtonPressed_;                                  // 0x0C3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8IF5[0x5];                                     // 0x0C3B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UButton*                                     HoveredButton;                                             // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkNumber;                                                // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SurvPerk_;                                                 // 0x0C4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9RXD[0x3];                                     // 0x0C4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Last_Text_Name_S;                                          // 0x0C50(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Last_Text_Desc_S;                                          // 0x0C68(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Last_Text_Name_K;                                          // 0x0C80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Last_Text_Desc_K;                                          // 0x0C98(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Hovered;                                          // 0x0CB0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Normal;                                           // 0x0D38(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Normal_1;                                         // 0x0DC0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Hovered_1;                                        // 0x0E48(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UButton*, class UWidgetAnimation*>      ButtonAnimsMap;                                            // 0x0ED0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IsButtonsUnpressible;                                      // 0x0F20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RQZR[0x3];                                     // 0x0F21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SliderValueFocus;                                          // 0x0F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValueFocus_KB;                                       // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UIU8[0x4];                                     // 0x0F2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 In_Style_Normal_2;                                         // 0x0F30(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Normal_3;                                         // 0x0FB8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Normal_4;                                         // 0x1040(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 In_Style_Normal_5;                                         // 0x10C8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMenuReady;                                               // 0x1151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTutorialBlocked;                                         // 0x1152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6L28[0x5];                                     // 0x1153(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                BanTimer;                                                  // 0x1158(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_BanManager_C*                            BP_Ban_Manager;                                            // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       VesionBuild;                                               // 0x1168(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MainMenu.W_MainMenu_C");
		return ptr;
	}



	void BanTimerTick();
	void StartBanTimer();
	void CheckBanned(bool* IsBanned);
	void BlockTutotialButton(bool bLock);
	void MouseFocus_(bool* Result);
	void Get_Anim(class UButton* Button, class UWidgetAnimation** Anim);
	void PrintError(const struct FString& Text);
	struct FText Get_LVL_Text_1();
	void LastKnowFocus(class UButton** LastFocusedButton);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ResetButtonVisibility();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void Search();
	void SearchingActive();
	void SearchingDeactive();
	void CancelSerach();
	void StartMainMenuSound();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetSettingOpen_();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetFocusToMouse();
	void Event_ESC();
	void UpdateSessionList(TArray<struct FBlueprintSessionResult> Sessions);
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature();
	void PAK_Screen_OnShown();
	void Bind_PAK_Events();
	void BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
	void HideMenu(bool HideNetworks);
	void ShowMenu(bool ShowNetworks);
	void HideChat();
	void ShowChat();
	void FadeBlackScreen();
	void BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void ShowBackButton();
	void HideBackButton();
	void BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature();
	void UpdatePerksName(bool Surv_);
	void BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
	void LoadPerks(bool Surv_);
	void SelectPerk(class UClass* SelectedPerk);
	void BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature();
	void BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature();
	void LostFocusMouseClick();
	void BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void MoveSliderMenu(float DeltaTime);
	void Move(const struct FName& EntryName);
	void SettingsHoverStyle();
	void QuitHoverStyle();
	void SetStyleForButtonsFromKeyboard();
	void SetUnhoveredButtonsStyle();
	void BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature();
	void BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature();
	void Disable_SocialsButtons();
	void Esc_Quit();
	void BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature();
	void ShowSocialNetworks();
	void HideSocialNetworks();
	void BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ShowUpdateDialog();
	void OnAcceptUpdate();
	void HideSocUIAndVersion();
	void ShowSocUIAndVersion();
	void ExecuteUbergraph_W_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
