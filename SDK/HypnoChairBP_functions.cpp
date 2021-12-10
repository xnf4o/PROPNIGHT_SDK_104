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
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.GetCurrentEXP");

	AHypnoChairBP_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.GetPointsForPerks");

	AHypnoChairBP_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SeeKillerSilhouetteNearHC");

	AHypnoChairBP_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.GetPerkName");

	AHypnoChairBP_C_GetPerkName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (PerkIndex != nullptr)
		*PerkIndex = params.PerkIndex;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CoinAngle
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::CoinAngle(float* X, float* Y, float* Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CoinAngle");

	AHypnoChairBP_C_CoinAngle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Stule Open
//		Flags  -> ()
// Parameters:
void AHypnoChairBP_C::Stule_Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Stule Open");

	AHypnoChairBP_C_Stule_Open_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.StarterToPlace
//		Flags  -> ()
// Parameters:
void AHypnoChairBP_C::StarterToPlace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.StarterToPlace");

	AHypnoChairBP_C_StarterToPlace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseAll__FinishedFunc
//		Flags  -> ()
void AHypnoChairBP_C::CloseAll__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseAll__FinishedFunc");

	AHypnoChairBP_C_CloseAll__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseAll__UpdateFunc
//		Flags  -> ()
void AHypnoChairBP_C::CloseAll__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseAll__UpdateFunc");

	AHypnoChairBP_C_CloseAll__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Resque__FinishedFunc
//		Flags  -> ()
void AHypnoChairBP_C::Resque__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Resque__FinishedFunc");

	AHypnoChairBP_C_Resque__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Resque__UpdateFunc
//		Flags  -> ()
void AHypnoChairBP_C::Resque__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Resque__UpdateFunc");

	AHypnoChairBP_C_Resque__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_0__FinishedFunc");

	AHypnoChairBP_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_0__UpdateFunc");

	AHypnoChairBP_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_1__FinishedFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_1__FinishedFunc");

	AHypnoChairBP_C_Timeline_1__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_1__UpdateFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_1__UpdateFunc");

	AHypnoChairBP_C_Timeline_1__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_2__FinishedFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_2__FinishedFunc");

	AHypnoChairBP_C_Timeline_2__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_2__UpdateFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_2__UpdateFunc");

	AHypnoChairBP_C_Timeline_2__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_3__FinishedFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_3__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_3__FinishedFunc");

	AHypnoChairBP_C_Timeline_3__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.Timeline_3__UpdateFunc
//		Flags  -> ()
void AHypnoChairBP_C::Timeline_3__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.Timeline_3__UpdateFunc");

	AHypnoChairBP_C_Timeline_3__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.FailedGetOut
//		Flags  -> ()
void AHypnoChairBP_C::FailedGetOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.FailedGetOut");

	AHypnoChairBP_C_FailedGetOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthServer
//		Flags  -> ()
void AHypnoChairBP_C::OffCustomDepthServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthServer");

	AHypnoChairBP_C_OffCustomDepthServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthMulti
//		Flags  -> ()
void AHypnoChairBP_C::OffCustomDepthMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.OffCustomDepthMulti");

	AHypnoChairBP_C_OffCustomDepthMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CustomDepthOff
//		Flags  -> ()
void AHypnoChairBP_C::CustomDepthOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CustomDepthOff");

	AHypnoChairBP_C_CustomDepthOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.GGgame
//		Flags  -> ()
void AHypnoChairBP_C::GGgame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.GGgame");

	AHypnoChairBP_C_GGgame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.KillingSurvServ
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::KillingSurvServ(class AActor* Surv, int NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.KillingSurvServ");

	AHypnoChairBP_C_KillingSurvServ_Params params {};
	params.Surv = Surv;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SurvOnChairPosition
//		Flags  -> ()
void AHypnoChairBP_C::SurvOnChairPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SurvOnChairPosition");

	AHypnoChairBP_C_SurvOnChairPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.StartToPlace
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::StartToPlace(float NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.StartToPlace");

	AHypnoChairBP_C_StartToPlace_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AHypnoChairBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AHypnoChairBP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AHypnoChairBP_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CustomDepthSet
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::CustomDepthSet(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CustomDepthSet");

	AHypnoChairBP_C_CustomDepthSet_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.ReceiveTick");

	AHypnoChairBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BackToStart
//		Flags  -> ()
void AHypnoChairBP_C::BackToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BackToStart");

	AHypnoChairBP_C_BackToStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SurvDropItem");

	AHypnoChairBP_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.DecreasePerkPoints");

	AHypnoChairBP_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.LevelUpped");

	AHypnoChairBP_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.OpenStageEvent
//		Flags  -> ()
void AHypnoChairBP_C::OpenStageEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.OpenStageEvent");

	AHypnoChairBP_C_OpenStageEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetDepth
//		Flags  -> ()
void AHypnoChairBP_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetDepth");

	AHypnoChairBP_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseChair
//		Flags  -> ()
void AHypnoChairBP_C::CloseChair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseChair");

	AHypnoChairBP_C_CloseChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.IncreaseOnceHP");

	AHypnoChairBP_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.AddEXP");

	AHypnoChairBP_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseLeft
//		Flags  -> ()
void AHypnoChairBP_C::CloseLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseLeft");

	AHypnoChairBP_C_CloseLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseRight
//		Flags  -> ()
void AHypnoChairBP_C::CloseRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseRight");

	AHypnoChairBP_C_CloseRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseLeg
//		Flags  -> ()
void AHypnoChairBP_C::CloseLeg()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseLeg");

	AHypnoChairBP_C_CloseLeg_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseLeftMulti
//		Flags  -> ()
void AHypnoChairBP_C::CloseLeftMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseLeftMulti");

	AHypnoChairBP_C_CloseLeftMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CloseRightMulti
//		Flags  -> ()
void AHypnoChairBP_C::CloseRightMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CloseRightMulti");

	AHypnoChairBP_C_CloseRightMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CurseLightON
//		Flags  -> ()
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::CurseLightON(bool On, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CurseLightON");

	AHypnoChairBP_C_CurseLightON_Params params {};
	params.On = On;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.ResetPosition
//		Flags  -> ()
void AHypnoChairBP_C::ResetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.ResetPosition");

	AHypnoChairBP_C_ResetPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.GetLampMaterial
//		Flags  -> ()
void AHypnoChairBP_C::GetLampMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.GetLampMaterial");

	AHypnoChairBP_C_GetLampMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.LampAnim
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::LampAnim(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.LampAnim");

	AHypnoChairBP_C_LampAnim_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.ReceiveBeginPlay
//		Flags  -> ()
void AHypnoChairBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.ReceiveBeginPlay");

	AHypnoChairBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SurvResque
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               otherSurv_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::SurvResque(class ASurvivorMasterBP_C* SurvRef, bool otherSurv_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SurvResque");

	AHypnoChairBP_C_SurvResque_Params params {};
	params.SurvRef = SurvRef;
	params.otherSurv_ = otherSurv_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BackToChair
//		Flags  -> ()
void AHypnoChairBP_C::BackToChair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BackToChair");

	AHypnoChairBP_C_BackToChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.CoinSpawnerChair
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Tinkerer_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Self_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::CoinSpawnerChair(class ASurvivorMasterBP_C* Surv, bool Tinkerer_, bool Self_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.CoinSpawnerChair");

	AHypnoChairBP_C_CoinSpawnerChair_Params params {};
	params.Surv = Surv;
	params.Tinkerer_ = Tinkerer_;
	params.Self_ = Self_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BreakChair
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::BreakChair(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BreakChair");

	AHypnoChairBP_C_BreakChair_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.ChangeMaterial
//		Flags  -> ()
// Parameters:
//		bool                                               Damaged_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::ChangeMaterial(bool Damaged_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.ChangeMaterial");

	AHypnoChairBP_C_ChangeMaterial_Params params {};
	params.Damaged_ = Damaged_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.DeathEffectEvent
//		Flags  -> ()
void AHypnoChairBP_C::DeathEffectEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.DeathEffectEvent");

	AHypnoChairBP_C_DeathEffectEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.DynMatGet
//		Flags  -> ()
void AHypnoChairBP_C::DynMatGet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.DynMatGet");

	AHypnoChairBP_C_DynMatGet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.DeathSurvChair
//		Flags  -> ()
void AHypnoChairBP_C::DeathSurvChair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.DeathSurvChair");

	AHypnoChairBP_C_DeathSurvChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SurvLeave
//		Flags  -> ()
void AHypnoChairBP_C::SurvLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SurvLeave");

	AHypnoChairBP_C_SurvLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetBoostT_SERV
//		Flags  -> ()
// Parameters:
//		float                                              BoostTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::SetBoostT_SERV(float BoostTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetBoostT_SERV");

	AHypnoChairBP_C_SetBoostT_SERV_Params params {};
	params.BoostTime = BoostTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetBoostT_MULTI
//		Flags  -> ()
// Parameters:
//		float                                              BoostTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::SetBoostT_MULTI(float BoostTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetBoostT_MULTI");

	AHypnoChairBP_C_SetBoostT_MULTI_Params params {};
	params.BoostTime = BoostTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetPause_SERV
//		Flags  -> ()
// Parameters:
//		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::SetPause_SERV(bool Pause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetPause_SERV");

	AHypnoChairBP_C_SetPause_SERV_Params params {};
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetPause_MULTI
//		Flags  -> ()
// Parameters:
//		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHypnoChairBP_C::SetPause_MULTI(bool Pause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetPause_MULTI");

	AHypnoChairBP_C_SetPause_MULTI_Params params {};
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetKillingTime
//		Flags  -> ()
// Parameters:
//		float                                              B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::SetKillingTime(float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetKillingTime");

	AHypnoChairBP_C_SetKillingTime_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.AddToAllSurv
//		Flags  -> ()
void AHypnoChairBP_C::AddToAllSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.AddToAllSurv");

	AHypnoChairBP_C_AddToAllSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SetTimingToAllChairs
//		Flags  -> ()
void AHypnoChairBP_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SetTimingToAllChairs");

	AHypnoChairBP_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AHypnoChairBP_C::BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AHypnoChairBP_C_BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AHypnoChairBP_C_BndEvt__HypnoChairBP_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SurvThanks
//		Flags  -> ()
void AHypnoChairBP_C::SurvThanks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SurvThanks");

	AHypnoChairBP_C_SurvThanks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.chairvoice
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::chairvoice(class ASurvivorMasterBP_C* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.chairvoice");

	AHypnoChairBP_C_chairvoice_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.SurvLeaveTick
//		Flags  -> ()
void AHypnoChairBP_C::SurvLeaveTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.SurvLeaveTick");

	AHypnoChairBP_C_SurvLeaveTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HypnoChairBP.HypnoChairBP_C.ExecuteUbergraph_HypnoChairBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHypnoChairBP_C::ExecuteUbergraph_HypnoChairBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HypnoChairBP.HypnoChairBP_C.ExecuteUbergraph_HypnoChairBP");

	AHypnoChairBP_C_ExecuteUbergraph_HypnoChairBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
