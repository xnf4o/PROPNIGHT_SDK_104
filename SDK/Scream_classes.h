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

// BlueprintGeneratedClass Scream.Scream_C
// 0x0021 (FullSize[0x0109] - InheritedSize[0x00E8])
class UScream_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class AActor*>                              SurvRefs;                                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ArangeSphereScream_C*                        sphereActor;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               B;                                                         // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Scream.Scream_C");
		return ptr;
	}



	void Cast();
	void OutlineRange();
	void OffOutlineRange();
	void Consume();
	void ExecuteUbergraph_Scream(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
