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

// Function ItemsBP.ItemsBP_C.Timeline_0__FinishedFunc
struct AItemsBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function ItemsBP.ItemsBP_C.Timeline_0__UpdateFunc
struct AItemsBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function ItemsBP.ItemsBP_C.ReceiveTick
struct AItemsBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemsBP.ItemsBP_C.ReceiveBeginPlay
struct AItemsBP_C_ReceiveBeginPlay_Params
{
};

// Function ItemsBP.ItemsBP_C.ImpulseItem
struct AItemsBP_C_ImpulseItem_Params
{
};

// Function ItemsBP.ItemsBP_C.DropImpulseItem
struct AItemsBP_C_DropImpulseItem_Params
{
	struct FVector                                     Impulse;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemsBP.ItemsBP_C.RandomSkin
struct AItemsBP_C_RandomSkin_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemsBP.ItemsBP_C.lootbox
struct AItemsBP_C_lootbox_Params
{
	class ALootboxShop_C*                              Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemsBP.ItemsBP_C.LootBoxTake
struct AItemsBP_C_LootBoxTake_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewParam2;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewParam3;                                                 // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemsBP.ItemsBP_C.UberEvent
struct AItemsBP_C_UberEvent_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewParam2;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemsBP.ItemsBP_C.ExecuteUbergraph_ItemsBP
struct AItemsBP_C_ExecuteUbergraph_ItemsBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
