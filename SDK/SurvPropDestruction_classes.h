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

// BlueprintGeneratedClass SurvPropDestruction.SurvPropDestruction_C
// 0x0009 (FullSize[0x0101] - InheritedSize[0x00F8])
class USurvPropDestruction_C : public USurvivorSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               CD_;                                                       // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvPropDestruction.SurvPropDestruction_C");
		return ptr;
	}



	void CallDestruction(int Stage);
	void CallDestructionHit(float VectorLenght);
	void CallDestructionHitServer();
	void CallDestructionHitMulticast();
	void PropHitCD();
	void ExecuteUbergraph_SurvPropDestruction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
