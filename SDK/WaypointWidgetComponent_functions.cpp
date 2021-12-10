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
//		Name   -> Function WaypointWidgetComponent.WaypointWidgetComponent_C.SetDistance
//		Flags  -> ()
// Parameters:
//		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaypointWidgetComponent_C::SetDistance(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaypointWidgetComponent.WaypointWidgetComponent_C.SetDistance");

	UWaypointWidgetComponent_C_SetDistance_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WaypointWidgetComponent.WaypointWidgetComponent_C.ChangeImage
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<MarkTypeEnum_EMarkTypeEnum>            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaypointWidgetComponent_C::ChangeImage(TEnumAsByte<MarkTypeEnum_EMarkTypeEnum> Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaypointWidgetComponent.WaypointWidgetComponent_C.ChangeImage");

	UWaypointWidgetComponent_C_ChangeImage_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WaypointWidgetComponent.WaypointWidgetComponent_C.ExecuteUbergraph_WaypointWidgetComponent
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaypointWidgetComponent_C::ExecuteUbergraph_WaypointWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaypointWidgetComponent.WaypointWidgetComponent_C.ExecuteUbergraph_WaypointWidgetComponent");

	UWaypointWidgetComponent_C_ExecuteUbergraph_WaypointWidgetComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
