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

// WidgetBlueprintGeneratedClass W_PlayCardContent.W_PlayCardContent_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UW_PlayCardContent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayCardContent.W_PlayCardContent_C");
		return ptr;
	}



	void GetContentHeight(float* Height);
	void GetTextContentHeight(float* Height);
	void InitCard(const struct FText& Name, const struct FText& Description);
	void PreConstruct(bool IsDesignTime);
	void OnInit(const struct FText& Name, const struct FText& Description);
	void ExecuteUbergraph_W_PlayCardContent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
