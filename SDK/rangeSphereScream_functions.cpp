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
//		Name   -> Function rangeSphereScream.rangeSphereScream_C.Follow
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ArangeSphereScream_C::Follow(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function rangeSphereScream.rangeSphereScream_C.Follow");

	ArangeSphereScream_C_Follow_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function rangeSphereScream.rangeSphereScream_C.ExecuteUbergraph_rangeSphereScream
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ArangeSphereScream_C::ExecuteUbergraph_rangeSphereScream(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function rangeSphereScream.rangeSphereScream_C.ExecuteUbergraph_rangeSphereScream");

	ArangeSphereScream_C_ExecuteUbergraph_rangeSphereScream_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
