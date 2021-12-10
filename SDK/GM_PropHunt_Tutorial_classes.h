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

// BlueprintGeneratedClass GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C
// 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
class AGM_PropHunt_Tutorial_C : public AGM_PropHunt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C");
		return ptr;
	}



	void FadeOut();
	void OnMatchCanceled();
	void ReceiveBeginPlay();
	void FadeIn();
	void StartGame();
	void RemoveLoadingScreen2();
	void RemoveLoadingScreen3();
	void GmEndGame(bool IsKillerWin);
	void TutorialEndGame();
	void ExecuteUbergraph_GM_PropHunt_Tutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
