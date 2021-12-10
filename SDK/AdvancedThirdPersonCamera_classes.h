﻿#pragma once

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
// Classes
//---------------------------------------------------------------------------

// Class AdvancedThirdPersonCamera.ATPCArrowDebugActor
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class AATPCArrowDebugActor : public AActor
{
public:
	class USceneComponent*                             SceneRootcomponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                             ArrowComponent;                                            // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76JR[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCArrowDebugActor");
		return ptr;
	}



	void PickActor(class AActor* Actor);
};

// Class AdvancedThirdPersonCamera.ATPCCameraBaseObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UATPCCameraBaseObject : public UObject
{
public:
	class UATPCCameraComponent*                        OwningCamera;                                              // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraBaseObject");
		return ptr;
	}



	void Validate(bool bWithInterpolation);
	void K2_Validate(bool bWithInterpolation);
	void K2_Tick(float DeltaSeconds);
	void K2_OnExitCameraMode();
	void K2_OnEnterCameraMode(bool bWithInterpolation);
	class APlayerController* GetPlayerController();
	class APlayerCameraManager* GetPlayerCameraManager();
	class APawn* GetOwningPawn();
	class UATPCCameraComponent* GetOwningCamera();
	class AActor* GetOwningActor();
};

// Class AdvancedThirdPersonCamera.ATPCCameraComponent
// 0x0338 (FullSize[0x0530] - InheritedSize[0x01F8])
class UATPCCameraComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnCameraModeChangedDelegate;                               // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRXU[0x4];                                     // 0x0208(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                DefaultCameraModeTag;                                      // 0x020C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S9P5[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UATPCCameraModeDataAsset*>            CameraModesAssets;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UATPCCameraModeDataAsset*> SortedCameraModes;                                         // 0x0228(0x0050) (Protected, NativeAccessSpecifierProtected)
	class UATPCCameraModeDataAsset*                    CustomCameraMode;                                          // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6HTZ[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPrintErrorsToScreen;                                      // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U75E[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LocationObjectClass;                                       // 0x0290(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FOVObjectClass;                                            // 0x0298(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FadingObjectClass;                                         // 0x02A0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FollowTerrainObjectClass;                                  // 0x02A8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CameraShakesObjectClass;                                   // 0x02B0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LockOnTargetObjectClass;                                   // 0x02B8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLocationObject*                   LocationObject;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFOVObject*                        FOVObject;                                                 // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFadingObject*                     FadingObject;                                              // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraFollowTerrainObject*              FollowTerrainObject;                                       // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraShakesObject*                     CameraShakesObject;                                        // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UATPCCameraLockOnTargetObject*               LockOnTargetObject;                                        // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UATPCCameraBaseObject*>               CameraObjList;                                             // 0x02F0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UATPCCameraModeDataAsset*                    EmptyCameraMode;                                           // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FATPCCameraMode                             CameraModeDEV;                                             // 0x0308(0x0218) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OQQE[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraComponent");
		return ptr;
	}



	void ZoomOut();
	void ZoomIn();
	void ValidateComponents(bool bWithInterpolation);
	void SetCustomCameraMode(class UATPCCameraModeDataAsset* CameraMode, bool bWithInterpolation);
	void SetCameraMode(const struct FGameplayTag& CameraModeTag, bool bWithInterpolation);
	void SetCameraDistance(float NewDistance, bool bInterpolate);
	void ResetCustomCameraMode(bool bWithInterpolation);
	void RemoveCameraMode(const struct FGameplayTag& CameraModeName);
	void OnCameraModeChangedDelegate__DelegateSignature();
	bool IsSetCustomCameraMode();
	bool HasCameraMode(const struct FGameplayTag& CameraModeName);
	struct FGameplayTag GetInitialCameraModeTag();
	struct FGameplayTag GetDesiredCameraModeTag();
	struct FGameplayTag GetCurrentCameraModeTag();
	class UATPCCameraModeDataAsset* GetCurrentCameraMode();
	class UATPCCameraShakesObject* GetCameraShakesObject();
	struct FRotator GetCameraRotation();
	struct FGameplayTag GetCameraModeTagFromOverlapCameraVolume();
	class UATPCCameraModeDataAsset* GetCameraMode(const struct FGameplayTag& CameraModeName);
	class UATPCCameraLockOnTargetObject* GetCameraLockOnTargetObject();
	class UATPCCameraLocationObject* GetCameraLocationObject();
	struct FVector GetCameraLocation();
	class UATPCCameraFOVObject* GetCameraFOVObject();
	class UATPCCameraFollowTerrainObject* GetCameraFollowTerrainObject();
	class UATPCCameraFadingObject* GetCameraFadingObject();
	float GetCameraDistance();
	class AATPCCameraVolume* FindOverlapCameraVolume();
	void ClearAllCameraModes();
	bool CanSetCameraMode(const struct FGameplayTag& CameraModeTag);
	void AddCameraMode(const struct FGameplayTag& CameraModeName, class UATPCCameraModeDataAsset* CameraMode);
};

