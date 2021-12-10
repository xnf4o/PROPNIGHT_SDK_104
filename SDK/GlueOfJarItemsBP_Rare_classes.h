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

// BlueprintGeneratedClass GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class AGlueOfJarItemsBP_Rare_C : public AItemsBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GlueOfJarItemsBP_Rare.GlueOfJarItemsBP_Rare_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_GlueOfJarItemsBP_Rare(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
