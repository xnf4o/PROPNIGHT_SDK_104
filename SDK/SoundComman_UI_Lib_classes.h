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

// BlueprintGeneratedClass SoundComman_UI_Lib.SoundComman_UI_Lib_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundComman_UI_Lib_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SoundComman_UI_Lib.SoundComman_UI_Lib_C");
		return ptr;
	}



	void GetViewportCenter(class UObject* __WorldContext, struct FVector2D* Center);
	float Point_To_Point_360°_(const struct FVector2D& Point, const struct FVector2D& CenterPoint, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
