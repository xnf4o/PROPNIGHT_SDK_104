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
//		Name   -> Function WBP_EliminatedScreen.WBP_EliminatedScreen_C.ShowEliminatedScreen
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EliminatedScreen_C::ShowEliminatedScreen(const struct FText& Text, const struct FString& Nickname, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EliminatedScreen.WBP_EliminatedScreen_C.ShowEliminatedScreen");

	UWBP_EliminatedScreen_C_ShowEliminatedScreen_Params params {};
	params.Text = Text;
	params.Nickname = Nickname;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EliminatedScreen.WBP_EliminatedScreen_C.ExecuteUbergraph_WBP_EliminatedScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EliminatedScreen_C::ExecuteUbergraph_WBP_EliminatedScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EliminatedScreen.WBP_EliminatedScreen_C.ExecuteUbergraph_WBP_EliminatedScreen");

	UWBP_EliminatedScreen_C_ExecuteUbergraph_WBP_EliminatedScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
