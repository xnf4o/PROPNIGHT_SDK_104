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
//		Name   -> Function Vampire.Vampire_C.Timeline_7__FinishedFunc
//		Flags  -> ()
void AVampire_C::Timeline_7__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.Timeline_7__FinishedFunc");

	AVampire_C_Timeline_7__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.Timeline_7__UpdateFunc
//		Flags  -> ()
void AVampire_C::Timeline_7__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.Timeline_7__UpdateFunc");

	AVampire_C_Timeline_7__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AVampire_C::InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_3");

	AVampire_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AVampire_C::InpActEvt_Use_Skill_1_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_2");

	AVampire_C_InpActEvt_Use_Skill_1_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.InpActEvt_RMB_K2Node_InputActionEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AVampire_C::InpActEvt_RMB_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.InpActEvt_RMB_K2Node_InputActionEvent_1");

	AVampire_C_InpActEvt_RMB_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.ReceiveBeginPlay
//		Flags  -> ()
void AVampire_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.ReceiveBeginPlay");

	AVampire_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.ReceiveTick");

	AVampire_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AltAttackServ
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVampire_C::AltAttackServ(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AltAttackServ");

	AVampire_C_AltAttackServ_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AltAttackMulti
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVampire_C::AltAttackMulti(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AltAttackMulti");

	AVampire_C_AltAttackMulti_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AltAttack
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVampire_C::AltAttack(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AltAttack");

	AVampire_C_AltAttack_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.Hitter
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               knife                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               BackStab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               VampireBite                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVampire_C::Hitter(class ASurvivorMasterBP_C* SurvRef, int Damage, bool knife, bool Range, bool BackStab, bool VampireBite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.Hitter");

	AVampire_C_Hitter_Params params {};
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
//		Name   -> Function Vampire.Vampire_C.AltAttackAnim
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVampire_C::AltAttackAnim(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AltAttackAnim");

	AVampire_C_AltAttackAnim_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.MeshVisibilityOn
//		Flags  -> ()
void AVampire_C::MeshVisibilityOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.MeshVisibilityOn");

	AVampire_C_MeshVisibilityOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.MeshVisibiltyOff
//		Flags  -> ()
void AVampire_C::MeshVisibiltyOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.MeshVisibiltyOff");

	AVampire_C_MeshVisibiltyOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AVampire_C::BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AVampire_C_BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function Vampire.Vampire_C.KillerLaugh
//		Flags  -> ()
void AVampire_C::KillerLaugh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.KillerLaugh");

	AVampire_C_KillerLaugh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SurvRunawaySound
//		Flags  -> ()
void AVampire_C::SurvRunawaySound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SurvRunawaySound");

	AVampire_C_SurvRunawaySound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.KillerDetectMulti
//		Flags  -> ()
void AVampire_C::KillerDetectMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.KillerDetectMulti");

	AVampire_C_KillerDetectMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.DelayOffMulti
//		Flags  -> ()
void AVampire_C::DelayOffMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.DelayOffMulti");

	AVampire_C_DelayOffMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.JumpSoundKillerMulti
//		Flags  -> ()
void AVampire_C::JumpSoundKillerMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.JumpSoundKillerMulti");

	AVampire_C_JumpSoundKillerMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.JumpSoundKillerLocal
//		Flags  -> ()
void AVampire_C::JumpSoundKillerLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.JumpSoundKillerLocal");

	AVampire_C_JumpSoundKillerLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AfterJumpMulti
//		Flags  -> ()
void AVampire_C::AfterJumpMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AfterJumpMulti");

	AVampire_C_AfterJumpMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.BlindSound
//		Flags  -> ()
void AVampire_C::BlindSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.BlindSound");

	AVampire_C_BlindSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SeekMulti
//		Flags  -> ()
void AVampire_C::SeekMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SeekMulti");

	AVampire_C_SeekMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AttackAudioServ
//		Flags  -> ()
void AVampire_C::AttackAudioServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AttackAudioServ");

	AVampire_C_AttackAudioServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AttackAudioMulti
//		Flags  -> ()
void AVampire_C::AttackAudioMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AttackAudioMulti");

	AVampire_C_AttackAudioMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.AtackAudio
//		Flags  -> ()
void AVampire_C::AtackAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.AtackAudio");

	AVampire_C_AtackAudio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SurvOffInEye
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::SurvOffInEye(class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SurvOffInEye");

	AVampire_C_SurvOffInEye_Params params {};
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SurvOnInEye
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASpyEye_C*                                   SpyEye                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::SurvOnInEye(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SurvOnInEye");

	AVampire_C_SurvOnInEye_Params params {};
	params.SurvRef = SurvRef;
	params.SpyEye = SpyEye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.EyeSpooting
//		Flags  -> ()
// Parameters:
//		class USkeletalMeshComponent*                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::EyeSpooting(class USkeletalMeshComponent* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.EyeSpooting");

	AVampire_C_EyeSpooting_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SurvSpyEyeOff
//		Flags  -> ()
// Parameters:
//		class ASpyEye_C*                                   SpyEye                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::SurvSpyEyeOff(class ASpyEye_C* SpyEye, class ASurvivorMasterBP_C* SurvRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SurvSpyEyeOff");

	AVampire_C_SurvSpyEyeOff_Params params {};
	params.SpyEye = SpyEye;
	params.SurvRef = SurvRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.EyeSpootingServ
//		Flags  -> ()
// Parameters:
//		class USkeletalMeshComponent*                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::EyeSpootingServ(class USkeletalMeshComponent* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.EyeSpootingServ");

	AVampire_C_EyeSpootingServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.EyeSpootingMulti
//		Flags  -> ()
// Parameters:
//		class USkeletalMeshComponent*                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::EyeSpootingMulti(class USkeletalMeshComponent* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.EyeSpootingMulti");

	AVampire_C_EyeSpootingMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SurvSpyEyeOn
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         SurvRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASpyEye_C*                                   SpyEye                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::SurvSpyEyeOn(class ASurvivorMasterBP_C* SurvRef, class ASpyEye_C* SpyEye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SurvSpyEyeOn");

	AVampire_C_SurvSpyEyeOn_Params params {};
	params.SurvRef = SurvRef;
	params.SpyEye = SpyEye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.CreateChildPPMaterial
//		Flags  -> ()
void AVampire_C::CreateChildPPMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.CreateChildPPMaterial");

	AVampire_C_CreateChildPPMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.SwitchBloodlustPP
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVampire_C::SwitchBloodlustPP(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.SwitchBloodlustPP");

	AVampire_C_SwitchBloodlustPP_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Vampire.Vampire_C.ExecuteUbergraph_Vampire
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVampire_C::ExecuteUbergraph_Vampire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vampire.Vampire_C.ExecuteUbergraph_Vampire");

	AVampire_C_ExecuteUbergraph_Vampire_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
