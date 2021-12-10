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

// BlueprintGeneratedClass GraffityMaker.GraffityMaker_C
// 0x0009 (FullSize[0x00B9] - InheritedSize[0x00B0])
class UGraffityMaker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               Busy;                                                      // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GraffityMaker.GraffityMaker_C");
		return ptr;
	}



	void Draw(const struct FVector& actorLocation, const struct FVector& ForwardVector);
	void ExecuteUbergraph_GraffityMaker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
