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

// BlueprintGeneratedClass I_Tutorial.I_Tutorial_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_Tutorial_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass I_Tutorial.I_Tutorial_C");
		return ptr;
	}



	void SetDialogue(const struct FText& Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
