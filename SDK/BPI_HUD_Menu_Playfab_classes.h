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

// BlueprintGeneratedClass BPI_HUD_Menu_Playfab.BPI_HUD_Menu_Playfab_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_HUD_Menu_Playfab_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HUD_Menu_Playfab.BPI_HUD_Menu_Playfab_C");
		return ptr;
	}



	void OnPoll();
	void OnListServers();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
