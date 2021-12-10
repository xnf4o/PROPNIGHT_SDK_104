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

// Function W_HelpWindow.W_HelpWindow_C.If Killer Abilities
struct UW_HelpWindow_C_If_Killer_Abilities_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelpWindow.W_HelpWindow_C.PreConstruct
struct UW_HelpWindow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_HelpWindow.W_HelpWindow_C.Construct
struct UW_HelpWindow_C_Construct_Params
{
};

// Function W_HelpWindow.W_HelpWindow_C.Tick
struct UW_HelpWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelpWindow.W_HelpWindow_C.UpdateSurvInfo
struct UW_HelpWindow_C_UpdateSurvInfo_Params
{
};

// Function W_HelpWindow.W_HelpWindow_C.UpdateKillerInfo
struct UW_HelpWindow_C_UpdateKillerInfo_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_HelpWindow.W_HelpWindow_C.ExecuteUbergraph_W_HelpWindow
struct UW_HelpWindow_C_ExecuteUbergraph_W_HelpWindow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
