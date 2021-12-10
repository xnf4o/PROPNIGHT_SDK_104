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
//		Name   -> Function BPI_PathPage.BPI_PathPage_C.Move
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PathPage_C::Move(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PathPage.BPI_PathPage_C.Move");

	UBPI_PathPage_C_Move_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
