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

// AnimBlueprintGeneratedClass NewPropmachineAnimBP.NewPropmachineAnimBP_C
// 0x063C (FullSize[0x08F4] - InheritedSize[0x02B8])
class UNewPropmachineAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_XCZK[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x02F8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x03B8(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x0438(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x04F8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0578(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0618(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x06D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0758(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x07D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0858(0x0080)
	bool                                               Failed_;                                                   // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Finished_;                                                 // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AQWX[0x2];                                     // 0x08DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Reloading_Time;                                            // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Reloading_Time_Rem;                                        // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Creak_Int;                                                 // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reloading_Starts_;                                         // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FailedAnimStart_;                                          // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Crack_;                                                    // 0x08EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HZHP[0x1];                                     // 0x08EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Lvl;                                                       // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Stage;                                                     // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass NewPropmachineAnimBP.NewPropmachineAnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_8C9B0F7D4D826C45E8C926AEA1CEFAFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_C1FEE5B34E6B62C0E1B52D93C9BF1650();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_569EDE11441A0EA73862B4B08E96AEE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_A386874C4984A0D4AC5605AFA8C1AB46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_BlendListByBool_8862E1AC423B2727A5ECDD8415BC8CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewPropmachineAnimBP_AnimGraphNode_SequencePlayer_DA88E6CE451CEA5178168CBC72839568();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_NewPropmachineAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