// Class AdvancedThirdPersonCamera.ATPCCameraFadingObject
// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
class UATPCCameraFadingObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_B9RW[0xB0];                                    // 0x0030(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraFadingObject");
		return ptr;
	}



	void RemoveManualFadeActor(class AActor* Actor);
	void RemoveIgnoredActor(class AActor* Actor);
	void ClearManualFadeActors();
	void ClearIgnoredActors();
	void AddManualFadeActor(class AActor* Actor, bool bWithCustomTime, float CustomFadeOutTime);
	void AddIgnoredActor(class AActor* Actor);
};

// Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UATPCCameraFollowTerrainObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_6K8A[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraFollowTerrainObject");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraFOVObject
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UATPCCameraFOVObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_2A0X[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraFOVObject");
		return ptr;
	}



	void SetOverrideFOV(float NewFOV, bool bWithInterp);
	void ResetOverrideFOV(bool bWithInterp);
	bool IsOverrideFOV();
	float GetOverrideFOV();
	float GetCurrentFOV();
};

// Class AdvancedThirdPersonCamera.ATPCCameraLocationObject
// 0x01E0 (FullSize[0x0210] - InheritedSize[0x0030])
class UATPCCameraLocationObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_R70S[0x1E0];                                   // 0x0030(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraLocationObject");
		return ptr;
	}



	void SetViewRotation(const struct FRotator& Rotation);
	void SetOverrideOffsetCameraRotationSettings(const struct FATPCRotationOffsetSettings& Settings, bool bWithInterp);
	void SetOverrideCameraRotation(const struct FATPCOverrideCameraRotation& NewOverrideRotation);
	void SetOverrideCameraLocation(const struct FVector& NewOverrideLocation);
	void SetOverrideCameraDistance(float NewOverrideDistance, bool bWithInterpolation, float InterpSpeed);
	void SetCustomTargetOffset(const struct FVector& NewTargetOffset, bool bWithInterpolation, float InterpSpeed);
	void SetCustomSocketOffset(const struct FVector& NewSocketOffset, bool bWithInterpolation, float InterpSpeed);
	void SetCameraDistance(float NewDist, bool bInterpolate);
	void ResetOverrideCameraRotationSettings();
	void ResetOverrideCameraRotation();
	void ResetOverrideCameraLocation();
	void ResetOverrideCameraDistance(bool bWithInterpolation);
	void ResetCustomTargetOffset(bool bWithInterpolation);
	void ResetCustomSocketOffset(bool bWithInterpolation);
	bool IsOverrideCameraRotationSettings();
	bool IsOverrideCameraRotation();
	bool IsOverrideCameraLocation();
	bool IsOverrideCameraDistance();
	bool HasCustomTargetOffset();
	bool HasCustomSocketOffset();
	struct FRotator GetViewRotation();
	struct FVector GetTargetOffset();
	struct FVector GetSocketOffset();
	float GetRealCameraDistance();
	struct FATPCRotationOffsetSettings GetOverrideOffsetCameraRotationSettings();
	struct FATPCOverrideCameraRotation GetOverrideCameraRotation();
	struct FVector GetOverrideCameraLocation();
	float GetOverrideCameraDistance();
	struct FVector GetCustomTargetOffset();
	struct FVector GetCustomSocketOffset();
	float GetCameraTargetDistance();
	struct FRotator GetCameraRotation();
	struct FVector GetCameraLocation();
	float GetCameraDistance();
	struct FVector GetAllSocketOffsets();
	void AttachCameraToComponent(class USceneComponent* ParentComponent, const struct FVector& RelativeLocation, const struct FName& SocketName, bool bWithInterp, float InterpSpeed);
};

// Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UATPCCameraLockOnTargetObject : public UATPCCameraBaseObject
{
public:
	struct FScriptMulticastDelegate                    OnTargetChangeDelegate;                                    // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0P18[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AATPCArrowDebugActor*                        TargetDebugActor;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IYR4[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraLockOnTargetObject");
		return ptr;
	}



	bool SetTargetActorWithResetTimer(class AActor* NewTargetActor, float TargetResetTime);
	bool SetTargetActor(class AActor* NewTargetActor);
	void OnTargetChangeDelegate__DelegateSignature(class AActor* NewTarget);
	class AActor* GetTargetActor();
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset
// 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
class UATPCCameraModeDataAsset : public UDataAsset
{
public:
	struct FGameplayTag                                CameraModeTag;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FATPCCameraMode                             CameraModeSettings;                                        // 0x0038(0x0218) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UATPCCameraModeScript*>               CameraModeScripts;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeDataAsset");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UATPCCameraModeScript : public UObject
{
public:
	class UATPCCameraComponent*                        OwningCamera;                                              // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableTick;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FMT1[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup TickGroup;                                                 // 0x0034(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FHC4[0x3];                                     // 0x0031(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_T508[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript");
		return ptr;
	}



	void K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds);
	void K2_OnExitCameraMode(class UATPCCameraComponent* Camera);
	void K2_OnEnterCameraMode(class UATPCCameraComponent* Camera);
};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UATPCCameraModeScript_ChangeMovementSpeed : public UATPCCameraModeScript
{
public:
	float                                              NewMaxMovementSpeed;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreOldMovementSpeedOnExitCameraMode;                  // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQWX[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OldMaxMovementSpeed;                                       // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GOEU[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript_ChangeMovementSpeed");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UATPCCameraModeScript_PawnUseControllerRotation : public UATPCCameraModeScript
{
public:
	bool                                               OrientRotationToMovement;                                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseControllerDesiredRotation;                              // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreOldValuesOnExitCameraMode;                         // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OldOrientRotationToMovement;                               // 0x0043(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OldUseControllerDesiredRotation;                           // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJUS[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript_PawnUseControllerRotation");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UATPCCameraModeScript_RotateActorToTarget : public UATPCCameraModeScript
{
public:
	float                                              RotationSpeed;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2EN[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraModeScript_RotateActorToTarget");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraShakesObject
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UATPCCameraShakesObject : public UATPCCameraBaseObject
{
public:
	unsigned char                                      UnknownData_49EI[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraShakesObject");
		return ptr;
	}



};

// Class AdvancedThirdPersonCamera.ATPCCameraVolume
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class AATPCCameraVolume : public AVolume
{
public:
	struct FGameplayTag                                CameraModeTag;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeCameraModeWithInterp;                               // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckFilterActorClassWithCamera;                          // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0TI[0x6];                                     // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              FilterActorClassesWithCamera;                              // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCCameraVolume");
		return ptr;
	}



	void OnVolumeEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UATPCLockOnTargetLocationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_TFF2[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AdvancedThirdPersonCamera.ATPCLockOnTargetLocationComponent");
		return ptr;
	}



	struct FVector GetTargetLocation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
