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

// BlueprintGeneratedClass GM_PropHunt_Lab.GM_PropHunt_Lab_C
// 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
class AGM_PropHunt_Lab_C : public AGM_PropHunt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GM_PropHunt_Lab.GM_PropHunt_Lab_C");
		return ptr;
	}



	void StartGame();
	void StartGameFromLobby();
	void RaiseLobby();
	void ExecuteUbergraph_GM_PropHunt_Lab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
