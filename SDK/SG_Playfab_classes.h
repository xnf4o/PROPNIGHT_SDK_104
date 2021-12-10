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

// BlueprintGeneratedClass SG_Playfab.SG_Playfab_C
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class USG_Playfab_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FString                                     ID;                                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SG_Playfab.SG_Playfab_C");
		return ptr;
	}



	void GetID(struct FString* ID);
	void SetID(const struct FString& ID);
	void ExecuteUbergraph_SG_Playfab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
