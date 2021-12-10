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
//		Name   -> Function MapStormBP.MapStormBP_C.PlayFMOD
//		Flags  -> ()
void AMapStormBP_C::PlayFMOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.PlayFMOD");

	AMapStormBP_C_PlayFMOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.WindowsChange
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMapStormBP_C::WindowsChange(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.WindowsChange");

	AMapStormBP_C_WindowsChange_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.BeamsChange
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapStormBP_C::BeamsChange(float NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.BeamsChange");

	AMapStormBP_C_BeamsChange_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.LightsChange
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               NewParam1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMapStormBP_C::LightsChange(float NewParam, bool NewParam1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.LightsChange");

	AMapStormBP_C_LightsChange_Params params {};
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void AMapStormBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.Timeline_0__FinishedFunc");

	AMapStormBP_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void AMapStormBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.Timeline_0__UpdateFunc");

	AMapStormBP_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.Timeline_1__FinishedFunc
//		Flags  -> ()
void AMapStormBP_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.Timeline_1__FinishedFunc");

	AMapStormBP_C_Timeline_1__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.Timeline_1__UpdateFunc
//		Flags  -> ()
void AMapStormBP_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.Timeline_1__UpdateFunc");

	AMapStormBP_C_Timeline_1__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.ReceiveBeginPlay
//		Flags  -> ()
void AMapStormBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.ReceiveBeginPlay");

	AMapStormBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapStormBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.ReceiveTick");

	AMapStormBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.LightEvent
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapStormBP_C::LightEvent(float NewParam, float NewParam2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.LightEvent");

	AMapStormBP_C_LightEvent_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.LightsOffServ
//		Flags  -> ()
void AMapStormBP_C::LightsOffServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.LightsOffServ");

	AMapStormBP_C_LightsOffServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.LightsOffMulti
//		Flags  -> ()
void AMapStormBP_C::LightsOffMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.LightsOffMulti");

	AMapStormBP_C_LightsOffMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.RandomizerTimeServ
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapStormBP_C::RandomizerTimeServ(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.RandomizerTimeServ");

	AMapStormBP_C_RandomizerTimeServ_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.RandomizerTime
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapStormBP_C::RandomizerTime(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.RandomizerTime");

	AMapStormBP_C_RandomizerTime_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.StormBlocker
//		Flags  -> ()
void AMapStormBP_C::StormBlocker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.StormBlocker");

	AMapStormBP_C_StormBlocker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MapStormBP.MapStormBP_C.ExecuteUbergraph_MapStormBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMapStormBP_C::ExecuteUbergraph_MapStormBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapStormBP.MapStormBP_C.ExecuteUbergraph_MapStormBP");

	AMapStormBP_C_ExecuteUbergraph_MapStormBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
