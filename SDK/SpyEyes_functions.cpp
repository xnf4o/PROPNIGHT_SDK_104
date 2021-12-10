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
//		Name   -> Function SpyEyes.SpyEyes_C.ReceiveBeginPlay
//		Flags  -> ()
void USpyEyes_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.ReceiveBeginPlay");

	USpyEyes_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpyEyes.SpyEyes_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpyEyes_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.ReceiveTick");

	USpyEyes_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpyEyes.SpyEyes_C.On Invoke
//		Flags  -> ()
void USpyEyes_C::On_Invoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.On Invoke");

	USpyEyes_C_On_Invoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpyEyes.SpyEyes_C.SpyEyeCreateServ
//		Flags  -> ()
void USpyEyes_C::SpyEyeCreateServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.SpyEyeCreateServ");

	USpyEyes_C_SpyEyeCreateServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpyEyes.SpyEyes_C.ClientCount
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpyEyes_C::ClientCount(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.ClientCount");

	USpyEyes_C_ClientCount_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpyEyes.SpyEyes_C.End
//		Flags  -> ()
void USpyEyes_C::End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.End");

	USpyEyes_C_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpyEyes.SpyEyes_C.ExecuteUbergraph_SpyEyes
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpyEyes_C::ExecuteUbergraph_SpyEyes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpyEyes.SpyEyes_C.ExecuteUbergraph_SpyEyes");

	USpyEyes_C_ExecuteUbergraph_SpyEyes_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
