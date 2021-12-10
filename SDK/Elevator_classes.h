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

// BlueprintGeneratedClass Elevator.Elevator_C
// 0x0051 (FullSize[0x0271] - InheritedSize[0x0220])
class AElevator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FVector>                             StageLocation;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                CurrentFloor;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Up_;                                                       // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Interactable_;                                             // 0x0245(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U9UP[0x2];                                     // 0x0246(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NextFloor;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QJ65[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Queue;                                                     // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AElevatorM_C*>                        ElevatorMRefs;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                               Using_;                                                    // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Elevator.Elevator_C");
		return ptr;
	}



	void ElevatorInteract();
	void StartMoveElevator();
	void AddToQueue(int FloorToGo, int Floor);
	void Move(TArray<class AActor*> Refs, float ZLocation);
	void ExecuteUbergraph_Elevator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
