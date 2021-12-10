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
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.AnimateNickname
//		Flags  -> ()
// Parameters:
//		bool                                               IsForwardDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerScoreComponent_C::AnimateNickname(bool IsForwardDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.AnimateNickname");

	UPlayerScoreComponent_C_AnimateNickname_Params params {};
	params.IsForwardDirection = IsForwardDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.SurvStyle
//		Flags  -> ()
void UPlayerScoreComponent_C::SurvStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.SurvStyle");

	UPlayerScoreComponent_C_SurvStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.KillerStyle
//		Flags  -> ()
void UPlayerScoreComponent_C::KillerStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.KillerStyle");

	UPlayerScoreComponent_C_KillerStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.SetIsEmpty
//		Flags  -> ()
// Parameters:
//		bool                                               Empty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerScoreComponent_C::SetIsEmpty(bool Empty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.SetIsEmpty");

	UPlayerScoreComponent_C_SetIsEmpty_Params params {};
	params.Empty = Empty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.GetPing
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UPlayerScoreComponent_C::GetPing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.GetPing");

	UPlayerScoreComponent_C_GetPing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.GetScore
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UPlayerScoreComponent_C::GetScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.GetScore");

	UPlayerScoreComponent_C_GetScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.Construct
//		Flags  -> ()
void UPlayerScoreComponent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.Construct");

	UPlayerScoreComponent_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.Tick");

	UPlayerScoreComponent_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.GetInfo
//		Flags  -> ()
// Parameters:
//		class APawn*                                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponent_C::GetInfo(class APawn* Player, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.GetInfo");

	UPlayerScoreComponent_C_GetInfo_Params params {};
	params.Player = Player;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.SetMute
//		Flags  -> ()
// Parameters:
//		bool                                               Mute                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerScoreComponent_C::SetMute(bool Mute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.SetMute");

	UPlayerScoreComponent_C_SetMute_Params params {};
	params.Mute = Mute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.BndEvt__PlayerScoreComponent_PlayerScoreComponentButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerScoreComponent_C::BndEvt__PlayerScoreComponent_PlayerScoreComponentButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.BndEvt__PlayerScoreComponent_PlayerScoreComponentButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UPlayerScoreComponent_C_BndEvt__PlayerScoreComponent_PlayerScoreComponentButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.AnimateNicknameTick
//		Flags  -> ()
void UPlayerScoreComponent_C::AnimateNicknameTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.AnimateNicknameTick");

	UPlayerScoreComponent_C_AnimateNicknameTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PlayerScoreComponent.PlayerScoreComponent_C.ExecuteUbergraph_PlayerScoreComponent
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScoreComponent_C::ExecuteUbergraph_PlayerScoreComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerScoreComponent.PlayerScoreComponent_C.ExecuteUbergraph_PlayerScoreComponent");

	UPlayerScoreComponent_C_ExecuteUbergraph_PlayerScoreComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
