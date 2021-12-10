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

// Function W_PlayCardContent.W_PlayCardContent_C.GetContentHeight
struct UW_PlayCardContent_C_GetContentHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCardContent.W_PlayCardContent_C.GetTextContentHeight
struct UW_PlayCardContent_C_GetTextContentHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PlayCardContent.W_PlayCardContent_C.InitCard
struct UW_PlayCardContent_C_InitCard_Params
{
	struct FText                                       Name;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PlayCardContent.W_PlayCardContent_C.PreConstruct
struct UW_PlayCardContent_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PlayCardContent.W_PlayCardContent_C.OnInit
struct UW_PlayCardContent_C_OnInit_Params
{
	struct FText                                       Name;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PlayCardContent.W_PlayCardContent_C.ExecuteUbergraph_W_PlayCardContent
struct UW_PlayCardContent_C_ExecuteUbergraph_W_PlayCardContent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
