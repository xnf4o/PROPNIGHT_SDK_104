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
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.If Killer Abilities
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelpWindow_C::If_Killer_Abilities(TEnumAsByte<KillerType_EKillerType> KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.If Killer Abilities");

	UW_HelpWindow_C_If_Killer_Abilities_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HelpWindow_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.PreConstruct");

	UW_HelpWindow_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.Construct
//		Flags  -> ()
void UW_HelpWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.Construct");

	UW_HelpWindow_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelpWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.Tick");

	UW_HelpWindow_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.UpdateSurvInfo
//		Flags  -> ()
void UW_HelpWindow_C::UpdateSurvInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.UpdateSurvInfo");

	UW_HelpWindow_C_UpdateSurvInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.UpdateKillerInfo
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelpWindow_C::UpdateKillerInfo(TEnumAsByte<KillerType_EKillerType> KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.UpdateKillerInfo");

	UW_HelpWindow_C_UpdateKillerInfo_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_HelpWindow.W_HelpWindow_C.ExecuteUbergraph_W_HelpWindow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelpWindow_C::ExecuteUbergraph_W_HelpWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_HelpWindow.W_HelpWindow_C.ExecuteUbergraph_W_HelpWindow");

	UW_HelpWindow_C_ExecuteUbergraph_W_HelpWindow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
