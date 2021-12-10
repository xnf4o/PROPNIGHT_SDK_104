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
//		Name   -> Function W_PlayCard.W_PlayCard_C.HoverAnimationTick
//		Flags  -> ()
// Parameters:
void UW_PlayCard_C::HoverAnimationTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.HoverAnimationTick");

	UW_PlayCard_C_HoverAnimationTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.HoverAnimation
//		Flags  -> ()
// Parameters:
//		bool                                               isForwarDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PlayCard_C::HoverAnimation(bool isForwarDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.HoverAnimation");

	UW_PlayCard_C_HoverAnimation_Params params {};
	params.isForwarDirection = isForwarDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.GetContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCard_C::GetContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.GetContentHeight");

	UW_PlayCard_C_GetContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.GetTextHeightContent
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCard_C::GetTextHeightContent(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.GetTextHeightContent");

	UW_PlayCard_C_GetTextHeightContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.SetBlocked
//		Flags  -> ()
// Parameters:
//		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PlayCard_C::SetBlocked(bool bLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.SetBlocked");

	UW_PlayCard_C_SetBlocked_Params params {};
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UW_PlayCard_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.OnMouseButtonDown");

	UW_PlayCard_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PlayCard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.PreConstruct");

	UW_PlayCard_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.Tick");

	UW_PlayCard_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_PlayCard_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.OnMouseEnter");

	UW_PlayCard_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_PlayCard_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.OnMouseLeave");

	UW_PlayCard_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.BigSize
//		Flags  -> ()
void UW_PlayCard_C::BigSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.BigSize");

	UW_PlayCard_C_BigSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.LowSize
//		Flags  -> ()
void UW_PlayCard_C::LowSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.LowSize");

	UW_PlayCard_C_LowSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.ExecuteUbergraph_W_PlayCard
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCard_C::ExecuteUbergraph_W_PlayCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.ExecuteUbergraph_W_PlayCard");

	UW_PlayCard_C_ExecuteUbergraph_W_PlayCard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.ServerBrowser_OnClicked__DelegateSignature
//		Flags  -> ()
void UW_PlayCard_C::ServerBrowser_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.ServerBrowser_OnClicked__DelegateSignature");

	UW_PlayCard_C_ServerBrowser_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.CreateGame_OnClicked__DelegateSignature
//		Flags  -> ()
void UW_PlayCard_C::CreateGame_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.CreateGame_OnClicked__DelegateSignature");

	UW_PlayCard_C_CreateGame_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCard.W_PlayCard_C.SearchGame_OnClicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<E_RoleType_E_RoleType>                 Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCard_C::SearchGame_OnClicked__DelegateSignature(TEnumAsByte<E_RoleType_E_RoleType> Role)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCard.W_PlayCard_C.SearchGame_OnClicked__DelegateSignature");

	UW_PlayCard_C_SearchGame_OnClicked__DelegateSignature_Params params {};
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
