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

// Class EOSCoreUtilities.EOSCoreUtilitiesLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSCoreUtilitiesLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreUtilities.EOSCoreUtilitiesLibrary");
		return ptr;
	}



	void RequestEncryptedAppTicket(const struct FScriptDelegate& Callback);
};

// Class EOSCoreUtilities.TestClass
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTestClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreUtilities.TestClass");
		return ptr;
	}



};

// Class EOSCoreUtilities.EmptyClass
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmptyClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCoreUtilities.EmptyClass");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
