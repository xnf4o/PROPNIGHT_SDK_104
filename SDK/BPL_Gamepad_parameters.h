#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPL_Gamepad.BPL_Gamepad_C.RefineKey
struct UBPL_Gamepad_C_RefineKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_KeyRefinedData                           RefinedKey;                                                // 0x0020(0x0038)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPL_Gamepad.BPL_Gamepad_C.GetKeyByActionName
struct UBPL_Gamepad_C_GetKeyByActionName_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPL_Gamepad.BPL_Gamepad_C.Detect_Gamepad
struct UBPL_Gamepad_C_Detect_Gamepad_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUsingGamepad_;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
