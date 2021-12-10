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
// Parameters
//---------------------------------------------------------------------------

// Function W_LoadingScreen.W_LoadingScreen_C.FillDescriptionsFromArray
struct UW_LoadingScreen_C_FillDescriptionsFromArray_Params
{
	TArray<struct FText>                               DescriptionsArray;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_LoadingScreen.W_LoadingScreen_C.FillTipsFromTipsArray
struct UW_LoadingScreen_C_FillTipsFromTipsArray_Params
{
	TArray<struct FText>                               TipsArray;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_LoadingScreen.W_LoadingScreen_C.GetTipTextAndImage
struct UW_LoadingScreen_C_GetTipTextAndImage_Params
{
	class UTextBlock*                                  TipText;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      TipImage;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               TipsArray;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                TipIndex;                                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LoadingScreen.W_LoadingScreen_C.StartFakeLoading
struct UW_LoadingScreen_C_StartFakeLoading_Params
{
};

// Function W_LoadingScreen.W_LoadingScreen_C.SetProgress
struct UW_LoadingScreen_C_SetProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LoadingScreen.W_LoadingScreen_C.Tick
struct UW_LoadingScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LoadingScreen.W_LoadingScreen_C.StopLoadingMusic
struct UW_LoadingScreen_C_StopLoadingMusic_Params
{
};

// Function W_LoadingScreen.W_LoadingScreen_C.Destruct
struct UW_LoadingScreen_C_Destruct_Params
{
};

// Function W_LoadingScreen.W_LoadingScreen_C.Construct
struct UW_LoadingScreen_C_Construct_Params
{
};

// Function W_LoadingScreen.W_LoadingScreen_C.ExecuteUbergraph_W_LoadingScreen
struct UW_LoadingScreen_C_ExecuteUbergraph_W_LoadingScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
