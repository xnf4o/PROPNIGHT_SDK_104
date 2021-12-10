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

// WidgetBlueprintGeneratedClass W_Path.W_Path_C
// 0x004A (FullSize[0x02AA] - InheritedSize[0x0260])
class UW_Path_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                              HorizontalBox_EntryContainer;                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichTextBlock_92;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_PathEntry_C*>                      Path;                                                      // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_PathEntry_C*                              RootEntry;                                                 // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RootWidget;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<int>                                        NeedRemove;                                                // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasRoot;                                                   // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsBlocked;                                                // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Path.W_Path_C");
		return ptr;
	}



	void GetLastEntry(class UW_PathEntry_C** EntryRef);
	void HasEntry(const struct FName& EntryName, bool* Result);
	void SetEnabled(bool IsEnabled);
	void SetRootWidget(class UWidget* Widget);
	void IsRoot(const struct FName& EntryName, bool* Result);
	void FindEntry(const struct FName& EntryName, int* EntryIndex);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void AddEntryToPath(const struct FName& EntryName, const struct FText& EntryText, class UWidget* EntryWidget);
	void RemoveEntryFromPath(const struct FName& EntryName);
	void RootClicked();
	void Entry_OnClick(const struct FName& EntryName);
	void ClearPath();
	void ExecuteUbergraph_W_Path(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
