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

// WidgetBlueprintGeneratedClass WBP_SkinSelector.WBP_SkinSelector_C
// 0x0079 (FullSize[0x02D9] - InheritedSize[0x0260])
class UWBP_SkinSelector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Image_HeaderBG;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CustomComboBox_C*                       WBP_CustomComboBox;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<struct FName, struct FCharSkinStruct>         Skins;                                                     // 0x0278(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TEnumAsByte<SurvChars_ESurvChars>                  Surv;                                                      // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JHTC[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_MiniLobby_C*                              Parent;                                                    // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character;                                                 // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkinSelector.WBP_SkinSelector_C");
		return ptr;
	}



	void GetSkinNameByID(int SkinID, struct FName* NewParam);
	void GetAllSkinsForChar(TEnumAsByte<SurvChars_ESurvChars> Character);
	void BndEvt__WBP_SkinSelector_WBP_CustomComboBox_K2Node_ComponentBoundEvent_0_OnEntryClicked__DelegateSignature(const struct FText& EntryName, int EntryIndex);
	void ExecuteUbergraph_WBP_SkinSelector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
