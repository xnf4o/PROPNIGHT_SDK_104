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

// WidgetBlueprintGeneratedClass WBP_SocialUI.WBP_SocialUI_C
// 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
class UWBP_SocialUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            ShowHide_DetailedFriendList;                               // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowHide_MiniFriendList;                                   // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     Button_Hide;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DetailedFriendList_C*                   WBP_DetailedFriendList;                                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LeaveTeamDialog_C*                      WBP_LeaveTeamDialog_359;                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MiniFriendList_C*                       WBP_MiniFriendList;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnShowDetailed;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Visible;                                                   // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U9XX[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHideDetailed;                                            // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SocialUI.WBP_SocialUI_C");
		return ptr;
	}



	void IsInTeam(bool* In);
	void BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnUserEnterLobby(const struct FString& Name, const struct FString& SteamId);
	void OnUserLeftLobby(const struct FString& Name, const struct FString& SteamId);
	void AutoClose();
	void BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void LeavePressed();
	void BndEvt__WBP_SocialUI_WBP_LeaveTeamDialog_358_K2Node_ComponentBoundEvent_1_OnLeaveLobby__DelegateSignature();
	void ExecuteUbergraph_WBP_SocialUI(int EntryPoint);
	void OnHideDetailed__DelegateSignature();
	void OnShowDetailed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
