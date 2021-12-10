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

// BlueprintGeneratedClass BPI_PathPage.BPI_PathPage_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PathPage_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PathPage.BPI_PathPage_C");
		return ptr;
	}



	void Move(const struct FName& EntryName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
