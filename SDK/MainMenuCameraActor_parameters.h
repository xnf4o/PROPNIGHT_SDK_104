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

// Function MainMenuCameraActor.MainMenuCameraActor_C.defaultSkinLoad
struct AMainMenuCameraActor_C_defaultSkinLoad_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Random;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint2Timeline__FinishedFunc
struct AMainMenuCameraActor_C_CameraPoint2Timeline__FinishedFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint2Timeline__UpdateFunc
struct AMainMenuCameraActor_C_CameraPoint2Timeline__UpdateFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraForwardTimeline__FinishedFunc
struct AMainMenuCameraActor_C_NewCameraForwardTimeline__FinishedFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraForwardTimeline__UpdateFunc
struct AMainMenuCameraActor_C_NewCameraForwardTimeline__UpdateFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraBackTimeline__FinishedFunc
struct AMainMenuCameraActor_C_NewCameraBackTimeline__FinishedFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.NewCameraBackTimeline__UpdateFunc
struct AMainMenuCameraActor_C_NewCameraBackTimeline__UpdateFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint1Timeline__FinishedFunc
struct AMainMenuCameraActor_C_CameraPoint1Timeline__FinishedFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.CameraPoint1Timeline__UpdateFunc
struct AMainMenuCameraActor_C_CameraPoint1Timeline__UpdateFunc_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.CameraEvent
struct AMainMenuCameraActor_C_CameraEvent_Params
{
	TEnumAsByte<MainMenuCameraEnum_EMainMenuCameraEnum> Camera;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.ReceiveBeginPlay
struct AMainMenuCameraActor_C_ReceiveBeginPlay_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.SetSkinSurvMainMenu
struct AMainMenuCameraActor_C_SetSkinSurvMainMenu_Params
{
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.SetCharInMainMenu
struct AMainMenuCameraActor_C_SetCharInMainMenu_Params
{
	int                                                Random;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewMesh;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuCameraActor.MainMenuCameraActor_C.ExecuteUbergraph_MainMenuCameraActor
struct AMainMenuCameraActor_C_ExecuteUbergraph_MainMenuCameraActor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
