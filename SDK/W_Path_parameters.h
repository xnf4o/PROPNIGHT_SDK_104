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

// Function W_Path.W_Path_C.GetLastEntry
struct UW_Path_C_GetLastEntry_Params
{
	class UW_PathEntry_C*                              EntryRef;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Path.W_Path_C.HasEntry
struct UW_Path_C_HasEntry_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Path.W_Path_C.SetEnabled
struct UW_Path_C_SetEnabled_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Path.W_Path_C.SetRootWidget
struct UW_Path_C_SetRootWidget_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Path.W_Path_C.IsRoot
struct UW_Path_C_IsRoot_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Path.W_Path_C.FindEntry
struct UW_Path_C_FindEntry_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EntryIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Path.W_Path_C.PreConstruct
struct UW_Path_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Path.W_Path_C.Construct
struct UW_Path_C_Construct_Params
{
};

// Function W_Path.W_Path_C.AddEntryToPath
struct UW_Path_C_AddEntryToPath_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       EntryText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     EntryWidget;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Path.W_Path_C.RemoveEntryFromPath
struct UW_Path_C_RemoveEntryFromPath_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Path.W_Path_C.RootClicked
struct UW_Path_C_RootClicked_Params
{
};

// Function W_Path.W_Path_C.Entry_OnClick
struct UW_Path_C_Entry_OnClick_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Path.W_Path_C.ClearPath
struct UW_Path_C_ClearPath_Params
{
};

// Function W_Path.W_Path_C.ExecuteUbergraph_W_Path
struct UW_Path_C_ExecuteUbergraph_W_Path_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
