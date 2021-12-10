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

// UserDefinedStruct S_Tip.S_Tip
// 0x0048
struct FS_Tip
{
	struct FText                                       TipHeader_2_5F930DC340389A327624D5A38503C487;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TipText_4_46E126E046CA05DE11DECE9A3F7BDCB4;                // 0x0018(0x0018) (Edit, BlueprintVisible)
	int                                                TipButtonType_11_71166C5748DA02F8DD6256B6AC7DD685;         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5XF1[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperSprite*                                TIpButtonImage_13_3D422129435C095E1659389CBEFFF881;        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TipButtonMappingName_17_9DF48D8F45257264EE656EAA3D9AD58A;  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
