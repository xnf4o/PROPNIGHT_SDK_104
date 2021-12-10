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
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HeadRotationFunc
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::HeadRotationFunc(struct FRotator* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HeadRotationFunc");

	AKillerMasterBP_C_HeadRotationFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AddWiggleParasiteMovement
//		Flags  -> ()
// Parameters:
//		float                                              WigglePower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::AddWiggleParasiteMovement(float WigglePower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AddWiggleParasiteMovement");

	AKillerMasterBP_C_AddWiggleParasiteMovement_Params params {};
	params.WigglePower = WigglePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.get level name
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AKillerMasterBP_C::get_level_name(bool* B, struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.get level name");

	AKillerMasterBP_C_get_level_name_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;
	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurfaceSoundPlayer
//		Flags  -> ()
// Parameters:
//		class UFMODEvent*                                  Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurfaceSoundPlayer(class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurfaceSoundPlayer");

	AKillerMasterBP_C_SurfaceSoundPlayer_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairCheckFunc
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::ChairCheckFunc(bool* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairCheckFunc");

	AKillerMasterBP_C_ChairCheckFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ScreenshotFunc
//		Flags  -> ()
void AKillerMasterBP_C::ScreenshotFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ScreenshotFunc");

	AKillerMasterBP_C_ScreenshotFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MoveSoundFunc
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::MoveSoundFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MoveSoundFunc");

	AKillerMasterBP_C_MoveSoundFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AlarmBrokeTimer
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::AlarmBrokeTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AlarmBrokeTimer");

	AKillerMasterBP_C_AlarmBrokeTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.coinDropper
//		Flags  -> ()
// Parameters:
//		bool                                               Flashlight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               local_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::coinDropper(bool Flashlight, class ASurvivorMasterBP_C* Surv, bool local_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.coinDropper");

	AKillerMasterBP_C_coinDropper_Params params {};
	params.Flashlight = Flashlight;
	params.Surv = Surv;
	params.local_ = local_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.NewFunction_2
//		Flags  -> ()
void AKillerMasterBP_C::NewFunction_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.NewFunction_2");

	AKillerMasterBP_C_NewFunction_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SeeOtherKillers
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::SeeOtherKillers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SeeOtherKillers");

	AKillerMasterBP_C_SeeOtherKillers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickupSpeed
//		Flags  -> ()
// Parameters:
//		bool                                               pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::PickupSpeed(bool pickup, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickupSpeed");

	AKillerMasterBP_C_PickupSpeed_Params params {};
	params.pickup = pickup;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Hypno Chair Ref Killer
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::Hypno_Chair_Ref_Killer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Hypno Chair Ref Killer");

	AKillerMasterBP_C_Hypno_Chair_Ref_Killer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvSeeAddTimer
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              timeAdd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Close_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurvSeeAddTimer(class ASurvivorMasterBP_C* SurvRef, float timeAdd, bool Close_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvSeeAddTimer");

	AKillerMasterBP_C_SurvSeeAddTimer_Params params {};
	params.SurvRef = SurvRef;
	params.timeAdd = timeAdd;
	params.Close_ = Close_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvSeeTimer
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::SurvSeeTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvSeeTimer");

	AKillerMasterBP_C_SurvSeeTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Melee Keymaster?
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::Melee_Keymaster_(bool* B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Melee Keymaster?");

	AKillerMasterBP_C_Melee_Keymaster__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BloodLust
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::BloodLust()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BloodLust");

	AKillerMasterBP_C_BloodLust_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaseOffGameEnd
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::ChaseOffGameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaseOffGameEnd");

	AKillerMasterBP_C_ChaseOffGameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Game Mode
//		Flags  -> ()
// Parameters:
//		bool                                               Propnight_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::Game_Mode(bool* Propnight_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Game Mode");

	AKillerMasterBP_C_Game_Mode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Propnight_ != nullptr)
		*Propnight_ = params.Propnight_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.OnRep_Stunned?
//		Flags  -> ()
void AKillerMasterBP_C::OnRep_Stunned_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.OnRep_Stunned?");

	AKillerMasterBP_C_OnRep_Stunned__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DynamicMatInit
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::DynamicMatInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DynamicMatInit");

	AKillerMasterBP_C_DynamicMatInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvChaser
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::SurvChaser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvChaser");

	AKillerMasterBP_C_SurvChaser_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.OnRep_HandAttack
//		Flags  -> ()
void AKillerMasterBP_C::OnRep_HandAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.OnRep_HandAttack");

	AKillerMasterBP_C_OnRep_HandAttack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ElevatorTrace
//		Flags  -> ()
void AKillerMasterBP_C::ElevatorTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ElevatorTrace");

	AKillerMasterBP_C_ElevatorTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Surf Track 3000
//		Flags  -> ()
// Parameters:
//		float                                              TimeIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::Surf_Track_3000(float TimeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Surf Track 3000");

	AKillerMasterBP_C_Surf_Track_3000_Params params {};
	params.TimeIn = TimeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.surv to chair
//		Flags  -> ()
void AKillerMasterBP_C::surv_to_chair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.surv to chair");

	AKillerMasterBP_C_surv_to_chair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GetSurvCrawlInBox
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::GetSurvCrawlInBox(bool* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GetSurvCrawlInBox");

	AKillerMasterBP_C_GetSurvCrawlInBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.NewFunction_1
//		Flags  -> ()
void AKillerMasterBP_C::NewFunction_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.NewFunction_1");

	AKillerMasterBP_C_NewFunction_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LocationChangerKiller
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::LocationChangerKiller(class AActor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LocationChangerKiller");

	AKillerMasterBP_C_LocationChangerKiller_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LocationCheckForSurv
//		Flags  -> ()
// Parameters:
//		bool                                               Hit_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::LocationCheckForSurv(bool* Hit_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LocationCheckForSurv");

	AKillerMasterBP_C_LocationCheckForSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hit_ != nullptr)
		*Hit_ = params.Hit_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvHpCalc
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRefIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DamageIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Bool                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurvHpCalc(class ASurvivorMasterBP_C* SurvRefIn, int DamageIn, bool* Bool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvHpCalc");

	AKillerMasterBP_C_SurvHpCalc_Params params {};
	params.SurvRefIn = SurvRefIn;
	params.DamageIn = DamageIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurfaceSound
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurfaceSound(TEnumAsByte<PhysicsCore_EPhysicalSurface> InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurfaceSound");

	AKillerMasterBP_C_SurfaceSound_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpeedDown
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::SpeedDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpeedDown");

	AKillerMasterBP_C_SpeedDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpeedUp
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::SpeedUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpeedUp");

	AKillerMasterBP_C_SpeedUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.reduceMaxWalkSpeed
//		Flags  -> ()
// Parameters:
//		float                                              MaxSpeedPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::reduceMaxWalkSpeed(float MaxSpeedPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.reduceMaxWalkSpeed");

	AKillerMasterBP_C_reduceMaxWalkSpeed_Params params {};
	params.MaxSpeedPercent = MaxSpeedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MouseClickStopwatch
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SuperSmash_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::MouseClickStopwatch(float A, bool* SuperSmash_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MouseClickStopwatch");

	AKillerMasterBP_C_MouseClickStopwatch_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SuperSmash_ != nullptr)
		*SuperSmash_ = params.SuperSmash_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.impulse forward
//		Flags  -> ()
// Parameters:
//		class UCharacterMovementComponent*                 self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCharacterMovementComponent*                 self3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::impulse_forward(class UCharacterMovementComponent* self2, class UCharacterMovementComponent* self3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.impulse forward");

	AKillerMasterBP_C_impulse_forward_Params params {};
	params.self2 = self2;
	params.self3 = self3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Forward
//		Flags  -> ()
// Parameters:
void AKillerMasterBP_C::Forward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Forward");

	AKillerMasterBP_C_Forward_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_0__FinishedFunc");

	AKillerMasterBP_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_0__UpdateFunc");

	AKillerMasterBP_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::IncreasorSpeed__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__FinishedFunc");

	AKillerMasterBP_C_IncreasorSpeed__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::IncreasorSpeed__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreasorSpeed__UpdateFunc");

	AKillerMasterBP_C_IncreasorSpeed__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::DecreasorSpeed__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__FinishedFunc");

	AKillerMasterBP_C_DecreasorSpeed__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::DecreasorSpeed__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreasorSpeed__UpdateFunc");

	AKillerMasterBP_C_DecreasorSpeed__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::SoundTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__FinishedFunc");

	AKillerMasterBP_C_SoundTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::SoundTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SoundTimeline__UpdateFunc");

	AKillerMasterBP_C_SoundTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::StopSoundChaseTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__FinishedFunc");

	AKillerMasterBP_C_StopSoundChaseTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::StopSoundChaseTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StopSoundChaseTimeline__UpdateFunc");

	AKillerMasterBP_C_StopSoundChaseTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_1__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_1__FinishedFunc");

	AKillerMasterBP_C_Timeline_1__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_1__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_1__UpdateFunc");

	AKillerMasterBP_C_Timeline_1__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_2__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_2__FinishedFunc");

	AKillerMasterBP_C_Timeline_2__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_2__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_2__UpdateFunc");

	AKillerMasterBP_C_Timeline_2__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_3__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_3__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_3__FinishedFunc");

	AKillerMasterBP_C_Timeline_3__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_3__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_3__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_3__UpdateFunc");

	AKillerMasterBP_C_Timeline_3__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_4__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_4__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_4__FinishedFunc");

	AKillerMasterBP_C_Timeline_4__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_4__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_4__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_4__UpdateFunc");

	AKillerMasterBP_C_Timeline_4__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::ScaleSizer__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__FinishedFunc");

	AKillerMasterBP_C_ScaleSizer__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::ScaleSizer__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ScaleSizer__UpdateFunc");

	AKillerMasterBP_C_ScaleSizer__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::AfterStunColor__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__FinishedFunc");

	AKillerMasterBP_C_AfterStunColor__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::AfterStunColor__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AfterStunColor__UpdateFunc");

	AKillerMasterBP_C_AfterStunColor__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_5__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_5__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_5__FinishedFunc");

	AKillerMasterBP_C_Timeline_5__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_5__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_5__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_5__UpdateFunc");

	AKillerMasterBP_C_Timeline_5__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_6__FinishedFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_6__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_6__FinishedFunc");

	AKillerMasterBP_C_Timeline_6__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Timeline_6__UpdateFunc
//		Flags  -> ()
void AKillerMasterBP_C::Timeline_6__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Timeline_6__UpdateFunc");

	AKillerMasterBP_C_Timeline_6__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Released
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Released");

	AKillerMasterBP_C_InpTchEvt_Released_Params params {};
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Pressed
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<InputCore_ETouchIndex>                 FingerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpTchEvt_Pressed");

	AKillerMasterBP_C_InpTchEvt_Pressed_Params params {};
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_5
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_5");

	AKillerMasterBP_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_4
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Jump_K2Node_InputActionEvent_4");

	AKillerMasterBP_C_InpActEvt_Jump_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_14
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Add_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_14");

	AKillerMasterBP_C_InpActEvt_Add_K2Node_InputKeyEvent_14_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Subtract_K2Node_InputKeyEvent_13
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Subtract_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Subtract_K2Node_InputKeyEvent_13");

	AKillerMasterBP_C_InpActEvt_Subtract_K2Node_InputKeyEvent_13_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F3_K2Node_InputKeyEvent_12
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_F3_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F3_K2Node_InputKeyEvent_12");

	AKillerMasterBP_C_InpActEvt_F3_K2Node_InputKeyEvent_12_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_11
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_11");

	AKillerMasterBP_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_11_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10");

	AKillerMasterBP_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_10_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F2_K2Node_InputKeyEvent_9
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_F2_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_F2_K2Node_InputKeyEvent_9");

	AKillerMasterBP_C_InpActEvt_F2_K2Node_InputKeyEvent_9_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_8
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_8");

	AKillerMasterBP_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_7
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_7");

	AKillerMasterBP_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_6
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Multiply_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_6");

	AKillerMasterBP_C_InpActEvt_Multiply_K2Node_InputKeyEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::_Pick_Up_Survivor_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_3");

	AKillerMasterBP_C__Pick_Up_Survivor_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::_Pick_Up_Survivor_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C. Pick Up Survivor_K2Node_InputActionEvent_2");

	AKillerMasterBP_C__Pick_Up_Survivor_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Attack_K2Node_InputActionEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Attack_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Attack_K2Node_InputActionEvent_1");

	AKillerMasterBP_C_InpActEvt_Attack_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_J_K2Node_InputKeyEvent_5
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_J_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_J_K2Node_InputKeyEvent_5");

	AKillerMasterBP_C_InpActEvt_J_K2Node_InputKeyEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Divide_K2Node_InputKeyEvent_4
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Divide_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Divide_K2Node_InputKeyEvent_4");

	AKillerMasterBP_C_InpActEvt_Divide_K2Node_InputKeyEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_Add_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_Add_K2Node_InputKeyEvent_3");

	AKillerMasterBP_C_InpActEvt_Add_K2Node_InputKeyEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_2");

	AKillerMasterBP_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpActEvt_One_K2Node_InputKeyEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AKillerMasterBP_C::InpActEvt_One_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpActEvt_One_K2Node_InputKeyEvent_1");

	AKillerMasterBP_C_InpActEvt_One_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CustopDepth
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::CustopDepth(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CustopDepth");

	AKillerMasterBP_C_CustopDepth_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AlarmSee
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::AlarmSee(class AActor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AlarmSee");

	AKillerMasterBP_C_AlarmSee_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.pickup
//		Flags  -> ()
void AKillerMasterBP_C::pickup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.pickup");

	AKillerMasterBP_C_pickup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventServ
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             ChairRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChairOverlapEventServ(class AHypnoChairBP_C* ChairRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventServ");

	AKillerMasterBP_C_ChairOverlapEventServ_Params params {};
	params.ChairRef = ChairRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventMulti
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             ChairRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChairOverlapEventMulti(class AHypnoChairBP_C* ChairRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEventMulti");

	AKillerMasterBP_C_ChairOverlapEventMulti_Params params {};
	params.ChairRef = ChairRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.TeleportServer
//		Flags  -> ()
void AKillerMasterBP_C::TeleportServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.TeleportServer");

	AKillerMasterBP_C_TeleportServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.TeleportMulti
//		Flags  -> ()
void AKillerMasterBP_C::TeleportMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.TeleportMulti");

	AKillerMasterBP_C_TeleportMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	AKillerMasterBP_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOn
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASpyEye_C*                                   SpyEye                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvSpyEyeOn(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOn");

	AKillerMasterBP_C_SurvSpyEyeOn_Params params {};
	params.SurvRef = SurvRef;
	params.SpyEye = SpyEye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOff
//		Flags  -> ()
// Parameters:
//		class ASpyEye_C*                                   SpyEye                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvSpyEyeOff(class ASpyEye_C* SpyEye, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvSpyEyeOff");

	AKillerMasterBP_C_SurvSpyEyeOff_Params params {};
	params.SpyEye = SpyEye;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	AKillerMasterBP_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Hitter
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               knife                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               BackStab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               VampireBite                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::Hitter(class ASurvivorMasterBP_C* SurvRef, int Damage, bool knife, bool Range, bool BackStab, bool VampireBite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Hitter");

	AKillerMasterBP_C_Hitter_Params params {};
	params.SurvRef = SurvRef;
	params.Damage = Damage;
	params.knife = knife;
	params.Range = Range;
	params.BackStab = BackStab;
	params.VampireBite = VampireBite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeed
//		Flags  -> ()
// Parameters:
//		bool                                               Hited_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Range_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::DecreaseWalkSpeed(bool Hited_, bool Range_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeed");

	AKillerMasterBP_C_DecreaseWalkSpeed_Params params {};
	params.Hited_ = Hited_;
	params.Range_ = Range_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeedMulti
//		Flags  -> ()
void AKillerMasterBP_C::DecreaseWalkSpeedMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreaseWalkSpeedMulti");

	AKillerMasterBP_C_DecreaseWalkSpeedMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeed
//		Flags  -> ()
// Parameters:
//		bool                                               Hited                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Range_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::IncreaseWalkSpeed(bool Hited, bool Range_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeed");

	AKillerMasterBP_C_IncreaseWalkSpeed_Params params {};
	params.Hited = Hited;
	params.Range_ = Range_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeedMulti
//		Flags  -> ()
void AKillerMasterBP_C::IncreaseWalkSpeedMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreaseWalkSpeedMulti");

	AKillerMasterBP_C_IncreaseWalkSpeedMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AmmoSet
//		Flags  -> ()
// Parameters:
//		int                                                Ammo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::AmmoSet(int Ammo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AmmoSet");

	AKillerMasterBP_C_AmmoSet_Params params {};
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AmmoRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::AmmoRotation(const struct FRotator& Rotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AmmoRotation");

	AKillerMasterBP_C_AmmoRotation_Params params {};
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.RotationAtack
//		Flags  -> ()
void AKillerMasterBP_C::RotationAtack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.RotationAtack");

	AKillerMasterBP_C_RotationAtack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LocalRotationEvent
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::LocalRotationEvent(const struct FRotator& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LocalRotationEvent");

	AKillerMasterBP_C_LocalRotationEvent_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpeedChangeServ
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SpeedChangeServ(float NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpeedChangeServ");

	AKillerMasterBP_C_SpeedChangeServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.cdAtack
//		Flags  -> ()
void AKillerMasterBP_C::cdAtack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.cdAtack");

	AKillerMasterBP_C_cdAtack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEndServ
//		Flags  -> ()
void AKillerMasterBP_C::ChairOverlapEndServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairOverlapEndServ");

	AKillerMasterBP_C_ChairOverlapEndServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairOvelapEndMulti
//		Flags  -> ()
void AKillerMasterBP_C::ChairOvelapEndMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairOvelapEndMulti");

	AKillerMasterBP_C_ChairOvelapEndMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ExplosionSoundServ
//		Flags  -> ()
// Parameters:
//		class UStaticMeshComponent*                        bullet                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ExplosionSoundServ(class UStaticMeshComponent* bullet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ExplosionSoundServ");

	AKillerMasterBP_C_ExplosionSoundServ_Params params {};
	params.bullet = bullet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.FlashLightIncreaseSpeed
//		Flags  -> ()
void AKillerMasterBP_C::FlashLightIncreaseSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.FlashLightIncreaseSpeed");

	AKillerMasterBP_C_FlashLightIncreaseSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChek
//		Flags  -> ()
void AKillerMasterBP_C::ChairChek()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChek");

	AKillerMasterBP_C_ChairChek_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ThirdPersonCamEvent
//		Flags  -> ()
// Parameters:
//		bool                                               Now_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               NoDelay_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::ThirdPersonCamEvent(bool Now_, bool NoDelay_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ThirdPersonCamEvent");

	AKillerMasterBP_C_ThirdPersonCamEvent_Params params {};
	params.Now_ = Now_;
	params.NoDelay_ = NoDelay_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.FirstPersonCamEvent
//		Flags  -> ()
// Parameters:
//		bool                                               Now_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               NoDelay_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::FirstPersonCamEvent(bool Now_, bool NoDelay_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.FirstPersonCamEvent");

	AKillerMasterBP_C_FirstPersonCamEvent_Params params {};
	params.Now_ = Now_;
	params.NoDelay_ = NoDelay_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.RotationCameraServ
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::RotationCameraServ(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.RotationCameraServ");

	AKillerMasterBP_C_RotationCameraServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.RotationCameraMulti
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::RotationCameraMulti(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.RotationCameraMulti");

	AKillerMasterBP_C_RotationCameraMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AstralSoundIn
//		Flags  -> ()
void AKillerMasterBP_C::AstralSoundIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AstralSoundIn");

	AKillerMasterBP_C_AstralSoundIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AstralSoundOut
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::AstralSoundOut(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AstralSoundOut");

	AKillerMasterBP_C_AstralSoundOut_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AstralSoundInvisibility
//		Flags  -> ()
void AKillerMasterBP_C::AstralSoundInvisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AstralSoundInvisibility");

	AKillerMasterBP_C_AstralSoundInvisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SoundAmbStart
//		Flags  -> ()
void AKillerMasterBP_C::SoundAmbStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SoundAmbStart");

	AKillerMasterBP_C_SoundAmbStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AtackAudio
//		Flags  -> ()
void AKillerMasterBP_C::AtackAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AtackAudio");

	AKillerMasterBP_C_AtackAudio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpeedChangeMulti
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SpeedChangeMulti(float NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpeedChangeMulti");

	AKillerMasterBP_C_SpeedChangeMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SphereDrawServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SphereDrawServ(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SphereDrawServ");

	AKillerMasterBP_C_SphereDrawServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SphereDrawMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SphereDrawMulti(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SphereDrawMulti");

	AKillerMasterBP_C_SphereDrawMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AtackAnimServ
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::AtackAnimServ(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AtackAnimServ");

	AKillerMasterBP_C_AtackAnimServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AtackAnimMulti
//		Flags  -> ()
void AKillerMasterBP_C::AtackAnimMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AtackAnimMulti");

	AKillerMasterBP_C_AtackAnimMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MeshVisibiltyOff
//		Flags  -> ()
void AKillerMasterBP_C::MeshVisibiltyOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MeshVisibiltyOff");

	AKillerMasterBP_C_MeshVisibiltyOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MulticastChangeFootwear
//		Flags  -> ()
void AKillerMasterBP_C::MulticastChangeFootwear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MulticastChangeFootwear");

	AKillerMasterBP_C_MulticastChangeFootwear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DeleyerAttackCollision
//		Flags  -> ()
void AKillerMasterBP_C::DeleyerAttackCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DeleyerAttackCollision");

	AKillerMasterBP_C_DeleyerAttackCollision_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MeshVisibilityOn
//		Flags  -> ()
void AKillerMasterBP_C::MeshVisibilityOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MeshVisibilityOn");

	AKillerMasterBP_C_MeshVisibilityOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AmbientOff
//		Flags  -> ()
void AKillerMasterBP_C::AmbientOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AmbientOff");

	AKillerMasterBP_C_AmbientOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LaughServ
//		Flags  -> ()
void AKillerMasterBP_C::LaughServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LaughServ");

	AKillerMasterBP_C_LaughServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LaughMulti
//		Flags  -> ()
void AKillerMasterBP_C::LaughMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LaughMulti");

	AKillerMasterBP_C_LaughMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ServerChangeFootwear
//		Flags  -> ()
void AKillerMasterBP_C::ServerChangeFootwear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ServerChangeFootwear");

	AKillerMasterBP_C_ServerChangeFootwear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SetCharacterOwner
//		Flags  -> ()
void AKillerMasterBP_C::SetCharacterOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SetCharacterOwner");

	AKillerMasterBP_C_SetCharacterOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChangeFootState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFootState_EFootState>                 New_Style                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChangeFootState");

	AKillerMasterBP_C_ChangeFootState_Params params {};
	params.New_Style = New_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.XLocationMeshEv
//		Flags  -> ()
void AKillerMasterBP_C::XLocationMeshEv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.XLocationMeshEv");

	AKillerMasterBP_C_XLocationMeshEv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.JumpChek
//		Flags  -> ()
void AKillerMasterBP_C::JumpChek()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.JumpChek");

	AKillerMasterBP_C_JumpChek_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BeginFootprint
//		Flags  -> ()
void AKillerMasterBP_C::BeginFootprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BeginFootprint");

	AKillerMasterBP_C_BeginFootprint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnDecal
//		Flags  -> ()
// Parameters:
//		struct FName                                       SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               JumpStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               JumpEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ImProp_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Run_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Crouch_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Crawl_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Shake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnDecal");

	AKillerMasterBP_C_SpawnDecal_Params params {};
	params.SocketName = SocketName;
	params.Right = Right;
	params.Left = Left;
	params.JumpStart = JumpStart;
	params.JumpEnd = JumpEnd;
	params.Killer_ = Killer_;
	params.ImProp_ = ImProp_;
	params.Run_ = Run_;
	params.Crouch_ = Crouch_;
	params.FMODAudio = FMODAudio;
	params.KillerType = KillerType;
	params.Crawl_ = Crawl_;
	params.Shake = Shake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Chair Open Stage
//		Flags  -> ()
void AKillerMasterBP_C::Chair_Open_Stage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Chair Open Stage");

	AKillerMasterBP_C_Chair_Open_Stage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HitterServ
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Crawl                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Knife_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               BackStab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               VampireBite_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::HitterServ(class ASurvivorMasterBP_C* SurvRef, int Damage, bool Crawl, bool Knife_, bool Range, bool BackStab, bool VampireBite_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HitterServ");

	AKillerMasterBP_C_HitterServ_Params params {};
	params.SurvRef = SurvRef;
	params.Damage = Damage;
	params.Crawl = Crawl;
	params.Knife_ = Knife_;
	params.Range = Range;
	params.BackStab = BackStab;
	params.VampireBite_ = VampireBite_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StartAnimShot
//		Flags  -> ()
void AKillerMasterBP_C::StartAnimShot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StartAnimShot");

	AKillerMasterBP_C_StartAnimShot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PlantAnim
//		Flags  -> ()
void AKillerMasterBP_C::PlantAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PlantAnim");

	AKillerMasterBP_C_PlantAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PlantAnimServ
//		Flags  -> ()
void AKillerMasterBP_C::PlantAnimServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PlantAnimServ");

	AKillerMasterBP_C_PlantAnimServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PlantAnimMulti
//		Flags  -> ()
void AKillerMasterBP_C::PlantAnimMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PlantAnimMulti");

	AKillerMasterBP_C_PlantAnimMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HitterMulti
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Crawl                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::HitterMulti(class ASurvivorMasterBP_C* SurvRef, bool Crawl, bool Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HitterMulti");

	AKillerMasterBP_C_HitterMulti_Params params {};
	params.SurvRef = SurvRef;
	params.Crawl = Crawl;
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ShootAudio
//		Flags  -> ()
void AKillerMasterBP_C::ShootAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ShootAudio");

	AKillerMasterBP_C_ShootAudio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ActivateSurv
//		Flags  -> ()
void AKillerMasterBP_C::ActivateSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ActivateSurv");

	AKillerMasterBP_C_ActivateSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.hitSuface
//		Flags  -> ()
// Parameters:
//		bool                                               Range_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     norm                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::hitSuface(bool Range_, class UStaticMeshComponent* Mesh, const struct FVector& Loc, const struct FVector& norm, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.hitSuface");

	AKillerMasterBP_C_hitSuface_Params params {};
	params.Range_ = Range_;
	params.Mesh = Mesh;
	params.Loc = Loc;
	params.norm = norm;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairServ
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChairServ(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairServ");

	AKillerMasterBP_C_ChairServ_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairMulti
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChairMulti(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairMulti");

	AKillerMasterBP_C_ChairMulti_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvPropSound
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvPropSound(TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvPropSound");

	AKillerMasterBP_C_SurvPropSound_Params params {};
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurfaceServ
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurfaceServ(TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface, class UStaticMeshComponent* Mesh, bool Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurfaceServ");

	AKillerMasterBP_C_SurfaceServ_Params params {};
	params.Surface = Surface;
	params.Mesh = Mesh;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurfaceMulti
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurfaceMulti(TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface, class UStaticMeshComponent* Mesh, bool Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurfaceMulti");

	AKillerMasterBP_C_SurfaceMulti_Params params {};
	params.Surface = Surface;
	params.Mesh = Mesh;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvImpactSound
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               knife                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               BackStab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurvImpactSound(class ASurvivorMasterBP_C* Surv, bool knife, bool Range, bool BackStab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvImpactSound");

	AKillerMasterBP_C_SurvImpactSound_Params params {};
	params.Surv = Surv;
	params.knife = knife;
	params.Range = Range;
	params.BackStab = BackStab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundServ
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        damagType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvImpactSoundServ(class ASurvivorMasterBP_C* Surv, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> damagType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundServ");

	AKillerMasterBP_C_SurvImpactSoundServ_Params params {};
	params.Surv = Surv;
	params.damagType = damagType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundMulti
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<DamageTypeEnum_EDamageTypeEnum>        DmgType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvImpactSoundMulti(class ASurvivorMasterBP_C* Surv, TEnumAsByte<DamageTypeEnum_EDamageTypeEnum> DmgType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvImpactSoundMulti");

	AKillerMasterBP_C_SurvImpactSoundMulti_Params params {};
	params.Surv = Surv;
	params.DmgType = DmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairEvent
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChairEvent(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairEvent");

	AKillerMasterBP_C_ChairEvent_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LookUpServ
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::LookUpServ(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LookUpServ");

	AKillerMasterBP_C_LookUpServ_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LookUpMulti
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::LookUpMulti(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LookUpMulti");

	AKillerMasterBP_C_LookUpMulti_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.TurnServ
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::TurnServ(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.TurnServ");

	AKillerMasterBP_C_TurnServ_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.TurnMulti
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::TurnMulti(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.TurnMulti");

	AKillerMasterBP_C_TurnMulti_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SetKillerType
//		Flags  -> ()
// Parameters:
//		int                                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SetKillerType(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SetKillerType");

	AKillerMasterBP_C_SetKillerType_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CDATACKER
//		Flags  -> ()
void AKillerMasterBP_C::CDATACKER()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CDATACKER");

	AKillerMasterBP_C_CDATACKER_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillKnifeServ
//		Flags  -> ()
void AKillerMasterBP_C::KillKnifeServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillKnifeServ");

	AKillerMasterBP_C_KillKnifeServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillKnifeMulti
//		Flags  -> ()
void AKillerMasterBP_C::KillKnifeMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillKnifeMulti");

	AKillerMasterBP_C_KillKnifeMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KnifeShootSoundStart
//		Flags  -> ()
void AKillerMasterBP_C::KnifeShootSoundStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KnifeShootSoundStart");

	AKillerMasterBP_C_KnifeShootSoundStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KnifeSpawnSound
//		Flags  -> ()
void AKillerMasterBP_C::KnifeSpawnSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KnifeSpawnSound");

	AKillerMasterBP_C_KnifeSpawnSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.WeaponImpact
//		Flags  -> ()
// Parameters:
//		class UStaticMeshComponent*                        meshRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::WeaponImpact(class UStaticMeshComponent* meshRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.WeaponImpact");

	AKillerMasterBP_C_WeaponImpact_Params params {};
	params.meshRef = meshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundTrue
//		Flags  -> ()
void AKillerMasterBP_C::KnifeDetectorSoundTrue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundTrue");

	AKillerMasterBP_C_KnifeDetectorSoundTrue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundFalse
//		Flags  -> ()
void AKillerMasterBP_C::KnifeDetectorSoundFalse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KnifeDetectorSoundFalse");

	AKillerMasterBP_C_KnifeDetectorSoundFalse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HUDON
//		Flags  -> ()
void AKillerMasterBP_C::HUDON()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HUDON");

	AKillerMasterBP_C_HUDON_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Drop
//		Flags  -> ()
void AKillerMasterBP_C::Drop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Drop");

	AKillerMasterBP_C_Drop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InertCamera
//		Flags  -> ()
void AKillerMasterBP_C::InertCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InertCamera");

	AKillerMasterBP_C_InertCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HotkeyStarter
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::HotkeyStarter(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HotkeyStarter");

	AKillerMasterBP_C_HotkeyStarter_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.JumpFall
//		Flags  -> ()
void AKillerMasterBP_C::JumpFall()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.JumpFall");

	AKillerMasterBP_C_JumpFall_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39");

	AKillerMasterBP_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54");

	AKillerMasterBP_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedMulti
//		Flags  -> ()
// Parameters:
//		float                                              CurrentSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MultiplyTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::IncreaseSpeedMulti(float CurrentSpeed, float NewSpeed, float MultiplyTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedMulti");

	AKillerMasterBP_C_IncreaseSpeedMulti_Params params {};
	params.CurrentSpeed = CurrentSpeed;
	params.NewSpeed = NewSpeed;
	params.MultiplyTime = MultiplyTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedServ
//		Flags  -> ()
// Parameters:
//		float                                              CurrentSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MultiplyTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::IncreaseSpeedServ(float CurrentSpeed, float NewSpeed, float MultiplyTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreaseSpeedServ");

	AKillerMasterBP_C_IncreaseSpeedServ_Params params {};
	params.CurrentSpeed = CurrentSpeed;
	params.NewSpeed = NewSpeed;
	params.MultiplyTime = MultiplyTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedServ
//		Flags  -> ()
// Parameters:
//		float                                              CurrentSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MultiplyTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::DecreaseSpeedServ(float CurrentSpeed, float NewSpeed, float MultiplyTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedServ");

	AKillerMasterBP_C_DecreaseSpeedServ_Params params {};
	params.CurrentSpeed = CurrentSpeed;
	params.NewSpeed = NewSpeed;
	params.MultiplyTime = MultiplyTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedMulti
//		Flags  -> ()
// Parameters:
//		float                                              CurrentSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MultiplyTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::DecreaseSpeedMulti(float CurrentSpeed, float NewSpeed, float MultiplyTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreaseSpeedMulti");

	AKillerMasterBP_C_DecreaseSpeedMulti_Params params {};
	params.CurrentSpeed = CurrentSpeed;
	params.NewSpeed = NewSpeed;
	params.MultiplyTime = MultiplyTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MoveKiller
//		Flags  -> ()
void AKillerMasterBP_C::MoveKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MoveKiller");

	AKillerMasterBP_C_MoveKiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.offignorer
//		Flags  -> ()
void AKillerMasterBP_C::offignorer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.offignorer");

	AKillerMasterBP_C_offignorer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IncreaseReal
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::IncreaseReal(float NewParam, float NewParam2, float NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IncreaseReal");

	AKillerMasterBP_C_IncreaseReal_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreaseReal
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::DecreaseReal(float NewParam, float NewParam2, float NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreaseReal");

	AKillerMasterBP_C_DecreaseReal_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairMoveEvent
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChairMoveEvent(float NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairMoveEvent");

	AKillerMasterBP_C_ChairMoveEvent_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Marked
//		Flags  -> ()
void AKillerMasterBP_C::Marked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Marked");

	AKillerMasterBP_C_Marked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HeadRotatorServ
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::HeadRotatorServ(const struct FRotator& Rotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HeadRotatorServ");

	AKillerMasterBP_C_HeadRotatorServ_Params params {};
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HeadRotatorMulti
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::HeadRotatorMulti(const struct FRotator& Rotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HeadRotatorMulti");

	AKillerMasterBP_C_HeadRotatorMulti_Params params {};
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.RotatorHead
//		Flags  -> ()
void AKillerMasterBP_C::RotatorHead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.RotatorHead");

	AKillerMasterBP_C_RotatorHead_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CamEv
//		Flags  -> ()
void AKillerMasterBP_C::CamEv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CamEv");

	AKillerMasterBP_C_CamEv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CustomLMB
//		Flags  -> ()
void AKillerMasterBP_C::CustomLMB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CustomLMB");

	AKillerMasterBP_C_CustomLMB_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KnockDownSurvServ
//		Flags  -> ()
// Parameters:
//		bool                                               Crawl                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::KnockDownSurvServ(bool Crawl, bool Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KnockDownSurvServ");

	AKillerMasterBP_C_KnockDownSurvServ_Params params {};
	params.Crawl = Crawl;
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SendScore
//		Flags  -> ()
void AKillerMasterBP_C::SendScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SendScore");

	AKillerMasterBP_C_SendScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SendKillerType
//		Flags  -> ()
// Parameters:
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SendKillerType(int KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SendKillerType");

	AKillerMasterBP_C_SendKillerType_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ReceivePossessed
//		Flags  -> ()
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ReceivePossessed");

	AKillerMasterBP_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InitVoice
//		Flags  -> ()
void AKillerMasterBP_C::InitVoice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InitVoice");

	AKillerMasterBP_C_InitVoice_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              VoiceData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              MicLevel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature");

	AKillerMasterBP_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature_Params params {};
	params.VoiceData = VoiceData;
	params.MicLevel = MicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ServVoiceProc
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AKillerMasterBP_C::ServVoiceProc(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ServVoiceProc");

	AKillerMasterBP_C_ServVoiceProc_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ReceiveVoice
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AKillerMasterBP_C::ReceiveVoice(TArray<unsigned char> CompressedVoiceData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ReceiveVoice");

	AKillerMasterBP_C_ReceiveVoice_Params params {};
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SendVoiceStatusServer
//		Flags  -> ()
// Parameters:
//		bool                                               VoiceActive_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SendVoiceStatusServer(bool VoiceActive_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SendVoiceStatusServer");

	AKillerMasterBP_C_SendVoiceStatusServer_Params params {};
	params.VoiceActive_ = VoiceActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LoadSensivity
//		Flags  -> ()
void AKillerMasterBP_C::LoadSensivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LoadSensivity");

	AKillerMasterBP_C_LoadSensivity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ToChairMoveSurv
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ToChairMoveSurv(float NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ToChairMoveSurv");

	AKillerMasterBP_C_ToChairMoveSurv_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeServ
//		Flags  -> ()
// Parameters:
//		bool                                               See_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::MessegeToSurvSeeServ(bool See_, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeServ");

	AKillerMasterBP_C_MessegeToSurvSeeServ_Params params {};
	params.See_ = See_;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeMulti
//		Flags  -> ()
// Parameters:
//		bool                                               See_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::MessegeToSurvSeeMulti(bool See_, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MessegeToSurvSeeMulti");

	AKillerMasterBP_C_MessegeToSurvSeeMulti_Params params {};
	params.See_ = See_;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvLocationServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvLocationServ(const struct FVector& NewParam, const struct FRotator& NewParam2, class ASurvivorMasterBP_C* NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvLocationServ");

	AKillerMasterBP_C_SurvLocationServ_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvLocationMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SurvLocationMulti(const struct FVector& NewParam, const struct FRotator& NewParam2, class ASurvivorMasterBP_C* NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvLocationMulti");

	AKillerMasterBP_C_SurvLocationMulti_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickupAttachServ
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::PickupAttachServ(class ASurvivorMasterBP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickupAttachServ");

	AKillerMasterBP_C_PickupAttachServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickupAttachMulti
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::PickupAttachMulti(class ASurvivorMasterBP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickupAttachMulti");

	AKillerMasterBP_C_PickupAttachMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.EndGameFreeze
//		Flags  -> ()
void AKillerMasterBP_C::EndGameFreeze()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.EndGameFreeze");

	AKillerMasterBP_C_EndGameFreeze_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::SpawnHitParticlesServ(const struct FVector& Location, const struct FRotator& Rotation, bool IsHit, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesServ");

	AKillerMasterBP_C_SpawnHitParticlesServ_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;
	params.IsHit = IsHit;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::SpawnHitParticlesMulti(const struct FVector& Location, const struct FRotator& Rotation, bool IsHit, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesMulti");

	AKillerMasterBP_C_SpawnHitParticlesMulti_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;
	params.IsHit = IsHit;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CheckStatus
//		Flags  -> ()
void AKillerMasterBP_C::CheckStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CheckStatus");

	AKillerMasterBP_C_CheckStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.FailedChair
//		Flags  -> ()
void AKillerMasterBP_C::FailedChair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.FailedChair");

	AKillerMasterBP_C_FailedChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ElevatorInteract
//		Flags  -> ()
// Parameters:
//		class AElevator_C*                                 ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ElevatorInteract(class AElevator_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ElevatorInteract");

	AKillerMasterBP_C_ElevatorInteract_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SetLevelSystem
//		Flags  -> ()
void AKillerMasterBP_C::SetLevelSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SetLevelSystem");

	AKillerMasterBP_C_SetLevelSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DropMulti
//		Flags  -> ()
void AKillerMasterBP_C::DropMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DropMulti");

	AKillerMasterBP_C_DropMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params params {};
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
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnCoins
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SpawnCoins(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnCoins");

	AKillerMasterBP_C_SpawnCoins_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_7_ComponentHitSignature__DelegateSignature_Params params {};
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
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunSoundServ
//		Flags  -> ()
// Parameters:
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::StunSoundServ(int KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunSoundServ");

	AKillerMasterBP_C_StunSoundServ_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunSoundMulti
//		Flags  -> ()
// Parameters:
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::StunSoundMulti(int KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunSoundMulti");

	AKillerMasterBP_C_StunSoundMulti_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundServ
//		Flags  -> ()
void AKillerMasterBP_C::KillerGrabSoundServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundServ");

	AKillerMasterBP_C_KillerGrabSoundServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundMulti
//		Flags  -> ()
void AKillerMasterBP_C::KillerGrabSoundMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerGrabSoundMulti");

	AKillerMasterBP_C_KillerGrabSoundMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaserServ
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChaserServ(bool B, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaserServ");

	AKillerMasterBP_C_ChaserServ_Params params {};
	params.B = B;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaserMulti
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChaserMulti(bool B, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaserMulti");

	AKillerMasterBP_C_ChaserMulti_Params params {};
	params.B = B;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerVisible
//		Flags  -> ()
void AKillerMasterBP_C::KillerVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerVisible");

	AKillerMasterBP_C_KillerVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaseLocal
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChaseLocal(bool B, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaseLocal");

	AKillerMasterBP_C_ChaseLocal_Params params {};
	params.B = B;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.chaseOffSound
//		Flags  -> ()
void AKillerMasterBP_C::chaseOffSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.chaseOffSound");

	AKillerMasterBP_C_chaseOffSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerCatchSound
//		Flags  -> ()
void AKillerMasterBP_C::KillerCatchSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerCatchSound");

	AKillerMasterBP_C_KillerCatchSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerLaugh
//		Flags  -> ()
void AKillerMasterBP_C::KillerLaugh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerLaugh");

	AKillerMasterBP_C_KillerLaugh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerServ
//		Flags  -> ()
void AKillerMasterBP_C::JumpSoundKillerServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerServ");

	AKillerMasterBP_C_JumpSoundKillerServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerMulti
//		Flags  -> ()
void AKillerMasterBP_C::JumpSoundKillerMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerMulti");

	AKillerMasterBP_C_JumpSoundKillerMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AfterJumpServ
//		Flags  -> ()
void AKillerMasterBP_C::AfterJumpServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AfterJumpServ");

	AKillerMasterBP_C_AfterJumpServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AfterJumpMulti
//		Flags  -> ()
void AKillerMasterBP_C::AfterJumpMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AfterJumpMulti");

	AKillerMasterBP_C_AfterJumpMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaseOnSound
//		Flags  -> ()
void AKillerMasterBP_C::ChaseOnSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaseOnSound");

	AKillerMasterBP_C_ChaseOnSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StopChaseOn
//		Flags  -> ()
void AKillerMasterBP_C::StopChaseOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StopChaseOn");

	AKillerMasterBP_C_StopChaseOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StopStopChase
//		Flags  -> ()
void AKillerMasterBP_C::StopStopChase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StopStopChase");

	AKillerMasterBP_C_StopStopChase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BlindSound
//		Flags  -> ()
void AKillerMasterBP_C::BlindSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BlindSound");

	AKillerMasterBP_C_BlindSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvRunawaySound
//		Flags  -> ()
void AKillerMasterBP_C::SurvRunawaySound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvRunawaySound");

	AKillerMasterBP_C_SurvRunawaySound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GraffitiServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::GraffitiServ(const struct FVector& Location, const struct FVector& Forward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GraffitiServ");

	AKillerMasterBP_C_GraffitiServ_Params params {};
	params.Location = Location;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GraffitiMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::GraffitiMulti(const struct FVector& Location, const struct FVector& Forward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GraffitiMulti");

	AKillerMasterBP_C_GraffitiMulti_Params params {};
	params.Location = Location;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunColor
//		Flags  -> ()
void AKillerMasterBP_C::StunColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunColor");

	AKillerMasterBP_C_StunColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerDetectServ
//		Flags  -> ()
void AKillerMasterBP_C::KillerDetectServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerDetectServ");

	AKillerMasterBP_C_KillerDetectServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerDetectMulti
//		Flags  -> ()
void AKillerMasterBP_C::KillerDetectMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerDetectMulti");

	AKillerMasterBP_C_KillerDetectMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PostProcessEffect
//		Flags  -> ()
void AKillerMasterBP_C::PostProcessEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PostProcessEffect");

	AKillerMasterBP_C_PostProcessEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GetPostProcess
//		Flags  -> ()
void AKillerMasterBP_C::GetPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GetPostProcess");

	AKillerMasterBP_C_GetPostProcess_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BlurEffect
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::BlurEffect(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BlurEffect");

	AKillerMasterBP_C_BlurEffect_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DelayOffServ
//		Flags  -> ()
void AKillerMasterBP_C::DelayOffServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DelayOffServ");

	AKillerMasterBP_C_DelayOffServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DelayOffMulti
//		Flags  -> ()
void AKillerMasterBP_C::DelayOffMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DelayOffMulti");

	AKillerMasterBP_C_DelayOffMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.TransformationEffect
//		Flags  -> ()
void AKillerMasterBP_C::TransformationEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.TransformationEffect");

	AKillerMasterBP_C_TransformationEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LocalMeshUpdate
//		Flags  -> ()
void AKillerMasterBP_C::LocalMeshUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LocalMeshUpdate");

	AKillerMasterBP_C_LocalMeshUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CustomInteractPressed
//		Flags  -> ()
void AKillerMasterBP_C::CustomInteractPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CustomInteractPressed");

	AKillerMasterBP_C_CustomInteractPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.WalkShake
//		Flags  -> ()
void AKillerMasterBP_C::WalkShake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.WalkShake");

	AKillerMasterBP_C_WalkShake_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.JumpShake
//		Flags  -> ()
void AKillerMasterBP_C::JumpShake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.JumpShake");

	AKillerMasterBP_C_JumpShake_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CreateChildPPMaterial
//		Flags  -> ()
void AKillerMasterBP_C::CreateChildPPMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CreateChildPPMaterial");

	AKillerMasterBP_C_CreateChildPPMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ScoreStunServer
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ScoreStunServer(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ScoreStunServer");

	AKillerMasterBP_C_ScoreStunServer_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ScoreStunMulti
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ScoreStunMulti(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ScoreStunMulti");

	AKillerMasterBP_C_ScoreStunMulti_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MarioStunReset
//		Flags  -> ()
void AKillerMasterBP_C::MarioStunReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MarioStunReset");

	AKillerMasterBP_C_MarioStunReset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaseDelayerEvent
//		Flags  -> ()
void AKillerMasterBP_C::ChaseDelayerEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaseDelayerEvent");

	AKillerMasterBP_C_ChaseDelayerEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.NicknameON
//		Flags  -> ()
void AKillerMasterBP_C::NicknameON()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.NicknameON");

	AKillerMasterBP_C_NicknameON_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SeekServ
//		Flags  -> ()
void AKillerMasterBP_C::SeekServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SeekServ");

	AKillerMasterBP_C_SeekServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SeekMulti
//		Flags  -> ()
void AKillerMasterBP_C::SeekMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SeekMulti");

	AKillerMasterBP_C_SeekMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ProgressBarStart
//		Flags  -> ()
// Parameters:
//		float                                              range_max                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ProgressBarStart(float range_max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ProgressBarStart");

	AKillerMasterBP_C_ProgressBarStart_Params params {};
	params.range_max = range_max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.UnstunnedChecker
//		Flags  -> ()
void AKillerMasterBP_C::UnstunnedChecker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.UnstunnedChecker");

	AKillerMasterBP_C_UnstunnedChecker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvServ
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::StunScoreSurvServ(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvServ");

	AKillerMasterBP_C_StunScoreSurvServ_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvMulti
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::StunScoreSurvMulti(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunScoreSurvMulti");

	AKillerMasterBP_C_StunScoreSurvMulti_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaseNotValidLocal
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ChaseNotValidLocal(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaseNotValidLocal");

	AKillerMasterBP_C_ChaseNotValidLocal_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.TracerForParticles
//		Flags  -> ()
// Parameters:
//		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     norm                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::TracerForParticles(class UStaticMeshComponent* Mesh, const struct FVector& Loc, const struct FVector& norm, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.TracerForParticles");

	AKillerMasterBP_C_TracerForParticles_Params params {};
	params.Mesh = Mesh;
	params.Loc = Loc;
	params.norm = norm;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ShowKnockDownMessage
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ShowKnockDownMessage(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ShowKnockDownMessage");

	AKillerMasterBP_C_ShowKnockDownMessage_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CoinDropSoundMulti
//		Flags  -> ()
// Parameters:
//		class ACoinActor_C*                                ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CoinDropSoundMulti(class ACoinActor_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CoinDropSoundMulti");

	AKillerMasterBP_C_CoinDropSoundMulti_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DecreaseTime
//		Flags  -> ()
void AKillerMasterBP_C::DecreaseTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DecreaseTime");

	AKillerMasterBP_C_DecreaseTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunCheck
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::StunCheck(class AActor* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunCheck");

	AKillerMasterBP_C_StunCheck_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ1
//		Flags  -> ()
void AKillerMasterBP_C::ChairChekerServ1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ1");

	AKillerMasterBP_C_ChairChekerServ1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ2
//		Flags  -> ()
void AKillerMasterBP_C::ChairChekerServ2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ2");

	AKillerMasterBP_C_ChairChekerServ2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ3
//		Flags  -> ()
void AKillerMasterBP_C::ChairChekerServ3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChekerServ3");

	AKillerMasterBP_C_ChairChekerServ3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti1
//		Flags  -> ()
void AKillerMasterBP_C::ChairChekerMulti1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti1");

	AKillerMasterBP_C_ChairChekerMulti1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti2
//		Flags  -> ()
void AKillerMasterBP_C::ChairChekerMulti2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti2");

	AKillerMasterBP_C_ChairChekerMulti2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti3
//		Flags  -> ()
void AKillerMasterBP_C::ChairChekerMulti3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairChekerMulti3");

	AKillerMasterBP_C_ChairChekerMulti3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFServ
//		Flags  -> ()
void AKillerMasterBP_C::ChairMoveOFFServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFServ");

	AKillerMasterBP_C_ChairMoveOFFServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFMulti
//		Flags  -> ()
void AKillerMasterBP_C::ChairMoveOFFMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChairMoveOFFMulti");

	AKillerMasterBP_C_ChairMoveOFFMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_Forward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1");

	AKillerMasterBP_C_InpAxisEvt_Forward_K2Node_InputAxisEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_2
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_Backward_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_2");

	AKillerMasterBP_C_InpAxisEvt_Backward_K2Node_InputAxisEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Left_K2Node_InputAxisEvent_3
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_Left_K2Node_InputAxisEvent_3(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Left_K2Node_InputAxisEvent_3");

	AKillerMasterBP_C_InpAxisEvt_Left_K2Node_InputAxisEvent_3_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Right_K2Node_InputAxisEvent_4
//		Flags  -> ()
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::InpAxisEvt_Right_K2Node_InputAxisEvent_4(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InpAxisEvt_Right_K2Node_InputAxisEvent_4");

	AKillerMasterBP_C_InpAxisEvt_Right_K2Node_InputAxisEvent_4_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IntroWeapon
//		Flags  -> ()
void AKillerMasterBP_C::IntroWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IntroWeapon");

	AKillerMasterBP_C_IntroWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CD_Widget_Strat
//		Flags  -> ()
// Parameters:
//		struct FString                                     AbilityName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CD_Widget_Strat(const struct FString& AbilityName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CD_Widget_Strat");

	AKillerMasterBP_C_CD_Widget_Strat_Params params {};
	params.AbilityName = AbilityName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvRunAwayMulti
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         hellpSurv                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Flashed_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurvRunAwayMulti(bool NewParam, class ASurvivorMasterBP_C* hellpSurv, bool Flashed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvRunAwayMulti");

	AKillerMasterBP_C_SurvRunAwayMulti_Params params {};
	params.NewParam = NewParam;
	params.hellpSurv = hellpSurv;
	params.Flashed_ = Flashed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickUp Multi
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::PickUp_Multi(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickUp Multi");

	AKillerMasterBP_C_PickUp_Multi_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ToChairMulti
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ToChairMulti(class AHypnoChairBP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ToChairMulti");

	AKillerMasterBP_C_ToChairMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ToChairServ
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ToChairServ(class AHypnoChairBP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ToChairServ");

	AKillerMasterBP_C_ToChairServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvRunawayServ
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ASurvivorMasterBP_C*                         helpSurv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Flashed_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SurvRunawayServ(bool NewParam, class ASurvivorMasterBP_C* helpSurv, bool Flashed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvRunawayServ");

	AKillerMasterBP_C_SurvRunawayServ_Params params {};
	params.NewParam = NewParam;
	params.helpSurv = helpSurv;
	params.Flashed_ = Flashed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ReceiveTick");

	AKillerMasterBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CoinsLocal
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CoinsLocal(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CoinsLocal");

	AKillerMasterBP_C_CoinsLocal_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GraffitiHitServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     v3Loc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     v3For                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::GraffitiHitServ(const struct FVector& v3Loc, const struct FVector& v3For)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GraffitiHitServ");

	AKillerMasterBP_C_GraffitiHitServ_Params params {};
	params.v3Loc = v3Loc;
	params.v3For = v3For;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GraffitiHitMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     v3Loc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     v3For                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::GraffitiHitMulti(const struct FVector& v3Loc, const struct FVector& v3For)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GraffitiHitMulti");

	AKillerMasterBP_C_GraffitiHitMulti_Params params {};
	params.v3Loc = v3Loc;
	params.v3For = v3For;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.GraffitiHit
//		Flags  -> ()
void AKillerMasterBP_C::GraffitiHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.GraffitiHit");

	AKillerMasterBP_C_GraffitiHit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ServerDoor
//		Flags  -> ()
// Parameters:
//		class AInteractableDoor_C*                         Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::ServerDoor(class AInteractableDoor_C* Door, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ServerDoor");

	AKillerMasterBP_C_ServerDoor_Params params {};
	params.Door = Door;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MulticastDoor
//		Flags  -> ()
// Parameters:
//		class AInteractableDoor_C*                         Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::MulticastDoor(class AInteractableDoor_C* Door, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MulticastDoor");

	AKillerMasterBP_C_MulticastDoor_Params params {};
	params.Door = Door;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BrokenTimeServ
//		Flags  -> ()
// Parameters:
//		class ANewAlarmBP_C*                               ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BrokenTimeServ(class ANewAlarmBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BrokenTimeServ");

	AKillerMasterBP_C_BrokenTimeServ_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BrokenTimeMulti
//		Flags  -> ()
// Parameters:
//		class ANewAlarmBP_C*                               ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BrokenTimeMulti(class ANewAlarmBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BrokenTimeMulti");

	AKillerMasterBP_C_BrokenTimeMulti_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ReceiveBeginPlay
//		Flags  -> ()
void AKillerMasterBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ReceiveBeginPlay");

	AKillerMasterBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.sendServ
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::sendServ(const struct FVector& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.sendServ");

	AKillerMasterBP_C_sendServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__Box1_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HUD_StartJump
//		Flags  -> ()
void AKillerMasterBP_C::HUD_StartJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HUD_StartJump");

	AKillerMasterBP_C_HUD_StartJump_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HUD_EndJUmp
//		Flags  -> ()
void AKillerMasterBP_C::HUD_EndJUmp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HUD_EndJUmp");

	AKillerMasterBP_C_HUD_EndJUmp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Perexod
//		Flags  -> ()
void AKillerMasterBP_C::Perexod()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Perexod");

	AKillerMasterBP_C_Perexod_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SwitchWeaponVisibility
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::SwitchWeaponVisibility(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SwitchWeaponVisibility");

	AKillerMasterBP_C_SwitchWeaponVisibility_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.HummerVis
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::HummerVis(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.HummerVis");

	AKillerMasterBP_C_HummerVis_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.MulticastGlass
//		Flags  -> ()
// Parameters:
//		class AInteractableDoor_C*                         Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::MulticastGlass(class AInteractableDoor_C* Door)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.MulticastGlass");

	AKillerMasterBP_C_MulticastGlass_Params params {};
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ServerGlass
//		Flags  -> ()
// Parameters:
//		class AInteractableDoor_C*                         Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ServerGlass(class AInteractableDoor_C* Door)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ServerGlass");

	AKillerMasterBP_C_ServerGlass_Params params {};
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ExposedSurvs
//		Flags  -> ()
void AKillerMasterBP_C::ExposedSurvs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ExposedSurvs");

	AKillerMasterBP_C_ExposedSurvs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesLocal
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::SpawnHitParticlesLocal(const struct FVector& Location, const struct FRotator& Rotation, bool IsHit, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnHitParticlesLocal");

	AKillerMasterBP_C_SpawnHitParticlesLocal_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;
	params.IsHit = IsHit;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IdleSoundLocal
//		Flags  -> ()
void AKillerMasterBP_C::IdleSoundLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IdleSoundLocal");

	AKillerMasterBP_C_IdleSoundLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IdleSoundServ
//		Flags  -> ()
void AKillerMasterBP_C::IdleSoundServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IdleSoundServ");

	AKillerMasterBP_C_IdleSoundServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.IdleSoundMulti
//		Flags  -> ()
void AKillerMasterBP_C::IdleSoundMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.IdleSoundMulti");

	AKillerMasterBP_C_IdleSoundMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.UnstunDelay
//		Flags  -> ()
void AKillerMasterBP_C::UnstunDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.UnstunDelay");

	AKillerMasterBP_C_UnstunDelay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerLocal
//		Flags  -> ()
void AKillerMasterBP_C::JumpSoundKillerLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.JumpSoundKillerLocal");

	AKillerMasterBP_C_JumpSoundKillerLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CollisionChairChecker
//		Flags  -> ()
void AKillerMasterBP_C::CollisionChairChecker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CollisionChairChecker");

	AKillerMasterBP_C_CollisionChairChecker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ZoomOut
//		Flags  -> ()
void AKillerMasterBP_C::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ZoomOut");

	AKillerMasterBP_C_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InteractPressed
//		Flags  -> ()
void AKillerMasterBP_C::InteractPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InteractPressed");

	AKillerMasterBP_C_InteractPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.InteractReleased
//		Flags  -> ()
void AKillerMasterBP_C::InteractReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.InteractReleased");

	AKillerMasterBP_C_InteractReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SetKIllerVisibleToSurv
//		Flags  -> ()
void AKillerMasterBP_C::SetKIllerVisibleToSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SetKIllerVisibleToSurv");

	AKillerMasterBP_C_SetKIllerVisibleToSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SetKillerNotVisibleToSurv
//		Flags  -> ()
void AKillerMasterBP_C::SetKillerNotVisibleToSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SetKillerNotVisibleToSurv");

	AKillerMasterBP_C_SetKillerNotVisibleToSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerVisibleToAll
//		Flags  -> ()
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::KillerVisibleToAll(float Duration, class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerVisibleToAll");

	AKillerMasterBP_C_KillerVisibleToAll_Params params {};
	params.Duration = Duration;
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerVisibleToAll_SERV
//		Flags  -> ()
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::KillerVisibleToAll_SERV(float Duration, class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerVisibleToAll_SERV");

	AKillerMasterBP_C_KillerVisibleToAll_SERV_Params params {};
	params.Duration = Duration;
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BloodLustAddCustom
//		Flags  -> ()
// Parameters:
//		bool                                               LastLvl_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Wipe                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::BloodLustAddCustom(bool LastLvl_, bool Wipe)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BloodLustAddCustom");

	AKillerMasterBP_C_BloodLustAddCustom_Params params {};
	params.LastLvl_ = LastLvl_;
	params.Wipe = Wipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CallAddEXPKiller
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CallAddEXPKiller(int Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CallAddEXPKiller");

	AKillerMasterBP_C_CallAddEXPKiller_Params params {};
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CallAddEXPKiller_MULTI
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CallAddEXPKiller_MULTI(int Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CallAddEXPKiller_MULTI");

	AKillerMasterBP_C_CallAddEXPKiller_MULTI_Params params {};
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AKillerMasterBP_C::BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature");

	AKillerMasterBP_C_BndEvt__KillerMasterBP_Sphere1_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BloodhoundPerk
//		Flags  -> ()
// Parameters:
//		bool                                               LastLvl_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::BloodhoundPerk(bool LastLvl_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BloodhoundPerk");

	AKillerMasterBP_C_BloodhoundPerk_Params params {};
	params.LastLvl_ = LastLvl_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SurvWiggle
//		Flags  -> ()
void AKillerMasterBP_C::SurvWiggle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SurvWiggle");

	AKillerMasterBP_C_SurvWiggle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.LastSurv
//		Flags  -> ()
void AKillerMasterBP_C::LastSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.LastSurv");

	AKillerMasterBP_C_LastSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DuplicatePropServ
//		Flags  -> ()
// Parameters:
//		class ADuplicatePropActor_C*                       Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::DuplicatePropServ(class ADuplicatePropActor_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DuplicatePropServ");

	AKillerMasterBP_C_DuplicatePropServ_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DuplicatePropMulti
//		Flags  -> ()
// Parameters:
//		class ADuplicatePropActor_C*                       Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::DuplicatePropMulti(class ADuplicatePropActor_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DuplicatePropMulti");

	AKillerMasterBP_C_DuplicatePropMulti_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CoinDestroyServ
//		Flags  -> ()
// Parameters:
//		class ACoinActor_C*                                ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CoinDestroyServ(class ACoinActor_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CoinDestroyServ");

	AKillerMasterBP_C_CoinDestroyServ_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.CoinDestroyMulti
//		Flags  -> ()
// Parameters:
//		class ACoinActor_C*                                ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::CoinDestroyMulti(class ACoinActor_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.CoinDestroyMulti");

	AKillerMasterBP_C_CoinDestroyMulti_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.AddBloodlustLvl
//		Flags  -> ()
void AKillerMasterBP_C::AddBloodlustLvl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.AddBloodlustLvl");

	AKillerMasterBP_C_AddBloodlustLvl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BrokeAnimServ
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::BrokeAnimServ(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BrokeAnimServ");

	AKillerMasterBP_C_BrokeAnimServ_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BrokeAnimLocal
//		Flags  -> ()
void AKillerMasterBP_C::BrokeAnimLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BrokeAnimLocal");

	AKillerMasterBP_C_BrokeAnimLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BrokeAnimMulti
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::BrokeAnimMulti(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BrokeAnimMulti");

	AKillerMasterBP_C_BrokeAnimMulti_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.BrokeAnimLocalReset
//		Flags  -> ()
void AKillerMasterBP_C::BrokeAnimLocalReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.BrokeAnimLocalReset");

	AKillerMasterBP_C_BrokeAnimLocalReset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickUp Serv
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::PickUp_Serv(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickUp Serv");

	AKillerMasterBP_C_PickUp_Serv_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.Glue
//		Flags  -> ()
// Parameters:
//		float                                              B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::Glue(float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.Glue");

	AKillerMasterBP_C_Glue_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.YellowJar
//		Flags  -> ()
// Parameters:
//		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::YellowJar(float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.YellowJar");

	AKillerMasterBP_C_YellowJar_Params params {};
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ChaseScore_KIller
//		Flags  -> ()
void AKillerMasterBP_C::ChaseScore_KIller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ChaseScore_KIller");

	AKillerMasterBP_C_ChaseScore_KIller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnStunCOIN_EXP_SERVER
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SpawnStunCOIN_EXP_SERVER(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnStunCOIN_EXP_SERVER");

	AKillerMasterBP_C_SpawnStunCOIN_EXP_SERVER_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnStunCOIN_EXP_Multi
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SpawnStunCOIN_EXP_Multi(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnStunCOIN_EXP_Multi");

	AKillerMasterBP_C_SpawnStunCOIN_EXP_Multi_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.SpawnCoins_OnlySurv
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::SpawnCoins_OnlySurv(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.SpawnCoins_OnlySurv");

	AKillerMasterBP_C_SpawnCoins_OnlySurv_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ShowKnockedBanner
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ShowKnockedBanner(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ShowKnockedBanner");

	AKillerMasterBP_C_ShowKnockedBanner_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.RuneDestroyServ
//		Flags  -> ()
// Parameters:
//		class ACrystalRune_C*                              rune                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::RuneDestroyServ(class ACrystalRune_C* rune)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.RuneDestroyServ");

	AKillerMasterBP_C_RuneDestroyServ_Params params {};
	params.rune = rune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.RuneDestroyMulti
//		Flags  -> ()
// Parameters:
//		class ACrystalRune_C*                              rune                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::RuneDestroyMulti(class ACrystalRune_C* rune)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.RuneDestroyMulti");

	AKillerMasterBP_C_RuneDestroyMulti_Params params {};
	params.rune = rune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.StunBySurvivor
//		Flags  -> ()
// Parameters:
//		float                                              StunTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         helpSurv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::StunBySurvivor(float StunTime, class ASurvivorMasterBP_C* helpSurv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.StunBySurvivor");

	AKillerMasterBP_C_StunBySurvivor_Params params {};
	params.StunTime = StunTime;
	params.helpSurv = helpSurv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.DropServ
//		Flags  -> ()
void AKillerMasterBP_C::DropServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.DropServ");

	AKillerMasterBP_C_DropServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickupServerCheck
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::PickupServerCheck(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickupServerCheck");

	AKillerMasterBP_C_PickupServerCheck_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.PickupLocal
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKillerMasterBP_C::PickupLocal(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.PickupLocal");

	AKillerMasterBP_C_PickupLocal_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerVisibleServ
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::KillerVisibleServ(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerVisibleServ");

	AKillerMasterBP_C_KillerVisibleServ_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.KillerVisibleMulti
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::KillerVisibleMulti(class ASurvivorMasterBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.KillerVisibleMulti");

	AKillerMasterBP_C_KillerVisibleMulti_Params params {};
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMasterBP.KillerMasterBP_C.ExecuteUbergraph_KillerMasterBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMasterBP_C::ExecuteUbergraph_KillerMasterBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMasterBP.KillerMasterBP_C.ExecuteUbergraph_KillerMasterBP");

	AKillerMasterBP_C_ExecuteUbergraph_KillerMasterBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
