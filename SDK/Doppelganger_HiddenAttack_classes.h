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

// BlueprintGeneratedClass Doppelganger_HiddenAttack.Doppelganger_HiddenAttack_C
// 0x0000 (FullSize[0x0041] - InheritedSize[0x0041])
class UDoppelganger_HiddenAttack_C : public UDamageTypeMasterBP_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Doppelganger_HiddenAttack.Doppelganger_HiddenAttack_C");
		return ptr;
	}



	void ApplyDamage(float Damage, class AController* InstigatedBy, class AActor* DamageCause, class ASurvivorMasterBP_C* Victim);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
