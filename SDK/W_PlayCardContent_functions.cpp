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
//		Name   -> Function W_PlayCardContent.W_PlayCardContent_C.GetContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_C::GetContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent.W_PlayCardContent_C.GetContentHeight");

	UW_PlayCardContent_C_GetContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent.W_PlayCardContent_C.GetTextContentHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_C::GetTextContentHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent.W_PlayCardContent_C.GetTextContentHeight");

	UW_PlayCardContent_C_GetTextContentHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent.W_PlayCardContent_C.InitCard
//		Flags  -> ()
// Parameters:
//		struct FText                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_PlayCardContent_C::InitCard(const struct FText& Name, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent.W_PlayCardContent_C.InitCard");

	UW_PlayCardContent_C_InitCard_Params params {};
	params.Name = Name;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent.W_PlayCardContent_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PlayCardContent_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent.W_PlayCardContent_C.PreConstruct");

	UW_PlayCardContent_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent.W_PlayCardContent_C.OnInit
//		Flags  -> ()
// Parameters:
//		struct FText                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_PlayCardContent_C::OnInit(const struct FText& Name, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent.W_PlayCardContent_C.OnInit");

	UW_PlayCardContent_C_OnInit_Params params {};
	params.Name = Name;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PlayCardContent.W_PlayCardContent_C.ExecuteUbergraph_W_PlayCardContent
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PlayCardContent_C::ExecuteUbergraph_W_PlayCardContent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PlayCardContent.W_PlayCardContent_C.ExecuteUbergraph_W_PlayCardContent");

	UW_PlayCardContent_C_ExecuteUbergraph_W_PlayCardContent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
