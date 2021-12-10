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
//		Name   -> Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
//		Flags  -> ()
// Parameters:
//		struct FPurchaseItemDetails                        ItemDetails                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	UInAppPurchaseComponent_TryPurchaseItemAsync_Params params {};
	params.ItemDetails = ItemDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
//		Flags  -> ()
// Parameters:
//		int                                                InNumPages                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int InNumPages)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync");

	UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params params {};
	params.InNumPages = InNumPages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             ItemIds                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<struct FString> ItemIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params params {};
	params.ItemIds = ItemIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FPurchaseConfirmation                       PurchaseConfirmations                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params params {};
	params.PurchaseConfirmations = PurchaseConfirmations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
//		Flags  -> ()
void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature");

	UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     LogMessage                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature");

	UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params params {};
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TArray<struct FPurchaseConfirmation>               PurchaseHistory                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature");

	UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params params {};
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
//		Flags  -> ()
void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature");

	UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TArray<struct FPurchaseItemDetails>                ItemsDetails                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params params {};
	params.ItemsDetails = ItemsDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
//		Flags  -> ()
void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature");

	UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InStabilizationDepthActor                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetFocusActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor");

	UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params params {};
	params.InStabilizationDepthActor = InStabilizationDepthActor;
	params.bSetFocusActor = bSetFocusActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InFocusActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetStabilizationActor                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor");

	UMagicLeapHMDFunctionLibrary_SetFocusActor_Params params {};
	params.InFocusActor = InFocusActor;
	params.bSetStabilizationActor = bSetStabilizationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    InBaseRotation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetBaseRotation(const struct FRotator& InBaseRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation");

	UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params params {};
	params.InBaseRotation = InBaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InBasePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetBasePosition(const struct FVector& InBasePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition");

	UMagicLeapHMDFunctionLibrary_SetBasePosition_Params params {};
	params.InBasePosition = InBasePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       InBaseOrientation                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::SetBaseOrientation(const struct FQuat& InBaseOrientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation");

	UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params params {};
	params.InBaseOrientation = InBaseOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::SetAppReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady");

	UMagicLeapHMDFunctionLibrary_SetAppReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD");

	UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetPlatformAPILevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel");

	UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapHMDFunctionLibrary::GetMLSDKVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::GetMinimumAPILevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel");

	UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
//		Flags  -> ()
// Parameters:
//		struct FMagicLeapHeadTrackingState                 State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState");

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents");

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
//		Flags  -> ()
// Parameters:
//		struct FMagicLeapGraphicsClientPerformanceInfo     PerformanceInfo                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo");

	UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerformanceInfo != nullptr)
		*PerformanceInfo = params.PerformanceInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
//		Flags  -> ()
// Parameters:
//		struct FMagicLeapTrackingMeshInfo                  NewMeshInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks");

	UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params params {};
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<float>                                      Confidence                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params params {};
	params.ID = ID;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates");

	UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh");

	UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params params {};
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
//		Flags  -> ()
void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector");

	UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh");

	UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params params {};
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
//		Flags  -> ()
void UMagicLeapMeshTrackerComponent::ConnectBlockSelector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector");

	UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
//		Flags  -> ()
// Parameters:
//		struct FMagicLeapTrackingMeshInfo                  NewMeshInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks");

	UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params params {};
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
//		Flags  -> ()
// Parameters:
//		struct FMagicLeapRaycastQueryParams                RequestParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapRaycastComponent::RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast");

	UMagicLeapRaycastComponent_RequestRaycast_Params params {};
	params.RequestParams = RequestParams;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FMagicLeapRaycastHitResult                  HitResult                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature");

	UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params params {};
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HorizontalFovDegrees                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               CollideWithUnobserved                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                UserData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMagicLeapRaycastQueryParams                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams");

	UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params params {};
	params.Position = Position;
	params.Direction = Direction;
	params.UpVector = UpVector;
	params.Width = Width;
	params.Height = Height;
	params.HorizontalFovDegrees = HorizontalFovDegrees;
	params.CollideWithUnobserved = CollideWithUnobserved;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
