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

// Function ScreamSpell.ScreamSpell_C.GetFilteredProps
struct UScreamSpell_C_GetFilteredProps_Params
{
	TArray<class ASurvivorMasterBP_C*>                 Players;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ASurvivorMasterBP_C*>                 Result;                                                    // 0x0010(0x0010)  (Parm, OutParm)
};

// Function ScreamSpell.ScreamSpell_C.Cast
struct UScreamSpell_C_Cast_Params
{
};

// Function ScreamSpell.ScreamSpell_C.ReceiveBeginPlay
struct UScreamSpell_C_ReceiveBeginPlay_Params
{
};

// Function ScreamSpell.ScreamSpell_C.ServScream
struct UScreamSpell_C_ServScream_Params
{
	TArray<class ASurvivorMasterBP_C*>                 Targets;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ScreamSpell.ScreamSpell_C.MultiScream
struct UScreamSpell_C_MultiScream_Params
{
	TArray<class ASurvivorMasterBP_C*>                 Targets;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ScreamSpell.ScreamSpell_C.ExecuteUbergraph_ScreamSpell
struct UScreamSpell_C_ExecuteUbergraph_ScreamSpell_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
