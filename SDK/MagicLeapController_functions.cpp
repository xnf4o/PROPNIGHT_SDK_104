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
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
//		Flags  -> ()
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(InputCore_EControllerHand Hand, const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");

	UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params params {};
	params.Hand = Hand;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
//		Flags  -> ()
// Parameters:
//		MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");

	UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params params {};
	params.TrackingMode = TrackingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
//		Flags  -> ()
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");

	UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params params {};
	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
//		Flags  -> ()
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");

	UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params params {};
	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
//		Flags  -> ()
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");

	UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params params {};
	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
//		Flags  -> ()
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");

	UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params params {};
	params.Hand = Hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
//		Flags  -> ()
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");

	UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params params {};
	params.Hand = Hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
//		Flags  -> ()
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");

	UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params params {};
	params.Hand = Hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");

	UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
//		Flags  -> ()
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");

	UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params params {};
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
//		Flags  -> ()
void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");

	UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
//		Flags  -> ()
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(InputCore_EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");

	UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params params {};
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
//		Flags  -> ()
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerType       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(InputCore_EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");

	UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params params {};
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
//		Flags  -> ()
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		InputCore_EControllerHand                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
InputCore_EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");

	UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params params {};
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
//		Flags  -> ()
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerType       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");

	UMagicLeapControllerFunctionLibrary_GetControllerType_Params params {};
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
//		Flags  -> ()
// Parameters:
//		MagicLeapController_EMagicLeapControllerTrackingMode ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");

	UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
//		Flags  -> ()
// Parameters:
//		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		InputCore_EControllerHand                          Hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int ControllerIndex, InputCore_EControllerHand* Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");

	UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params params {};
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
