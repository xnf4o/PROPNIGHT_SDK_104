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

// BlueprintGeneratedClass Observation.Observation_C
// 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
class UObservation_C : public UPerkKiller_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Observation.Observation_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Observation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
