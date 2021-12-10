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

// BlueprintGeneratedClass VampireWalkShake.VampireWalkShake_C
// 0x002C (FullSize[0x01AC] - InheritedSize[0x0180])
class UVampireWalkShake_C : public UMatineeCameraShake
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FROscillator                                ShakeRot;                                                  // 0x0188(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VampireWalkShake.VampireWalkShake_C");
		return ptr;
	}



	void ReceivePlayShake(float Scale);
	void ExecuteUbergraph_VampireWalkShake(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
