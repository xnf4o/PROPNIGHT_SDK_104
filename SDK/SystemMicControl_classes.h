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

// Class SystemMicControl.SystemMicControlBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USystemMicControlBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SystemMicControl.SystemMicControlBPLibrary");
		return ptr;
	}



	void SetMicVolume(float Value);
	void SetMicMute(bool IsMuted);
	bool SetMicDefaultDevice(const struct FString& DeviceID);
	void SetMicBoost(float Value);
	bool IsMicBoostSupported();
	float GetMicVolume();
	bool GetMicMute();
	void GetMicDeviceNameFromId(const struct FString& InDeviceId, struct FString* OutDeviceName);
	void GetMicDeviceIdFromName(const struct FString& InDeviceName, struct FString* OutDeviceId);
	struct FString GetMicDefaultDeviceName();
	struct FString GetMicDefaultDeviceId();
	float GetMicBoostStep();
	float GetMicBoostMin();
	float GetMicBoostMax();
	float GetMicBoost();
	TMap<struct FString, struct FString> GetMicActiveDevices();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
