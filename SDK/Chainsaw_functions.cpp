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
//		Name   -> Function Chainsaw.Chainsaw_C.Uncast
//		Flags  -> ()
void UChainsaw_C::Uncast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.Uncast");

	UChainsaw_C_Uncast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.ReceiveBeginPlay
//		Flags  -> ()
void UChainsaw_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.ReceiveBeginPlay");

	UChainsaw_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.CastServ
//		Flags  -> ()
void UChainsaw_C::CastServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.CastServ");

	UChainsaw_C_CastServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.CastMulti
//		Flags  -> ()
void UChainsaw_C::CastMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.CastMulti");

	UChainsaw_C_CastMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.UncastServ
//		Flags  -> ()
void UChainsaw_C::UncastServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.UncastServ");

	UChainsaw_C_UncastServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.UncastMulti
//		Flags  -> ()
void UChainsaw_C::UncastMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.UncastMulti");

	UChainsaw_C_UncastMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.Cast
//		Flags  -> ()
void UChainsaw_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.Cast");

	UChainsaw_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.Consume
//		Flags  -> ()
void UChainsaw_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.Consume");

	UChainsaw_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChainsaw_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.ReceiveTick");

	UChainsaw_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Chainsaw.Chainsaw_C.ExecuteUbergraph_Chainsaw
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChainsaw_C::ExecuteUbergraph_Chainsaw(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chainsaw.Chainsaw_C.ExecuteUbergraph_Chainsaw");

	UChainsaw_C_ExecuteUbergraph_Chainsaw_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
