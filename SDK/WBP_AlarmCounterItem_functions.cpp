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
//		Name   -> Function WBP_AlarmCounterItem.WBP_AlarmCounterItem_C.Activate
//		Flags  -> ()
void UWBP_AlarmCounterItem_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AlarmCounterItem.WBP_AlarmCounterItem_C.Activate");

	UWBP_AlarmCounterItem_C_Activate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
