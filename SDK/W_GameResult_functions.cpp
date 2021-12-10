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
//		Name   -> Function W_GameResult.W_GameResult_C.GetCountPlayersForInforamtion
//		Flags  -> ()
// Parameters:
//		TArray<struct FEndGamePlayerData>                  Informations                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                Counter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResult_C::GetCountPlayersForInforamtion(TArray<struct FEndGamePlayerData> Informations, int* Counter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.GetCountPlayersForInforamtion");

	UW_GameResult_C_GetCountPlayersForInforamtion_Params params {};
	params.Informations = Informations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Counter != nullptr)
		*Counter = params.Counter;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.GetKillerPlayerInformation
//		Flags  -> ()
// Parameters:
//		struct FEndGamePlayerData                          PlayerInformation                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UW_GameResult_C::GetKillerPlayerInformation(struct FEndGamePlayerData* PlayerInformation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.GetKillerPlayerInformation");

	UW_GameResult_C_GetKillerPlayerInformation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInformation != nullptr)
		*PlayerInformation = params.PlayerInformation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.InitHighlighs
//		Flags  -> ()
// Parameters:
void UW_GameResult_C::InitHighlighs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.InitHighlighs");

	UW_GameResult_C_InitHighlighs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Deselect Other Maps
//		Flags  -> ()
// Parameters:
//		class UObject*                                     MapBG                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     ImageLight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Checkimage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResult_C::Deselect_Other_Maps(class UObject* MapBG, class UObject* ImageLight, class UObject* Checkimage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Deselect Other Maps");

	UW_GameResult_C_Deselect_Other_Maps_Params params {};
	params.MapBG = MapBG;
	params.ImageLight = ImageLight;
	params.Checkimage = Checkimage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.PlayAnimAndSetColor
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResult_C::PlayAnimAndSetColor(class UWidgetAnimation* InAnimation, class UImage* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.PlayAnimAndSetColor");

	UW_GameResult_C_PlayAnimAndSetColor_Params params {};
	params.InAnimation = InAnimation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapImage1_2_Brush_1
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UW_GameResult_C::Get_MapImage1_2_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapImage1_2_Brush_1");

	UW_GameResult_C_Get_MapImage1_2_Brush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapImage1_1_Brush_1
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UW_GameResult_C::Get_MapImage1_1_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapImage1_1_Brush_1");

	UW_GameResult_C_Get_MapImage1_1_Brush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapImage1_Brush_1
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UW_GameResult_C::Get_MapImage1_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapImage1_Brush_1");

	UW_GameResult_C_Get_MapImage1_Brush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapName1_2_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::Get_MapName1_2_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapName1_2_Text_1");

	UW_GameResult_C_Get_MapName1_2_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapName1_1_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::Get_MapName1_1_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapName1_1_Text_1");

	UW_GameResult_C_Get_MapName1_1_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapName1_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::Get_MapName1_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapName1_Text_1");

	UW_GameResult_C_Get_MapName1_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapVote1_2_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::Get_MapVote1_2_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapVote1_2_Text_1");

	UW_GameResult_C_Get_MapVote1_2_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get Map Vote 1 1 Text 0
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::Get_Map_Vote_1_1_Text_0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get Map Vote 1 1 Text 0");

	UW_GameResult_C_Get_Map_Vote_1_1_Text_0_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Get_MapVote1_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::Get_MapVote1_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Get_MapVote1_Text_1");

	UW_GameResult_C_Get_MapVote1_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.PercentageLVL
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UW_GameResult_C::PercentageLVL()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.PercentageLVL");

	UW_GameResult_C_PercentageLVL_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.LvlText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_GameResult_C::LvlText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.LvlText");

	UW_GameResult_C_LvlText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.OnKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UW_GameResult_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.OnKeyDown");

	UW_GameResult_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.HasAnyEscapedSurvivor
//		Flags  -> ()
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GameResult_C::HasAnyEscapedSurvivor(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.HasAnyEscapedSurvivor");

	UW_GameResult_C_HasAnyEscapedSurvivor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Finished_F07CB7EC4C8D6A1F1BFD15BF186FBFB6
//		Flags  -> ()
void UW_GameResult_C::Finished_F07CB7EC4C8D6A1F1BFD15BF186FBFB6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Finished_F07CB7EC4C8D6A1F1BFD15BF186FBFB6");

	UW_GameResult_C_Finished_F07CB7EC4C8D6A1F1BFD15BF186FBFB6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Finished_DF5EDB26487B5FA79CE8E1B7B19ECACE
//		Flags  -> ()
void UW_GameResult_C::Finished_DF5EDB26487B5FA79CE8E1B7B19ECACE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Finished_DF5EDB26487B5FA79CE8E1B7B19ECACE");

	UW_GameResult_C_Finished_DF5EDB26487B5FA79CE8E1B7B19ECACE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Construct
//		Flags  -> ()
void UW_GameResult_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Construct");

	UW_GameResult_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResult_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Tick");

	UW_GameResult_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.OnEndGameUI
//		Flags  -> ()
// Parameters:
//		bool                                               EndGame_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GameResult_C::OnEndGameUI(bool EndGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.OnEndGameUI");

	UW_GameResult_C_OnEndGameUI_Params params {};
	params.EndGame_ = EndGame_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.StartCreate
//		Flags  -> ()
void UW_GameResult_C::StartCreate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.StartCreate");

	UW_GameResult_C_StartCreate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.UploadExp
//		Flags  -> ()
void UW_GameResult_C::UploadExp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.UploadExp");

	UW_GameResult_C_UploadExp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__ButtonVoteMap1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__ButtonVoteMap1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__ButtonVoteMap1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__ButtonVoteMap1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__ButtonVoteMap1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__ButtonVoteMap1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__VotingMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__VotingMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__VotingMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__VotingMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__MatchResult_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__MatchResult_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__MatchResult_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__MatchResult_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.StopEndGameSounds
//		Flags  -> ()
void UW_GameResult_C::StopEndGameSounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.StopEndGameSounds");

	UW_GameResult_C_StopEndGameSounds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GameResult_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.PreConstruct");

	UW_GameResult_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.OpenVotingMap
//		Flags  -> ()
void UW_GameResult_C::OpenVotingMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.OpenVotingMap");

	UW_GameResult_C_OpenVotingMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.PressE
//		Flags  -> ()
void UW_GameResult_C::PressE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.PressE");

	UW_GameResult_C_PressE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.PressQ
//		Flags  -> ()
void UW_GameResult_C::PressQ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.PressQ");

	UW_GameResult_C_PressQ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.Keyboard
//		Flags  -> ()
void UW_GameResult_C::Keyboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.Keyboard");

	UW_GameResult_C_Keyboard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.SetMatchRes
//		Flags  -> ()
void UW_GameResult_C::SetMatchRes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.SetMatchRes");

	UW_GameResult_C_SetMatchRes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.UnhoverMap_4
//		Flags  -> ()
void UW_GameResult_C::UnhoverMap_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.UnhoverMap_4");

	UW_GameResult_C_UnhoverMap_4_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.UnhoverMap_3
//		Flags  -> ()
void UW_GameResult_C::UnhoverMap_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.UnhoverMap_3");

	UW_GameResult_C_UnhoverMap_3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.UnhoverMap_2
//		Flags  -> ()
void UW_GameResult_C::UnhoverMap_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.UnhoverMap_2");

	UW_GameResult_C_UnhoverMap_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.EndCamera
//		Flags  -> ()
void UW_GameResult_C::EndCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.EndCamera");

	UW_GameResult_C_EndCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.SetSettingsWidgetForQuickMatchSetUp
//		Flags  -> ()
// Parameters:
//		bool                                               That_QM_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GameResult_C::SetSettingsWidgetForQuickMatchSetUp(bool That_QM_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.SetSettingsWidgetForQuickMatchSetUp");

	UW_GameResult_C_SetSettingsWidgetForQuickMatchSetUp_Params params {};
	params.That_QM_ = That_QM_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.OnVoted
//		Flags  -> ()
void UW_GameResult_C::OnVoted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.OnVoted");

	UW_GameResult_C_OnVoted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_GameResult_C::BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UW_GameResult_C_BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.ShowHighlights
//		Flags  -> ()
void UW_GameResult_C::ShowHighlights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.ShowHighlights");

	UW_GameResult_C_ShowHighlights_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_GameResult.W_GameResult_C.ExecuteUbergraph_W_GameResult
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GameResult_C::ExecuteUbergraph_W_GameResult(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_GameResult.W_GameResult_C.ExecuteUbergraph_W_GameResult");

	UW_GameResult_C_ExecuteUbergraph_W_GameResult_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
