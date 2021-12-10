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

// BlueprintGeneratedClass CamLobby.CamLobby_C
// 0x0008 (FullSize[0x07A8] - InheritedSize[0x07A0])
class ACamLobby_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CamLobby.CamLobby_C");
		return ptr;
	}



	void StartCamera();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CamLobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
