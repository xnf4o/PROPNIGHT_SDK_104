﻿#pragma once

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

// BlueprintGeneratedClass BPI_SwitcherContent.BPI_SwitcherContent_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_SwitcherContent_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SwitcherContent.BPI_SwitcherContent_C");
		return ptr;
	}



	void OnHide();
	void OnShow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
