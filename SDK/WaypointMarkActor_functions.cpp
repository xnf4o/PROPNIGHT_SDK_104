// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function WaypointMarkActor.WaypointMarkActor_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaypointMarkActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaypointMarkActor.WaypointMarkActor_C.ReceiveTick");

	AWaypointMarkActor_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WaypointMarkActor.WaypointMarkActor_C.ChangeIcon
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<MarkTypeEnum_EMarkTypeEnum>            MarkType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaypointMarkActor_C::ChangeIcon(TEnumAsByte<MarkTypeEnum_EMarkTypeEnum> MarkType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaypointMarkActor.WaypointMarkActor_C.ChangeIcon");

	AWaypointMarkActor_C_ChangeIcon_Params params {};
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WaypointMarkActor.WaypointMarkActor_C.ExecuteUbergraph_WaypointMarkActor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaypointMarkActor_C::ExecuteUbergraph_WaypointMarkActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaypointMarkActor.WaypointMarkActor_C.ExecuteUbergraph_WaypointMarkActor");

	AWaypointMarkActor_C_ExecuteUbergraph_WaypointMarkActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
