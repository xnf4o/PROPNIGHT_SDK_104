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

// AnimBlueprintGeneratedClass Keymaster_run_R_Skeleton_AnimBlueprint_Lobby.Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_C
// 0x01A0 (FullSize[0x0458] - InheritedSize[0x02B8])
class UKeymaster_run_R_Skeleton_AnimBlueprint_Lobby_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_Y6UB[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x02F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0378(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x03A8(0x00B0)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Keymaster_run_R_Skeleton_AnimBlueprint_Lobby.Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Keymaster_run_R_Skeleton_AnimBlueprint_Lobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
