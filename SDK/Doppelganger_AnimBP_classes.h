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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Doppelganger_AnimBP.Doppelganger_AnimBP_C
// 0x3B51 (FullSize[0x3E09] - InheritedSize[0x02B8])
class UDoppelganger_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_1PU7[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x02C8(0x0158)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                           // 0x0420(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                          // 0x04A0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                          // 0x0560(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x0600(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                          // 0x0628(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x06C8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                          // 0x06F0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x07B0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x07D8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0930(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x0958(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x0980(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x09A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x09D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x09F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x0A20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x0A48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x0A70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x0A98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x0AC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x0AE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x0B10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x0B38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x0B60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x0B88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x0BB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x0BD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x0C00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x0C28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x0C50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0C78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x0CA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x0CC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x0CF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x0D18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0D40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x0D68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0D90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0DB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0DE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0E08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0E30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0E58(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                           // 0x0E80(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x0F00(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                          // 0x0F30(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                          // 0x1018(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                           // 0x10D8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x1158(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                          // 0x1188(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0x1270(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                           // 0x1330(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x13B0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                          // 0x13E0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x14C8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                           // 0x1588(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x1608(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                          // 0x1638(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                           // 0x16D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                           // 0x1758(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                           // 0x17D8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                          // 0x1858(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x18F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                           // 0x1928(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x19A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                           // 0x19D8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x1A58(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                           // 0x1A88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                           // 0x1B08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                           // 0x1B88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x1C08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x1C88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x1D08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x1D88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x1E08(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                           // 0x1E88(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x1F28(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                            // 0x1FC8(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                              // 0x2068(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0x2108(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x21A8(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                          // 0x2268(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x2350(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x2380(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x2400(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x2430(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                               // 0x24B0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x2578(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x25F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x2628(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                               // 0x26A8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x2770(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x27F0(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0x2820(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x28E8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x2968(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x29E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x2A18(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x2A98(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x2B18(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x2BB8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x2C38(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x2CB8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x2D58(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                          // 0x2E18(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x2F00(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x2FE8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x3068(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x30E8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x3188(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x3228(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x3310(0x00C0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x33D0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x3498(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x3580(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x3668(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x3698(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x3748(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x3808(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x38A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x38D0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x3950(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x39F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x3A20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x3AA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x3AC8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x3AF0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x3B70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x3BA0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x3C20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x3C50(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x3CD0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3D00(0x00B0)
	int                                                KillerType;                                                // 0x3DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IsHolded;                                                  // 0x3DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOnAir_;                                                  // 0x3DB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3G06[0x3];                                     // 0x3DB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x3DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedChek;                                                 // 0x3DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TypeAttack;                                                // 0x3DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attak;                                                     // 0x3DC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GV5C[0x3];                                     // 0x3DC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Direction;                                                 // 0x3DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               JumpEndChek;                                               // 0x3DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FIRE;                                                      // 0x3DD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Plant;                                                     // 0x3DD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Flashed;                                                   // 0x3DD3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Drop;                                                      // 0x3DD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChairDrop;                                                 // 0x3DD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Catch;                                                     // 0x3DD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MarioStun;                                                 // 0x3DD7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Runaway;                                                   // 0x3DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4LKC[0x3];                                     // 0x3DD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    HeadR;                                                     // 0x3DDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Vertical_rotation;                                         // 0x3DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalValue;                                           // 0x3DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTurnL;                                                    // 0x3DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bTurnR;                                                    // 0x3DF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Isowner_;                                                  // 0x3DF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GrabbedChar_;                                              // 0x3DF3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SchoolBell_;                                               // 0x3DF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HiddenAttack_;                                             // 0x3DF5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HardHit_;                                                  // 0x3DF6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PIHP[0x1];                                     // 0x3DF7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Blend_Weights_0;                                           // 0x3DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delta_Time_X;                                              // 0x3DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Get_Ready;                                                 // 0x3E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PropHunt_;                                                 // 0x3E01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FT9Q[0x2];                                     // 0x3E02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedRateF;                                                // 0x3E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Broke_Anim;                                                // 0x3E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Doppelganger_AnimBP.Doppelganger_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void SpeedRate();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_569A91994207A9B065D77D80902ED359();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_A43E3DD04221D27711F86EAC9C6A3C70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_BlendListByBool_A29B6EC84B2815B9B7B5F293D5EA2425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_BlendListByBool_6A1ED1B14029AFBF562D318A8DB814E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_3A8721374A8A767E3BE23B9F64126455();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_1B1442F843356FFF9DBDB5806E373370();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_F8F9D6E645C6C5010C5FCCA596FE8091();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_C73BF9134C0E132F59DD26B582FA6BD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_9011775C47C133945D3772AA6B12E91D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_C73011C24C75FB03A7F1969A19D5A761();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_3BD28C674A5F41E658E9D7AD4B435205();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_42E3D7A64123A66135594C9C2427CD23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_5CD0379C42B9296050609BA690D3F6FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_80CF305A49565A24AC29EE9A32F8A9C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_C94007A84A2F243B48BCD4903884727E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_E65AC498478E1406D0279D95F8672EB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_76DBA84149E54E78DAD549863214878F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_25DA8E9043BD6518B8B2F78ADA3F0140();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_40486D264D59265D175FF7AF26673E9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_C46B14A4458F2CF37AE9418D0C3061D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_795D23CB42ABB0D7C02EC19E7F66B9E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_1405674E408B5CA77B3B43BF2AE65541();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_32662F844B5C6997967B0997070BD8F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_878D7D0F47C02C77BCA9D3A55FD6C22D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_5553A3654299E41436078E950E591BFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_232B3A1D4803035FD0B7BF9BFCA50F25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_20604CC247F20B9051A3779C4F48B8B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_2071DB864C27EF339539F0A210925DC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppelganger_AnimBP_AnimGraphNode_TransitionResult_FF28FF95426181CD5B224C94D7DE1229();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_R_Leg();
	void AnimNotify_JumpEnd();
	void AnimNotify_L_Leg();
	void AnimNotify_JumpStart();
	void AnimNotify_CloseLeg();
	void AnimNotify_Close_Left();
	void AnimNotify_Close_right();
	void HardHit();
	void AnimNotify_Close_Leg();
	void ExecuteUbergraph_Doppelganger_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
