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

// BlueprintGeneratedClass VampireSpell2.VampireSpell2_C
// 0x0015 (FullSize[0x00FD] - InheritedSize[0x00E8])
class UVampireSpell2_C : public UKillerSpell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              Charges;                                                   // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Cast_;                                                     // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6GL5[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CastTime;                                                  // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active_;                                                   // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VampireSpell2.VampireSpell2_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void Cast();
	void StartServ();
	void StartMulti();
	void Stop();
	void StopServ();
	void StopMulti();
	void Consume();
	void StartLocal();
	void IconAnimation(bool Start_);
	void SwitchSkill(bool Start_);
	void AddCharges();
	void ExecuteUbergraph_VampireSpell2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
