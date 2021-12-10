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
//		Name   -> Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.AlarmDone
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InstigatorLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMark_KillerAlarm_C::AlarmDone(const struct FVector& InstigatorLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.AlarmDone");

	UWBP_HitMark_KillerAlarm_C_AlarmDone_Params params {};
	params.InstigatorLocation = InstigatorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.Construct
//		Flags  -> ()
void UWBP_HitMark_KillerAlarm_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.Construct");

	UWBP_HitMark_KillerAlarm_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HitMark_KillerAlarm_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.PreConstruct");

	UWBP_HitMark_KillerAlarm_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.TutorialAlarm
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InstigatorLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMark_KillerAlarm_C::TutorialAlarm(const struct FVector& InstigatorLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.TutorialAlarm");

	UWBP_HitMark_KillerAlarm_C_TutorialAlarm_Params params {};
	params.InstigatorLocation = InstigatorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.ExecuteUbergraph_WBP_HitMark_KillerAlarm
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMark_KillerAlarm_C::ExecuteUbergraph_WBP_HitMark_KillerAlarm(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMark_KillerAlarm.WBP_HitMark_KillerAlarm_C.ExecuteUbergraph_WBP_HitMark_KillerAlarm");

	UWBP_HitMark_KillerAlarm_C_ExecuteUbergraph_WBP_HitMark_KillerAlarm_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
