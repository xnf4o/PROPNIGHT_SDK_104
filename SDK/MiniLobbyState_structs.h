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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MiniLobbyState.MiniLobbyState
// 0x0058
struct FMiniLobbyState
{
	TMap<struct FString, class AActor*>                Table_5_0B0D7B5F45A04CB9FAA135BFB0AFDCB5;                  // 0x0000(0x0050) (Edit, BlueprintVisible)
	int                                                Killers_8_386493D9479169EB6B7439942BA7A7D3;                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Survivors_10_A3B801474666FBBD254CA7A86B1C0E1C;             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
