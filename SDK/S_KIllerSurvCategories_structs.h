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

// UserDefinedStruct S_KIllerSurvCategories.S_KIllerSurvCategories
// 0x0022
struct FS_KIllerSurvCategories
{
	bool                                               IsKiller_1_C5C37DB54F6241AC309B49B261F7A1FF;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3AL2[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CategoryName_8_E0A416A64B547D2F3E7A168E6CE4C9D4;           // 0x0008(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<SurvCategory_ESurvCategory>            SurvCategory_13_92EE3C074855FD9628265D8E0D52B372;          // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<KillerCategory_EKillerCategory>        KillerCategory_14_15AA4E1544AFAF0792AF11A147307612;        // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
