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

// BlueprintGeneratedClass ItemWorker.ItemWorker_C
// 0x0F84 (FullSize[0x1034] - InheritedSize[0x00B0])
class UItemWorker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	int                                                HealpackCharge;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPressed;                                                 // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemType_EItemType>                    ItemType;                                                  // 0x00BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1RET[0x2];                                     // 0x00BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealDuration;                                              // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpentTime;                                                 // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemsBPHand_C*                              CurrentItem;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHealing;                                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0FBR[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorMasterBP_C*                         HealTarget;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                         HealSoundComponent;                                        // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemStructure>                      ItemsInventory;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                                  SpawnItemLocation;                                         // 0x0100(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ClassItemToSpawn;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InventoryIndex;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WJ77[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Item;                                                      // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ItemFound_;                                                // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N12P[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              PickUpItems;                                               // 0x0150(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    SurvDynMat1;                                               // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMat2;                                               // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMat3;                                               // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMatFPP;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMatInvis;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SurvDynMatInvisFPP;                                        // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TransitionOn;                                              // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TransitionOff;                                             // 0x0191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FJZ0[0x2];                                     // 0x0192(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TransitionTime;                                            // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnOffDuration;                                           // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnOnDuration;                                            // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InvisRefractionZero;                                       // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InvisRefractionFPP;                                        // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InvisRefractionTPP;                                        // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Float1;                                                    // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ErodeSubtractDef;                                          // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentTimerInvis;                                         // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Casted_;                                                   // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NDJZ[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        postProcessNormal;                                         // 0x01C0(0x0550) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                        postProcessMonochrome;                                     // 0x0710(0x0550) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimerInvis;                                                // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_210G[0x4];                                     // 0x0C64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALootboxShop_C*                              LootboxShop;                                               // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUsePicklock_;                                           // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ALA8[0x3];                                     // 0x0C71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillCheckCount;                                           // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSecond;                                               // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentPicklockProgress;                                   // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullPicklockProgress;                                      // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Block_;                                                    // 0x0C84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsePicklock_;                                              // 0x0C85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I00P[0x2];                                     // 0x0C86(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       PicklockText;                                              // 0x0C88(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ItemTake_;                                                 // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NW3D[0x7];                                     // 0x0CA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemStructure                              Medic;                                                     // 0x0CA8(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Reporter;                                                  // 0x0CD0(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Alchemist;                                                 // 0x0CF8(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Gamer;                                                     // 0x0D20(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Apprentice;                                                // 0x0D48(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Thief;                                                     // 0x0D70(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TakeAnim_;                                                 // 0x0D98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R4LF[0x7];                                     // 0x0D99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       UseItemText;                                               // 0x0DA0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SelfHealText;                                              // 0x0DB8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ItemName;                                                  // 0x0DD0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ItemSwap_;                                                 // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QEG4[0x7];                                     // 0x0DE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Lotbox;                                                    // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DropItemBlock_;                                            // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FirstItem_;                                                // 0x0DF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_25KJ[0x6];                                     // 0x0DFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemStructure                              Slot1;                                                     // 0x0E00(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Slot2;                                                     // 0x0E28(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Slot3;                                                     // 0x0E50(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TempInt;                                                   // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QV05[0x4];                                     // 0x0E7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemStructure                              TempDrop;                                                  // 0x0E80(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlashlightCanUse_;                                         // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8MJ1[0x7];                                     // 0x0EA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            SurvDynMaterialsTPP;                                       // 0x0EB0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            SurvDynMaterialsFPP;                                       // 0x0EC0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HoudiniPerk_;                                              // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O8UC[0x7];                                     // 0x0ED1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HoudiniText;                                               // 0x0ED8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemStructure                              CurrentSlot;                                               // 0x0EF0(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InventoryFull_;                                            // 0x0F18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JSHH[0x7];                                     // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ItemMesh;                                                  // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            MeshMaterInst;                                             // 0x0F28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MeshInvisMaterInst;                                        // 0x0F38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AKillerMasterBP_C*                           StunKiller;                                                // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                TempRandom;                                                // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfBraveryCharge;                                      // 0x0F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTotemOfBravery;                                          // 0x0F58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTotemOfConcentration;                                    // 0x0F59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L48G[0x2];                                     // 0x0F5A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TotemOfConcentrationCharge;                                // 0x0F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTotemOfFriemdship;                                       // 0x0F60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OWTW[0x3];                                     // 0x0F61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TotemOfFriendshipCharge;                                   // 0x0F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                PainkillerTimer;                                           // 0x0F68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                PainKillerT;                                               // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotemOfGravityCharge;                                      // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTotemOfGravity;                                          // 0x0F78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MF20[0x7];                                     // 0x0F79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              HealpackArr;                                               // 0x0F80(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsHealthpack;                                              // 0x0F90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZNKE[0x7];                                     // 0x0F91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TotemOfGravityTimer;                                       // 0x0F98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TotemOfConcentrationTimer;                                 // 0x0FA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TotemOfFriendshipTime;                                     // 0x0FA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TotemOfBraveryTimer;                                       // 0x0FB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TotemOfEnduranceTimer;                                     // 0x0FB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                ToolCharges;                                               // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N2LR[0x4];                                     // 0x0FC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ToolTimer;                                                 // 0x0FC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FText                                       GemOfEndurance;                                            // 0x0FD0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Gem_of_Friendship;                                         // 0x0FE8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Gem_of_Bravery;                                            // 0x1000(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Gem_of_Gravity;                                            // 0x1018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Condition;                                                 // 0x1030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPainkillerActivated;                                     // 0x1031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsToolActivated;                                           // 0x1032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ToolsAnim;                                                 // 0x1033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ItemWorker.ItemWorker_C");
		return ptr;
	}



	void GetPerkName(struct FName* Name, int* PerkIndex);
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void GetPointsForPerks(int* PerkPoints);
	void GetCurrentEXP(int* CurEXP);
	void IsTotem(bool* IsTotem, TEnumAsByte<ItemType_EItemType>* ItemType, class AActor** Output_Get, class AItemsBP_C** AsItems_BP, class ACrystalRune_C** AsCrystal_Rune);
	void SetHealpack();
	void SetItem();
	void SpawnItem(class UClass* ItemClass, class APawn* Pawn, int Index, bool OnlySpawnInventory_);
	void SetItemToLastIndex();
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
	void IncreaseOnceHP(int HP);
	void SetTimingToAllChairs();
	void SetDepth();
	void LevelUpped(class AActor* PlayerRef);
	void DecreasePerkPoints(int PerkPoints);
	void SurvDropItem(bool lastLVL);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ServerHealSelf(class ASurvivorMasterBP_C* Survivor, bool Legendary_);
	void InvokeWithE();
	void Release();
	void InvokeWithQ();
	void HealSelf(class ASurvivorMasterBP_C* Survivor);
	void OwningClientHealSelf();
	void ServerAddHealthToPlayer(class ASurvivorMasterBP_C* Player, int Health, bool ScoreOff_);
	void StopHealSelf();
	void ServerStopHealSelf(bool DestroyHealpack, int IndexToRemove);
	void OwningClientStopHealSelf();
	void DestroyItem(class ASurvivorMasterBP_C* Player, int IndexToRemove);
	void HealScore(bool Other_, class AActor* Surv);
	void MulticastHealSelfStart(class ASurvivorMasterBP_C* Survivor, class ASurvivorMasterBP_C* SurvivorSelf, bool SelfHealing_);
	void MulticastHealSelfStop(class ASurvivorMasterBP_C* Survivor, class ASurvivorMasterBP_C* SurvivorSelf);
	void Flashlight(class ASurvivorMasterBP_C* Player);
	void MulticastFlashlight(class AKillerMasterBP_C* Target, class ASurvivorMasterBP_C* Player, float StunTime, bool Condition, int IndexToRemove, bool KillerFlashed_);
	void ServerFlashlight(class AKillerMasterBP_C* Target, class ASurvivorMasterBP_C* Player, float StunTime, bool Condition, int IndexToRemove, bool KillerFlashed_);
	void FlashlightSpotLight(class ASurvivorMasterBP_C* Player);
	void EnergyDrink();
	void DropAllItems(const struct FTransform& SpawnLocation);
	void SpawnPickUpItem(const struct FItemStructure& Item, const struct FTransform& SpawnTransform, bool Death_);
	void ServerSpawnPickUpItem(const struct FItemStructure& Item, const struct FTransform& SpawnLocation);
	void DestroyPickup(class AActor* DestroyItem);
	void DestroyPickupMulticast(class AActor* DestroyItem);
	void ToSpawnItem();
	void SpawnItemServer(class UClass* ItemToBeSpawned, class APawn* Pawn, int Index, bool TakeAnim_, const struct FItemStructure& Slot1, const struct FItemStructure& Slot2, const struct FItemStructure& Slot3, bool OnlySpawnInventory_);
	void SpawnItemMulticast(class UClass* Item, class APawn* Pawn, int Index, bool TakeAnim_, const struct FItemStructure& Slot1, const struct FItemStructure& Slot2, const struct FItemStructure& Slot3, bool OnlySpawnInventory_);
	void InvokePickUpItem();
	void ItemUsed(int IndexToRemove);
	void HideItem();
	void ShowItem();
	void InvokeFirstSlot();
	void InvokeSecondSlot();
	void InvokeThirdSlot();
	void ItemHide();
	void ItemHideServer();
	void ItemHideMulticast();
	void ItemsImpulse();
	void DropItem(int ItemIndex, const struct FTransform& DropPosition, const struct FItemStructure& Inventory);
	void LocalDropItem(bool FullInventoryAndDrop);
	void HideItemHand();
	void ServerEnergyDrink(float Time, bool CD_, int IndexToRemove);
	void MulticastEnergyDrink(float Time, bool CD_, int IndexToRemove);
	void InvulnerabilityPotion();
	void ServerInvulnerabilityPotion(float Time, bool CD_, int IndexToRemove);
	void MulticastInvulnerabilityPotion(float Time, bool CD_, int IndexToRemove);
	void GetMaterialsAndCreateDynMaterials();
	void InvisUpdate(float DeltaTime);
	void AstralOffServ();
	void AstralOffMulti();
	void AstralOffLocal();
	void AstralOnLocal(float TimerInvis, bool CD_);
	void AstralOnServer(float TimerInvis, bool CD_, int IndexToRemove);
	void AstralOnMulti(float TimerInvis, bool CD_, int IndexToRemove);
	void KeymasterBook();
	void ItemDestroyedLootboxShopServer(class ALootboxShop_C* Actor);
	void ItemDestroyedLootboxShopMulticast(class ALootboxShop_C* Actor);
	void Picklock();
	void PicklockSoundServer(bool Loop_, bool Success_);
	void PicklockSoundMulticast(bool Loop_, bool Success_);
	void CheckPicklock();
	void PicklockSound(bool Loop_, bool Success_);
	void SkillCheckMain();
	void CheckActiveSkillCheck();
	void CheckPressed();
	void FailedServer(class AActor* Target);
	void Level1Server(class AActor* Target);
	void Level2Server(class AActor* Target);
	void Level3Server(class AActor* Target);
	void Level4Server(class AActor* Target);
	void FailedMulticast(class AActor* Target);
	void Level1Multicast(class AActor* Target);
	void Level2Multicast(class AActor* Target);
	void Level3Multicast(class AActor* Target);
	void Level4Multicast(class AActor* Target);
	void PicklockUsed();
	void PicklockEnd();
	void PicklockShowText();
	void PicklockEndServer();
	void PicklockEndMulticast();
	void AstralSoundLocal(bool Loop_, bool In_);
	void AstralSoundServer(bool Loop_, bool In_);
	void AstralSoundMulticast(bool Loop_, bool In_);
	void SurvAstralSkill(float TimerInvis);
	void SurvClassAddItem(TEnumAsByte<SurvClass_ESurvClass> SurvClass);
	void SpawnClassItem(bool OnlySpawnInventory_);
	void HideTexts();
	void DestroyItemMulticast(int IndexToRemove);
	void ItemDropped();
	void ItemDestroyLootboxServ(class AActor* NewParam);
	void ItemDestroyLootboxMulti(class AActor* NewParam);
	void HideItemText();
	void ChangeItemPosition(bool FPP_);
	void HealpackChargesAdd(int Charges);
	void PicklockChargesAdd(int Charges);
	void StopProgressChairServ(bool Pause_, class AHypnoChairBP_C* Chair);
	void StopProgressChairMulti(bool Pause_, class AHypnoChairBP_C* Chair);
	void CheckKillingTimeChair();
	void PicklockHideText();
	void OtherSurvHealLerp();
	void FlashlightCheck();
	void ChrisBoost(float Time);
	void InvokeNextItem();
	void InvokePrevItem();
	void ActivateSlot(int SlotIndex);
	void DeactivateSlot();
	void CreateItemMesh(class UClass* Class, bool Destroy_, bool Delay_);
	void DropItemSlot(int ItemId);
	void ServerSound(bool Play_);
	void MulticastSound(bool Play_);
	void MulticastSoundOnce();
	void ServerSoundOnce();
	void KillerDropItem(bool LastLvl_);
	void AddShield();
	void brokeShield();
	void AddShield_MULTI();
	void brokeShield_MULTI();
	void AddTotemOfEndurace();
	void AddTottemOfEndurance_MULTI();
	void BrokeTotemOfEndurance_S();
	void BrokeTotemOfEndurance();
	void SetTotemOfBraveryS();
	void SetTotemOfBravery();
	void UseTotemOfBravery();
	void UseTotemOfBravery_MULTI();
	void UseTotemOfConcentration();
	void SetTotemOfConcentration();
	void SetTotemOfConcentration_MULTI();
	void UseTotemOfConcentrationS();
	void UseTotemOfFriendship_M(class AActor* SurvOnChair);
	void UseTotemOfFriendship(class AActor* SurvOnChair);
	void SetTotemOfFriendship();
	void SetTotemOfFriendship_M(bool IsTotemOfFriemdship);
	void UsePainkiller();
	void PainkillerAddHealth();
	void RemovePainkiller();
	void SetTotemOfGravity();
	void TotemOfGrabityM();
	void UseTotemOfGravity();
	void UseTotemOfGravity_M();
	void FindHealthPack(class ASurvivorMasterBP_C* Survivor);
	void BrokeTotemsBravery();
	void BrokeTotemOfCon();
	void BrokeTotemOfFreind();
	void BrokeTotemOfGravity();
	void ThrowGlueGrenade(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel);
	void ThrowGlueSERV(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel);
	void ThrowYellowGrenade(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel);
	void ThrowYellowGrenadeSERV(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel);
	void Takeanim();
	void TakeAnim_SERV();
	void GravityTime();
	void TimerTotemOfConcentration();
	void FriendShipTimer();
	void BraveryTimer();
	void enduranceTimer();
	void DeleteWidget(const struct FName& InName);
	void ThrowGrenade(bool IsGlue, TEnumAsByte<Rarity_ERarity> Rarity);
	void ActivateTotems(TEnumAsByte<ItemType_EItemType> Selection, class AActor* DestroyItem);
	void ActivateTools(int Charges);
	void ActivateToolsM(int Charges);
	void ActivatedToolTimer();
	void PainkillerAnim();
	void DropShield();
	void totemvoice(class ASurvivorMasterBP_C* Target);
	void _3sec();
	void BrokeTotemEndurance();
	void ExecuteUbergraph_ItemWorker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
