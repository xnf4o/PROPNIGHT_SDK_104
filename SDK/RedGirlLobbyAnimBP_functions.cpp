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
//		Name   -> Function RedGirlLobbyAnimBP.RedGirlLobbyAnimBP_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void URedGirlLobbyAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RedGirlLobbyAnimBP.RedGirlLobbyAnimBP_C.AnimGraph");

	URedGirlLobbyAnimBP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function RedGirlLobbyAnimBP.RedGirlLobbyAnimBP_C.ExecuteUbergraph_RedGirlLobbyAnimBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedGirlLobbyAnimBP_C::ExecuteUbergraph_RedGirlLobbyAnimBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RedGirlLobbyAnimBP.RedGirlLobbyAnimBP_C.ExecuteUbergraph_RedGirlLobbyAnimBP");

	URedGirlLobbyAnimBP_C_ExecuteUbergraph_RedGirlLobbyAnimBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
