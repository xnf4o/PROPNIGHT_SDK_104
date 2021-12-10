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
//		Name   -> Function WBP_User_Message.WBP_User_Message_C.Remove
//		Flags  -> ()
void UWBP_User_Message_C::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_User_Message.WBP_User_Message_C.Remove");

	UWBP_User_Message_C_Remove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_User_Message.WBP_User_Message_C.Construct
//		Flags  -> ()
void UWBP_User_Message_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_User_Message.WBP_User_Message_C.Construct");

	UWBP_User_Message_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_User_Message.WBP_User_Message_C.ExecuteUbergraph_WBP_User_Message
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_User_Message_C::ExecuteUbergraph_WBP_User_Message(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_User_Message.WBP_User_Message_C.ExecuteUbergraph_WBP_User_Message");

	UWBP_User_Message_C_ExecuteUbergraph_WBP_User_Message_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
