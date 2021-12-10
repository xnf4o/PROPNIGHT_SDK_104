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
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  ImageTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	UMagicLeapImageTrackerComponent_SetTargetAsync_Params params {};
	params.ImageTarget = ImageTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");

	UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
//		Flags  -> ()
// Parameters:
//		int                                                MaxSimultaneousTargets                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int MaxSimultaneousTargets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets");

	UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params params {};
	params.MaxSimultaneousTargets = MaxSimultaneousTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled");

	UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets");

	UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
//		Flags  -> ()
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking");

	UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
