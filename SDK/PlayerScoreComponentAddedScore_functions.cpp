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
//		Name   -> Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.Construct
//		Flags  -> ()
void UPlayerScoreComponentAddedScore_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.Construct");

	UPlayerScoreComponentAddedScore_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.Remove
//		Flags  -> ()
void UPlayerScoreComponentAddedScore_C::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.Remove");

	UPlayerScoreComponentAddedScore_C_Remove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.ExecuteUbergraph_PlayerScoreComponentAddedScore
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponentAddedScore_C::ExecuteUbergraph_PlayerScoreComponentAddedScore(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentAddedScore.PlayerScoreComponentAddedScore_C.ExecuteUbergraph_PlayerScoreComponentAddedScore");

	UPlayerScoreComponentAddedScore_C_ExecuteUbergraph_PlayerScoreComponentAddedScore_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
