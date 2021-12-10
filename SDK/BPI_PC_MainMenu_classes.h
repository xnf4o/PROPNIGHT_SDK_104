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

// BlueprintGeneratedClass BPI_PC_MainMenu.BPI_PC_MainMenu_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PC_MainMenu_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PC_MainMenu.BPI_PC_MainMenu_C");
		return ptr;
	}



	void StopPoll();
	void ContinuePollPlayfabServers(const struct FString& SkipToken);
	void StartPollPlayfabServers(const struct FString& Region);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
