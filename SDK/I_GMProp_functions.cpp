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
//		Name   -> Function I_GMProp.I_GMProp_C.SetPlayfabKillerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     KillerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UI_GMProp_C::SetPlayfabKillerID(const struct FString& KillerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.SetPlayfabKillerID");

	UI_GMProp_C_SetPlayfabKillerID_Params params {};
	params.KillerID = KillerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.GetPlayfabPlayers
//		Flags  -> ()
// Parameters:
//		TArray<class APC_PropHunt_C*>                      Players                                                    (Parm, OutParm)
void UI_GMProp_C::GetPlayfabPlayers(TArray<class APC_PropHunt_C*>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.GetPlayfabPlayers");

	UI_GMProp_C_GetPlayfabPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.GetServerCapacity
//		Flags  -> ()
// Parameters:
//		int                                                Capacity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GMProp_C::GetServerCapacity(int* Capacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.GetServerCapacity");

	UI_GMProp_C_GetServerCapacity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Capacity != nullptr)
		*Capacity = params.Capacity;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.GetMode
//		Flags  -> ()
// Parameters:
//		struct FString                                     Mode                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UI_GMProp_C::GetMode(struct FString* Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.GetMode");

	UI_GMProp_C_GetMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mode != nullptr)
		*Mode = params.Mode;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.GetMap
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UI_GMProp_C::GetMap(struct FString* Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.GetMap");

	UI_GMProp_C_GetMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.GetStatus
//		Flags  -> ()
// Parameters:
//		struct FString                                     Status                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UI_GMProp_C::GetStatus(struct FString* Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.GetStatus");

	UI_GMProp_C_GetStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.GetPlayersCount
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GMProp_C::GetPlayersCount(int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.GetPlayersCount");

	UI_GMProp_C_GetPlayersCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_GMProp.I_GMProp_C.playerCalling
//		Flags  -> ()
// Parameters:
//		bool                                               IsPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ANewAlarmBP_C*                               alarms                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_GMProp_C::playerCalling(bool IsPlayer, class ANewAlarmBP_C* alarms)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_GMProp.I_GMProp_C.playerCalling");

	UI_GMProp_C_playerCalling_Params params {};
	params.IsPlayer = IsPlayer;
	params.alarms = alarms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
