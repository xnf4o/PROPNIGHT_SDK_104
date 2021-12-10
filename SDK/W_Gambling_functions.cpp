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
//		Name   -> Function W_Gambling.W_Gambling_C.OnLoaded_4F6B563A460BF5660717BF8720E39D1B
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Gambling_C::OnLoaded_4F6B563A460BF5660717BF8720E39D1B(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Gambling.W_Gambling_C.OnLoaded_4F6B563A460BF5660717BF8720E39D1B");

	UW_Gambling_C_OnLoaded_4F6B563A460BF5660717BF8720E39D1B_Params params {};
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Gambling.W_Gambling_C.BndEvt__W_Gambling_Button_86_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_Gambling_C::BndEvt__W_Gambling_Button_86_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Gambling.W_Gambling_C.BndEvt__W_Gambling_Button_86_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_Gambling_C_BndEvt__W_Gambling_Button_86_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Gambling.W_Gambling_C.Construct
//		Flags  -> ()
void UW_Gambling_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Gambling.W_Gambling_C.Construct");

	UW_Gambling_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Gambling.W_Gambling_C.ExecuteUbergraph_W_Gambling
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Gambling_C::ExecuteUbergraph_W_Gambling(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Gambling.W_Gambling_C.ExecuteUbergraph_W_Gambling");

	UW_Gambling_C_ExecuteUbergraph_W_Gambling_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
