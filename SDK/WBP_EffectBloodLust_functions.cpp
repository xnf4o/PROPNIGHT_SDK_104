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
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EffectBloodLust_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Tick");

	UWBP_EffectBloodLust_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Level_Up
//		Flags  -> ()
void UWBP_EffectBloodLust_C::Level_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Level_Up");

	UWBP_EffectBloodLust_C_Level_Up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Construct
//		Flags  -> ()
void UWBP_EffectBloodLust_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Construct");

	UWBP_EffectBloodLust_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EffectBloodLust_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.PreConstruct");

	UWBP_EffectBloodLust_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.LevelRush?
//		Flags  -> ()
// Parameters:
//		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SSSR                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               AstralIn_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EffectBloodLust_C::LevelRush_(float Level, bool SSSR, bool AstralIn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.LevelRush?");

	UWBP_EffectBloodLust_C_LevelRush__Params params {};
	params.Level = Level;
	params.SSSR = SSSR;
	params.AstralIn_ = AstralIn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Hunter_LevelRush
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Chase_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EffectBloodLust_C::Hunter_LevelRush(float DeltaTime, bool Chase_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.Hunter_LevelRush");

	UWBP_EffectBloodLust_C_Hunter_LevelRush_Params params {};
	params.DeltaTime = DeltaTime;
	params.Chase_ = Chase_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.ExecuteUbergraph_WBP_EffectBloodLust
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EffectBloodLust_C::ExecuteUbergraph_WBP_EffectBloodLust(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EffectBloodLust.WBP_EffectBloodLust_C.ExecuteUbergraph_WBP_EffectBloodLust");

	UWBP_EffectBloodLust_C_ExecuteUbergraph_WBP_EffectBloodLust_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
