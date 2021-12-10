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
//		Name   -> Function SurvTakeDamage.SurvTakeDamage_C.SendDamage
//		Flags  -> ()
// Parameters:
//		bool                                               Hitted_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvTakeDamage_C::SendDamage(bool Hitted_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTakeDamage.SurvTakeDamage_C.SendDamage");

	USurvTakeDamage_C_SendDamage_Params params {};
	params.Hitted_ = Hitted_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
