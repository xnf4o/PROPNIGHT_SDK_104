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

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.CloseTicket
struct UBPI_GameInstanceListener_C_CloseTicket_Params
{
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.JoinToTicket
struct UBPI_GameInstanceListener_C_JoinToTicket_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.GetServerId
struct UBPI_GameInstanceListener_C_GetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnFoundSessions
struct UBPI_GameInstanceListener_C_OnFoundSessions_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailSessionList
struct UBPI_GameInstanceListener_C_FailSessionList_Params
{
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnTravelError
struct UBPI_GameInstanceListener_C_OnTravelError_Params
{
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnNetworkError
struct UBPI_GameInstanceListener_C_OnNetworkError_Params
{
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailJoin
struct UBPI_GameInstanceListener_C_FailJoin_Params
{
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailCreateSession
struct UBPI_GameInstanceListener_C_FailCreateSession_Params
{
};

// Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnSessionCreated
struct UBPI_GameInstanceListener_C_OnSessionCreated_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
