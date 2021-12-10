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

// BlueprintGeneratedClass Test0_MAIN_MENU_4.Test0_MAIN_MENU_C
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class ATest0_MAIN_MENU_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Test0_MAIN_MENU_4.Test0_MAIN_MENU_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Test0_MAIN_MENU_4(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
