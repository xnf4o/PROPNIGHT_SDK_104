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

// UserDefinedStruct S_LoadDescp.S_LoadDescp
// 0x0058
struct FS_LoadDescp
{
	TEnumAsByte<E_Mode_E_Mode>                         GameMode_3_C0AEE2B54C119A9CFC4DDC9F1E33D4F7;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IXL1[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               SurvTips_9_B717DFEB4DA5BE66AA9020A1AE16D30D;               // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<struct FText>                               SurvDescrp_14_18A4AAB940D6E902DA7B0A8FE5D52617;            // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FText>                               KillerTips_12_F3F943B641C6F03ED3631D946E0BC7A7;            // 0x0028(0x0010) (Edit, BlueprintVisible)
	TArray<struct FText>                               KillerDescrp_16_E35E261140CCBD79424F4587E5C3F58C;          // 0x0038(0x0010) (Edit, BlueprintVisible)
	TArray<class UPaperSprite*>                        ImgTips_27_BF8E0ADF42D59C0A0D26EBBB1F81FA99;               // 0x0048(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
