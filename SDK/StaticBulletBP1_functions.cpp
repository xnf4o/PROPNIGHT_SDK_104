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
//		Name   -> Function StaticBulletBP1.StaticBulletBP1_C.ReceiveBeginPlay
//		Flags  -> ()
void AStaticBulletBP1_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaticBulletBP1.StaticBulletBP1_C.ReceiveBeginPlay");

	AStaticBulletBP1_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StaticBulletBP1.StaticBulletBP1_C.Boom
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKillerMasterBP_C*                           Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaticBulletBP1_C::Boom(float Time, class AKillerMasterBP_C* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaticBulletBP1.StaticBulletBP1_C.Boom");

	AStaticBulletBP1_C_Boom_Params params {};
	params.Time = Time;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StaticBulletBP1.StaticBulletBP1_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaticBulletBP1_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaticBulletBP1.StaticBulletBP1_C.ReceiveTick");

	AStaticBulletBP1_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawServ
//		Flags  -> ()
void AStaticBulletBP1_C::SphereDrawServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawServ");

	AStaticBulletBP1_C_SphereDrawServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawMulti
//		Flags  -> ()
void AStaticBulletBP1_C::SphereDrawMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawMulti");

	AStaticBulletBP1_C_SphereDrawMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StaticBulletBP1.StaticBulletBP1_C.ExecuteUbergraph_StaticBulletBP1
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaticBulletBP1_C::ExecuteUbergraph_StaticBulletBP1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaticBulletBP1.StaticBulletBP1_C.ExecuteUbergraph_StaticBulletBP1");

	AStaticBulletBP1_C_ExecuteUbergraph_StaticBulletBP1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
