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
//		Name   -> Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATPCArrowDebugActor::PickActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor");

	AATPCArrowDebugActor_PickActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::Validate(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate");

	UATPCCameraBaseObject_Validate_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::K2_Validate(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate");

	UATPCCameraBaseObject_K2_Validate_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::K2_Tick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick");

	UATPCCameraBaseObject_K2_Tick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode
//		Flags  -> ()
void UATPCCameraBaseObject::K2_OnExitCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode");

	UATPCCameraBaseObject_K2_OnExitCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraBaseObject::K2_OnEnterCameraMode(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode");

	UATPCCameraBaseObject_K2_OnEnterCameraMode_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UATPCCameraBaseObject::GetPlayerController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController");

	UATPCCameraBaseObject_GetPlayerController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager
//		Flags  -> ()
// Parameters:
//		class APlayerCameraManager*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerCameraManager* UATPCCameraBaseObject::GetPlayerCameraManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager");

	UATPCCameraBaseObject_GetPlayerCameraManager_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn
//		Flags  -> ()
// Parameters:
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UATPCCameraBaseObject::GetOwningPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn");

	UATPCCameraBaseObject_GetOwningPawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraComponent* UATPCCameraBaseObject::GetOwningCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera");

	UATPCCameraBaseObject_GetOwningCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UATPCCameraBaseObject::GetOwningActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor");

	UATPCCameraBaseObject_GetOwningActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut
//		Flags  -> ()
void UATPCCameraComponent::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut");

	UATPCCameraComponent_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn
//		Flags  -> ()
void UATPCCameraComponent::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn");

	UATPCCameraComponent_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::ValidateComponents(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents");

	UATPCCameraComponent_ValidateComponents_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode
//		Flags  -> ()
// Parameters:
//		class UATPCCameraModeDataAsset*                    CameraMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::SetCustomCameraMode(class UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode");

	UATPCCameraComponent_SetCustomCameraMode_Params params {};
	params.CameraMode = CameraMode;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                CameraModeTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::SetCameraMode(const struct FGameplayTag& CameraModeTag, bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode");

	UATPCCameraComponent_SetCameraMode_Params params {};
	params.CameraModeTag = CameraModeTag;
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              NewDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInterpolate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::SetCameraDistance(float NewDistance, bool bInterpolate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance");

	UATPCCameraComponent_SetCameraDistance_Params params {};
	params.NewDistance = NewDistance;
	params.bInterpolate = bInterpolate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::ResetCustomCameraMode(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode");

	UATPCCameraComponent_ResetCustomCameraMode_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                CameraModeName                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::RemoveCameraMode(const struct FGameplayTag& CameraModeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode");

	UATPCCameraComponent_RemoveCameraMode_Params params {};
	params.CameraModeName = CameraModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature
//		Flags  -> ()
void UATPCCameraComponent::OnCameraModeChangedDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature");

	UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::IsSetCustomCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode");

	UATPCCameraComponent_IsSetCustomCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                CameraModeName                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::HasCameraMode(const struct FGameplayTag& CameraModeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode");

	UATPCCameraComponent_HasCameraMode_Params params {};
	params.CameraModeName = CameraModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetInitialCameraModeTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag");

	UATPCCameraComponent_GetInitialCameraModeTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetDesiredCameraModeTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag");

	UATPCCameraComponent_GetDesiredCameraModeTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetCurrentCameraModeTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag");

	UATPCCameraComponent_GetCurrentCameraModeTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode
//		Flags  -> ()
// Parameters:
//		class UATPCCameraModeDataAsset*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraModeDataAsset* UATPCCameraComponent::GetCurrentCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode");

	UATPCCameraComponent_GetCurrentCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject
//		Flags  -> ()
// Parameters:
//		class UATPCCameraShakesObject*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraShakesObject* UATPCCameraComponent::GetCameraShakesObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject");

	UATPCCameraComponent_GetCameraShakesObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraComponent::GetCameraRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation");

	UATPCCameraComponent_GetCameraRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UATPCCameraComponent::GetCameraModeTagFromOverlapCameraVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume");

	UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                CameraModeName                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UATPCCameraModeDataAsset*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraModeDataAsset* UATPCCameraComponent::GetCameraMode(const struct FGameplayTag& CameraModeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode");

	UATPCCameraComponent_GetCameraMode_Params params {};
	params.CameraModeName = CameraModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject
//		Flags  -> ()
// Parameters:
//		class UATPCCameraLockOnTargetObject*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraLockOnTargetObject* UATPCCameraComponent::GetCameraLockOnTargetObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject");

	UATPCCameraComponent_GetCameraLockOnTargetObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject
//		Flags  -> ()
// Parameters:
//		class UATPCCameraLocationObject*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraLocationObject* UATPCCameraComponent::GetCameraLocationObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject");

	UATPCCameraComponent_GetCameraLocationObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraComponent::GetCameraLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation");

	UATPCCameraComponent_GetCameraLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject
//		Flags  -> ()
// Parameters:
//		class UATPCCameraFOVObject*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraFOVObject* UATPCCameraComponent::GetCameraFOVObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject");

	UATPCCameraComponent_GetCameraFOVObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject
//		Flags  -> ()
// Parameters:
//		class UATPCCameraFollowTerrainObject*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraFollowTerrainObject* UATPCCameraComponent::GetCameraFollowTerrainObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject");

	UATPCCameraComponent_GetCameraFollowTerrainObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject
//		Flags  -> ()
// Parameters:
//		class UATPCCameraFadingObject*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UATPCCameraFadingObject* UATPCCameraComponent::GetCameraFadingObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject");

	UATPCCameraComponent_GetCameraFadingObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraComponent::GetCameraDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance");

	UATPCCameraComponent_GetCameraDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume
//		Flags  -> ()
// Parameters:
//		class AATPCCameraVolume*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AATPCCameraVolume* UATPCCameraComponent::FindOverlapCameraVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume");

	UATPCCameraComponent_FindOverlapCameraVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes
//		Flags  -> ()
void UATPCCameraComponent::ClearAllCameraModes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes");

	UATPCCameraComponent_ClearAllCameraModes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                CameraModeTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraComponent::CanSetCameraMode(const struct FGameplayTag& CameraModeTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode");

	UATPCCameraComponent_CanSetCameraMode_Params params {};
	params.CameraModeTag = CameraModeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode
//		Flags  -> ()
// Parameters:
//		struct FGameplayTag                                CameraModeName                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UATPCCameraModeDataAsset*                    CameraMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraComponent::AddCameraMode(const struct FGameplayTag& CameraModeName, class UATPCCameraModeDataAsset* CameraMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode");

	UATPCCameraComponent_AddCameraMode_Params params {};
	params.CameraModeName = CameraModeName;
	params.CameraMode = CameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::RemoveManualFadeActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor");

	UATPCCameraFadingObject_RemoveManualFadeActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::RemoveIgnoredActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor");

	UATPCCameraFadingObject_RemoveIgnoredActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors
//		Flags  -> ()
void UATPCCameraFadingObject::ClearManualFadeActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors");

	UATPCCameraFadingObject_ClearManualFadeActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors
//		Flags  -> ()
void UATPCCameraFadingObject::ClearIgnoredActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors");

	UATPCCameraFadingObject_ClearIgnoredActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithCustomTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CustomFadeOutTime                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::AddManualFadeActor(class AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor");

	UATPCCameraFadingObject_AddManualFadeActor_Params params {};
	params.Actor = Actor;
	params.bWithCustomTime = bWithCustomTime;
	params.CustomFadeOutTime = CustomFadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFadingObject::AddIgnoredActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor");

	UATPCCameraFadingObject_AddIgnoredActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.SetOverrideFOV
//		Flags  -> ()
// Parameters:
//		float                                              NewFOV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterp                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFOVObject::SetOverrideFOV(float NewFOV, bool bWithInterp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.SetOverrideFOV");

	UATPCCameraFOVObject_SetOverrideFOV_Params params {};
	params.NewFOV = NewFOV;
	params.bWithInterp = bWithInterp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.ResetOverrideFOV
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterp                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraFOVObject::ResetOverrideFOV(bool bWithInterp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.ResetOverrideFOV");

	UATPCCameraFOVObject_ResetOverrideFOV_Params params {};
	params.bWithInterp = bWithInterp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.IsOverrideFOV
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraFOVObject::IsOverrideFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.IsOverrideFOV");

	UATPCCameraFOVObject_IsOverrideFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetOverrideFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraFOVObject::GetOverrideFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetOverrideFOV");

	UATPCCameraFOVObject_GetOverrideFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraFOVObject::GetCurrentFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV");

	UATPCCameraFOVObject_GetCurrentFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetViewRotation(const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation");

	UATPCCameraLocationObject_SetViewRotation_Params params {};
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideOffsetCameraRotationSettings
//		Flags  -> ()
// Parameters:
//		struct FATPCRotationOffsetSettings                 Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bWithInterp                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetOverrideOffsetCameraRotationSettings(const struct FATPCRotationOffsetSettings& Settings, bool bWithInterp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideOffsetCameraRotationSettings");

	UATPCCameraLocationObject_SetOverrideOffsetCameraRotationSettings_Params params {};
	params.Settings = Settings;
	params.bWithInterp = bWithInterp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation
//		Flags  -> ()
// Parameters:
//		struct FATPCOverrideCameraRotation                 NewOverrideRotation                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetOverrideCameraRotation(const struct FATPCOverrideCameraRotation& NewOverrideRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation");

	UATPCCameraLocationObject_SetOverrideCameraRotation_Params params {};
	params.NewOverrideRotation = NewOverrideRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewOverrideLocation                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetOverrideCameraLocation(const struct FVector& NewOverrideLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraLocation");

	UATPCCameraLocationObject_SetOverrideCameraLocation_Params params {};
	params.NewOverrideLocation = NewOverrideLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              NewOverrideDistance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetOverrideCameraDistance(float NewOverrideDistance, bool bWithInterpolation, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraDistance");

	UATPCCameraLocationObject_SetOverrideCameraDistance_Params params {};
	params.NewOverrideDistance = NewOverrideDistance;
	params.bWithInterpolation = bWithInterpolation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomTargetOffset
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewTargetOffset                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetCustomTargetOffset(const struct FVector& NewTargetOffset, bool bWithInterpolation, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomTargetOffset");

	UATPCCameraLocationObject_SetCustomTargetOffset_Params params {};
	params.NewTargetOffset = NewTargetOffset;
	params.bWithInterpolation = bWithInterpolation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomSocketOffset
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewSocketOffset                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetCustomSocketOffset(const struct FVector& NewSocketOffset, bool bWithInterpolation, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomSocketOffset");

	UATPCCameraLocationObject_SetCustomSocketOffset_Params params {};
	params.NewSocketOffset = NewSocketOffset;
	params.bWithInterpolation = bWithInterpolation;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              NewDist                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInterpolate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::SetCameraDistance(float NewDist, bool bInterpolate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance");

	UATPCCameraLocationObject_SetCameraDistance_Params params {};
	params.NewDist = NewDist;
	params.bInterpolate = bInterpolate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotationSettings
//		Flags  -> ()
void UATPCCameraLocationObject::ResetOverrideCameraRotationSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotationSettings");

	UATPCCameraLocationObject_ResetOverrideCameraRotationSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation
//		Flags  -> ()
void UATPCCameraLocationObject::ResetOverrideCameraRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation");

	UATPCCameraLocationObject_ResetOverrideCameraRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraLocation
//		Flags  -> ()
void UATPCCameraLocationObject::ResetOverrideCameraLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraLocation");

	UATPCCameraLocationObject_ResetOverrideCameraLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraDistance
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::ResetOverrideCameraDistance(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraDistance");

	UATPCCameraLocationObject_ResetOverrideCameraDistance_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomTargetOffset
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::ResetCustomTargetOffset(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomTargetOffset");

	UATPCCameraLocationObject_ResetCustomTargetOffset_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomSocketOffset
//		Flags  -> ()
// Parameters:
//		bool                                               bWithInterpolation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::ResetCustomSocketOffset(bool bWithInterpolation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomSocketOffset");

	UATPCCameraLocationObject_ResetCustomSocketOffset_Params params {};
	params.bWithInterpolation = bWithInterpolation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotationSettings
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::IsOverrideCameraRotationSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotationSettings");

	UATPCCameraLocationObject_IsOverrideCameraRotationSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::IsOverrideCameraRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation");

	UATPCCameraLocationObject_IsOverrideCameraRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraLocation
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::IsOverrideCameraLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraLocation");

	UATPCCameraLocationObject_IsOverrideCameraLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraDistance
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::IsOverrideCameraDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraDistance");

	UATPCCameraLocationObject_IsOverrideCameraDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomTargetOffset
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::HasCustomTargetOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomTargetOffset");

	UATPCCameraLocationObject_HasCustomTargetOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomSocketOffset
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLocationObject::HasCustomSocketOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomSocketOffset");

	UATPCCameraLocationObject_HasCustomSocketOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetViewRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation");

	UATPCCameraLocationObject_GetViewRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetTargetOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset");

	UATPCCameraLocationObject_GetTargetOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetSocketOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset");

	UATPCCameraLocationObject_GetSocketOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetRealCameraDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance");

	UATPCCameraLocationObject_GetRealCameraDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideOffsetCameraRotationSettings
//		Flags  -> ()
// Parameters:
//		struct FATPCRotationOffsetSettings                 ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
struct FATPCRotationOffsetSettings UATPCCameraLocationObject::GetOverrideOffsetCameraRotationSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideOffsetCameraRotationSettings");

	UATPCCameraLocationObject_GetOverrideOffsetCameraRotationSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation
//		Flags  -> ()
// Parameters:
//		struct FATPCOverrideCameraRotation                 ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
struct FATPCOverrideCameraRotation UATPCCameraLocationObject::GetOverrideCameraRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation");

	UATPCCameraLocationObject_GetOverrideCameraRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetOverrideCameraLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraLocation");

	UATPCCameraLocationObject_GetOverrideCameraLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetOverrideCameraDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraDistance");

	UATPCCameraLocationObject_GetOverrideCameraDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomTargetOffset
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetCustomTargetOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomTargetOffset");

	UATPCCameraLocationObject_GetCustomTargetOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomSocketOffset
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetCustomSocketOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomSocketOffset");

	UATPCCameraLocationObject_GetCustomSocketOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetCameraTargetDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance");

	UATPCCameraLocationObject_GetCameraTargetDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UATPCCameraLocationObject::GetCameraRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation");

	UATPCCameraLocationObject_GetCameraRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetCameraLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation");

	UATPCCameraLocationObject_GetCameraLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UATPCCameraLocationObject::GetCameraDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance");

	UATPCCameraLocationObject_GetCameraDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCCameraLocationObject::GetAllSocketOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets");

	UATPCCameraLocationObject_GetAllSocketOffsets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RelativeLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWithInterp                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLocationObject::AttachCameraToComponent(class USceneComponent* ParentComponent, const struct FVector& RelativeLocation, const struct FName& SocketName, bool bWithInterp, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent");

	UATPCCameraLocationObject_AttachCameraToComponent_Params params {};
	params.ParentComponent = ParentComponent;
	params.RelativeLocation = RelativeLocation;
	params.SocketName = SocketName;
	params.bWithInterp = bWithInterp;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActorWithResetTimer
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewTargetActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TargetResetTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLockOnTargetObject::SetTargetActorWithResetTimer(class AActor* NewTargetActor, float TargetResetTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActorWithResetTimer");

	UATPCCameraLockOnTargetObject_SetTargetActorWithResetTimer_Params params {};
	params.NewTargetActor = NewTargetActor;
	params.TargetResetTime = TargetResetTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewTargetActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UATPCCameraLockOnTargetObject::SetTargetActor(class AActor* NewTargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor");

	UATPCCameraLockOnTargetObject_SetTargetActor_Params params {};
	params.NewTargetActor = NewTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraLockOnTargetObject::OnTargetChangeDelegate__DelegateSignature(class AActor* NewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature");

	UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Params params {};
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UATPCCameraLockOnTargetObject::GetTargetActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor");

	UATPCCameraLockOnTargetObject_GetTargetActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        Camera                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraModeScript::K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick");

	UATPCCameraModeScript_K2_Tick_Params params {};
	params.Camera = Camera;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        Camera                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraModeScript::K2_OnExitCameraMode(class UATPCCameraComponent* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode");

	UATPCCameraModeScript_K2_OnExitCameraMode_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        Camera                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATPCCameraModeScript::K2_OnEnterCameraMode(class UATPCCameraComponent* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode");

	UATPCCameraModeScript_K2_OnEnterCameraMode_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATPCCameraVolume::OnVolumeEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap");

	AATPCCameraVolume_OnVolumeEndOverlap_Params params {};
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap
//		Flags  -> ()
// Parameters:
//		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATPCCameraVolume::OnVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap");

	AATPCCameraVolume_OnVolumeBeginOverlap_Params params {};
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UATPCLockOnTargetLocationComponent::GetTargetLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation");

	UATPCLockOnTargetLocationComponent_GetTargetLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
