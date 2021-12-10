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

// AnimBlueprintGeneratedClass Grandma_Facerig_Skeleton_AnimBlueprint_Lobby.Grandma_Facerig_Skeleton_AnimBlueprint_Lobby_C
// 0x0551 (FullSize[0x0809] - InheritedSize[0x02B8])
class UGrandma_Facerig_Skeleton_AnimBlueprint_Lobby_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_LOSI[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0320(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x03A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x03D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0450(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x0480(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0530(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x05D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x05F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0678(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x06A8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0728(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0758(0x00B0)
	bool                                               Reset_;                                                    // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Grandma_Facerig_Skeleton_AnimBlueprint_Lobby.Grandma_Facerig_Skeleton_AnimBlueprint_Lobby_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Grandma_Facerig_Skeleton_AnimBlueprint_Lobby_AnimGraphNode_TransitionResult_DA7F60C44F071D5702AC0FAB42083D34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Grandma_Facerig_Skeleton_AnimBlueprint_Lobby_AnimGraphNode_TransitionResult_441F1BD846DAEA611FA1FD99747E61BE();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Grandma_Facerig_Skeleton_AnimBlueprint_Lobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
