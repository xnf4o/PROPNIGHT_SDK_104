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

// BlueprintGeneratedClass DoppelgangerSpell1.DoppelgangerSpell1_C
// 0x00B0 (FullSize[0x0198] - InheritedSize[0x00E8])
class UDoppelgangerSpell1_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMesh*                               DefaultSkeletalMesh;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               DefaultSkeletalMeshFPP;                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultAnimClassFPP;                                       // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultAnimClass;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  DefaultMaterialsFPP;                                       // 0x0110(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  DefaultMaterials;                                          // 0x0120(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                                  DefaultMeshTransform;                                      // 0x0130(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  DefaultMeshTransformFPP;                                   // 0x0160(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AActor*                                      GetSurvPawn;                                               // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DoppelgangerSpell1.DoppelgangerSpell1_C");
		return ptr;
	}



	void GetSurvMulticast(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* MeshFPP, class UCapsuleComponent* CapsuleComponent, TEnumAsByte<SurvChars_ESurvChars> SurvChar, TEnumAsByte<SurvRole_ESurvRole> SurvRole);
	void GetSurvServer(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* MeshFPP, class UCapsuleComponent* CapsuleComponent, TEnumAsByte<SurvChars_ESurvChars> SurvChar, TEnumAsByte<SurvRole_ESurvRole> SurvRole);
	void GetSurv(bool Clear_);
	void Cast();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReturnMulticast();
	void Consume();
	void RoleChange(TEnumAsByte<SurvRole_ESurvRole> Role, class USurvRole_C* Widget, bool Off_);
	void ReturnServ();
	void GetNickname(bool Clear_);
	void GetNicknameServer(class UObject* Actor, bool Clear_);
	void GetNicknameMulticast(class UObject* Actor, bool Clear_);
	void Timer();
	void ExecuteUbergraph_DoppelgangerSpell1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
