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

// BlueprintGeneratedClass BP_ServerReporter.BP_ServerReporter_C
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class UBP_ServerReporter_C : public UBP_HTTP_Wrapper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FTimerHandle                                TimerHandle;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                Players;                                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_13BC[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Seed;                                                      // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ServerReporter.BP_ServerReporter_C");
		return ptr;
	}



	void GenerateSeed(struct FString* Seed);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Report();
	void ShutdownServer();
	void OnPlayerLogin();
	void OnPlayerLeft();
	void ExecuteUbergraph_BP_ServerReporter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
