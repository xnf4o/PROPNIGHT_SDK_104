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
//		Name   -> Function W_VictoryScreen.W_VictoryScreen_C.StartScreen
//		Flags  -> ()
// Parameters:
//		bool                                               Win_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_VictoryScreen_C::StartScreen(bool Win_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreen.W_VictoryScreen_C.StartScreen");

	UW_VictoryScreen_C_StartScreen_Params params {};
	params.Win_ = Win_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_VictoryScreen.W_VictoryScreen_C.FadeStart
//		Flags  -> ()
void UW_VictoryScreen_C::FadeStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreen.W_VictoryScreen_C.FadeStart");

	UW_VictoryScreen_C_FadeStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_VictoryScreen.W_VictoryScreen_C.ExecuteUbergraph_W_VictoryScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VictoryScreen_C::ExecuteUbergraph_W_VictoryScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreen.W_VictoryScreen_C.ExecuteUbergraph_W_VictoryScreen");

	UW_VictoryScreen_C_ExecuteUbergraph_W_VictoryScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
