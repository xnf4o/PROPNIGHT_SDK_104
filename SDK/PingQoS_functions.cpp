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
//		Name   -> Function PingQoS.PingQoSSubsystem.Update
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPingQoSSubsystem::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PingQoS.PingQoSSubsystem.Update");

	UPingQoSSubsystem_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PingQoS.PingQoSSubsystem.Init
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        SetInfo                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPingQoSSubsystem::Init(TArray<struct FPingQoSInfo> SetInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PingQoS.PingQoSSubsystem.Init");

	UPingQoSSubsystem_Init_Params params {};
	params.SetInfo = SetInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
