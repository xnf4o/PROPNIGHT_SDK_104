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
//		Name   -> Function MineSpell.MineSpell_C.OnRep_Mines
//		Flags  -> ()
void UMineSpell_C::OnRep_Mines()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.OnRep_Mines");

	UMineSpell_C_OnRep_Mines_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.ReceiveBeginPlay
//		Flags  -> ()
void UMineSpell_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.ReceiveBeginPlay");

	UMineSpell_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMineSpell_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.ReceiveTick");

	UMineSpell_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.Cast
//		Flags  -> ()
void UMineSpell_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.Cast");

	UMineSpell_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.SpawnMineServer
//		Flags  -> ()
void UMineSpell_C::SpawnMineServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.SpawnMineServer");

	UMineSpell_C_SpawnMineServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.ActorDestroyed
//		Flags  -> ()
// Parameters:
//		class AMine_C*                                     Mine                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMineSpell_C::ActorDestroyed(class AMine_C* Mine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.ActorDestroyed");

	UMineSpell_C_ActorDestroyed_Params params {};
	params.Mine = Mine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.ClientCount
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMineSpell_C::ClientCount(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.ClientCount");

	UMineSpell_C_ClientCount_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.PlantServer
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMineSpell_C::PlantServer(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.PlantServer");

	UMineSpell_C_PlantServer_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.PlantMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMineSpell_C::PlantMulticast(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.PlantMulticast");

	UMineSpell_C_PlantMulticast_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MineSpell.MineSpell_C.ExecuteUbergraph_MineSpell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMineSpell_C::ExecuteUbergraph_MineSpell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MineSpell.MineSpell_C.ExecuteUbergraph_MineSpell");

	UMineSpell_C_ExecuteUbergraph_MineSpell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
