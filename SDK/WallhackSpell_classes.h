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

// BlueprintGeneratedClass WallhackSpell.WallhackSpell_C
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UWallhackSpell_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WallhackSpell.WallhackSpell_C");
		return ptr;
	}



	void Cast();
	void Uncast();
	void ExecuteUbergraph_WallhackSpell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
