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
//		Name   -> Function GrannyTutorial.GrannyTutorial_C.UserConstructionScript
//		Flags  -> ()
void AGrannyTutorial_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyTutorial.GrannyTutorial_C.UserConstructionScript");

	AGrannyTutorial_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyTutorial.GrannyTutorial_C.ReceiveBeginPlay
//		Flags  -> ()
void AGrannyTutorial_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyTutorial.GrannyTutorial_C.ReceiveBeginPlay");

	AGrannyTutorial_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyTutorial.GrannyTutorial_C.Part2-2
//		Flags  -> ()
void AGrannyTutorial_C::Part2_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyTutorial.GrannyTutorial_C.Part2-2");

	AGrannyTutorial_C_Part2_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyTutorial.GrannyTutorial_C.Part2-1
//		Flags  -> ()
void AGrannyTutorial_C::Part2_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyTutorial.GrannyTutorial_C.Part2-1");

	AGrannyTutorial_C_Part2_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyTutorial.GrannyTutorial_C.SurvRunAwayMulti
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         hellpSurv                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Flashed_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGrannyTutorial_C::SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyTutorial.GrannyTutorial_C.SurvRunAwayMulti");

	AGrannyTutorial_C_SurvRunAwayMulti_Params params {};
	params.NewParam = NewParam;
	params.hellpSurv = hellpSurv;
	params.Flashed_ = Flashed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GrannyTutorial.GrannyTutorial_C.ExecuteUbergraph_GrannyTutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGrannyTutorial_C::ExecuteUbergraph_GrannyTutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GrannyTutorial.GrannyTutorial_C.ExecuteUbergraph_GrannyTutorial");

	AGrannyTutorial_C_ExecuteUbergraph_GrannyTutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
