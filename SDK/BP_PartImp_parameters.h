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

// Function BP_PartImp.BP_PartImp_C.Drawer
struct ABP_PartImp_C_Drawer_Params
{
	class AKillerMasterBP_C*                           ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0008(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_PartImp.BP_PartImp_C.SurvHit
struct ABP_PartImp_C_SurvHit_Params
{
};

// Function BP_PartImp.BP_PartImp_C.ExecuteUbergraph_BP_PartImp
struct ABP_PartImp_C_ExecuteUbergraph_BP_PartImp_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
