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
//		Name   -> Function Doppelganger.Doppelganger_C.CheckMoved
//		Flags  -> ()
// Parameters:
//		bool                                               PressedAndMoved                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               NotPressedAndMoved                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::CheckMoved(bool* PressedAndMoved, bool* NotPressedAndMoved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.CheckMoved");

	ADoppelganger_C_CheckMoved_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PressedAndMoved != nullptr)
		*PressedAndMoved = params.PressedAndMoved;
	if (NotPressedAndMoved != nullptr)
		*NotPressedAndMoved = params.NotPressedAndMoved;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PropJumpWall
//		Flags  -> ()
// Parameters:
//		float                                              Jump                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::PropJumpWall(float Jump)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PropJumpWall");

	ADoppelganger_C_PropJumpWall_Params params {};
	params.Jump = Jump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PropJump
//		Flags  -> ()
// Parameters:
//		float                                              Jump                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::PropJump(float Jump)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PropJump");

	ADoppelganger_C_PropJump_Params params {};
	params.Jump = Jump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Timeline_1_0__FinishedFunc
//		Flags  -> ()
void ADoppelganger_C::Timeline_1_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Timeline_1_0__FinishedFunc");

	ADoppelganger_C_Timeline_1_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Timeline_1_0__UpdateFunc
//		Flags  -> ()
void ADoppelganger_C::Timeline_1_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Timeline_1_0__UpdateFunc");

	ADoppelganger_C_Timeline_1_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Timeline_2_0__FinishedFunc
//		Flags  -> ()
void ADoppelganger_C::Timeline_2_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Timeline_2_0__FinishedFunc");

	ADoppelganger_C_Timeline_2_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Timeline_2_0__UpdateFunc
//		Flags  -> ()
void ADoppelganger_C::Timeline_2_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Timeline_2_0__UpdateFunc");

	ADoppelganger_C_Timeline_2_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Timeline_6_0__FinishedFunc
//		Flags  -> ()
void ADoppelganger_C::Timeline_6_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Timeline_6_0__FinishedFunc");

	ADoppelganger_C_Timeline_6_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Timeline_6_0__UpdateFunc
//		Flags  -> ()
void ADoppelganger_C::Timeline_6_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Timeline_6_0__UpdateFunc");

	ADoppelganger_C_Timeline_6_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Run_K2Node_InputActionEvent_11
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Run_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Run_K2Node_InputActionEvent_11");

	ADoppelganger_C_InpActEvt_Run_K2Node_InputActionEvent_11_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Run_K2Node_InputActionEvent_10
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Run_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Run_K2Node_InputActionEvent_10");

	ADoppelganger_C_InpActEvt_Run_K2Node_InputActionEvent_10_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Jump_K2Node_InputActionEvent_9
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Jump_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Jump_K2Node_InputActionEvent_9");

	ADoppelganger_C_InpActEvt_Jump_K2Node_InputActionEvent_9_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Jump_K2Node_InputActionEvent_8
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Jump_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Jump_K2Node_InputActionEvent_8");

	ADoppelganger_C_InpActEvt_Jump_K2Node_InputActionEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C. Pick Up Survivor_K2Node_InputActionEvent_7
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::_Pick_Up_Survivor_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C. Pick Up Survivor_K2Node_InputActionEvent_7");

	ADoppelganger_C__Pick_Up_Survivor_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C. Pick Up Survivor_K2Node_InputActionEvent_6
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::_Pick_Up_Survivor_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C. Pick Up Survivor_K2Node_InputActionEvent_6");

	ADoppelganger_C__Pick_Up_Survivor_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_5
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Use_Skill_2_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_5");

	ADoppelganger_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_4
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_4");

	ADoppelganger_C_InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Attack_K2Node_InputActionEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Attack_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Attack_K2Node_InputActionEvent_3");

	ADoppelganger_C_InpActEvt_Attack_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2");

	ADoppelganger_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ADoppelganger_C::InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1");

	ADoppelganger_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ReceiveBeginPlay
//		Flags  -> ()
void ADoppelganger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ReceiveBeginPlay");

	ADoppelganger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ReceiveTick");

	ADoppelganger_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PhysicsTick
