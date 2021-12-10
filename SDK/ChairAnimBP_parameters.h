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

// Function ChairAnimBP.ChairAnimBP_C.AnimGraph
struct UChairAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function ChairAnimBP.ChairAnimBP_C.BlueprintUpdateAnimation
struct UChairAnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChairAnimBP.ChairAnimBP_C.Close?
struct UChairAnimBP_C_Close__Params
{
	int                                                Stage;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChairAnimBP.ChairAnimBP_C.CloseLeft
struct UChairAnimBP_C_CloseLeft_Params
{
	float                                              L_hand;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChairAnimBP.ChairAnimBP_C.CloseRight
struct UChairAnimBP_C_CloseRight_Params
{
	float                                              R_hand;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChairAnimBP.ChairAnimBP_C.CloseLeg
struct UChairAnimBP_C_CloseLeg_Params
{
	float                                              Leg;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChairAnimBP.ChairAnimBP_C.ExecuteUbergraph_ChairAnimBP
struct UChairAnimBP_C_ExecuteUbergraph_ChairAnimBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
