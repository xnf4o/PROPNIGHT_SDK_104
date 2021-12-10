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

// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}



	bool StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
	bool StartSession();
	void SetUserId(const struct FString& UserId);
	void SetSessionId(const struct FString& SessionId);
	void SetLocation(const struct FString& Location);
	void SetGender(const struct FString& Gender);
	void SetBuildInfo(const struct FString& BuildInfo);
	void SetAge(int Age);
	void RecordSimpleItemPurchaseWithAttributes(const struct FString& ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordSimpleItemPurchase(const struct FString& ItemId, int ItemQuantity);
	void RecordSimpleCurrencyPurchaseWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordSimpleCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount);
	void RecordProgressWithFullHierarchyAndAttributes(const struct FString& ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordProgressWithAttributes(const struct FString& ProgressType, const struct FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordProgress(const struct FString& ProgressType, const struct FString& ProgressName);
	void RecordItemPurchase(const struct FString& ItemId, const struct FString& Currency, int PerItemCost, int ItemQuantity);
	void RecordEventWithAttributes(const struct FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordEventWithAttribute(const struct FString& EventName, const struct FString& AttributeName, const struct FString& AttributeValue);
	void RecordEvent(const struct FString& EventName);
	void RecordErrorWithAttributes(const struct FString& Error, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordError(const struct FString& Error);
	void RecordCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount, const struct FString& RealCurrencyType, float RealMoneyCost, const struct FString& PaymentProvider);
	void RecordCurrencyGivenWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	void RecordCurrencyGiven(const struct FString& GameCurrencyType, int GameCurrencyAmount);
	struct FAnalyticsEventAttr MakeEventAttribute(const struct FString& AttributeName, const struct FString& AttributeValue);
	struct FString GetUserId();
	struct FString GetSessionId();
	void FlushEvents();
	void EndSession();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
