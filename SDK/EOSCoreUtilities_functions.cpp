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
//		Name   -> Function EOSCoreUtilities.EOSCoreUtilitiesLibrary.RequestEncryptedAppTicket
//		Flags  -> ()
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSCoreUtilitiesLibrary::RequestEncryptedAppTicket(const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreUtilities.EOSCoreUtilitiesLibrary.RequestEncryptedAppTicket");

	UEOSCoreUtilitiesLibrary_RequestEncryptedAppTicket_Params params {};
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
