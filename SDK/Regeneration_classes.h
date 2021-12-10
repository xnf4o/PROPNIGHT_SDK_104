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

// BlueprintGeneratedClass Regeneration.Regeneration_C
// 0x0009 (FullSize[0x0101] - InheritedSize[0x00F8])
class URegeneration_C : public USurvivorSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               TestMode_;                                                 // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Regeneration.Regeneration_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ServerSelfRegeneration();
	void MulticastSelfRegeneration();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Regeneration(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
