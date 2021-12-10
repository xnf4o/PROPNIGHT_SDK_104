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

// UserDefinedStruct AbilityStruct.AbilityStruct
// 0x0058
struct FAbilityStruct
{
	class UPaperSprite*                                Image_13_2EB7A3F5424B554350E81CAFF9D111BF;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_5_B5AB22B7415F1ABD1B0462B9BD6CD584;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BU17[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Hotkey_9_638EA1DB4EEF0B81A2BA4FA32A996C4C;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Charge__12_92D29B234BB793C1210CE281E4B8C098;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D7R9[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description_22_625887964F9910A4E7F99DA754FA2031;           // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DisplayName_23_15BE98144FD0DE75B24C53A589B7D0FC;           // 0x0040(0x0018) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
