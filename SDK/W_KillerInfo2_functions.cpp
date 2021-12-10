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
//		Name   -> Function W_KillerInfo2.W_KillerInfo2_C.SetInfo
//		Flags  -> ()
// Parameters:
//		struct FText                                       SkillName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       SkillDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KillerInfo2_C::SetInfo(const struct FText& SkillName, const struct FText& SkillDesc, class UObject* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_KillerInfo2.W_KillerInfo2_C.SetInfo");

	UW_KillerInfo2_C_SetInfo_Params params {};
	params.SkillName = SkillName;
	params.SkillDesc = SkillDesc;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_KillerInfo2.W_KillerInfo2_C.ExecuteUbergraph_W_KillerInfo2
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_KillerInfo2_C::ExecuteUbergraph_W_KillerInfo2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_KillerInfo2.W_KillerInfo2_C.ExecuteUbergraph_W_KillerInfo2");

	UW_KillerInfo2_C_ExecuteUbergraph_W_KillerInfo2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
