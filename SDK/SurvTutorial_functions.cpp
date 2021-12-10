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
//		Name   -> Function SurvTutorial.SurvTutorial_C.UserConstructionScript
//		Flags  -> ()
void ASurvTutorial_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.UserConstructionScript");

	ASurvTutorial_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.ReceiveBeginPlay
//		Flags  -> ()
void ASurvTutorial_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.ReceiveBeginPlay");

	ASurvTutorial_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvTutorial_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.ReceiveTick");

	ASurvTutorial_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.ServerJump
//		Flags  -> ()
void ASurvTutorial_C::ServerJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.ServerJump");

	ASurvTutorial_C_ServerJump_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.PropOutlineEffect
//		Flags  -> ()
void ASurvTutorial_C::PropOutlineEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.PropOutlineEffect");

	ASurvTutorial_C_PropOutlineEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.Prop
//		Flags  -> ()
void ASurvTutorial_C::Prop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.Prop");

	ASurvTutorial_C_Prop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.RotateEvent
//		Flags  -> ()
void ASurvTutorial_C::RotateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.RotateEvent");

	ASurvTutorial_C_RotateEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.ServerPerson
//		Flags  -> ()
void ASurvTutorial_C::ServerPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.ServerPerson");

	ASurvTutorial_C_ServerPerson_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.LocalProp
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvTutorial_C::LocalProp(class AActor* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.LocalProp");

	ASurvTutorial_C_LocalProp_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.GetOutServer
//		Flags  -> ()
void ASurvTutorial_C::GetOutServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.GetOutServer");

	ASurvTutorial_C_GetOutServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.HittedMulticast
//		Flags  -> ()
// Parameters:
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TrueDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Moved_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Invulnerability_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvTutorial_C::HittedMulticast(int Damage, int TrueDamage, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> DamageType, bool Moved_, bool Invulnerability_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.HittedMulticast");

	ASurvTutorial_C_HittedMulticast_Params params {};
	params.Damage = Damage;
	params.TrueDamage = TrueDamage;
	params.DamageType = DamageType;
	params.Moved_ = Moved_;
	params.Invulnerability_ = Invulnerability_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.BeginFootprint
//		Flags  -> ()
void ASurvTutorial_C::BeginFootprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.BeginFootprint");

	ASurvTutorial_C_BeginFootprint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvTutorial.SurvTutorial_C.ExecuteUbergraph_SurvTutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvTutorial_C::ExecuteUbergraph_SurvTutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvTutorial.SurvTutorial_C.ExecuteUbergraph_SurvTutorial");

	ASurvTutorial_C_ExecuteUbergraph_SurvTutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
