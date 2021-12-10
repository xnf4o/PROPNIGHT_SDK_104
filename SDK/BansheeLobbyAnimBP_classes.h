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

// AnimBlueprintGeneratedClass BansheeLobbyAnimBP.BansheeLobbyAnimBP_C
// 0x01D2 (FullSize[0x048A] - InheritedSize[0x02B8])
class UBansheeLobbyAnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_2GDT[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_2;                              // 0x02C8(0x0078)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x0340(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x03B8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x03E8(0x00A0)
	bool                                               Ready_;                                                    // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reset_;                                                    // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BansheeLobbyAnimBP.BansheeLobbyAnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BansheeLobbyAnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
