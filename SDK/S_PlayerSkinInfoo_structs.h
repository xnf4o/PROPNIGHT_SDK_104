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

// UserDefinedStruct S_PlayerSkinInfoo.S_PlayerSkinInfoo
// 0x0168
struct FS_PlayerSkinInfoo
{
	int                                                id_2_F42CD867428366F3EACB669B629C4C6E;                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JOE7[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name_6_7808BB7E4E5329729F733EB78E5D2976;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	class UPaperSprite*                                Sprite_9_1602211C45B92935A3E64DA75558A928;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int, class USkeletalMesh*>                    Basic_48_EF54708340042FDDBFD8259F7E269549;                 // 0x0028(0x0050) (Edit, BlueprintVisible)
	TMap<int, class USkeletalMesh*>                    Rare_41_BE33080349F20317F8F72C81FA635848;                  // 0x0078(0x0050) (Edit, BlueprintVisible)
	TMap<int, class USkeletalMesh*>                    Epic_43_0FB338B54C1FF166D8F40EB4B052FDC2;                  // 0x00C8(0x0050) (Edit, BlueprintVisible)
	TMap<int, class USkeletalMesh*>                    Legendary_45_1CC4F7AB4AA937CD2BF346AC327626DE;             // 0x0118(0x0050) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
