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
//		Name   -> Function FMODStudio.FMODAudioComponent.Stop
//		Flags  -> ()
void UFMODAudioComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Stop");

	UFMODAudioComponent_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetVolume
//		Flags  -> ()
// Parameters:
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetVolume");

	UFMODAudioComponent_SetVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetTimelinePosition
//		Flags  -> ()
// Parameters:
//		int                                                Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetTimelinePosition(int Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetTimelinePosition");

	UFMODAudioComponent_SetTimelinePosition_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetProperty
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<FMODStudio_EFMODEventProperty>         Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetProperty(TEnumAsByte<FMODStudio_EFMODEventProperty> Property, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetProperty");

	UFMODAudioComponent_SetProperty_Params params {};
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetProgrammerSoundName(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName");

	UFMODAudioComponent_SetProgrammerSoundName_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetPitch
//		Flags  -> ()
// Parameters:
//		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetPitch(float Pitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPitch");

	UFMODAudioComponent_SetPitch_Params params {};
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetPaused
//		Flags  -> ()
// Parameters:
//		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetPaused(bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPaused");

	UFMODAudioComponent_SetPaused_Params params {};
	params.paused = paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetParameter
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetParameter(const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetParameter");

	UFMODAudioComponent_SetParameter_Params params {};
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.SetEvent
//		Flags  -> ()
// Parameters:
//		class UFMODEvent*                                  NewEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetEvent(class UFMODEvent* NewEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetEvent");

	UFMODAudioComponent_SetEvent_Params params {};
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.Release
//		Flags  -> ()
void UFMODAudioComponent::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Release");

	UFMODAudioComponent_Release_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.Play
//		Flags  -> ()
void UFMODAudioComponent::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Play");

	UFMODAudioComponent_Play_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.KeyOff
//		Flags  -> ()
void UFMODAudioComponent::KeyOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.KeyOff");

	UFMODAudioComponent_KeyOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.IsPlaying
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODAudioComponent::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.IsPlaying");

	UFMODAudioComponent_IsPlaying_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.GetTimelinePosition
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFMODAudioComponent::GetTimelinePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetTimelinePosition");

	UFMODAudioComponent_GetTimelinePosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.GetProperty
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<FMODStudio_EFMODEventProperty>         Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODAudioComponent::GetProperty(TEnumAsByte<FMODStudio_EFMODEventProperty> Property)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetProperty");

	UFMODAudioComponent_GetProperty_Params params {};
	params.Property = Property;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.GetParameterValue
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::GetParameterValue(const struct FName& Name, float* UserValue, float* FinalValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetParameterValue");

	UFMODAudioComponent_GetParameterValue_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserValue != nullptr)
		*UserValue = params.UserValue;
	if (FinalValue != nullptr)
		*FinalValue = params.FinalValue;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.GetParameter
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODAudioComponent::GetParameter(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetParameter");

	UFMODAudioComponent_GetParameter_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODAudioComponent.GetLength
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFMODAudioComponent::GetLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetLength");

	UFMODAudioComponent_GetLength_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.VCASetVolume
//		Flags  -> ()
// Parameters:
//		class UFMODVCA*                                    Vca                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::VCASetVolume(class UFMODVCA* Vca, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.VCASetVolume");

	UFMODBlueprintStatics_VCASetVolume_Params params {};
	params.Vca = Vca;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData");

	UFMODBlueprintStatics_UnloadEventSampleData_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
//		Flags  -> ()
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::UnloadBankSampleData(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData");

	UFMODBlueprintStatics_UnloadBankSampleData_Params params {};
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadBank
//		Flags  -> ()
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::UnloadBank(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadBank");

	UFMODBlueprintStatics_UnloadBank_Params params {};
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewDriverName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::SetOutputDriverByName(const struct FString& NewDriverName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName");

	UFMODBlueprintStatics_SetOutputDriverByName_Params params {};
	params.NewDriverName = NewDriverName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
//		Flags  -> ()
// Parameters:
//		int                                                NewDriverIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::SetOutputDriverByIndex(int NewDriverIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex");

	UFMODBlueprintStatics_SetOutputDriverByIndex_Params params {};
	params.NewDriverIndex = NewDriverIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetLocale
//		Flags  -> ()
// Parameters:
//		struct FString                                     Locale                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::SetLocale(const struct FString& Locale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetLocale");

	UFMODBlueprintStatics_SetLocale_Params params {};
	params.Locale = Locale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::SetGlobalParameterByName(const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName");

	UFMODBlueprintStatics_SetGlobalParameterByName_Params params {};
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
//		Flags  -> ()
// Parameters:
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODAudioComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODAudioComponent* UFMODBlueprintStatics::PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEventAttached");

	UFMODBlueprintStatics_PlayEventAttached_Params params {};
	params.Event = Event;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.bAutoPlay = bAutoPlay;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFMODEventInstance                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FFMODEventInstance UFMODBlueprintStatics::PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation");

	UFMODBlueprintStatics_PlayEventAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Location = Location;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFMODEventInstance                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FFMODEventInstance UFMODBlueprintStatics::PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEvent2D");

	UFMODBlueprintStatics_PlayEvent2D_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.MixerSuspend
//		Flags  -> ()
void UFMODBlueprintStatics::MixerSuspend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.MixerSuspend");

	UFMODBlueprintStatics_MixerSuspend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.MixerResume
//		Flags  -> ()
void UFMODBlueprintStatics::MixerResume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.MixerResume");

	UFMODBlueprintStatics_MixerResume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData");

	UFMODBlueprintStatics_LoadEventSampleData_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
//		Flags  -> ()
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::LoadBankSampleData(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData");

	UFMODBlueprintStatics_LoadBankSampleData_Params params {};
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadBank
//		Flags  -> ()
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bBlocking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLoadSampleData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadBank");

	UFMODBlueprintStatics_LoadBank_Params params {};
	params.Bank = Bank;
	params.bBlocking = bBlocking;
	params.bLoadSampleData = bLoadSampleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
//		Flags  -> ()
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODBlueprintStatics::IsBankLoaded(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.IsBankLoaded");

	UFMODBlueprintStatics_IsBankLoaded_Params params {};
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UFMODBlueprintStatics::GetOutputDrivers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers");

	UFMODBlueprintStatics_GetOutputDrivers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::GetGlobalParameterValueByName(const struct FName& Name, float* UserValue, float* FinalValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName");

	UFMODBlueprintStatics_GetGlobalParameterValueByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserValue != nullptr)
		*UserValue = params.UserValue;
	if (FinalValue != nullptr)
		*FinalValue = params.FinalValue;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODBlueprintStatics::GetGlobalParameterByName(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName");

	UFMODBlueprintStatics_GetGlobalParameterByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.FindEventInstances
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FFMODEventInstance>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FFMODEventInstance> UFMODBlueprintStatics::FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventInstances");

	UFMODBlueprintStatics_FindEventInstances_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.FindEventByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODEvent* UFMODBlueprintStatics::FindEventByName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventByName");

	UFMODBlueprintStatics_FindEventByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.FindAssetByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODAsset*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODAsset* UFMODBlueprintStatics::FindAssetByName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindAssetByName");

	UFMODBlueprintStatics_FindAssetByName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Release                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceStop");

	UFMODBlueprintStatics_EventInstanceStop_Params params {};
	params.EventInstance = EventInstance;
	params.Release = Release;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume");

	UFMODBlueprintStatics_EventInstanceSetVolume_Params params {};
	params.EventInstance = EventInstance;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FTransform                                  Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform");

	UFMODBlueprintStatics_EventInstanceSetTransform_Params params {};
	params.EventInstance = EventInstance;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<FMODStudio_EFMODEventProperty>         Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, TEnumAsByte<FMODStudio_EFMODEventProperty> Property, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty");

	UFMODBlueprintStatics_EventInstanceSetProperty_Params params {};
	params.EventInstance = EventInstance;
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch");

	UFMODBlueprintStatics_EventInstanceSetPitch_Params params {};
	params.EventInstance = EventInstance;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused");

	UFMODBlueprintStatics_EventInstanceSetPaused_Params params {};
	params.EventInstance = EventInstance;
	params.paused = paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter");

	UFMODBlueprintStatics_EventInstanceSetParameter_Params params {};
	params.EventInstance = EventInstance;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceRelease(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease");

	UFMODBlueprintStatics_EventInstanceRelease_Params params {};
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstancePlay(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstancePlay");

	UFMODBlueprintStatics_EventInstancePlay_Params params {};
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceKeyOff(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff");

	UFMODBlueprintStatics_EventInstanceKeyOff_Params params {};
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODBlueprintStatics::EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid");

	UFMODBlueprintStatics_EventInstanceIsValid_Params params {};
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float* UserValue, float* FinalValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue");

	UFMODBlueprintStatics_EventInstanceGetParameterValue_Params params {};
	params.EventInstance = EventInstance;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserValue != nullptr)
		*UserValue = params.UserValue;
	if (FinalValue != nullptr)
		*FinalValue = params.FinalValue;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
//		Flags  -> ()
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODBlueprintStatics::EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter");

	UFMODBlueprintStatics_EventInstanceGetParameter_Params params {};
	params.EventInstance = EventInstance;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
//		Flags  -> ()
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE>     stopMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents");

	UFMODBlueprintStatics_BusStopAllEvents_Params params {};
	params.Bus = Bus;
	params.stopMode = stopMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetVolume
//		Flags  -> ()
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::BusSetVolume(class UFMODBus* Bus, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetVolume");

	UFMODBlueprintStatics_BusSetVolume_Params params {};
	params.Bus = Bus;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetPaused
//		Flags  -> ()
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::BusSetPaused(class UFMODBus* Bus, bool bPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetPaused");

	UFMODBlueprintStatics_BusSetPaused_Params params {};
	params.Bus = Bus;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetMute
//		Flags  -> ()
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::BusSetMute(class UFMODBus* Bus, bool bMute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetMute");

	UFMODBlueprintStatics_BusSetMute_Params params {};
	params.Bus = Bus;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
