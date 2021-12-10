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

// UserDefinedStruct SurvProfessions.SurvProfessions
// 0x0080
struct FSurvProfessions
{
	struct FString                                     ProfessionDesc_2_A1B71B1440E8D5B75E11B0A2277D2514;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ProfessionItemName_5_AA2E064C447EC0D6F040879B8D0F2D87;     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ProfessionItemDesc_7_1CF8D8FA4FF27BA0CA596DB73EA40F18;     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UPaperSprite*                                ProfessionItemIcon_10_1874AF0346EE9C6E1819A290F9801D28;    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SkillName_17_3D15C4A248F366D96331888A56C0B77C;             // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SkillDesc_18_B1B9625442DA2DF7C20A12884EA3FB08;             // 0x0050(0x0018) (Edit, BlueprintVisible)
	class UPaperSprite*                                SkillIcon_20_37922BFC4E3033B161F7CA9069A04257;             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SkillNameID_24_1DF1B69248A7206A910169B4B36E3C4B;           // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
