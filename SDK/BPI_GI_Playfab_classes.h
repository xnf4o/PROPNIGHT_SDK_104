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

// BlueprintGeneratedClass BPI_GI_Playfab.BPI_GI_Playfab_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_GI_Playfab_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GI_Playfab.BPI_GI_Playfab_C");
		return ptr;
	}



	void GetTitlePlayerID(struct FString* ID);
	void SetTitlePlayerID(const struct FString& ID);
	void GetPlayfabBuildID(struct FString* BuildId);
	void GetSteamPlayerID(struct FString* ID);
	void SetPlayfabUserID(const struct FString& UserId);
	void GetPlayfabUserID(struct FString* UserId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
