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

// Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.StopPoll
struct UBPI_PC_MainMenu_C_StopPoll_Params
{
};

// Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.ContinuePollPlayfabServers
struct UBPI_PC_MainMenu_C_ContinuePollPlayfabServers_Params
{
	struct FString                                     SkipToken;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.StartPollPlayfabServers
struct UBPI_PC_MainMenu_C_StartPollPlayfabServers_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
