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

// BlueprintGeneratedClass ATPCFadeProps.ATPCFadeProps_C
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UATPCFadeProps_C : public UATPCCameraFadingObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ATPCFadeProps.ATPCFadeProps_C");
		return ptr;
	}



	void K2_Tick(float DeltaSeconds);
	void ExecuteUbergraph_ATPCFadeProps(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
