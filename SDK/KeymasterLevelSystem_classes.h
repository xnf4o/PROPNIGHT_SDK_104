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

// BlueprintGeneratedClass KeymasterLevelSystem.KeymasterLevelSystem_C
// 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
class UKeymasterLevelSystem_C : public ULevelSystem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AKeymaster_C*                                KeymasterRef;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        DamageLvls;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<float>                                      RaduisLvls;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<float>                                      EyeDurationLvls;                                           // 0x0130(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              Duration;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CDAstral;                                                  // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      CDAstralLvls;                                              // 0x0148(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Damage;                                                    // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass KeymasterLevelSystem.KeymasterLevelSystem_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void _1SkillUp();
	void _2SkillUp();
	void _3SkillUp();
	void DurationServ(float Value);
	void DurationMulti(float Value);
	void ExecuteUbergraph_KeymasterLevelSystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
