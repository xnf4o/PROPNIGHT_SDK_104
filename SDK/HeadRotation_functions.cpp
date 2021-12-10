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
//		Name   -> Function HeadRotation.HeadRotation_C.HeadRotationFunc
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeadRotation_C::HeadRotationFunc(struct FRotator* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeadRotation.HeadRotation_C.HeadRotationFunc");

	UHeadRotation_C_HeadRotationFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
