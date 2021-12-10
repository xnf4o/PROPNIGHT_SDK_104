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

// Function BP_ServerReporter.BP_ServerReporter_C.GenerateSeed
struct UBP_ServerReporter_C_GenerateSeed_Params
{
	struct FString                                     Seed;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_ServerReporter.BP_ServerReporter_C.ReceiveBeginPlay
struct UBP_ServerReporter_C_ReceiveBeginPlay_Params
{
};

// Function BP_ServerReporter.BP_ServerReporter_C.ReceiveTick
struct UBP_ServerReporter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerReporter.BP_ServerReporter_C.Report
struct UBP_ServerReporter_C_Report_Params
{
};

// Function BP_ServerReporter.BP_ServerReporter_C.ShutdownServer
struct UBP_ServerReporter_C_ShutdownServer_Params
{
};

// Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLogin
struct UBP_ServerReporter_C_OnPlayerLogin_Params
{
};

// Function BP_ServerReporter.BP_ServerReporter_C.OnPlayerLeft
struct UBP_ServerReporter_C_OnPlayerLeft_Params
{
};

// Function BP_ServerReporter.BP_ServerReporter_C.ExecuteUbergraph_BP_ServerReporter
struct UBP_ServerReporter_C_ExecuteUbergraph_BP_ServerReporter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
