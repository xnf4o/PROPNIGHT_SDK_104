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

// Function SoundCommandKiller.SoundCommandKiller_C.ReceiveTick
struct USoundCommandKiller_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundCommandKiller.SoundCommandKiller_C.PlaySound_Killer
struct USoundCommandKiller_C_PlaySound_Killer_Params
{
	int                                                KillerType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundCommandKiller.SoundCommandKiller_C.PlayOnServer
struct USoundCommandKiller_C_PlayOnServer_Params
{
	int                                                KillerType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundCommandKiller.SoundCommandKiller_C.Multicast_Play
struct USoundCommandKiller_C_Multicast_Play_Params
{
	int                                                KillerType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SoundCommandKiller.SoundCommandKiller_C.ExecuteUbergraph_SoundCommandKiller
struct USoundCommandKiller_C_ExecuteUbergraph_SoundCommandKiller_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
