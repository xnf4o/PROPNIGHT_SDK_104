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

// WidgetBlueprintGeneratedClass W_CustomizeAvatarInfo.W_CustomizeAvatarInfo_C
// 0x00EA (FullSize[0x034A] - InheritedSize[0x0260])
class UW_CustomizeAvatarInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     Button_70;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_74;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_140;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Avatar;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_AVATAR_FRAME;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                                RetainerBox_1;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_45;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_60;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_BannerName;                                      // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NewItemMarker_C*                        WBP_NewItemMarker;                                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_BGs;                                        // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                AvatarID;                                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_90ES[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClickDispatcher;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsClicked;                                                 // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G2JQ[0x3];                                     // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Specified_Color;                                           // 0x02FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K5EK[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_CustomizeBanner_C*                        W_CustomizeBanner;                                         // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       Rarity;                                                    // 0x0318(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BannerName;                                                // 0x0330(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<Rarity_ERarity>                        E_Rarity;                                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBlocked;                                                 // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CustomizeAvatarInfo.W_CustomizeAvatarInfo_C");
		return ptr;
	}



	void BndEvt__W_CustomizeBannerInfo_Button_69_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_CustomizeBannerInfo_Button_69_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetFirstFocus_ForINSPECTOR();
	void UnsetClicking();
	void BndEvt__W_CustomizeBannerInfo_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BackStyleAfterFirstFocus_INSPECTOR();
	void UnlockDefault();
	void ExecuteUbergraph_W_CustomizeAvatarInfo(int EntryPoint);
	void OnClickDispatcher__DelegateSignature(class UW_CustomizeAvatarInfo_C* CustomizebannerInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
