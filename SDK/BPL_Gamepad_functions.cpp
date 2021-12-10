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
//		Name   -> Function BPL_Gamepad.BPL_Gamepad_C.RefineKey
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FS_KeyRefinedData                           RefinedKey                                                 (Parm, OutParm, HasGetValueTypeHash)
void UBPL_Gamepad_C::RefineKey(const struct FKey& Key, class UObject* __WorldContext, struct FS_KeyRefinedData* RefinedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPL_Gamepad.BPL_Gamepad_C.RefineKey");

	UBPL_Gamepad_C_RefineKey_Params params {};
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RefinedKey != nullptr)
		*RefinedKey = params.RefinedKey;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPL_Gamepad.BPL_Gamepad_C.GetKeyByActionName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
void UBPL_Gamepad_C::GetKeyByActionName(const struct FName& ActionName, class UObject* __WorldContext, struct FKey* Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPL_Gamepad.BPL_Gamepad_C.GetKeyByActionName");

	UBPL_Gamepad_C_GetKeyByActionName_Params params {};
	params.ActionName = ActionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPL_Gamepad.BPL_Gamepad_C.Detect_Gamepad
//		Flags  -> ()
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsUsingGamepad_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPL_Gamepad_C::Detect_Gamepad(class UObject* __WorldContext, bool* IsUsingGamepad_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPL_Gamepad.BPL_Gamepad_C.Detect_Gamepad");

	UBPL_Gamepad_C_Detect_Gamepad_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUsingGamepad_ != nullptr)
		*IsUsingGamepad_ = params.IsUsingGamepad_;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
