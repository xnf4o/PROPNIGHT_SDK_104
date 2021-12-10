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
//		Name   -> Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.OnResponse
//		Flags  -> ()
// Parameters:
//		struct FString                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_HTTP_Wrapper_C::OnResponse(const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.OnResponse");

	UBP_HTTP_Wrapper_C_OnResponse_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.OnError
//		Flags  -> ()
void UBP_HTTP_Wrapper_C::OnError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.OnError");

	UBP_HTTP_Wrapper_C_OnError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.ExecuteUbergraph_BP_HTTP_Wrapper
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HTTP_Wrapper_C::ExecuteUbergraph_BP_HTTP_Wrapper(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HTTP_Wrapper.BP_HTTP_Wrapper_C.ExecuteUbergraph_BP_HTTP_Wrapper");

	UBP_HTTP_Wrapper_C_ExecuteUbergraph_BP_HTTP_Wrapper_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
