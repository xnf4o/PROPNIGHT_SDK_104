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
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.GetCount
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UIconAbilityCooldownWBP_C::GetCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.GetCount");

	UIconAbilityCooldownWBP_C_GetCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Construct
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Construct");

	UIconAbilityCooldownWBP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconAbilityCooldownWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Tick");

	UIconAbilityCooldownWBP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.AbilityEvent
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::AbilityEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.AbilityEvent");

	UIconAbilityCooldownWBP_C_AbilityEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.RefFinder
//		Flags  -> ()
// Parameters:
//		class UCoolDownWBP_C*                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconAbilityCooldownWBP_C::RefFinder(class UCoolDownWBP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.RefFinder");

	UIconAbilityCooldownWBP_C_RefFinder_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.KeyTextSet
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::KeyTextSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.KeyTextSet");

	UIconAbilityCooldownWBP_C_KeyTextSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.DoppelSwitchSprite
//		Flags  -> ()
// Parameters:
//		bool                                               IsProp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIconAbilityCooldownWBP_C::DoppelSwitchSprite(bool IsProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.DoppelSwitchSprite");

	UIconAbilityCooldownWBP_C_DoppelSwitchSprite_Params params {};
	params.IsProp = IsProp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownBeginAnimation
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::PlayCoolDownBeginAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownBeginAnimation");

	UIconAbilityCooldownWBP_C_PlayCoolDownBeginAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndShortAnimation
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::PlayCoolDownEndShortAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndShortAnimation");

	UIconAbilityCooldownWBP_C_PlayCoolDownEndShortAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndLongAnimation
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::PlayCoolDownEndLongAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndLongAnimation");

	UIconAbilityCooldownWBP_C_PlayCoolDownEndLongAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Interrupt
//		Flags  -> ()
void UIconAbilityCooldownWBP_C::Interrupt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Interrupt");

	UIconAbilityCooldownWBP_C_Interrupt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.ExecuteUbergraph_IconAbilityCooldownWBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIconAbilityCooldownWBP_C::ExecuteUbergraph_IconAbilityCooldownWBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.ExecuteUbergraph_IconAbilityCooldownWBP");

	UIconAbilityCooldownWBP_C_ExecuteUbergraph_IconAbilityCooldownWBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
