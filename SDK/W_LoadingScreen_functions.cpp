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
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.FillDescriptionsFromArray
//		Flags  -> ()
// Parameters:
//		TArray<struct FText>                               DescriptionsArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_LoadingScreen_C::FillDescriptionsFromArray(TArray<struct FText>* DescriptionsArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.FillDescriptionsFromArray");

	UW_LoadingScreen_C_FillDescriptionsFromArray_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DescriptionsArray != nullptr)
		*DescriptionsArray = params.DescriptionsArray;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.FillTipsFromTipsArray
//		Flags  -> ()
// Parameters:
//		TArray<struct FText>                               TipsArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_LoadingScreen_C::FillTipsFromTipsArray(TArray<struct FText>* TipsArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.FillTipsFromTipsArray");

	UW_LoadingScreen_C_FillTipsFromTipsArray_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TipsArray != nullptr)
		*TipsArray = params.TipsArray;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.GetTipTextAndImage
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  TipText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      TipImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FText>                               TipsArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                TipIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LoadingScreen_C::GetTipTextAndImage(class UTextBlock* TipText, class UImage* TipImage, TArray<struct FText>* TipsArray, int TipIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.GetTipTextAndImage");

	UW_LoadingScreen_C_GetTipTextAndImage_Params params {};
	params.TipText = TipText;
	params.TipImage = TipImage;
	params.TipIndex = TipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TipsArray != nullptr)
		*TipsArray = params.TipsArray;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.StartFakeLoading
//		Flags  -> ()
void UW_LoadingScreen_C::StartFakeLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.StartFakeLoading");

	UW_LoadingScreen_C_StartFakeLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.SetProgress
//		Flags  -> ()
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LoadingScreen_C::SetProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.SetProgress");

	UW_LoadingScreen_C_SetProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LoadingScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.Tick");

	UW_LoadingScreen_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.StopLoadingMusic
//		Flags  -> ()
void UW_LoadingScreen_C::StopLoadingMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.StopLoadingMusic");

	UW_LoadingScreen_C_StopLoadingMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.Destruct
//		Flags  -> ()
void UW_LoadingScreen_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.Destruct");

	UW_LoadingScreen_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.Construct
//		Flags  -> ()
void UW_LoadingScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.Construct");

	UW_LoadingScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_LoadingScreen.W_LoadingScreen_C.ExecuteUbergraph_W_LoadingScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LoadingScreen_C::ExecuteUbergraph_W_LoadingScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_LoadingScreen.W_LoadingScreen_C.ExecuteUbergraph_W_LoadingScreen");

	UW_LoadingScreen_C_ExecuteUbergraph_W_LoadingScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
