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
//		Name   -> Function WBP_BDRush_Killer.WBP_BDRush_Killer_C.Construct
//		Flags  -> ()
void UWBP_BDRush_Killer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BDRush_Killer.WBP_BDRush_Killer_C.Construct");

	UWBP_BDRush_Killer_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_BDRush_Killer.WBP_BDRush_Killer_C.Add Status
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SSSR                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               AstralIn_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BDRush_Killer_C::Add_Status(float DeltaTime, bool SSSR, bool AstralIn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BDRush_Killer.WBP_BDRush_Killer_C.Add Status");

	UWBP_BDRush_Killer_C_Add_Status_Params params {};
	params.DeltaTime = DeltaTime;
	params.SSSR = SSSR;
	params.AstralIn_ = AstralIn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_BDRush_Killer.WBP_BDRush_Killer_C.ExecuteUbergraph_WBP_BDRush_Killer
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BDRush_Killer_C::ExecuteUbergraph_WBP_BDRush_Killer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BDRush_Killer.WBP_BDRush_Killer_C.ExecuteUbergraph_WBP_BDRush_Killer");

	UWBP_BDRush_Killer_C_ExecuteUbergraph_WBP_BDRush_Killer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
