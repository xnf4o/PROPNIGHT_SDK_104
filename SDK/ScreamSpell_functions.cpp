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
//		Name   -> Function ScreamSpell.ScreamSpell_C.GetFilteredProps
//		Flags  -> ()
// Parameters:
//		TArray<class ASurvivorMasterBP_C*>                 Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<class ASurvivorMasterBP_C*>                 Result                                                     (Parm, OutParm)
void UScreamSpell_C::GetFilteredProps(TArray<class ASurvivorMasterBP_C*>* Players, TArray<class ASurvivorMasterBP_C*>* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreamSpell.ScreamSpell_C.GetFilteredProps");

	UScreamSpell_C_GetFilteredProps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ScreamSpell.ScreamSpell_C.Cast
//		Flags  -> ()
void UScreamSpell_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreamSpell.ScreamSpell_C.Cast");

	UScreamSpell_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ScreamSpell.ScreamSpell_C.ReceiveBeginPlay
//		Flags  -> ()
void UScreamSpell_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreamSpell.ScreamSpell_C.ReceiveBeginPlay");

	UScreamSpell_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ScreamSpell.ScreamSpell_C.ServScream
//		Flags  -> ()
// Parameters:
//		TArray<class ASurvivorMasterBP_C*>                 Targets                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UScreamSpell_C::ServScream(TArray<class ASurvivorMasterBP_C*> Targets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreamSpell.ScreamSpell_C.ServScream");

	UScreamSpell_C_ServScream_Params params {};
	params.Targets = Targets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ScreamSpell.ScreamSpell_C.MultiScream
//		Flags  -> ()
// Parameters:
//		TArray<class ASurvivorMasterBP_C*>                 Targets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UScreamSpell_C::MultiScream(TArray<class ASurvivorMasterBP_C*>* Targets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreamSpell.ScreamSpell_C.MultiScream");

	UScreamSpell_C_MultiScream_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ScreamSpell.ScreamSpell_C.ExecuteUbergraph_ScreamSpell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScreamSpell_C::ExecuteUbergraph_ScreamSpell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreamSpell.ScreamSpell_C.ExecuteUbergraph_ScreamSpell");

	UScreamSpell_C_ExecuteUbergraph_ScreamSpell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
