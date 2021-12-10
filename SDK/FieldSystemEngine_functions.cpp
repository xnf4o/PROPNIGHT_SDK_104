﻿// Name: P, Version: 1

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
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
//		Flags  -> ()
void UFieldSystemComponent::ResetFieldSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	UFieldSystemComponent_ResetFieldSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	UFieldSystemComponent_ApplyStrainField_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	UFieldSystemComponent_ApplyStayDynamicField_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	UFieldSystemComponent_ApplyRadialForce_Params params {};
	params.Enabled = Enabled;
	params.Position = Position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldPhysicsType>               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, TEnumAsByte<Chaos_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	UFieldSystemComponent_ApplyPhysicsField_Params params {};
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	UFieldSystemComponent_ApplyLinearForce_Params params {};
	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldPhysicsType>               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::AddFieldCommand(bool Enabled, TEnumAsByte<Chaos_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	UFieldSystemComponent_AddFieldCommand_Params params {};
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
//		Flags  -> ()
// Parameters:
//		int                                                Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldSystemMetaDataIteration*               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int Iterations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	UFieldSystemMetaDataIteration_SetMetaDataIteration_Params params {};
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Chaos_EFieldResolutionType>            ResolutionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldSystemMetaDataProcessingResolution*    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<Chaos_EFieldResolutionType> ResolutionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params params {};
	params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.UniformInteger.SetUniformInteger
//		Flags  -> ()
// Parameters:
//		int                                                Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUniformInteger*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformInteger* UUniformInteger::SetUniformInteger(int Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	UUniformInteger_SetUniformInteger_Params params {};
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
//		Flags  -> ()
// Parameters:
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ExteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_ESetMaskConditionType>           SetMaskConditionIn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URadialIntMask*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<Chaos_ESetMaskConditionType> SetMaskConditionIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	URadialIntMask_SetRadialIntMask_Params params {};
	params.Radius = Radius;
	params.Position = Position;
	params.InteriorValue = InteriorValue;
	params.ExteriorValue = ExteriorValue;
	params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.UniformScalar.SetUniformScalar
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUniformScalar*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	UUniformScalar_SetUniformScalar_Params params {};
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldFalloffType>               Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URadialFalloff*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<Chaos_EFieldFalloffType> Falloff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	URadialFalloff_SetRadialFalloff_Params params {};
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Radius = Radius;
	params.Position = Position;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldFalloffType>               Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPlaneFalloff*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<Chaos_EFieldFalloffType> Falloff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	UPlaneFalloff_SetPlaneFalloff_Params params {};
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Distance = Distance;
	params.Position = Position;
	params.Normal = Normal;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldFalloffType>               Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBoxFalloff*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<Chaos_EFieldFalloffType> Falloff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	UBoxFalloff_SetBoxFalloff_Params params {};
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Transform = Transform;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.NoiseField.SetNoiseField
//		Flags  -> ()
// Parameters:
//		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UNoiseField*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	UNoiseField_SetNoiseField_Params params {};
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.UniformVector.SetUniformVector
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUniformVector*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	UUniformVector_SetUniformVector_Params params {};
	params.Magnitude = Magnitude;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.RadialVector.SetRadialVector
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URadialVector*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	URadialVector_SetRadialVector_Params params {};
	params.Magnitude = Magnitude;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.RandomVector.SetRandomVector
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URandomVector*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URandomVector* URandomVector::SetRandomVector(float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	URandomVector_SetRandomVector_Params params {};
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.OperatorField.SetOperatorField
//		Flags  -> ()
// Parameters:
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldNodeBase*                              RightField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldNodeBase*                              LeftField                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldOperationType>             Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UOperatorField*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<Chaos_EFieldOperationType> Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	UOperatorField_SetOperatorField_Params params {};
	params.Magnitude = Magnitude;
	params.RightField = RightField;
	params.LeftField = LeftField;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.ToIntegerField.SetToIntegerField
//		Flags  -> ()
// Parameters:
//		class UFieldNodeFloat*                             FloatField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UToIntegerField*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	UToIntegerField_SetToIntegerField_Params params {};
	params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.ToFloatField.SetToFloatField
//		Flags  -> ()
// Parameters:
//		class UFieldNodeInt*                               IntegerField                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UToFloatField*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	UToFloatField_SetToFloatField_Params params {};
	params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.CullingField.SetCullingField
//		Flags  -> ()
// Parameters:
//		class UFieldNodeBase*                              Culling                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldNodeBase*                              Field                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Chaos_EFieldCullingOperationType>      Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCullingField*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<Chaos_EFieldCullingOperationType> Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	UCullingField_SetCullingField_Params params {};
	params.Culling = Culling;
	params.Field = Field;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
//		Flags  -> ()
// Parameters:
//		class UReturnResultsTerminal*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");

	UReturnResultsTerminal_SetReturnResultsTerminal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
