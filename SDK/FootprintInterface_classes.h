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

// BlueprintGeneratedClass FootprintInterface.FootprintInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFootprintInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FootprintInterface.FootprintInterface_C");
		return ptr;
	}



	void Chair_Open_Stage();
	void ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style);
	void SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
