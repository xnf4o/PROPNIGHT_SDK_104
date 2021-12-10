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
//		Name   -> Function W_VictoryScreenText.W_VictoryScreenText_C.SetLetterColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                OutlineColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VictoryScreenText_C::SetLetterColor(const struct FLinearColor& TextColor, const struct FLinearColor& OutlineColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreenText.W_VictoryScreenText_C.SetLetterColor");

	UW_VictoryScreenText_C_SetLetterColor_Params params {};
	params.TextColor = TextColor;
	params.OutlineColor = OutlineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_VictoryScreenText.W_VictoryScreenText_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VictoryScreenText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreenText.W_VictoryScreenText_C.Tick");

	UW_VictoryScreenText_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_VictoryScreenText.W_VictoryScreenText_C.SetTextAndStart
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VictoryScreenText_C::SetTextAndStart(const struct FString& Text, int Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreenText.W_VictoryScreenText_C.SetTextAndStart");

	UW_VictoryScreenText_C_SetTextAndStart_Params params {};
	params.Text = Text;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_VictoryScreenText.W_VictoryScreenText_C.FirstText
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_VictoryScreenText_C::FirstText(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreenText.W_VictoryScreenText_C.FirstText");

	UW_VictoryScreenText_C_FirstText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_VictoryScreenText.W_VictoryScreenText_C.ExecuteUbergraph_W_VictoryScreenText
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VictoryScreenText_C::ExecuteUbergraph_W_VictoryScreenText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_VictoryScreenText.W_VictoryScreenText_C.ExecuteUbergraph_W_VictoryScreenText");

	UW_VictoryScreenText_C_ExecuteUbergraph_W_VictoryScreenText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
