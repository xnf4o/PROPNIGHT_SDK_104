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

// BlueprintGeneratedClass I_HUD.I_HUD_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_HUD_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass I_HUD.I_HUD_C");
		return ptr;
	}



	void OnMatchCanceled();
	void RemoveLoadingScreen3();
	void FadeOut();
	void FadeIn();
	void RemoveLoadingScreen2();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
