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

// WidgetBlueprintGeneratedClass W_PlayerSkins.W_PlayerSkins_C
// 0x00D0 (FullSize[0x0330] - InheritedSize[0x0260])
class UW_PlayerSkins_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            SkinSelect;                                                // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            CharSelect;                                                // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_SkinName;                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           UniformGridPanel_CharSelect;                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           UniformGridPanel_SkinSelect;                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Gambling_C*                               W_Gambling;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int, struct FString>                          NameById;                                                  // 0x0298(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UW_PlayerPortraitInfo_C*>             skinButtonInfoArr;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_PlayerPortraitInfo_C*                     SelectedItem;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SkinIndex;                                                 // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TDN1[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_PlayerSkinInfo_C*                         SkinselectItem;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_PlayerSkinInfo_C*>                 SkinSelectButtonArr;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_Path_C*                                   ExplorerWidget;                                            // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_PlayerSkinInfo_C*                         SkinselectItem_LastValid;                                  // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerSkins.W_PlayerSkins_C");
		return ptr;
	}



	void Portrait_Unhovered_Handler();
	void PortraitHoveredHandler(class UW_PlayerPortraitInfo_C* Portrait);
	void InitWidget();
	void Finished_B0AFD0BE4BFBBA413697FD99507F5044();
	void Finished_939EBBFB47B94903C294F09D25179FEA();
	void Construct();
	void SkinOnClicked(class UW_PlayerPortraitInfo_C* Clicked);
	void SetSkinSelector();
	void SkinSelectButton(class UW_PlayerSkinInfo_C* Clicked);
	void MoveToCharacters();
	void ExecuteUbergraph_W_PlayerSkins(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
