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

// BlueprintGeneratedClass SoundChatSounds.SoundChatSounds_C
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class USoundChatSounds_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<struct FFMODEventInstance>                  Sound1;                                                    // 0x00B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFMODEventInstance>                  Sound2;                                                    // 0x00C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Block_;                                                    // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X7FO[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SoundCount;                                                // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2S1X[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStartedCD;                                               // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SoundChatSounds.SoundChatSounds_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void SoundChatMenu1(int Sound, TEnumAsByte<SurvChars_ESurvChars> char_);
	void SoundChatMenu2(int Sound);
	void SoundChatMenu1Serv(int Sound, TEnumAsByte<SurvChars_ESurvChars> char_);
	void SoundChatMenu2Serv(int Sound);
	void SendSoundChat(int Menu, int Sound);
	void StopCurrentSound(int Sound, int Menu);
	void Sound3D(int SoundIndex);
	void ExecuteUbergraph_SoundChatSounds(int EntryPoint);
	void OnStartedCD__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
