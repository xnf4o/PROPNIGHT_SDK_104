#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FootprintComponent.FootprintComponent_C
// 0x0096 (FullSize[0x0146] - InheritedSize[0x00B0])
class UFootprintComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             Mesh;                                                      // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EFootprintStyle_EFootprintStyle>       CurrentFootwear;                                           // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EFootState_EFootState>                 FootState;                                                 // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UMCP[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxMudSteps;                                               // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentMudSteps;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSandSteps;                                              // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSandSteps;                                          // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Left;                                                      // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Right;                                                     // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZWUA[0x2];                                     // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Location;                                                  // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxWetSteps;                                               // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentWetSteps;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxBloodSteps;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentBloodSteps;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentMulticastSteps;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentMaxSteps;                                           // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFootprint_Actor_C*                          FootprintActor;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           decal;                                                     // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseThreshold;                                          // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeSensitivity;                                         // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeFootprint;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseThresholdMax;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxVolume;                                                 // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EGZH[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODAudioComponent*                         FMODAudio;                                                 // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               JumpEnd;                                                   // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Killer_;                                                   // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ImProp_;                                                   // 0x013A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               JumpStart;                                                 // 0x013B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Run_;                                                      // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RHLV[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillerType;                                                // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Crouch_;                                                   // 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Crawl_;                                                    // 0x0145(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FootprintComponent.FootprintComponent_C");
		return ptr;
	}



	void GetVolumeOneFloorProp(float* Volume);
	void GetVolumeOneFloor(float* Volume);
	void GetVolumeProp(float* Volume);
	void HayFMOD(class UFMODAudioComponent* InputFMOD);
	void Earth_FMOD(class UFMODAudioComponent* InputFMOD);
	void GetVolumeByZDiff(class AActor* Actor, float* Volume);
	void PlayJumpSound(class UFMODEvent* FMODObj, class UFMODAudioComponent* Comp);
	void GetVolume(float* Volume);
	void TileFMOD(class UFMODAudioComponent* InputPin);
	void KillerTypeFunc(bool* Keymaster, bool* Granny, bool* Doppelganger);
	void MetalFMOD(class UFMODAudioComponent* InputPin);
	void WetFMOD(class UFMODAudioComponent* InputPin);
	void GlassFMOD(class UFMODAudioComponent* InputPin);
	void CarpetFMOD(class UFMODAudioComponent* InputPin);
	void DefaultFMOD(class UFMODAudioComponent* InputPin);
	void SpawnFootprint(const struct FVector& Location, const struct FRotator& Rotation, bool Left, bool Right, bool JumpStart, bool JumpEnd, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType, class UFMODAudioComponent* FMODAudio);
	void PlayLocally(class USoundBase* Sound, const struct FVector& Location, float Volume);
	void DefaultSound(class UFMODAudioComponent* FMODAudio);
	void CarpetSound(class UFMODAudioComponent* FMODAudio);
	void GlassSound(class UFMODAudioComponent* FMODAudio);
	void WetSound(class UFMODAudioComponent* FMODAudio);
	void MetalSound(class UFMODAudioComponent* FMODAudio);
	void ServerSpawnFootprint(const struct FVector& Location, const struct FRotator& Rotation, class UMaterialInstance* Decal_Material, float Current_Steps, float MaxSteps);
	void TileSound(class UFMODAudioComponent* FMODAudio);
	void EarthSound(class UFMODAudioComponent* InputFMOD);
	void HaySound(class UFMODAudioComponent* InputFMOD);
	void SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake);
	void Chair_Open_Stage();
	void ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style);
	void ServerSpawnSound(class USoundBase* Sound, const struct FVector& Location, float Volume);
	void MulticastFootprintMaterial(class UMaterialInstance* Decal_Material, class AFootprint_Actor_C* Footprint_Actor, float CurrentSteps, float MaxSteps);
	void MulticastSpawnSound(class USoundBase* Sound, const struct FVector& Location, float Volume);
	void ExecuteUbergraph_FootprintComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
