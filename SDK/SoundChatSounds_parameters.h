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
// Parameters
//---------------------------------------------------------------------------

// Function SoundChatSounds.SoundChatSounds_C.ReceiveTick
struct USoundChatSounds_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1
struct USoundChatSounds_C_SoundChatMenu1_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2
struct USoundChatSounds_C_SoundChatMenu2_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu1Serv
struct USoundChatSounds_C_SoundChatMenu1Serv_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.SoundChatMenu2Serv
struct USoundChatSounds_C_SoundChatMenu2Serv_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.SendSoundChat
struct USoundChatSounds_C_SendSoundChat_Params
{
	int                                                Menu;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sound;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.StopCurrentSound
struct USoundChatSounds_C_StopCurrentSound_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Menu;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.Sound3D
struct USoundChatSounds_C_Sound3D_Params
{
	int                                                SoundIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.ExecuteUbergraph_SoundChatSounds
struct USoundChatSounds_C_ExecuteUbergraph_SoundChatSounds_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundChatSounds.SoundChatSounds_C.OnStartedCD__DelegateSignature
struct USoundChatSounds_C_OnStartedCD__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
