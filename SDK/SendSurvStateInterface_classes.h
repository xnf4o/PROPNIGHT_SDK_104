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

// BlueprintGeneratedClass SendSurvStateInterface.SendSurvStateInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USendSurvStateInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SendSurvStateInterface.SendSurvStateInterface_C");
		return ptr;
	}



	void SendState(TEnumAsByte<SurvStateEnum_ESurvStateEnum> SurvState, TEnumAsByte<MovementTypeEnum_EMovementTypeEnum> MovementType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
