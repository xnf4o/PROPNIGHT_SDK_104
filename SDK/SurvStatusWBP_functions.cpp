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
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.textN
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvStatusWBP_C::textN(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.textN");

	USurvStatusWBP_C_textN_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USurvStatusWBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.PreConstruct");

	USurvStatusWBP_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.Construct
//		Flags  -> ()
void USurvStatusWBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.Construct");

	USurvStatusWBP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.SurvRefGetter
//		Flags  -> ()
void USurvStatusWBP_C::SurvRefGetter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.SurvRefGetter");

	USurvStatusWBP_C_SurvRefGetter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.LoadPlayers
//		Flags  -> ()
void USurvStatusWBP_C::LoadPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.LoadPlayers");

	USurvStatusWBP_C_LoadPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.statusChangedClient
//		Flags  -> ()
void USurvStatusWBP_C::statusChangedClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.statusChangedClient");

	USurvStatusWBP_C_statusChangedClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvStatusWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.Tick");

	USurvStatusWBP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvStatusWBP.SurvStatusWBP_C.ExecuteUbergraph_SurvStatusWBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvStatusWBP_C::ExecuteUbergraph_SurvStatusWBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvStatusWBP.SurvStatusWBP_C.ExecuteUbergraph_SurvStatusWBP");

	USurvStatusWBP_C_ExecuteUbergraph_SurvStatusWBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
