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

// BlueprintGeneratedClass GraffitiActor_HIt.GraffitiActor_Hit_C
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class AGraffitiActor_Hit_C : public AGraffitiActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GraffitiActor_HIt.GraffitiActor_Hit_C");
		return ptr;
	}



	void SoundServ();
	void ReceiveBeginPlay();
	void Drawer(class AKillerMasterBP_C* ref);
	void ExecuteUbergraph_GraffitiActor_Hit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
