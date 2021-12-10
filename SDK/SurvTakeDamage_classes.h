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

// BlueprintGeneratedClass SurvTakeDamage.SurvTakeDamage_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USurvTakeDamage_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvTakeDamage.SurvTakeDamage_C");
		return ptr;
	}



	void SendDamage(bool Hitted_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
