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
//		Name   -> Function ATPCFadeProps.ATPCFadeProps_C.K2_Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UATPCFadeProps_C::K2_Tick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ATPCFadeProps.ATPCFadeProps_C.K2_Tick");

	UATPCFadeProps_C_K2_Tick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ATPCFadeProps.ATPCFadeProps_C.ExecuteUbergraph_ATPCFadeProps
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UATPCFadeProps_C::ExecuteUbergraph_ATPCFadeProps(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ATPCFadeProps.ATPCFadeProps_C.ExecuteUbergraph_ATPCFadeProps");

	UATPCFadeProps_C_ExecuteUbergraph_ATPCFadeProps_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
