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

// BlueprintGeneratedClass VampireSpell1.VampireSpell1_C
// 0x000E (FullSize[0x00F6] - InheritedSize[0x00E8])
class UVampireSpell1_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              Radius;                                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ActiveSpell1_;                                             // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CD_;                                                       // 0x00F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VampireSpell1.VampireSpell1_C");
		return ptr;
	}



	void Cast();
	void StartServ(bool On_);
	void StartMulti(bool On_);
	void StartLocal(bool On_);
	void Consume();
	void Dash();
	void ExecuteUbergraph_VampireSpell1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
