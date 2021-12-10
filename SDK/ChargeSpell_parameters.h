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

// Function ChargeSpell.ChargeSpell_C.MultiImpulse
struct UChargeSpell_C_MultiImpulse_Params
{
};

// Function ChargeSpell.ChargeSpell_C.ServImpulse
struct UChargeSpell_C_ServImpulse_Params
{
};

// Function ChargeSpell.ChargeSpell_C.OnEndCooldown
struct UChargeSpell_C_OnEndCooldown_Params
{
};

// Function ChargeSpell.ChargeSpell_C.Cast
struct UChargeSpell_C_Cast_Params
{
};

// Function ChargeSpell.ChargeSpell_C.ReceiveTick
struct UChargeSpell_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChargeSpell.ChargeSpell_C.Uncast
struct UChargeSpell_C_Uncast_Params
{
};

// Function ChargeSpell.ChargeSpell_C.ReceiveBeginPlay
struct UChargeSpell_C_ReceiveBeginPlay_Params
{
};

// Function ChargeSpell.ChargeSpell_C.CastServ
struct UChargeSpell_C_CastServ_Params
{
	bool                                               Cast;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Move;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChargeSpell.ChargeSpell_C.CastMulti
struct UChargeSpell_C_CastMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChargeSpell.ChargeSpell_C.Shaker
struct UChargeSpell_C_Shaker_Params
{
};

// Function ChargeSpell.ChargeSpell_C.ExecuteUbergraph_ChargeSpell
struct UChargeSpell_C_ExecuteUbergraph_ChargeSpell_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
