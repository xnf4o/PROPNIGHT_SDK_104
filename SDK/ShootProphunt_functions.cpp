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
//		Name   -> Function ShootProphunt.ShootProphunt_C.Invoke
//		Flags  -> ()
void UShootProphunt_C::Invoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.Invoke");

	UShootProphunt_C_Invoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.ReloadAmmo
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShootProphunt_C::ReloadAmmo(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.ReloadAmmo");

	UShootProphunt_C_ReloadAmmo_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.RotateServ
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShootProphunt_C::RotateServ(const struct FRotator& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.RotateServ");

	UShootProphunt_C_RotateServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.CreateBulletServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShootProphunt_C::CreateBulletServ(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.CreateBulletServ");

	UShootProphunt_C_CreateBulletServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.CreateBulletMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShootProphunt_C::CreateBulletMulti(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.CreateBulletMulti");

	UShootProphunt_C_CreateBulletMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShootProphunt_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.ReceiveTick");

	UShootProphunt_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.CDWBP
//		Flags  -> ()
void UShootProphunt_C::CDWBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.CDWBP");

	UShootProphunt_C_CDWBP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.ReceiveBeginPlay
//		Flags  -> ()
void UShootProphunt_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.ReceiveBeginPlay");

	UShootProphunt_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.UnInvoke
//		Flags  -> ()
void UShootProphunt_C::UnInvoke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.UnInvoke");

	UShootProphunt_C_UnInvoke_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.Shoot
//		Flags  -> ()
void UShootProphunt_C::Shoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.Shoot");

	UShootProphunt_C_Shoot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ShootProphunt.ShootProphunt_C.ExecuteUbergraph_ShootProphunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShootProphunt_C::ExecuteUbergraph_ShootProphunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShootProphunt.ShootProphunt_C.ExecuteUbergraph_ShootProphunt");

	UShootProphunt_C_ExecuteUbergraph_ShootProphunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
