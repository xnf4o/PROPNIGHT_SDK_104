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

// AnimBlueprintGeneratedClass FPRabbitBPAnim.FPRabbitBPAnim_C
// 0x169D (FullSize[0x1955] - InheritedSize[0x02B8])
class UFPRabbitBPAnim_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_E8SI[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                         // 0x02C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                         // 0x02F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                         // 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                         // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x0408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x0430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x0458(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x0480(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x04A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x04D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x04F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x0520(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x0548(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x0570(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x0598(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x05C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x05E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x0610(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x0638(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x0660(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0688(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x06B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x06D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x0700(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x0728(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0750(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x0778(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x07A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x07C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x07F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0818(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0840(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0868(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x0890(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x0910(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x0940(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x09C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x09F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x0A70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x0AA0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x0B20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x0B50(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x0BD0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x0C00(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x0C80(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x0CB0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x0D30(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x0D60(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x0DE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x0E10(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x0E90(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0EC0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x0FA8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x0FD8(0x0080)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                              // 0x1058(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x10F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x1178(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x11A8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x1228(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x1258(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x1308(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x13A8(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1448(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x1478(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x14F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x1598(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x1618(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1640(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x1668(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x16E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1718(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1798(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x17C8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1848(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1878(0x00B0)
	float                                              Delta_Time_X;                                              // 0x1928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              keepSurv;                                                  // 0x192C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInAir;                                                   // 0x1930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_07UK[0x3];                                     // 0x1931(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x1934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Direction;                                                 // 0x1938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PropHunt_;                                                 // 0x193C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AttackBool;                                                // 0x193D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               JumpEndChek;                                               // 0x193E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FIRE;                                                      // 0x193F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Plant;                                                     // 0x1940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MarioStun;                                                 // 0x1941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Flashed;                                                   // 0x1942(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Broke_Anim;                                                // 0x1943(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                TypeAttack;                                                // 0x1944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KnifeIn;                                                   // 0x1948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KnifeSpawn;                                                // 0x1949(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Astral;                                                    // 0x194A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CJOD[0x1];                                     // 0x194B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedRateF;                                                // 0x194C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Charge;                                                    // 0x1950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Move;                                                      // 0x1951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Charge_Attack;                                             // 0x1952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BAnim;                                                     // 0x1953(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BChainsaw_Terror;                                          // 0x1954(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPRabbitBPAnim.FPRabbitBPAnim_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void SpeedRate();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_20479D08413CA7D5EE5FEFBF12469BB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_BlendListByBool_B9CF79C4479B7D4FA1472787890D2849();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_F0A201F249AB21CE1C96958790C37731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_EA02012841BAD97209CCE7BF172F7FE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_8ABD9A8041278AB0C0A0F2ACCA5BBB71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_8CA0EE9C485830E0E07E45905A0AD505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_9D34655E4D2CC6D6444A53A6F7B3AB64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_005BFF174AE0393B155CED9B7CCB99A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_228A75274D375C062EDA8DB4CEC63FAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_2C9C01784BC105F64FEE68AC702A032E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_FFE484584DA1ABA3B6AE02881ECF33FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_05785B8A4499DB4FE0D9B090DF33E79C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_54A77A0C4FF24A781CA14D805B689AB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_9F7791E841055503FDDD08A9E1E56FB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_D67AEFA24F686AA8F0FC1BAF4CC38932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_36582E5343FB2D481AE0ABAF5E40C222();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_5D0366D54564F84741419889FA9FDE94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPRabbitBPAnim_AnimGraphNode_TransitionResult_5E5AB15246AD550D35052BBF96845D9A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_WalkShake();
	void ExecuteUbergraph_FPRabbitBPAnim(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
