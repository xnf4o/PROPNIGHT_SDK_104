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

// Function WaypointMarkActor.WaypointMarkActor_C.ReceiveTick
struct AWaypointMarkActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaypointMarkActor.WaypointMarkActor_C.ChangeIcon
struct AWaypointMarkActor_C_ChangeIcon_Params
{
	TEnumAsByte<MarkTypeEnum_EMarkTypeEnum>            MarkType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaypointMarkActor.WaypointMarkActor_C.ExecuteUbergraph_WaypointMarkActor
struct AWaypointMarkActor_C_ExecuteUbergraph_WaypointMarkActor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
