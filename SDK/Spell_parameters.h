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

// Function Spell.Spell_C.ReceiveTick
struct USpell_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Spell.Spell_C.Cast
struct USpell_C_Cast_Params
{
};

// Function Spell.Spell_C.OnInvoke
struct USpell_C_OnInvoke_Params
{
};

// Function Spell.Spell_C.Consume
struct USpell_C_Consume_Params
{
};

// Function Spell.Spell_C.OnUninvoke
struct USpell_C_OnUninvoke_Params
{
};

// Function Spell.Spell_C.Uncast
struct USpell_C_Uncast_Params
{
};

// Function Spell.Spell_C.OnEndCooldown
struct USpell_C_OnEndCooldown_Params
{
};

// Function Spell.Spell_C.ExecuteUbergraph_Spell
struct USpell_C_ExecuteUbergraph_Spell_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
