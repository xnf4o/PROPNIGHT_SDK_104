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

// Function PlayfabServer.PlayfabServerComponent.UnregisterPlayer
struct UPlayfabServerComponent_UnregisterPlayer_Params
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayfabServer.PlayfabServerComponent.ShutdownServer
struct UPlayfabServerComponent_ShutdownServer_Params
{
};

// Function PlayfabServer.PlayfabServerComponent.RegisterPlayer
struct UPlayfabServerComponent_RegisterPlayer_Params
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayfabServer.PlayfabServerComponent.PlayfabReady
struct UPlayfabServerComponent_PlayfabReady_Params
{
};

// Function PlayfabServer.PlayfabServerComponent.GetStartPlayers
struct UPlayfabServerComponent_GetStartPlayers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlayfabServer.PlayfabServerComponent.GetPlayfabSession
struct UPlayfabServerComponent_GetPlayfabSession_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayfabServer.PlayfabServerComponent.GetPlayfabRegion
struct UPlayfabServerComponent_GetPlayfabRegion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayfabServer.PlayfabServerComponent.GetPlayfabCookie
struct UPlayfabServerComponent_GetPlayfabCookie_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
