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

// WidgetBlueprintGeneratedClass WBP_BDRush_Killer.WBP_BDRush_Killer_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UWBP_BDRush_Killer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                VerticalBox_84;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EffectBloodLust_C*                      W_BDRush;                                                  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BDRush_Killer.WBP_BDRush_Killer_C");
		return ptr;
	}



	void Construct();
	void Add_Status(float DeltaTime, bool SSSR, bool AstralIn_);
	void ExecuteUbergraph_WBP_BDRush_Killer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
