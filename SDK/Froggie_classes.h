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

// BlueprintGeneratedClass Froggie.Froggie_C
// 0x000E (FullSize[0x0100] - InheritedSize[0x00F2])
class UFroggie_C : public UPerkSurv_C
{
public:
	unsigned char                                      UnknownData_IC95[0x6];                                     // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Froggie.Froggie_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Froggie(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
