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

// AnimBlueprintGeneratedClass AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C
// 0x02A1 (FullSize[0x0559] - InheritedSize[0x02B8])
class UAsianGirlIntroAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JNEH[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0320(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0348(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x03C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x03F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0478(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x04A8(0x00B0)
	bool                                               MvpAnim_;                                                  // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AsianGirlIntroAnimBP_AnimGraphNode_TransitionResult_F02D53D74894925DDEFDD18E9C7B624C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AsianGirlIntroAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
