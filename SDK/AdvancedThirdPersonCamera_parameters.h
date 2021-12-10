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

// Function AdvancedThirdPersonCamera.ATPCArrowDebugActor.PickActor
struct AATPCArrowDebugActor_PickActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.Validate
struct UATPCCameraBaseObject_Validate_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Validate
struct UATPCCameraBaseObject_K2_Validate_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_Tick
struct UATPCCameraBaseObject_K2_Tick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnExitCameraMode
struct UATPCCameraBaseObject_K2_OnExitCameraMode_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.K2_OnEnterCameraMode
struct UATPCCameraBaseObject_K2_OnEnterCameraMode_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerController
struct UATPCCameraBaseObject_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetPlayerCameraManager
struct UATPCCameraBaseObject_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningPawn
struct UATPCCameraBaseObject_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningCamera
struct UATPCCameraBaseObject_GetOwningCamera_Params
{
	class UATPCCameraComponent*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraBaseObject.GetOwningActor
struct UATPCCameraBaseObject_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomOut
struct UATPCCameraComponent_ZoomOut_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ZoomIn
struct UATPCCameraComponent_ZoomIn_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ValidateComponents
struct UATPCCameraComponent_ValidateComponents_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCustomCameraMode
struct UATPCCameraComponent_SetCustomCameraMode_Params
{
	class UATPCCameraModeDataAsset*                    CameraMode;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraMode
struct UATPCCameraComponent_SetCameraMode_Params
{
	struct FGameplayTag                                CameraModeTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.SetCameraDistance
struct UATPCCameraComponent_SetCameraDistance_Params
{
	float                                              NewDistance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterpolate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ResetCustomCameraMode
struct UATPCCameraComponent_ResetCustomCameraMode_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.RemoveCameraMode
struct UATPCCameraComponent_RemoveCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AdvancedThirdPersonCamera.ATPCCameraComponent.OnCameraModeChangedDelegate__DelegateSignature
struct UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.IsSetCustomCameraMode
struct UATPCCameraComponent_IsSetCustomCameraMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.HasCameraMode
struct UATPCCameraComponent_HasCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetInitialCameraModeTag
struct UATPCCameraComponent_GetInitialCameraModeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetDesiredCameraModeTag
struct UATPCCameraComponent_GetDesiredCameraModeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraModeTag
struct UATPCCameraComponent_GetCurrentCameraModeTag_Params
{
	struct FGameplayTag                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCurrentCameraMode
struct UATPCCameraComponent_GetCurrentCameraMode_Params
{
	class UATPCCameraModeDataAsset*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraShakesObject
struct UATPCCameraComponent_GetCameraShakesObject_Params
{
	class UATPCCameraShakesObject*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraRotation
struct UATPCCameraComponent_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraModeTagFromOverlapCameraVolume
struct UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Params
{
	struct FGameplayTag                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraMode
struct UATPCCameraComponent_GetCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UATPCCameraModeDataAsset*                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLockOnTargetObject
struct UATPCCameraComponent_GetCameraLockOnTargetObject_Params
{
	class UATPCCameraLockOnTargetObject*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocationObject
struct UATPCCameraComponent_GetCameraLocationObject_Params
{
	class UATPCCameraLocationObject*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraLocation
struct UATPCCameraComponent_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFOVObject
struct UATPCCameraComponent_GetCameraFOVObject_Params
{
	class UATPCCameraFOVObject*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFollowTerrainObject
struct UATPCCameraComponent_GetCameraFollowTerrainObject_Params
{
	class UATPCCameraFollowTerrainObject*              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraFadingObject
struct UATPCCameraComponent_GetCameraFadingObject_Params
{
	class UATPCCameraFadingObject*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.GetCameraDistance
struct UATPCCameraComponent_GetCameraDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.FindOverlapCameraVolume
struct UATPCCameraComponent_FindOverlapCameraVolume_Params
{
	class AATPCCameraVolume*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.ClearAllCameraModes
struct UATPCCameraComponent_ClearAllCameraModes_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.CanSetCameraMode
struct UATPCCameraComponent_CanSetCameraMode_Params
{
	struct FGameplayTag                                CameraModeTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraComponent.AddCameraMode
struct UATPCCameraComponent_AddCameraMode_Params
{
	struct FGameplayTag                                CameraModeName;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UATPCCameraModeDataAsset*                    CameraMode;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveManualFadeActor
struct UATPCCameraFadingObject_RemoveManualFadeActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.RemoveIgnoredActor
struct UATPCCameraFadingObject_RemoveIgnoredActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearManualFadeActors
struct UATPCCameraFadingObject_ClearManualFadeActors_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.ClearIgnoredActors
struct UATPCCameraFadingObject_ClearIgnoredActors_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddManualFadeActor
struct UATPCCameraFadingObject_AddManualFadeActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithCustomTime;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomFadeOutTime;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFadingObject.AddIgnoredActor
struct UATPCCameraFadingObject_AddIgnoredActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.SetOverrideFOV
struct UATPCCameraFOVObject_SetOverrideFOV_Params
{
	float                                              NewFOV;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterp;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.ResetOverrideFOV
struct UATPCCameraFOVObject_ResetOverrideFOV_Params
{
	bool                                               bWithInterp;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.IsOverrideFOV
struct UATPCCameraFOVObject_IsOverrideFOV_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetOverrideFOV
struct UATPCCameraFOVObject_GetOverrideFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraFOVObject.GetCurrentFOV
struct UATPCCameraFOVObject_GetCurrentFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetViewRotation
struct UATPCCameraLocationObject_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideOffsetCameraRotationSettings
struct UATPCCameraLocationObject_SetOverrideOffsetCameraRotationSettings_Params
{
	struct FATPCRotationOffsetSettings                 Settings;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWithInterp;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraRotation
struct UATPCCameraLocationObject_SetOverrideCameraRotation_Params
{
	struct FATPCOverrideCameraRotation                 NewOverrideRotation;                                       // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraLocation
struct UATPCCameraLocationObject_SetOverrideCameraLocation_Params
{
	struct FVector                                     NewOverrideLocation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetOverrideCameraDistance
struct UATPCCameraLocationObject_SetOverrideCameraDistance_Params
{
	float                                              NewOverrideDistance;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomTargetOffset
struct UATPCCameraLocationObject_SetCustomTargetOffset_Params
{
	struct FVector                                     NewTargetOffset;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCustomSocketOffset
struct UATPCCameraLocationObject_SetCustomSocketOffset_Params
{
	struct FVector                                     NewSocketOffset;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterpolation;                                        // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.SetCameraDistance
struct UATPCCameraLocationObject_SetCameraDistance_Params
{
	float                                              NewDist;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterpolate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotationSettings
struct UATPCCameraLocationObject_ResetOverrideCameraRotationSettings_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraRotation
struct UATPCCameraLocationObject_ResetOverrideCameraRotation_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraLocation
struct UATPCCameraLocationObject_ResetOverrideCameraLocation_Params
{
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetOverrideCameraDistance
struct UATPCCameraLocationObject_ResetOverrideCameraDistance_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomTargetOffset
struct UATPCCameraLocationObject_ResetCustomTargetOffset_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.ResetCustomSocketOffset
struct UATPCCameraLocationObject_ResetCustomSocketOffset_Params
{
	bool                                               bWithInterpolation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotationSettings
struct UATPCCameraLocationObject_IsOverrideCameraRotationSettings_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraRotation
struct UATPCCameraLocationObject_IsOverrideCameraRotation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraLocation
struct UATPCCameraLocationObject_IsOverrideCameraLocation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.IsOverrideCameraDistance
struct UATPCCameraLocationObject_IsOverrideCameraDistance_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomTargetOffset
struct UATPCCameraLocationObject_HasCustomTargetOffset_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.HasCustomSocketOffset
struct UATPCCameraLocationObject_HasCustomSocketOffset_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetViewRotation
struct UATPCCameraLocationObject_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetTargetOffset
struct UATPCCameraLocationObject_GetTargetOffset_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetSocketOffset
struct UATPCCameraLocationObject_GetSocketOffset_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetRealCameraDistance
struct UATPCCameraLocationObject_GetRealCameraDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideOffsetCameraRotationSettings
struct UATPCCameraLocationObject_GetOverrideOffsetCameraRotationSettings_Params
{
	struct FATPCRotationOffsetSettings                 ReturnValue;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraRotation
struct UATPCCameraLocationObject_GetOverrideCameraRotation_Params
{
	struct FATPCOverrideCameraRotation                 ReturnValue;                                               // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraLocation
struct UATPCCameraLocationObject_GetOverrideCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetOverrideCameraDistance
struct UATPCCameraLocationObject_GetOverrideCameraDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomTargetOffset
struct UATPCCameraLocationObject_GetCustomTargetOffset_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCustomSocketOffset
struct UATPCCameraLocationObject_GetCustomSocketOffset_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraTargetDistance
struct UATPCCameraLocationObject_GetCameraTargetDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraRotation
struct UATPCCameraLocationObject_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraLocation
struct UATPCCameraLocationObject_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetCameraDistance
struct UATPCCameraLocationObject_GetCameraDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.GetAllSocketOffsets
struct UATPCCameraLocationObject_GetAllSocketOffsets_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLocationObject.AttachCameraToComponent
struct UATPCCameraLocationObject_AttachCameraToComponent_Params
{
	class USceneComponent*                             ParentComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeLocation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithInterp;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeed;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActorWithResetTimer
struct UATPCCameraLockOnTargetObject_SetTargetActorWithResetTimer_Params
{
	class AActor*                                      NewTargetActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetResetTime;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.SetTargetActor
struct UATPCCameraLockOnTargetObject_SetTargetActor_Params
{
	class AActor*                                      NewTargetActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.OnTargetChangeDelegate__DelegateSignature
struct UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject.GetTargetActor
struct UATPCCameraLockOnTargetObject_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_Tick
struct UATPCCameraModeScript_K2_Tick_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnExitCameraMode
struct UATPCCameraModeScript_K2_OnExitCameraMode_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraModeScript.K2_OnEnterCameraMode
struct UATPCCameraModeScript_K2_OnEnterCameraMode_Params
{
	class UATPCCameraComponent*                        Camera;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeEndOverlap
struct AATPCCameraVolume_OnVolumeEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCCameraVolume.OnVolumeBeginOverlap
struct AATPCCameraVolume_OnVolumeBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent.GetTargetLocation
struct UATPCLockOnTargetLocationComponent_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
