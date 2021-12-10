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
//		Name   -> Function FootprintComponent.FootprintComponent_C.GetVolumeOneFloorProp
//		Flags  -> ()
// Parameters:
//		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GetVolumeOneFloorProp(float* Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetVolumeOneFloorProp");

	UFootprintComponent_C_GetVolumeOneFloorProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.GetVolumeOneFloor
//		Flags  -> ()
// Parameters:
//		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GetVolumeOneFloor(float* Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetVolumeOneFloor");

	UFootprintComponent_C_GetVolumeOneFloor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.GetVolumeProp
//		Flags  -> ()
// Parameters:
//		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GetVolumeProp(float* Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetVolumeProp");

	UFootprintComponent_C_GetVolumeProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.HayFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputFMOD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::HayFMOD(class UFMODAudioComponent* InputFMOD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.HayFMOD");

	UFootprintComponent_C_HayFMOD_Params params {};
	params.InputFMOD = InputFMOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.Earth FMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputFMOD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::Earth_FMOD(class UFMODAudioComponent* InputFMOD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.Earth FMOD");

	UFootprintComponent_C_Earth_FMOD_Params params {};
	params.InputFMOD = InputFMOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.GetVolumeByZDiff
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GetVolumeByZDiff(class AActor* Actor, float* Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetVolumeByZDiff");

	UFootprintComponent_C_GetVolumeByZDiff_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.PlayJumpSound
//		Flags  -> ()
// Parameters:
//		class UFMODEvent*                                  FMODObj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFMODAudioComponent*                         Comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::PlayJumpSound(class UFMODEvent* FMODObj, class UFMODAudioComponent* Comp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.PlayJumpSound");

	UFootprintComponent_C_PlayJumpSound_Params params {};
	params.FMODObj = FMODObj;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.GetVolume
//		Flags  -> ()
// Parameters:
//		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GetVolume(float* Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GetVolume");

	UFootprintComponent_C_GetVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.TileFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::TileFMOD(class UFMODAudioComponent* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.TileFMOD");

	UFootprintComponent_C_TileFMOD_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.KillerTypeFunc
//		Flags  -> ()
// Parameters:
//		bool                                               Keymaster                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Granny                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Doppelganger                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFootprintComponent_C::KillerTypeFunc(bool* Keymaster, bool* Granny, bool* Doppelganger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.KillerTypeFunc");

	UFootprintComponent_C_KillerTypeFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keymaster != nullptr)
		*Keymaster = params.Keymaster;
	if (Granny != nullptr)
		*Granny = params.Granny;
	if (Doppelganger != nullptr)
		*Doppelganger = params.Doppelganger;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.MetalFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::MetalFMOD(class UFMODAudioComponent* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.MetalFMOD");

	UFootprintComponent_C_MetalFMOD_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.WetFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::WetFMOD(class UFMODAudioComponent* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.WetFMOD");

	UFootprintComponent_C_WetFMOD_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.GlassFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GlassFMOD(class UFMODAudioComponent* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GlassFMOD");

	UFootprintComponent_C_GlassFMOD_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.CarpetFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::CarpetFMOD(class UFMODAudioComponent* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.CarpetFMOD");

	UFootprintComponent_C_CarpetFMOD_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.DefaultFMOD
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::DefaultFMOD(class UFMODAudioComponent* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.DefaultFMOD");

	UFootprintComponent_C_DefaultFMOD_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.SpawnFootprint
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               JumpStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               JumpEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::SpawnFootprint(const struct FVector& Location, const struct FRotator& Rotation, bool Left, bool Right, bool JumpStart, bool JumpEnd, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType, class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.SpawnFootprint");

	UFootprintComponent_C_SpawnFootprint_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;
	params.Left = Left;
	params.Right = Right;
	params.JumpStart = JumpStart;
	params.JumpEnd = JumpEnd;
	params.SurfaceType = SurfaceType;
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.PlayLocally
//		Flags  -> ()
// Parameters:
//		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::PlayLocally(class USoundBase* Sound, const struct FVector& Location, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.PlayLocally");

	UFootprintComponent_C_PlayLocally_Params params {};
	params.Sound = Sound;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.DefaultSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::DefaultSound(class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.DefaultSound");

	UFootprintComponent_C_DefaultSound_Params params {};
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.CarpetSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::CarpetSound(class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.CarpetSound");

	UFootprintComponent_C_CarpetSound_Params params {};
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.GlassSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::GlassSound(class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.GlassSound");

	UFootprintComponent_C_GlassSound_Params params {};
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.WetSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::WetSound(class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.WetSound");

	UFootprintComponent_C_WetSound_Params params {};
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.MetalSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::MetalSound(class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.MetalSound");

	UFootprintComponent_C_MetalSound_Params params {};
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.ServerSpawnFootprint
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UMaterialInstance*                           Decal_Material                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Current_Steps                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxSteps                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::ServerSpawnFootprint(const struct FVector& Location, const struct FRotator& Rotation, class UMaterialInstance* Decal_Material, float Current_Steps, float MaxSteps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ServerSpawnFootprint");

	UFootprintComponent_C_ServerSpawnFootprint_Params params {};
	params.Location = Location;
	params.Rotation = Rotation;
	params.Decal_Material = Decal_Material;
	params.Current_Steps = Current_Steps;
	params.MaxSteps = MaxSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.TileSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::TileSound(class UFMODAudioComponent* FMODAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.TileSound");

	UFootprintComponent_C_TileSound_Params params {};
	params.FMODAudio = FMODAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.EarthSound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputFMOD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::EarthSound(class UFMODAudioComponent* InputFMOD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.EarthSound");

	UFootprintComponent_C_EarthSound_Params params {};
	params.InputFMOD = InputFMOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.HaySound
//		Flags  -> ()
// Parameters:
//		class UFMODAudioComponent*                         InputFMOD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::HaySound(class UFMODAudioComponent* InputFMOD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.HaySound");

	UFootprintComponent_C_HaySound_Params params {};
	params.InputFMOD = InputFMOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.SpawnDecal
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
void UFootprintComponent_C::SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.SpawnDecal");

	UFootprintComponent_C_SpawnDecal_Params params {};
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
//		Name   -> Function FootprintComponent.FootprintComponent_C.Chair Open Stage
//		Flags  -> ()
void UFootprintComponent_C::Chair_Open_Stage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.Chair Open Stage");

	UFootprintComponent_C_Chair_Open_Stage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.ChangeFootState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFootState_EFootState>                 New_Style                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ChangeFootState");

	UFootprintComponent_C_ChangeFootState_Params params {};
	params.New_Style = New_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.ServerSpawnSound
//		Flags  -> ()
// Parameters:
//		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::ServerSpawnSound(class USoundBase* Sound, const struct FVector& Location, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ServerSpawnSound");

	UFootprintComponent_C_ServerSpawnSound_Params params {};
	params.Sound = Sound;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.MulticastFootprintMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInstance*                           Decal_Material                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFootprint_Actor_C*                          Footprint_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CurrentSteps                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxSteps                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::MulticastFootprintMaterial(class UMaterialInstance* Decal_Material, class AFootprint_Actor_C* Footprint_Actor, float CurrentSteps, float MaxSteps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.MulticastFootprintMaterial");

	UFootprintComponent_C_MulticastFootprintMaterial_Params params {};
	params.Decal_Material = Decal_Material;
	params.Footprint_Actor = Footprint_Actor;
	params.CurrentSteps = CurrentSteps;
	params.MaxSteps = MaxSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.MulticastSpawnSound
//		Flags  -> ()
// Parameters:
//		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::MulticastSpawnSound(class USoundBase* Sound, const struct FVector& Location, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.MulticastSpawnSound");

	UFootprintComponent_C_MulticastSpawnSound_Params params {};
	params.Sound = Sound;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintComponent_C::ExecuteUbergraph_FootprintComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent");

	UFootprintComponent_C_ExecuteUbergraph_FootprintComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
