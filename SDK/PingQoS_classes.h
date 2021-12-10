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

// Class PingQoS.PingQoSSubsystem
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UPingQoSSubsystem : public UEngineSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnPingCompleted;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FK82[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PingQoS.PingQoSSubsystem");
		return ptr;
	}



	bool Update();
	void Init(TArray<struct FPingQoSInfo> SetInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
