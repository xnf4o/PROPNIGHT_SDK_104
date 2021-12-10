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
//		Name   -> Function SendSurvStateInterface.SendSurvStateInterface_C.SendState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvStateEnum_ESurvStateEnum>          SurvState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<MovementTypeEnum_EMovementTypeEnum>    MovementType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USendSurvStateInterface_C::SendState(TEnumAsByte<SurvStateEnum_ESurvStateEnum> SurvState, TEnumAsByte<MovementTypeEnum_EMovementTypeEnum> MovementType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SendSurvStateInterface.SendSurvStateInterface_C.SendState");

	USendSurvStateInterface_C_SendState_Params params {};
	params.SurvState = SurvState;
	params.MovementType = MovementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
