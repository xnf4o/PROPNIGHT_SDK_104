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
//		Name   -> Function W_Path.W_Path_C.GetLastEntry
//		Flags  -> ()
// Parameters:
//		class UW_PathEntry_C*                              EntryRef                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::GetLastEntry(class UW_PathEntry_C** EntryRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.GetLastEntry");

	UW_Path_C_GetLastEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryRef != nullptr)
		*EntryRef = params.EntryRef;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.HasEntry
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Path_C::HasEntry(const struct FName& EntryName, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.HasEntry");

	UW_Path_C_HasEntry_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.SetEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Path_C::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.SetEnabled");

	UW_Path_C_SetEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.SetRootWidget
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::SetRootWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.SetRootWidget");

	UW_Path_C_SetRootWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.IsRoot
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Path_C::IsRoot(const struct FName& EntryName, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.IsRoot");

	UW_Path_C_IsRoot_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.FindEntry
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EntryIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::FindEntry(const struct FName& EntryName, int* EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.FindEntry");

	UW_Path_C_FindEntry_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryIndex != nullptr)
		*EntryIndex = params.EntryIndex;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Path_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.PreConstruct");

	UW_Path_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.Construct
//		Flags  -> ()
void UW_Path_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.Construct");

	UW_Path_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.AddEntryToPath
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       EntryText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UWidget*                                     EntryWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::AddEntryToPath(const struct FName& EntryName, const struct FText& EntryText, class UWidget* EntryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.AddEntryToPath");

	UW_Path_C_AddEntryToPath_Params params {};
	params.EntryName = EntryName;
	params.EntryText = EntryText;
	params.EntryWidget = EntryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.RemoveEntryFromPath
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::RemoveEntryFromPath(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.RemoveEntryFromPath");

	UW_Path_C_RemoveEntryFromPath_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.RootClicked
//		Flags  -> ()
void UW_Path_C::RootClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.RootClicked");

	UW_Path_C_RootClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.Entry_OnClick
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::Entry_OnClick(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.Entry_OnClick");

	UW_Path_C_Entry_OnClick_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.ClearPath
//		Flags  -> ()
void UW_Path_C::ClearPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.ClearPath");

	UW_Path_C_ClearPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Path.W_Path_C.ExecuteUbergraph_W_Path
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Path_C::ExecuteUbergraph_W_Path(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Path.W_Path_C.ExecuteUbergraph_W_Path");

	UW_Path_C_ExecuteUbergraph_W_Path_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