//		Flags  -> ()
// Parameters:
//		float                                              SubstepDeltaTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::PhysicsTick(float SubstepDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PhysicsTick");

	ADoppelganger_C_PhysicsTick_Params params {};
	params.SubstepDeltaTime = SubstepDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ServerProp
//		Flags  -> ()
// Parameters:
//		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::ServerProp(class AActor* HitActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ServerProp");

	ADoppelganger_C_ServerProp_Params params {};
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.MulticastProp
//		Flags  -> ()
// Parameters:
//		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::MulticastProp(class AActor* HitActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.MulticastProp");

	ADoppelganger_C_MulticastProp_Params params {};
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.CapsuleComponentChangeLocation
//		Flags  -> ()
void ADoppelganger_C::CapsuleComponentChangeLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.CapsuleComponentChangeLocation");

	ADoppelganger_C_CapsuleComponentChangeLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ItemMovementEvent
//		Flags  -> ()
void ADoppelganger_C::ItemMovementEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ItemMovementEvent");

	ADoppelganger_C_ItemMovementEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SetVectors
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    AxisRotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::SetVectors(const struct FVector& Forward, const struct FVector& Right, const struct FRotator& AxisRotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SetVectors");

	ADoppelganger_C_SetVectors_Params params {};
	params.Forward = Forward;
	params.Right = Right;
	params.AxisRotator = AxisRotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ServerPerson
//		Flags  -> ()
// Parameters:
//		bool                                               TimerOver_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::ServerPerson(bool TimerOver_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ServerPerson");

	ADoppelganger_C_ServerPerson_Params params {};
	params.TimerOver_ = TimerOver_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.MulticastPerson
//		Flags  -> ()
// Parameters:
//		bool                                               TimerOver_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::MulticastPerson(bool TimerOver_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.MulticastPerson");

	ADoppelganger_C_MulticastPerson_Params params {};
	params.TimerOver_ = TimerOver_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PropOutlineEffect
//		Flags  -> ()
void ADoppelganger_C::PropOutlineEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PropOutlineEffect");

	ADoppelganger_C_PropOutlineEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.RotateEvent
//		Flags  -> ()
void ADoppelganger_C::RotateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.RotateEvent");

	ADoppelganger_C_RotateEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ServerPropJump
//		Flags  -> ()
// Parameters:
//		float                                              JumpAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Wall_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::ServerPropJump(float JumpAlpha, bool Wall_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ServerPropJump");

	ADoppelganger_C_ServerPropJump_Params params {};
	params.JumpAlpha = JumpAlpha;
	params.Wall_ = Wall_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.MulticastPropJump
//		Flags  -> ()
// Parameters:
//		float                                              JumpAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Wall_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::MulticastPropJump(float JumpAlpha, bool Wall_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.MulticastPropJump");

	ADoppelganger_C_MulticastPropJump_Params params {};
	params.JumpAlpha = JumpAlpha;
	params.Wall_ = Wall_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PropJumpSound
//		Flags  -> ()
// Parameters:
//		float                                              JumpAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Wall_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::PropJumpSound(float JumpAlpha, bool Wall_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PropJumpSound");

	ADoppelganger_C_PropJumpSound_Params params {};
	params.JumpAlpha = JumpAlpha;
	params.Wall_ = Wall_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.GetSurvNickname
//		Flags  -> ()
// Parameters:
//		bool                                               ClearNickname_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::GetSurvNickname(bool ClearNickname_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.GetSurvNickname");

	ADoppelganger_C_GetSurvNickname_Params params {};
	params.ClearNickname_ = ClearNickname_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.EndJumpCheck
//		Flags  -> ()
void ADoppelganger_C::EndJumpCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.EndJumpCheck");

	ADoppelganger_C_EndJumpCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ServerPropSound
//		Flags  -> ()
void ADoppelganger_C::ServerPropSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ServerPropSound");

	ADoppelganger_C_ServerPropSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.MulticastPropSound
//		Flags  -> ()
void ADoppelganger_C::MulticastPropSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.MulticastPropSound");

	ADoppelganger_C_MulticastPropSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ADoppelganger_C::BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");

	ADoppelganger_C_BndEvt__PlayerStaticMesh_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.GetCurrentCapsuleValues
//		Flags  -> ()
void ADoppelganger_C::GetCurrentCapsuleValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.GetCurrentCapsuleValues");

	ADoppelganger_C_GetCurrentCapsuleValues_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AtackAudio
//		Flags  -> ()
void ADoppelganger_C::AtackAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AtackAudio");

	ADoppelganger_C_AtackAudio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AttackAudioServ
//		Flags  -> ()
void ADoppelganger_C::AttackAudioServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AttackAudioServ");

	ADoppelganger_C_AttackAudioServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AttackAudioMulti
//		Flags  -> ()
void ADoppelganger_C::AttackAudioMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AttackAudioMulti");

	ADoppelganger_C_AttackAudioMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.LocalProp
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::LocalProp(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.LocalProp");

	ADoppelganger_C_LocalProp_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.LocalPerson
//		Flags  -> ()
// Parameters:
//		bool                                               TimerOver_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::LocalPerson(bool TimerOver_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.LocalPerson");

	ADoppelganger_C_LocalPerson_Params params {};
	params.TimerOver_ = TimerOver_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.KillerCatchSound
//		Flags  -> ()
void ADoppelganger_C::KillerCatchSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.KillerCatchSound");

	ADoppelganger_C_KillerCatchSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.KillerLaugh
//		Flags  -> ()
void ADoppelganger_C::KillerLaugh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.KillerLaugh");

	ADoppelganger_C_KillerLaugh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AfterJumpMulti
//		Flags  -> ()
void ADoppelganger_C::AfterJumpMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AfterJumpMulti");

	ADoppelganger_C_AfterJumpMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.JumpSoundKillerMulti
//		Flags  -> ()
void ADoppelganger_C::JumpSoundKillerMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.JumpSoundKillerMulti");

	ADoppelganger_C_JumpSoundKillerMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AnimationFootstepsActivation
//		Flags  -> ()
void ADoppelganger_C::AnimationFootstepsActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AnimationFootstepsActivation");

	ADoppelganger_C_AnimationFootstepsActivation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.KnifeToggle
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               OnFPP_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::KnifeToggle(bool On_, bool OnFPP_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.KnifeToggle");

	ADoppelganger_C_KnifeToggle_Params params {};
	params.On_ = On_;
	params.OnFPP_ = OnFPP_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ParticleToggle
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::ParticleToggle(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ParticleToggle");

	ADoppelganger_C_ParticleToggle_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AtackAnimMulti
//		Flags  -> ()
void ADoppelganger_C::AtackAnimMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AtackAnimMulti");

	ADoppelganger_C_AtackAnimMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.BlindSound
//		Flags  -> ()
void ADoppelganger_C::BlindSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.BlindSound");

	ADoppelganger_C_BlindSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.KillerDetectMulti
//		Flags  -> ()
void ADoppelganger_C::KillerDetectMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.KillerDetectMulti");

	ADoppelganger_C_KillerDetectMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PickUp Multi
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::PickUp_Multi(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PickUp Multi");

	ADoppelganger_C_PickUp_Multi_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.DropMulti
//		Flags  -> ()
void ADoppelganger_C::DropMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.DropMulti");

	ADoppelganger_C_DropMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ToChairMulti
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::ToChairMulti(class AHypnoChairBP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ToChairMulti");

	ADoppelganger_C_ToChairMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SurvRunAwayMulti
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         hellpSurv                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Flashed_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SurvRunAwayMulti");

	ADoppelganger_C_SurvRunAwayMulti_Params params {};
	params.NewParam = NewParam;
	params.hellpSurv = hellpSurv;
	params.Flashed_ = Flashed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.DelayOffMulti
//		Flags  -> ()
void ADoppelganger_C::DelayOffMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.DelayOffMulti");

	ADoppelganger_C_DelayOffMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.LocalParticleToggle
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::LocalParticleToggle(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.LocalParticleToggle");

	ADoppelganger_C_LocalParticleToggle_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.FakeAnimationServer
//		Flags  -> ()
// Parameters:
//		bool                                               Alarm_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Healing_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               OffAll_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::FakeAnimationServer(bool Alarm_, bool Healing_, bool OffAll_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.FakeAnimationServer");

	ADoppelganger_C_FakeAnimationServer_Params params {};
	params.Alarm_ = Alarm_;
	params.Healing_ = Healing_;
	params.OffAll_ = OffAll_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.FakeAnimationMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               Alarm_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Healing_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               OffAll_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::FakeAnimationMulticast(bool Alarm_, bool Healing_, bool OffAll_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.FakeAnimationMulticast");

	ADoppelganger_C_FakeAnimationMulticast_Params params {};
	params.Alarm_ = Alarm_;
	params.Healing_ = Healing_;
	params.OffAll_ = OffAll_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SpawnCoins
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::SpawnCoins(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SpawnCoins");

	ADoppelganger_C_SpawnCoins_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StunBySurvivor
//		Flags  -> ()
// Parameters:
//		float                                              StunTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         helpSurv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::StunBySurvivor(float StunTime, class ASurvivorMasterBP_C* helpSurv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StunBySurvivor");

	ADoppelganger_C_StunBySurvivor_Params params {};
	params.StunTime = StunTime;
	params.helpSurv = helpSurv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.CheckMoveServer
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::CheckMoveServer(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.CheckMoveServer");

	ADoppelganger_C_CheckMoveServer_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.HealSound
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::HealSound(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.HealSound");

	ADoppelganger_C_HealSound_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.HealSoundServer
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::HealSoundServer(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.HealSoundServer");

	ADoppelganger_C_HealSoundServer_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.HealSoundMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::HealSoundMulticast(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.HealSoundMulticast");

	ADoppelganger_C_HealSoundMulticast_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AlarmSoundServer
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::AlarmSoundServer(bool On_, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AlarmSoundServer");

	ADoppelganger_C_AlarmSoundServer_Params params {};
	params.On_ = On_;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.AlarmsSoundMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::AlarmsSoundMulticast(bool On_, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.AlarmsSoundMulticast");

	ADoppelganger_C_AlarmsSoundMulticast_Params params {};
	params.On_ = On_;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StopFakeAnim
//		Flags  -> ()
void ADoppelganger_C::StopFakeAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StopFakeAnim");

	ADoppelganger_C_StopFakeAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StartAnimShot
//		Flags  -> ()
void ADoppelganger_C::StartAnimShot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StartAnimShot");

	ADoppelganger_C_StartAnimShot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StartAnimShotServ
//		Flags  -> ()
void ADoppelganger_C::StartAnimShotServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StartAnimShotServ");

	ADoppelganger_C_StartAnimShotServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StartAnimShotMulti
//		Flags  -> ()
void ADoppelganger_C::StartAnimShotMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StartAnimShotMulti");

	ADoppelganger_C_StartAnimShotMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SeekMulti
//		Flags  -> ()
void ADoppelganger_C::SeekMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SeekMulti");

	ADoppelganger_C_SeekMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_7
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::InpAxisEvt_Forward_K2Node_InputAxisEvent_7(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_7");

	ADoppelganger_C_InpAxisEvt_Forward_K2Node_InputAxisEvent_7_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_8
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::InpAxisEvt_Backward_K2Node_InputAxisEvent_8(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_8");

	ADoppelganger_C_InpAxisEvt_Backward_K2Node_InputAxisEvent_8_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpAxisEvt_Left_K2Node_InputAxisEvent_9
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::InpAxisEvt_Left_K2Node_InputAxisEvent_9(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpAxisEvt_Left_K2Node_InputAxisEvent_9");

	ADoppelganger_C_InpAxisEvt_Left_K2Node_InputAxisEvent_9_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InpAxisEvt_Right_K2Node_InputAxisEvent_10
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::InpAxisEvt_Right_K2Node_InputAxisEvent_10(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InpAxisEvt_Right_K2Node_InputAxisEvent_10");

	ADoppelganger_C_InpAxisEvt_Right_K2Node_InputAxisEvent_10_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.WallJumpParticleServer
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
void ADoppelganger_C::WallJumpParticleServer(const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.WallJumpParticleServer");

	ADoppelganger_C_WallJumpParticleServer_Params params {};
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.WallJumpParticleMulticast
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
void ADoppelganger_C::WallJumpParticleMulticast(const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.WallJumpParticleMulticast");

	ADoppelganger_C_WallJumpParticleMulticast_Params params {};
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.HUD_JumpIn
//		Flags  -> ()
void ADoppelganger_C::HUD_JumpIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.HUD_JumpIn");

	ADoppelganger_C_HUD_JumpIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.HUD_JumpOut
//		Flags  -> ()
void ADoppelganger_C::HUD_JumpOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.HUD_JumpOut");

	ADoppelganger_C_HUD_JumpOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.NicknameProp
//		Flags  -> ()
void ADoppelganger_C::NicknameProp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.NicknameProp");

	ADoppelganger_C_NicknameProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.NicknameLerp
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::NicknameLerp(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.NicknameLerp");

	ADoppelganger_C_NicknameLerp_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.CheckPressedAndMoved
//		Flags  -> ()
void ADoppelganger_C::CheckPressedAndMoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.CheckPressedAndMoved");

	ADoppelganger_C_CheckPressedAndMoved_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StaminaDecrease
//		Flags  -> ()
void ADoppelganger_C::StaminaDecrease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StaminaDecrease");

	ADoppelganger_C_StaminaDecrease_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.StaminaIncrease
//		Flags  -> ()
void ADoppelganger_C::StaminaIncrease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.StaminaIncrease");

	ADoppelganger_C_StaminaIncrease_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.JumpSoundKillerLocal
//		Flags  -> ()
void ADoppelganger_C::JumpSoundKillerLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.JumpSoundKillerLocal");

	ADoppelganger_C_JumpSoundKillerLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.CapsuleSet
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::CapsuleSet(bool Surv_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.CapsuleSet");

	ADoppelganger_C_CapsuleSet_Params params {};
	params.Surv_ = Surv_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ReturnPersonTimerEnd
//		Flags  -> ()
void ADoppelganger_C::ReturnPersonTimerEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ReturnPersonTimerEnd");

	ADoppelganger_C_ReturnPersonTimerEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.PointsTick
//		Flags  -> ()
void ADoppelganger_C::PointsTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.PointsTick");

	ADoppelganger_C_PointsTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InteractPressed
//		Flags  -> ()
void ADoppelganger_C::InteractPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InteractPressed");

	ADoppelganger_C_InteractPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.InteractReleased
//		Flags  -> ()
void ADoppelganger_C::InteractReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.InteractReleased");

	ADoppelganger_C_InteractReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SurvRunawaySound
//		Flags  -> ()
void ADoppelganger_C::SurvRunawaySound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SurvRunawaySound");

	ADoppelganger_C_SurvRunawaySound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SetKIllerVisibleToSurv
//		Flags  -> ()
void ADoppelganger_C::SetKIllerVisibleToSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SetKIllerVisibleToSurv");

	ADoppelganger_C_SetKIllerVisibleToSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.SetKillerNotVisibleToSurv
//		Flags  -> ()
void ADoppelganger_C::SetKillerNotVisibleToSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.SetKillerNotVisibleToSurv");

	ADoppelganger_C_SetKillerNotVisibleToSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.Glue
//		Flags  -> ()
// Parameters:
//		float                                              B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::Glue(float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.Glue");

	ADoppelganger_C_Glue_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.YellowJar
//		Flags  -> ()
// Parameters:
//		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::YellowJar(float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.YellowJar");

	ADoppelganger_C_YellowJar_Params params {};
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.ExecuteUbergraph_Doppelganger
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoppelganger_C::ExecuteUbergraph_Doppelganger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.ExecuteUbergraph_Doppelganger");

	ADoppelganger_C_ExecuteUbergraph_Doppelganger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Doppelganger.Doppelganger_C.IsProp__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               IsProp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoppelganger_C::IsProp__DelegateSignature(bool IsProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Doppelganger.Doppelganger_C.IsProp__DelegateSignature");

	ADoppelganger_C_IsProp__DelegateSignature_Params params {};
	params.IsProp = IsProp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
