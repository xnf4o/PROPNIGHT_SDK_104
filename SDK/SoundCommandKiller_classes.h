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

// BlueprintGeneratedClass SoundCommandKiller.SoundCommandKiller_C
// 0x0024 (FullSize[0x00D4] - InheritedSize[0x00B0])
class USoundCommandKiller_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class UFMODEvent*>                          Event;                                                     // 0x00B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFMODAudioComponent*                         _3D_Sound;                                                 // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Killer_Type;                                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SoundCommandKiller.SoundCommandKiller_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void PlaySound_Killer(int KillerType);
	void PlayOnServer(int KillerType);
	void Multicast_Play(int KillerType);
	void ExecuteUbergraph_SoundCommandKiller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
