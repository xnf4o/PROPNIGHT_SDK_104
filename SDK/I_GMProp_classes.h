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

// BlueprintGeneratedClass I_GMProp.I_GMProp_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_GMProp_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass I_GMProp.I_GMProp_C");
		return ptr;
	}



	void SetPlayfabKillerID(const struct FString& KillerID);
	void GetPlayfabPlayers(TArray<class APC_PropHunt_C*>* Players);
	void GetServerCapacity(int* Capacity);
	void GetMode(struct FString* Mode);
	void GetMap(struct FString* Map);
	void GetStatus(struct FString* Status);
	void GetPlayersCount(int* Count);
	void playerCalling(bool IsPlayer, class ANewAlarmBP_C* alarms);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
