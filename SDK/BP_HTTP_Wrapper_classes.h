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

// BlueprintGeneratedClass BP_HTTP_Wrapper.BP_HTTP_Wrapper_C
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UBP_HTTP_Wrapper_C : public UHTTP_Wrapper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HTTP_Wrapper.BP_HTTP_Wrapper_C");
		return ptr;
	}



	void OnResponse(const struct FString& Content);
	void OnError();
	void ExecuteUbergraph_BP_HTTP_Wrapper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
