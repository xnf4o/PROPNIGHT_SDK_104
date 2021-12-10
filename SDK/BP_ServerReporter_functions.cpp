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
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.GenerateSeed
//		Flags  -> ()
// Parameters:
//		struct FString                                     Seed                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ServerReporter_C::GenerateSeed(struct FString* Seed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.GenerateSeed");

	UBP_ServerReporter_C_GenerateSeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Seed != nullptr)
		*Seed = params.Seed;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.ReceiveBeginPlay
//		Flags  -> ()
void UBP_ServerReporter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.ReceiveBeginPlay");

	UBP_ServerReporter_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerReporter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.ReceiveTick");

	UBP_ServerReporter_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.Report
//		Flags  -> ()
void UBP_ServerReporter_C::Report()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.Report");

	UBP_ServerReporter_C_Report_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.ShutdownServer
//		Flags  -> ()
void UBP_ServerReporter_C::ShutdownServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.ShutdownServer");

	UBP_ServerReporter_C_ShutdownServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLogin
//		Flags  -> ()
void UBP_ServerReporter_C::OnPlayerLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLogin");

	UBP_ServerReporter_C_OnPlayerLogin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLeft
//		Flags  -> ()
void UBP_ServerReporter_C::OnPlayerLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLeft");

	UBP_ServerReporter_C_OnPlayerLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ServerReporter.BP_ServerReporter_C.ExecuteUbergraph_BP_ServerReporter
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerReporter_C::ExecuteUbergraph_BP_ServerReporter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerReporter.BP_ServerReporter_C.ExecuteUbergraph_BP_ServerReporter");

	UBP_ServerReporter_C_ExecuteUbergraph_BP_ServerReporter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
