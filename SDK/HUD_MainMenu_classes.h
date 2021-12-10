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

// BlueprintGeneratedClass HUD_MainMenu.HUD_MainMenu_C
// 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
class AHUD_MainMenu_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UW_MainMenu_C*                               Widget;                                                    // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneralSettingWBP_C*                        Settings;                                                  // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayWindow_C*                           PlayWindow;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadingScreen_C*                          LoadingScreen;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                                   LanguageSaveData;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HUD_MainMenu.HUD_MainMenu_C");
		return ptr;
	}



	void InitSettings();
	void InitPlaWindow();
	void RemoveSetting();
	void InitLoadingScreen();
	void RemoveLoadingScreen();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnMatchCanceled();
	void RemoveLoadingScreen3();
	void FadeIn();
	void RemoveLoadingScreen2();
	void LoadingScreenHUD();
	void StartSearchingMatch();
	void HideSearchindUI();
	void FadeOut();
	void ShowSecredCodeWidget();
	void ExecuteUbergraph_HUD_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
