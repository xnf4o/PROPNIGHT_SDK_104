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

// BlueprintGeneratedClass DamageTypeMasterBP.DamageTypeMasterBP_C
// 0x0001 (FullSize[0x0041] - InheritedSize[0x0040])
class UDamageTypeMasterBP_C : public UDamageType
{
public:
	TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        Type;                                                      // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DamageTypeMasterBP.DamageTypeMasterBP_C");
		return ptr;
	}



	void ApplyDamage(float Damage, class AController* InstigatedBy, class AActor* DamageCause, class ASurvivorMasterBP_C* Victim);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
