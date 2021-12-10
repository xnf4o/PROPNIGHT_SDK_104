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

// UserDefinedStruct PropData.PropData
// 0x0089
struct FPropData
{
	float                                              HealthCoefficient_5_CCE4098145CF24DCE8BFBD99718A56DE;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation_15_77419AAA4EFF7D326C6FADBC23FEAE3B;              // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     AddingLocation_31_EB7ED9FB4664C1B2FACFC8986AF02A9A;        // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RZNM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  HitSound_20_6A185A9E45FCAEEF4F82A8BB445079A8;              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  PropSound_22_89FB965B4B311C052760AC9F1A0E9343;             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Mesh_54_FCE273C7465EEC67D83A07A273142771[0x28];            // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               SmallProp__24_9EC5373D4F1A9CCC70BE33A878C9722E;            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BigPropJump__26_2D960C1045CEF2ED7BA9A89EC61ACF32;          // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Replicate__28_9B784DEF4BAA5D4E2E6F2184782EA739;            // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               StartStraight__33_47ECB8D2425387E685B8F6B7EAD06206;        // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Burning__35_458D7B9C4B8EE68CB9D6D0AD8FF35B2C;              // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ApplyDamage__48_50CE6E2747CDF6353BDFB99BF3681FF1;          // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TM1Z[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStaticMesh*>                         MainMesh_43_75D571DC4BAD7097B112E4B574A97EB0;              // 0x0060(0x0010) (Edit, BlueprintVisible)
	TArray<class UDestructibleMesh*>                   DestroyedMesh_44_EC0B66AB4B90AD80FD17CB9F1CC5DBB6;         // 0x0070(0x0010) (Edit, BlueprintVisible)
	class UFMODEvent*                                  DestroyedSound_51_508D8E764CB398A8E748C9B2EA99A3FC;        // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangingSound__53_7E63A4C84576D4A6EF1F4B88130C766B;        // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
