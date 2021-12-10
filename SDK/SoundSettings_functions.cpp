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
//		Name   -> Function SoundSettings.SoundSettings_C.DoCustomNavigation_2
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USoundSettings_C::DoCustomNavigation_2(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.DoCustomNavigation_2");

	USoundSettings_C_DoCustomNavigation_2_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.DoCustomNavigation_1
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USoundSettings_C::DoCustomNavigation_1(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.DoCustomNavigation_1");

	USoundSettings_C_DoCustomNavigation_1_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ChangeButtonColor
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Low                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Higth                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Lenght                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USoundSettings_C::ChangeButtonColor(class UImage* Low, class UImage* Higth, bool Condition, int Index, int Lenght, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ChangeButtonColor");

	USoundSettings_C_ChangeButtonColor_Params params {};
	params.Low = Low;
	params.Higth = Higth;
	params.Condition = Condition;
	params.Index = Index;
	params.Lenght = Lenght;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.GetText_BGMUSIC
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text_Btn                                                   (Parm, OutParm)
void USoundSettings_C::GetText_BGMUSIC(struct FText* Text_Btn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.GetText_BGMUSIC");

	USoundSettings_C_GetText_BGMUSIC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text_Btn != nullptr)
		*Text_Btn = params.Text_Btn;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.DoCustomNavigationToVOIP
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USoundSettings_C::DoCustomNavigationToVOIP(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.DoCustomNavigationToVOIP");

	USoundSettings_C_DoCustomNavigationToVOIP_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.UpdateBoostMic
//		Flags  -> ()
void USoundSettings_C::UpdateBoostMic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.UpdateBoostMic");

	USoundSettings_C_UpdateBoostMic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.OnMouseWheel
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply USoundSettings_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.OnMouseWheel");

	USoundSettings_C_OnMouseWheel_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.DoCustomNavigation_ToMic
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USoundSettings_C::DoCustomNavigation_ToMic(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.DoCustomNavigation_ToMic");

	USoundSettings_C_DoCustomNavigation_ToMic_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.DoCustomNavigationToVOIPBoost
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* USoundSettings_C::DoCustomNavigationToVOIPBoost(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.DoCustomNavigationToVOIPBoost");

	USoundSettings_C_DoCustomNavigationToVOIPBoost_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.LastKnowFocus
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::LastKnowFocus(class UWidget** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.LastKnowFocus");

	USoundSettings_C_LastKnowFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ExcuteCommandsSound
//		Flags  -> ()
// Parameters:
void USoundSettings_C::ExcuteCommandsSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ExcuteCommandsSound");

	USoundSettings_C_ExcuteCommandsSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.StormVolume
//		Flags  -> ()
// Parameters:
void USoundSettings_C::StormVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.StormVolume");

	USoundSettings_C_StormVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.Save
//		Flags  -> ()
// Parameters:
void USoundSettings_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.Save");

	USoundSettings_C_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.Load
//		Flags  -> ()
// Parameters:
void USoundSettings_C::Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.Load");

	USoundSettings_C_Load_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__GeneralS_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__GeneralS_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__MusicS_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__MusicS_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__SFXS_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SFXS_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USoundSettings_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.OnMouseLeave");

	USoundSettings_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void USoundSettings_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.OnMouseEnter");

	USoundSettings_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SetToMouseFocus
//		Flags  -> ()
void USoundSettings_C::SetToMouseFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SetToMouseFocus");

	USoundSettings_C_SetToMouseFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.LostFocusMouseClick
//		Flags  -> ()
void USoundSettings_C::LostFocusMouseClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.LostFocusMouseClick");

	USoundSettings_C_LostFocusMouseClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__VOIP_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.Select
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::Select(class UImage* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.Select");

	USoundSettings_C_Select_Params params {};
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.Deselect
//		Flags  -> ()
void USoundSettings_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.Deselect");

	USoundSettings_C_Deselect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__Button_GV_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__Button_GV_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__Button_GV_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__Button_GV_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__Button_MV_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__Button_MV_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__Button_MV_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__Button_MV_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__Button_SFX_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__Button_SFX_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__Button_SFX_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__Button_SFX_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__Button_VOIP_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__Button_VOIP_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__Button_VOIP_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__Button_VOIP_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SelectGV
//		Flags  -> ()
void USoundSettings_C::SelectGV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SelectGV");

	USoundSettings_C_SelectGV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SelectMV
//		Flags  -> ()
void USoundSettings_C::SelectMV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SelectMV");

	USoundSettings_C_SelectMV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SelectSFX
//		Flags  -> ()
void USoundSettings_C::SelectSFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SelectSFX");

	USoundSettings_C_SelectSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SelectVOIP
//		Flags  -> ()
void USoundSettings_C::SelectVOIP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SelectVOIP");

	USoundSettings_C_SelectVOIP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__Button_Device_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__Button_Device_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__Button_Device_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__Button_Device_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SelectDevice
//		Flags  -> ()
void USoundSettings_C::SelectDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SelectDevice");

	USoundSettings_C_SelectDevice_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ChangeSliderColor
//		Flags  -> ()
// Parameters:
//		class USlider*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USoundSettings_C::ChangeSliderColor(class USlider* Target, bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ChangeSliderColor");

	USoundSettings_C_ChangeSliderColor_Params params {};
	params.Target = Target;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ChangeTextColor
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::ChangeTextColor(class UWidget* Overlay, class UTextBlock* Text, class UTextBlock* Value, class UImage* Image, class USlider* Slider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ChangeTextColor");

	USoundSettings_C_ChangeTextColor_Params params {};
	params.Overlay = Overlay;
	params.Text = Text;
	params.Value = Value;
	params.Image = Image;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ChangeSliderValue
//		Flags  -> ()
// Parameters:
//		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::ChangeSliderValue(class USlider* Slider, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ChangeSliderValue");

	USoundSettings_C_ChangeSliderValue_Params params {};
	params.Slider = Slider;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.Tick");

	USoundSettings_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_VOIP_Boost_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__SoundSettings_VOIP_Boost_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_VOIP_Boost_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_VOIP_Boost_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_4_EventDispatcher_SetMicrophone__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_4_EventDispatcher_SetMicrophone__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_4_EventDispatcher_SetMicrophone__DelegateSignature");

	USoundSettings_C_BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_4_EventDispatcher_SetMicrophone__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.SetVoiceDevice
//		Flags  -> ()
void USoundSettings_C::SetVoiceDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.SetVoiceDevice");

	USoundSettings_C_SetVoiceDevice_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_6_EventDispatcher_Open__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_6_EventDispatcher_Open__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_6_EventDispatcher_Open__DelegateSignature");

	USoundSettings_C_BndEvt__VoiceDevice_K2Node_ComponentBoundEvent_6_EventDispatcher_Open__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.Construct
//		Flags  -> ()
void USoundSettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.Construct");

	USoundSettings_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USoundSettings_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.PreConstruct");

	USoundSettings_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_VOIP_Boost_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_VOIP_Boost_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_VOIP_Boost_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_VOIP_Boost_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_12_EventDispatcher_Left__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_12_EventDispatcher_Left__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_12_EventDispatcher_Left__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_12_EventDispatcher_Left__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_13_EventDispatcher_Right__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_13_EventDispatcher_Right__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_13_EventDispatcher_Right__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_13_EventDispatcher_Right__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UCustomGraphicButton_C*                      Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature(class UCustomGraphicButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_BG_MUSIC_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BG_MUSIC_BTNSTYLE
//		Flags  -> ()
void USoundSettings_C::BG_MUSIC_BTNSTYLE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BG_MUSIC_BTNSTYLE");

	USoundSettings_C_BG_MUSIC_BTNSTYLE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ChangePanel
//		Flags  -> ()
// Parameters:
//		class UCustomGraphicButton_C*                      Overlay                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      LowBTN                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      HigthBTN                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Lenght                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USoundSettings_C::ChangePanel(class UCustomGraphicButton_C* Overlay, class UTextBlock* Title, class UTextBlock* Value, class UImage* Image, class UImage* LowBTN, class UImage* HigthBTN, int Index, int Lenght, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ChangePanel");

	USoundSettings_C_ChangePanel_Params params {};
	params.Overlay = Overlay;
	params.Title = Title;
	params.Value = Value;
	params.Image = Image;
	params.LowBTN = LowBTN;
	params.HigthBTN = HigthBTN;
	params.Index = Index;
	params.Lenght = Lenght;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_186_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_186_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_186_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_186_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_187_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_187_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_187_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_187_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_188_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_188_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_188_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_188_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_189_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_189_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_189_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_189_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void USoundSettings_C::BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	USoundSettings_C_BndEvt__SoundSettings_Button_Device_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundSettings.SoundSettings_C.ExecuteUbergraph_SoundSettings
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundSettings_C::ExecuteUbergraph_SoundSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundSettings.SoundSettings_C.ExecuteUbergraph_SoundSettings");

	USoundSettings_C_ExecuteUbergraph_SoundSettings_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
