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

// Function W_KillerInfo2.W_KillerInfo2_C.SetInfo
struct UW_KillerInfo2_C_SetInfo_Params
{
	struct FText                                       SkillName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SkillDesc;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     Image;                                                     // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_KillerInfo2.W_KillerInfo2_C.ExecuteUbergraph_W_KillerInfo2
struct UW_KillerInfo2_C_ExecuteUbergraph_W_KillerInfo2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
