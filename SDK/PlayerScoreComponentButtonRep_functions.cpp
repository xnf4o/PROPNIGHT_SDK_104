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
//		Name   -> Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UPlayerScoreComponentButtonRep_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.OnMouseButtonDown");

	UPlayerScoreComponentButtonRep_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerScoreComponentButtonRep_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.OnMouseEnter");

	UPlayerScoreComponentButtonRep_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerScoreComponentButtonRep_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.OnMouseLeave");

	UPlayerScoreComponentButtonRep_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.ExecuteUbergraph_PlayerScoreComponentButtonRep
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponentButtonRep_C::ExecuteUbergraph_PlayerScoreComponentButtonRep(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.ExecuteUbergraph_PlayerScoreComponentButtonRep");

	UPlayerScoreComponentButtonRep_C_ExecuteUbergraph_PlayerScoreComponentButtonRep_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.Clicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponentButtonRep_C::Clicked__DelegateSignature(const struct FVector2D& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponentButtonRep.PlayerScoreComponentButtonRep_C.Clicked__DelegateSignature");

	UPlayerScoreComponentButtonRep_C_Clicked__DelegateSignature_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
