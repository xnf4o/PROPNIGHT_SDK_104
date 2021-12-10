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
//		Name   -> Function Shoot.Shoot_C.OnRep_Ammo
//		Flags  -> ()
void UShoot_C::OnRep_Ammo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.OnRep_Ammo");

	UShoot_C_OnRep_Ammo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.AmmoCheck
//		Flags  -> ()
void UShoot_C::AmmoCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.AmmoCheck");

	UShoot_C_AmmoCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.RotateServ
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShoot_C::RotateServ(const struct FRotator& NewParam, bool NewParam2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.RotateServ");

	UShoot_C_RotateServ_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.CreateBulletServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShoot_C::CreateBulletServ(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.CreateBulletServ");

	UShoot_C_CreateBulletServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.On Invoke
//		Flags  -> ()
void UShoot_C::On_Invoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.On Invoke");

	UShoot_C_On_Invoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.CreateBulletMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShoot_C::CreateBulletMulti(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.CreateBulletMulti");

	UShoot_C_CreateBulletMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShoot_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.ReceiveTick");

	UShoot_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.ReceiveBeginPlay
//		Flags  -> ()
void UShoot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.ReceiveBeginPlay");

	UShoot_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.CameraShake
//		Flags  -> ()
void UShoot_C::CameraShake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.CameraShake");

	UShoot_C_CameraShake_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Shoot.Shoot_C.ExecuteUbergraph_Shoot
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShoot_C::ExecuteUbergraph_Shoot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shoot.Shoot_C.ExecuteUbergraph_Shoot");

	UShoot_C_ExecuteUbergraph_Shoot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
