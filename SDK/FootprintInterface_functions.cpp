// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintInterface.FootprintInterface_C.Chair Open Stage
//		Flags  -> ()
void UFootprintInterface_C::Chair_Open_Stage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintInterface.FootprintInterface_C.Chair Open Stage");

	UFootprintInterface_C_Chair_Open_Stage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintInterface.FootprintInterface_C.ChangeFootState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFootState_EFootState>                 New_Style                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFootprintInterface_C::ChangeFootState(TEnumAsByte<EFootState_EFootState> New_Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintInterface.FootprintInterface_C.ChangeFootState");

	UFootprintInterface_C_ChangeFootState_Params params {};
	params.New_Style = New_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function FootprintInterface.FootprintInterface_C.SpawnDecal
//		Flags  -> ()
// Parameters:
//		struct FName                                       SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               JumpStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               JumpEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ImProp_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Run_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Crouch_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UFMODAudioComponent*                         FMODAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Crawl_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Shake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFootprintInterface_C::SpawnDecal(const struct FName& SocketName, bool Right, bool Left, bool JumpStart, bool JumpEnd, bool Killer_, bool ImProp_, bool Run_, bool Crouch_, class UFMODAudioComponent* FMODAudio, int KillerType, bool Crawl_, bool Shake)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FootprintInterface.FootprintInterface_C.SpawnDecal");

	UFootprintInterface_C_SpawnDecal_Params params {};
	params.SocketName = SocketName;
	params.Right = Right;
	params.Left = Left;
	params.JumpStart = JumpStart;
	params.JumpEnd = JumpEnd;
	params.Killer_ = Killer_;
	params.ImProp_ = ImProp_;
	params.Run_ = Run_;
	params.Crouch_ = Crouch_;
	params.FMODAudio = FMODAudio;
	params.KillerType = KillerType;
	params.Crawl_ = Crawl_;
	params.Shake = Shake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
