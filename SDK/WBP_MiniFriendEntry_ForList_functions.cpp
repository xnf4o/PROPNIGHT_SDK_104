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
//		Name   -> Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.GetText_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_MiniFriendEntry_ForList_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.GetText_1");

	UWBP_MiniFriendEntry_ForList_C_GetText_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.SetIsOnline
//		Flags  -> ()
// Parameters:
//		bool                                               IsOnline                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MiniFriendEntry_ForList_C::SetIsOnline(bool IsOnline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.SetIsOnline");

	UWBP_MiniFriendEntry_ForList_C_SetIsOnline_Params params {};
	params.IsOnline = IsOnline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MiniFriendEntry_ForList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.PreConstruct");

	UWBP_MiniFriendEntry_ForList_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MiniFriendEntry_ForList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.Tick");

	UWBP_MiniFriendEntry_ForList_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.ExecuteUbergraph_WBP_MiniFriendEntry_ForList
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MiniFriendEntry_ForList_C::ExecuteUbergraph_WBP_MiniFriendEntry_ForList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MiniFriendEntry_ForList.WBP_MiniFriendEntry_ForList_C.ExecuteUbergraph_WBP_MiniFriendEntry_ForList");

	UWBP_MiniFriendEntry_ForList_C_ExecuteUbergraph_WBP_MiniFriendEntry_ForList_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
