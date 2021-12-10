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
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.GetVisibility_1
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UCrossHairWBP_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.GetVisibility_1");

	UCrossHairWBP_C_GetVisibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.JumpEndCH
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::JumpEndCH(class AKillerMasterBP_C* KillerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.JumpEndCH");

	UCrossHairWBP_C_JumpEndCH_Params params {};
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.JumpStartCH
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::JumpStartCH(class AKillerMasterBP_C* KillerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.JumpStartCH");

	UCrossHairWBP_C_JumpStartCH_Params params {};
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.CrossToBigAnim
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::CrossToBigAnim(class AKillerMasterBP_C* KillerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.CrossToBigAnim");

	UCrossHairWBP_C_CrossToBigAnim_Params params {};
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.HitEvent
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::HitEvent(class AKillerMasterBP_C* KillerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.HitEvent");

	UCrossHairWBP_C_HitEvent_Params params {};
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.AttackEvent
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::AttackEvent(class AKillerMasterBP_C* KillerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.AttackEvent");

	UCrossHairWBP_C_AttackEvent_Params params {};
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.Tick");

	UCrossHairWBP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.Construct
//		Flags  -> ()
void UCrossHairWBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.Construct");

	UCrossHairWBP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CrossHairWBP.CrossHairWBP_C.ExecuteUbergraph_CrossHairWBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCrossHairWBP_C::ExecuteUbergraph_CrossHairWBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CrossHairWBP.CrossHairWBP_C.ExecuteUbergraph_CrossHairWBP");

	UCrossHairWBP_C_ExecuteUbergraph_CrossHairWBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
