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
//		Name   -> Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UPlayerScoreComponentButtonSound_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.OnMouseButtonDown");

	UPlayerScoreComponentButtonSound_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerScoreComponentButtonSound_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.OnMouseEnter");

	UPlayerScoreComponentButtonSound_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerScoreComponentButtonSound_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.OnMouseLeave");

	UPlayerScoreComponentButtonSound_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.ExecuteUbergraph_PlayerScoreComponentButtonSound
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponentButtonSound_C::ExecuteUbergraph_PlayerScoreComponentButtonSound(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.ExecuteUbergraph_PlayerScoreComponentButtonSound");

	UPlayerScoreComponentButtonSound_C_ExecuteUbergraph_PlayerScoreComponentButtonSound_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.Clicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerScoreComponentButtonSound_C::Clicked__DelegateSignature(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonSound.PlayerScoreComponentButtonSound_C.Clicked__DelegateSignature");

	UPlayerScoreComponentButtonSound_C_Clicked__DelegateSignature_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
