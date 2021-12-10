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

// Function SurvTutorial.SurvTutorial_C.UserConstructionScript
struct ASurvTutorial_C_UserConstructionScript_Params
{
};

// Function SurvTutorial.SurvTutorial_C.ReceiveBeginPlay
struct ASurvTutorial_C_ReceiveBeginPlay_Params
{
};

// Function SurvTutorial.SurvTutorial_C.ReceiveTick
struct ASurvTutorial_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvTutorial.SurvTutorial_C.ServerJump
struct ASurvTutorial_C_ServerJump_Params
{
};

// Function SurvTutorial.SurvTutorial_C.PropOutlineEffect
struct ASurvTutorial_C_PropOutlineEffect_Params
{
};

// Function SurvTutorial.SurvTutorial_C.Prop
struct ASurvTutorial_C_Prop_Params
{
};

// Function SurvTutorial.SurvTutorial_C.RotateEvent
struct ASurvTutorial_C_RotateEvent_Params
{
};

// Function SurvTutorial.SurvTutorial_C.ServerPerson
struct ASurvTutorial_C_ServerPerson_Params
{
};

// Function SurvTutorial.SurvTutorial_C.LocalProp
struct ASurvTutorial_C_LocalProp_Params
{
	class AActor*                                      InputPin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvTutorial.SurvTutorial_C.GetOutServer
struct ASurvTutorial_C_GetOutServer_Params
{
};

// Function SurvTutorial.SurvTutorial_C.HittedMulticast
struct ASurvTutorial_C_HittedMulticast_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TrueDamage;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        DamageType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Moved_;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Invulnerability_;                                          // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvTutorial.SurvTutorial_C.BeginFootprint
struct ASurvTutorial_C_BeginFootprint_Params
{
};

// Function SurvTutorial.SurvTutorial_C.ExecuteUbergraph_SurvTutorial
struct ASurvTutorial_C_ExecuteUbergraph_SurvTutorial_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
