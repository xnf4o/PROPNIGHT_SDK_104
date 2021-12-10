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

// BlueprintGeneratedClass GraffityMakerHit.GraffityMakerHit_C
// 0x0053 (FullSize[0x010C] - InheritedSize[0x00B9])
class UGraffityMakerHit_C : public UGraffityMaker_C
{
public:
	unsigned char                                      UnknownData_DRM1[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<struct FVector>                             v3Arr;                                                     // 0x00C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            rotArr;                                                    // 0x00D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     Impact_Normal;                                             // 0x00E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Actor_Location;                                            // 0x00F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Forward_Vector;                                            // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GraffityMakerHit.GraffityMakerHit_C");
		return ptr;
	}



	void Draw(const struct FVector& actorLocation, const struct FVector& ForwardVector);
	void ExecuteUbergraph_GraffityMakerHit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
