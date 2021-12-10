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

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvMulticast
struct UDoppelgangerSpell1_C_GetSurvMulticast_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      MeshFPP;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvRole_ESurvRole>                    SurvRole;                                                  // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurvServer
struct UDoppelgangerSpell1_C_GetSurvServer_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      MeshFPP;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvRole_ESurvRole>                    SurvRole;                                                  // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetSurv
struct UDoppelgangerSpell1_C_GetSurv_Params
{
	bool                                               Clear_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.Cast
struct UDoppelgangerSpell1_C_Cast_Params
{
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveTick
struct UDoppelgangerSpell1_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReceiveBeginPlay
struct UDoppelgangerSpell1_C_ReceiveBeginPlay_Params
{
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnMulticast
struct UDoppelgangerSpell1_C_ReturnMulticast_Params
{
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.Consume
struct UDoppelgangerSpell1_C_Consume_Params
{
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.RoleChange
struct UDoppelgangerSpell1_C_RoleChange_Params
{
	TEnumAsByte<SurvRole_ESurvRole>                    Role;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvRole_C*                                 Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Off_;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.ReturnServ
struct UDoppelgangerSpell1_C_ReturnServ_Params
{
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNickname
struct UDoppelgangerSpell1_C_GetNickname_Params
{
	bool                                               Clear_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameServer
struct UDoppelgangerSpell1_C_GetNicknameServer_Params
{
	class UObject*                                     Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Clear_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.GetNicknameMulticast
struct UDoppelgangerSpell1_C_GetNicknameMulticast_Params
{
	class UObject*                                     Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Clear_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.Timer
struct UDoppelgangerSpell1_C_Timer_Params
{
};

// Function DoppelgangerSpell1.DoppelgangerSpell1_C.ExecuteUbergraph_DoppelgangerSpell1
struct UDoppelgangerSpell1_C_ExecuteUbergraph_DoppelgangerSpell1_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
