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
// Classes
//---------------------------------------------------------------------------

// Class GameAnalytics.GameAnalytics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameAnalytics : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameAnalytics.GameAnalytics");
		return ptr;
	}



	void SetCustomDimension03(const struct FString& CustomDimension);
	void SetCustomDimension02(const struct FString& CustomDimension);
	void SetCustomDimension01(const struct FString& CustomDimension);
	void OnQuit();
	bool IsRemoteConfigsReady();
	struct FString GetRemoteConfigsValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue);
	struct FString GetRemoteConfigsValueAsString(const struct FString& Key);
	struct FString GetRemoteConfigsContentAsString();
	struct FString GetABTestingVariantId();
	struct FString GetABTestingId();
	void AddResourceEvent(GameAnalytics_EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId);
	void AddProgressionEventWithOneTwoThreeAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score);
	void AddProgressionEventWithOneTwoAndThree(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03);
	void AddProgressionEventWithOneTwoAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score);
	void AddProgressionEventWithOneAndTwo(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02);
	void AddProgressionEventWithOneAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score);
	void AddProgressionEventWithOne(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01);
	void AddErrorEvent(GameAnalytics_EGAErrorSeverity Severity, const struct FString& Message);
	void AddDesignEventWithValue(const struct FString& EventId, float Value);
	void AddDesignEvent(const struct FString& EventId);
	void AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt);
	void AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature);
	void AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType);
	void AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType);
	void AddAdEventWithNoAdReason(GameAnalytics_EGAAdAction Action, GameAnalytics_EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, GameAnalytics_EGAAdError noAdReason);
	void AddAdEventWithDuration(GameAnalytics_EGAAdAction Action, GameAnalytics_EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, int64_t Duration);
	void AddAdEvent(GameAnalytics_EGAAdAction Action, GameAnalytics_EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
