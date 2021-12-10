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

// BlueprintGeneratedClass KillerSpell.KillerSpell_C
// 0x0014 (FullSize[0x00E8] - InheritedSize[0x00D4])
class UKillerSpell_C : public USpell_C
{
public:
	unsigned char                                      UnknownData_62JV[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AKillerMasterBP_C*                           Killer;                                                    // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass KillerSpell.KillerSpell_C");
		return ptr;
	}



	void Consume();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_KillerSpell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
