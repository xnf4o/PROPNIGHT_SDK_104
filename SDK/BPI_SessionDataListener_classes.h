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

// BlueprintGeneratedClass BPI_SessionDataListener.BPI_SessionDataListener_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_SessionDataListener_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SessionDataListener.BPI_SessionDataListener_C");
		return ptr;
	}



	void OnItemDeselected();
	void OnItemSelected();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
