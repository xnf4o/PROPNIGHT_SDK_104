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

// BlueprintGeneratedClass BPI_MenuPlayfab_Listener.BPI_MenuPlayfab_Listener_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_MenuPlayfab_Listener_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MenuPlayfab_Listener.BPI_MenuPlayfab_Listener_C");
		return ptr;
	}



	void GetIsPlayfabBackend(bool* Is);
	void GetIsExit(bool* Is);
	void OnMatchFound();
	void OnPreConnect();
	void OnMatchFail();
	void OnMatch();
	void OnCancelTicket();
	void OnSearchFail();
	void OnSearchOK();
	void OnLoginFail();
	void OnLoginOK();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
