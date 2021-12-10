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

// WidgetBlueprintGeneratedClass WBP_User_Message.WBP_User_Message_C
// 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
class UWBP_User_Message_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FText                                       Messsage;                                                  // 0x0268(0x0018) (Edit, BlueprintVisible)
	float                                              ShowAnimationTime;                                         // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShowTime;                                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_User_Message.WBP_User_Message_C");
		return ptr;
	}



	void Remove();
	void Construct();
	void ExecuteUbergraph_WBP_User_Message(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
