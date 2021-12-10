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

// BlueprintGeneratedClass BPL_Gamepad.BPL_Gamepad_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPL_Gamepad_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPL_Gamepad.BPL_Gamepad_C");
		return ptr;
	}



	void RefineKey(const struct FKey& Key, class UObject* __WorldContext, struct FS_KeyRefinedData* RefinedKey);
	void GetKeyByActionName(const struct FName& ActionName, class UObject* __WorldContext, struct FKey* Key);
	void Detect_Gamepad(class UObject* __WorldContext, bool* IsUsingGamepad_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
