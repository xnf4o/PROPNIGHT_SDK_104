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

// BlueprintGeneratedClass Surv3.Surv3_C
// 0x000E (FullSize[0x17B0] - InheritedSize[0x17A2])
class ASurv3_C : public ASurvivorMasterBP_C
{
public:
	unsigned char                                      UnknownData_ZTB7[0x6];                                     // 0x17A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x17A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv3.Surv3_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Surv3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
