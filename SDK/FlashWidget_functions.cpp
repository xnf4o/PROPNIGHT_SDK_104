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
//		Name   -> Function FlashWidget.FlashWidget_C.FlashCapture
//		Flags  -> ()
// Parameters:
//		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Granny                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               MarioStun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFlashWidget_C::FlashCapture(float PlaybackSpeed, bool Granny, bool MarioStun, bool Grenade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashWidget.FlashWidget_C.FlashCapture");

	UFlashWidget_C_FlashCapture_Params params {};
	params.PlaybackSpeed = PlaybackSpeed;
	params.Granny = Granny;
	params.MarioStun = MarioStun;
	params.Grenade = Grenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FlashWidget.FlashWidget_C.ExecuteUbergraph_FlashWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlashWidget_C::ExecuteUbergraph_FlashWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashWidget.FlashWidget_C.ExecuteUbergraph_FlashWidget");

	UFlashWidget_C_ExecuteUbergraph_FlashWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
