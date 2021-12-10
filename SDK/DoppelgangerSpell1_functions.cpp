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
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvMulticast
//		Flags  -> ()
// Parameters:
//		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      MeshFPP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCapsuleComponent*                           CapsuleComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvRole_ESurvRole>                    SurvRole                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoppelgangerSpell1_C::GetSurvMulticast(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* MeshFPP, class UCapsuleComponent* CapsuleComponent, TEnumAsByte<SurvChars_ESurvChars> SurvChar, TEnumAsByte<SurvRole_ESurvRole> SurvRole)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvMulticast");

	UDoppelgangerSpell1_C_GetSurvMulticast_Params params {};
	params.Mesh = Mesh;
	params.MeshFPP = MeshFPP;
	params.CapsuleComponent = CapsuleComponent;
	params.SurvChar = SurvChar;
	params.SurvRole = SurvRole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvServer
//		Flags  -> ()
// Parameters:
//		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      MeshFPP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCapsuleComponent*                           CapsuleComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvRole_ESurvRole>                    SurvRole                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoppelgangerSpell1_C::GetSurvServer(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* MeshFPP, class UCapsuleComponent* CapsuleComponent, TEnumAsByte<SurvChars_ESurvChars> SurvChar, TEnumAsByte<SurvRole_ESurvRole> SurvRole)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvServer");

	UDoppelgangerSpell1_C_GetSurvServer_Params params {};
	params.Mesh = Mesh;
	params.MeshFPP = MeshFPP;
	params.CapsuleComponent = CapsuleComponent;
	params.SurvChar = SurvChar;
	params.SurvRole = SurvRole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurv
//		Flags  -> ()
// Parameters:
//		bool                                               Clear_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDoppelgangerSpell1_C::GetSurv(bool Clear_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurv");

	UDoppelgangerSpell1_C_GetSurv_Params params {};
	params.Clear_ = Clear_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.Cast
//		Flags  -> ()
void UDoppelgangerSpell1_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.Cast");

	UDoppelgangerSpell1_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoppelgangerSpell1_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveTick");

	UDoppelgangerSpell1_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveBeginPlay
//		Flags  -> ()
void UDoppelgangerSpell1_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveBeginPlay");

	UDoppelgangerSpell1_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnMulticast
//		Flags  -> ()
void UDoppelgangerSpell1_C::ReturnMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnMulticast");

	UDoppelgangerSpell1_C_ReturnMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.Consume
//		Flags  -> ()
void UDoppelgangerSpell1_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.Consume");

	UDoppelgangerSpell1_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.RoleChange
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvRole_ESurvRole>                    Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USurvRole_C*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Off_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDoppelgangerSpell1_C::RoleChange(TEnumAsByte<SurvRole_ESurvRole> Role, class USurvRole_C* Widget, bool Off_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.RoleChange");

	UDoppelgangerSpell1_C_RoleChange_Params params {};
	params.Role = Role;
	params.Widget = Widget;
	params.Off_ = Off_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnServ
//		Flags  -> ()
void UDoppelgangerSpell1_C::ReturnServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnServ");

	UDoppelgangerSpell1_C_ReturnServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNickname
//		Flags  -> ()
// Parameters:
//		bool                                               Clear_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDoppelgangerSpell1_C::GetNickname(bool Clear_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNickname");

	UDoppelgangerSpell1_C_GetNickname_Params params {};
	params.Clear_ = Clear_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameServer
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Clear_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDoppelgangerSpell1_C::GetNicknameServer(class UObject* Actor, bool Clear_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameServer");

	UDoppelgangerSpell1_C_GetNicknameServer_Params params {};
	params.Actor = Actor;
	params.Clear_ = Clear_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameMulticast
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Clear_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDoppelgangerSpell1_C::GetNicknameMulticast(class UObject* Actor, bool Clear_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameMulticast");

	UDoppelgangerSpell1_C_GetNicknameMulticast_Params params {};
	params.Actor = Actor;
	params.Clear_ = Clear_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.Timer
//		Flags  -> ()
void UDoppelgangerSpell1_C::Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.Timer");

	UDoppelgangerSpell1_C_Timer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoppelgangerSpell1.DoppelgangerSpell1_C.ExecuteUbergraph_DoppelgangerSpell1
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoppelgangerSpell1_C::ExecuteUbergraph_DoppelgangerSpell1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoppelgangerSpell1.DoppelgangerSpell1_C.ExecuteUbergraph_DoppelgangerSpell1");

	UDoppelgangerSpell1_C_ExecuteUbergraph_DoppelgangerSpell1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
