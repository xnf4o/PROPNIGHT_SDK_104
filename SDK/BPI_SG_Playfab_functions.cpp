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
//		Name   -> Function BPI_SG_Playfab.BPI_SG_Playfab_C.SetID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SG_Playfab_C::SetID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SG_Playfab.BPI_SG_Playfab_C.SetID");

	UBPI_SG_Playfab_C_SetID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SG_Playfab.BPI_SG_Playfab_C.GetID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SG_Playfab_C::GetID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SG_Playfab.BPI_SG_Playfab_C.GetID");

	UBPI_SG_Playfab_C_GetID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
