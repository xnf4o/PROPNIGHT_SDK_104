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
//		Name   -> Function SoundComman_UI_Lib.SoundComman_UI_Lib_C.GetViewportCenter
//		Flags  -> ()
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundComman_UI_Lib_C::GetViewportCenter(class UObject* __WorldContext, struct FVector2D* Center)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundComman_UI_Lib.SoundComman_UI_Lib_C.GetViewportCenter");

	USoundComman_UI_Lib_C_GetViewportCenter_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundComman_UI_Lib.SoundComman_UI_Lib_C.Point To Point(360°)
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   CenterPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USoundComman_UI_Lib_C::Point_To_Point_360°_(const struct FVector2D& Point, const struct FVector2D& CenterPoint, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundComman_UI_Lib.SoundComman_UI_Lib_C.Point To Point(360°)");

	USoundComman_UI_Lib_C_Point_To_Point_360°__Params params {};
	params.Point = Point;
	params.CenterPoint = CenterPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
