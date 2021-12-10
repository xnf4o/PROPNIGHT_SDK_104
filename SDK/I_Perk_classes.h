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

// BlueprintGeneratedClass I_Perk.I_Perk_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_Perk_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass I_Perk.I_Perk_C");
		return ptr;
	}



	void SurvDropItem(bool lastLVL);
	void GetCurrentEXP(int* CurEXP);
	void DecreasePerkPoints(int PerkPoints);
	void GetPointsForPerks(int* PerkPoints);
	void LevelUpped(class AActor* PlayerRef);
	void SetDepth();
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void SetTimingToAllChairs();
	void GetPerkName(struct FName* Name, int* PerkIndex);
	void IncreaseOnceHP(int HP);
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
