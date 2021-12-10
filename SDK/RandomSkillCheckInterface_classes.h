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

// BlueprintGeneratedClass RandomSkillCheckInterface.RandomSkillCheckInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URandomSkillCheckInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RandomSkillCheckInterface.RandomSkillCheckInterface_C");
		return ptr;
	}



	void SendGreat(class AActor* Surv);
	void SendSuccess(class AActor* Surv);
	void SendFailed(class AActor* Surv);
	void SendSkillCheck(class AActor* Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
