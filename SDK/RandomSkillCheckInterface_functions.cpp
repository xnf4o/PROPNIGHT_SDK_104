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
//		Name   -> Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendGreat
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSkillCheckInterface_C::SendGreat(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendGreat");

	URandomSkillCheckInterface_C_SendGreat_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendSuccess
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSkillCheckInterface_C::SendSuccess(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendSuccess");

	URandomSkillCheckInterface_C_SendSuccess_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendFailed
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSkillCheckInterface_C::SendFailed(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendFailed");

	URandomSkillCheckInterface_C_SendFailed_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendSkillCheck
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URandomSkillCheckInterface_C::SendSkillCheck(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RandomSkillCheckInterface.RandomSkillCheckInterface_C.SendSkillCheck");

	URandomSkillCheckInterface_C_SendSkillCheck_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
