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
//		Name   -> Function GameAnalytics.GameAnalytics.SetCustomDimension03
//		Flags  -> ()
// Parameters:
//		struct FString                                     CustomDimension                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::SetCustomDimension03(const struct FString& CustomDimension)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension03");

	UGameAnalytics_SetCustomDimension03_Params params {};
	params.CustomDimension = CustomDimension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.SetCustomDimension02
//		Flags  -> ()
// Parameters:
//		struct FString                                     CustomDimension                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::SetCustomDimension02(const struct FString& CustomDimension)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension02");

	UGameAnalytics_SetCustomDimension02_Params params {};
	params.CustomDimension = CustomDimension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.SetCustomDimension01
//		Flags  -> ()
// Parameters:
//		struct FString                                     CustomDimension                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::SetCustomDimension01(const struct FString& CustomDimension)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension01");

	UGameAnalytics_SetCustomDimension01_Params params {};
	params.CustomDimension = CustomDimension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.OnQuit
//		Flags  -> ()
void UGameAnalytics::OnQuit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.OnQuit");

	UGameAnalytics_OnQuit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.IsRemoteConfigsReady
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameAnalytics::IsRemoteConfigsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.IsRemoteConfigsReady");

	UGameAnalytics_IsRemoteConfigsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsStringWithDefaultValue
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DefaultValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::GetRemoteConfigsValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsStringWithDefaultValue");

	UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Params params {};
	params.Key = Key;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::GetRemoteConfigsValueAsString(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsString");

	UGameAnalytics_GetRemoteConfigsValueAsString_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.GetRemoteConfigsContentAsString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::GetRemoteConfigsContentAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetRemoteConfigsContentAsString");

	UGameAnalytics_GetRemoteConfigsContentAsString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.GetABTestingVariantId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::GetABTestingVariantId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetABTestingVariantId");

	UGameAnalytics_GetABTestingVariantId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.GetABTestingId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::GetABTestingId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetABTestingId");

	UGameAnalytics_GetABTestingId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddResourceEvent
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAResourceFlowType                  FlowType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddResourceEvent(GameAnalytics_EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddResourceEvent");

	UGameAnalytics_AddResourceEvent_Params params {};
	params.FlowType = FlowType;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndScore
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAProgressionStatus                 ProgressionStatus                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression01                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression02                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression03                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddProgressionEventWithOneTwoThreeAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndScore");

	UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Params params {};
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAProgressionStatus                 ProgressionStatus                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression01                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression02                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression03                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddProgressionEventWithOneTwoAndThree(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree");

	UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Params params {};
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAProgressionStatus                 ProgressionStatus                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression01                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression02                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddProgressionEventWithOneTwoAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore");

	UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Params params {};
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAProgressionStatus                 ProgressionStatus                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression01                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression02                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddProgressionEventWithOneAndTwo(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo");

	UGameAnalytics_AddProgressionEventWithOneAndTwo_Params params {};
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAProgressionStatus                 ProgressionStatus                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression01                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddProgressionEventWithOneAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore");

	UGameAnalytics_AddProgressionEventWithOneAndScore_Params params {};
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAProgressionStatus                 ProgressionStatus                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Progression01                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddProgressionEventWithOne(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne");

	UGameAnalytics_AddProgressionEventWithOne_Params params {};
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddErrorEvent
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAErrorSeverity                     Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddErrorEvent(GameAnalytics_EGAErrorSeverity Severity, const struct FString& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddErrorEvent");

	UGameAnalytics_AddErrorEvent_Params params {};
	params.Severity = Severity;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddDesignEventWithValue
//		Flags  -> ()
// Parameters:
//		struct FString                                     EventId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddDesignEventWithValue(const struct FString& EventId, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddDesignEventWithValue");

	UGameAnalytics_AddDesignEventWithValue_Params params {};
	params.EventId = EventId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddDesignEvent
//		Flags  -> ()
// Parameters:
//		struct FString                                     EventId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddDesignEvent(const struct FString& EventId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddDesignEvent");

	UGameAnalytics_AddDesignEvent_Params params {};
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddBusinessEventIOS
//		Flags  -> ()
// Parameters:
//		struct FString                                     Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     CartType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Receipt                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventIOS");

	UGameAnalytics_AddBusinessEventIOS_Params params {};
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid
//		Flags  -> ()
// Parameters:
//		struct FString                                     Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     CartType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Receipt                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Signature                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid");

	UGameAnalytics_AddBusinessEventAndroid_Params params {};
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;
	params.Receipt = Receipt;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     CartType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt");

	UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Params params {};
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddBusinessEvent
//		Flags  -> ()
// Parameters:
//		struct FString                                     Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     CartType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEvent");

	UGameAnalytics_AddBusinessEvent_Params params {};
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddAdEventWithNoAdReason
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAAdAction                          Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameAnalytics_EGAAdType                            adType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     adSdkName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     adPlacement                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameAnalytics_EGAAdError                           noAdReason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddAdEventWithNoAdReason(GameAnalytics_EGAAdAction Action, GameAnalytics_EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, GameAnalytics_EGAAdError noAdReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddAdEventWithNoAdReason");

	UGameAnalytics_AddAdEventWithNoAdReason_Params params {};
	params.Action = Action;
	params.adType = adType;
	params.adSdkName = adSdkName;
	params.adPlacement = adPlacement;
	params.noAdReason = noAdReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddAdEventWithDuration
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAAdAction                          Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameAnalytics_EGAAdType                            adType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     adSdkName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     adPlacement                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddAdEventWithDuration(GameAnalytics_EGAAdAction Action, GameAnalytics_EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, int64_t Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddAdEventWithDuration");

	UGameAnalytics_AddAdEventWithDuration_Params params {};
	params.Action = Action;
	params.adType = adType;
	params.adSdkName = adSdkName;
	params.adPlacement = adPlacement;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameAnalytics.GameAnalytics.AddAdEvent
//		Flags  -> ()
// Parameters:
//		GameAnalytics_EGAAdAction                          Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GameAnalytics_EGAAdType                            adType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     adSdkName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     adPlacement                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::AddAdEvent(GameAnalytics_EGAAdAction Action, GameAnalytics_EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddAdEvent");

	UGameAnalytics_AddAdEvent_Params params {};
	params.Action = Action;
	params.adType = adType;
	params.adSdkName = adSdkName;
	params.adPlacement = adPlacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
