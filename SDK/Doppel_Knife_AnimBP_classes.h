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

// AnimBlueprintGeneratedClass Doppel_Knife_AnimBP.Doppel_Knife_AnimBP_C
// 0x075E (FullSize[0x0A16] - InheritedSize[0x02B8])
class UDoppel_Knife_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_71WV[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0438(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x0460(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x04E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0510(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0590(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x05C0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x0640(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x06E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0760(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x07E0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0880(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x08B0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0930(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0960(0x00B0)
	bool                                               ImSurv_;                                                   // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Switch_;                                                   // 0x0A11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HiddenAttack_;                                             // 0x0A12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HardHit_;                                                  // 0x0A13(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TPP_;                                                      // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               local_;                                                    // 0x0A15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Doppel_Knife_AnimBP.Doppel_Knife_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_6B6EFD2C427BB4FB18F360AAE5026AFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_4B813DC9414C58DE69D73B83349A5BEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_5179A1FC4FC80D8A0C44C282F7828B80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_B04A31A247AC72487D3C238F5B49185B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_E62F6A5A4CDFED119206F2A4EF767EA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_C3812D6D4B45E834BFDA0A94DBEABD35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_BC16FC3D4026F1D4244A6D81D3652CC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_DE2A613848F75B8E5879AFBCACE3E7FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Doppel_Knife_AnimBP_AnimGraphNode_TransitionResult_3FAA408E4AE3B140A7750BA50DBEB751();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void HardHit();
	void ExecuteUbergraph_Doppel_Knife_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
