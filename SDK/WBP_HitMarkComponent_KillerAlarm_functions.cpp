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
//		Name   -> Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.Construct
//		Flags  -> ()
void UWBP_HitMarkComponent_KillerAlarm_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.Construct");

	UWBP_HitMarkComponent_KillerAlarm_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMarkComponent_KillerAlarm_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.Tick");

	UWBP_HitMarkComponent_KillerAlarm_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.StartRemove
//		Flags  -> ()
void UWBP_HitMarkComponent_KillerAlarm_C::StartRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.StartRemove");

	UWBP_HitMarkComponent_KillerAlarm_C_StartRemove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.ExecuteUbergraph_WBP_HitMarkComponent_KillerAlarm
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HitMarkComponent_KillerAlarm_C::ExecuteUbergraph_WBP_HitMarkComponent_KillerAlarm(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.ExecuteUbergraph_WBP_HitMarkComponent_KillerAlarm");

	UWBP_HitMarkComponent_KillerAlarm_C_ExecuteUbergraph_WBP_HitMarkComponent_KillerAlarm_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.OnRemoved__DelegateSignature
//		Flags  -> ()
void UWBP_HitMarkComponent_KillerAlarm_C::OnRemoved__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HitMarkComponent_KillerAlarm.WBP_HitMarkComponent_KillerAlarm_C.OnRemoved__DelegateSignature");

	UWBP_HitMarkComponent_KillerAlarm_C_OnRemoved__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
