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
//		Name   -> Function BPI_HTTP_WrapperListener.BPI_HTTP_WrapperListener_C.OnError
//		Flags  -> ()
void UBPI_HTTP_WrapperListener_C::OnError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_HTTP_WrapperListener.BPI_HTTP_WrapperListener_C.OnError");

	UBPI_HTTP_WrapperListener_C_OnError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_HTTP_WrapperListener.BPI_HTTP_WrapperListener_C.OnResponse
//		Flags  -> ()
// Parameters:
//		struct FString                                     response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_HTTP_WrapperListener_C::OnResponse(const struct FString& response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_HTTP_WrapperListener.BPI_HTTP_WrapperListener_C.OnResponse");

	UBPI_HTTP_WrapperListener_C_OnResponse_Params params {};
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
