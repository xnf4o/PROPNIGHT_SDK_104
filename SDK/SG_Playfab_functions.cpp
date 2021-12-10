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
//		Name   -> Function SG_Playfab.SG_Playfab_C.GetID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USG_Playfab_C::GetID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SG_Playfab.SG_Playfab_C.GetID");

	USG_Playfab_C_GetID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SG_Playfab.SG_Playfab_C.SetID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USG_Playfab_C::SetID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SG_Playfab.SG_Playfab_C.SetID");

	USG_Playfab_C_SetID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SG_Playfab.SG_Playfab_C.ExecuteUbergraph_SG_Playfab
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USG_Playfab_C::ExecuteUbergraph_SG_Playfab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SG_Playfab.SG_Playfab_C.ExecuteUbergraph_SG_Playfab");

	USG_Playfab_C_ExecuteUbergraph_SG_Playfab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
