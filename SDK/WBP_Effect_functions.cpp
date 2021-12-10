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
//		Name   -> Function WBP_Effect.WBP_Effect_C.Construct
//		Flags  -> ()
void UWBP_Effect_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Effect.WBP_Effect_C.Construct");

	UWBP_Effect_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Effect.WBP_Effect_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Effect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Effect.WBP_Effect_C.Tick");

	UWBP_Effect_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Effect.WBP_Effect_C.SetImageType
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Effect_C::SetImageType(int Index, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Effect.WBP_Effect_C.SetImageType");

	UWBP_Effect_C_SetImageType_Params params {};
	params.Index = Index;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Effect.WBP_Effect_C.SetEffectDescription
//		Flags  -> ()
// Parameters:
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Effect_C::SetEffectDescription(const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Effect.WBP_Effect_C.SetEffectDescription");

	UWBP_Effect_C_SetEffectDescription_Params params {};
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Effect.WBP_Effect_C.ExecuteUbergraph_WBP_Effect
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Effect_C::ExecuteUbergraph_WBP_Effect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Effect.WBP_Effect_C.ExecuteUbergraph_WBP_Effect");

	UWBP_Effect_C_ExecuteUbergraph_WBP_Effect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_Effect.WBP_Effect_C.Removed__DelegateSignature
//		Flags  -> ()
void UWBP_Effect_C::Removed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Effect.WBP_Effect_C.Removed__DelegateSignature");

	UWBP_Effect_C_Removed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
