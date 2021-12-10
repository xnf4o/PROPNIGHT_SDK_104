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

// BlueprintGeneratedClass SurvFart.SurvFart_C
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class USurvFart_C : public USurvivorSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFMODAudioComponent*                         Sound;                                                     // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvFart.SurvFart_C");
		return ptr;
	}



	void Cast();
	void MulticastFart();
	void ServerFart();
	void ExecuteUbergraph_SurvFart(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
