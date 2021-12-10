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

// BlueprintGeneratedClass SettingsSave.SettingsSave_C
// 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
class USettingsSave_C : public USaveGame
{
public:
	struct FText                                       Graphiccommand;                                            // 0x0028(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PPCommand;                                                 // 0x0040(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AACommand;                                                 // 0x0058(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ShadowCommand;                                             // 0x0070(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       TQCommand;                                                 // 0x0088(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       EQCommand;                                                 // 0x00A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ResolutionCommand;                                         // 0x00B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ScreenCommand;                                             // 0x00D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BMCommand;                                                 // 0x00E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       VSyncCommand;                                              // 0x0100(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AAMCommand;                                                // 0x0118(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SoundSettingsMain;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoundSettingsMusic;                                        // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoundSettingsSFX;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sensivity;                                                 // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              XAxis;                                                     // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YAxis;                                                     // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VoiceVolume;                                               // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VoiceBoostVolume;                                          // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MusicBG;                                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsVoiceChatMuted_;                                         // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InvertMouseY_;                                             // 0x0155(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OUIS[0x2];                                     // 0x0156(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MipBiasCommand;                                            // 0x0158(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PoolSizeCommand;                                           // 0x0170(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       TQMaxAnisCommand;                                          // 0x0188(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SettingsSave.SettingsSave_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
