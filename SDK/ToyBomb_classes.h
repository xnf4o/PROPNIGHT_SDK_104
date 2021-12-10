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

// BlueprintGeneratedClass ToyBomb.ToyBomb_C
// 0x0009 (FullSize[0x00F1] - InheritedSize[0x00E8])
class UToyBomb_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               BAnim;                                                     // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ToyBomb.ToyBomb_C");
		return ptr;
	}



	void OnRep_BAnim();
	void SpawnServ(const struct FVector& v3, const struct FVector& v3Forw);
	void SpawnMulti();
	void SpawnAnimServ();
	void Consume();
	void Cast();
	void ExecuteUbergraph_ToyBomb(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
