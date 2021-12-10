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
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AddAllHightlightsInformation
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::AddAllHightlightsInformation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AddAllHightlightsInformation");

	AGS_PropHunt_C_AddAllHightlightsInformation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SetMvpPlyerHightlight
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::SetMvpPlyerHightlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SetMvpPlyerHightlight");

	AGS_PropHunt_C_SetMvpPlyerHightlight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.addHightlightsPlayerInforation
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsKiller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  CharType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DamageDone                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Assists                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ObjectivesDone                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SurvivalTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Stuns                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DistanceTraveled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isMVPPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     SurvSlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGS_PropHunt_C::addHightlightsPlayerInforation(const struct FString& Nickname, bool IsKiller, int AvatarID, int BannerID, int TagID, TEnumAsByte<SurvChars_ESurvChars> CharType, TEnumAsByte<KillerType_EKillerType> KillerType, int DamageDone, int Kills, int Assists, int ObjectivesDone, int SurvivalTime, int Stuns, int DistanceTraveled, bool isMVPPlayer, const struct FString& SurvSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.addHightlightsPlayerInforation");

	AGS_PropHunt_C_addHightlightsPlayerInforation_Params params {};
	params.Nickname = Nickname;
	params.IsKiller = IsKiller;
	params.AvatarID = AvatarID;
	params.BannerID = BannerID;
	params.TagID = TagID;
	params.CharType = CharType;
	params.KillerType = KillerType;
	params.DamageDone = DamageDone;
	params.Kills = Kills;
	params.Assists = Assists;
	params.ObjectivesDone = ObjectivesDone;
	params.SurvivalTime = SurvivalTime;
	params.Stuns = Stuns;
	params.DistanceTraveled = DistanceTraveled;
	params.isMVPPlayer = isMVPPlayer;
	params.SurvSlotName = SurvSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckSurvsAfterLeave
//		Flags  -> ()
// Parameters:
//		bool                                               HasAliveSurv                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::CheckSurvsAfterLeave(bool* HasAliveSurv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckSurvsAfterLeave");

	AGS_PropHunt_C_CheckSurvsAfterLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasAliveSurv != nullptr)
		*HasAliveSurv = params.HasAliveSurv;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.IsKillerSlotFree
//		Flags  -> ()
// Parameters:
//		bool                                               Free                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::IsKillerSlotFree(bool* Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.IsKillerSlotFree");

	AGS_PropHunt_C_IsKillerSlotFree_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Free != nullptr)
		*Free = params.Free;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.IsKillerPlayerHere
//		Flags  -> ()
// Parameters:
//		bool                                               Here                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::IsKillerPlayerHere(bool* Here)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.IsKillerPlayerHere");

	AGS_PropHunt_C_IsKillerPlayerHere_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Here != nullptr)
		*Here = params.Here;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetAvailableSurvSlot
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGS_PropHunt_C::GetAvailableSurvSlot(struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetAvailableSurvSlot");

	AGS_PropHunt_C_GetAvailableSurvSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.FindEmptySlotFromList
//		Flags  -> ()
// Parameters:
//		struct FString                                     EmptySlotName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGS_PropHunt_C::FindEmptySlotFromList(struct FString* EmptySlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.FindEmptySlotFromList");

	AGS_PropHunt_C_FindEmptySlotFromList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmptySlotName != nullptr)
		*EmptySlotName = params.EmptySlotName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.survSpawnZap
//		Flags  -> ()
// Parameters:
//		class APlayerStart*                                NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::survSpawnZap(class APlayerStart** NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.survSpawnZap");

	AGS_PropHunt_C_survSpawnZap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ManageProphuntSlots
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::ManageProphuntSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ManageProphuntSlots");

	AGS_PropHunt_C_ManageProphuntSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ToActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ToActor(class AActor* Target, class AActor** Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ToActor");

	AGS_PropHunt_C_ToActor_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ResolveNextServer
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::ResolveNextServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ResolveNextServer");

	AGS_PropHunt_C_ResolveNextServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.Assign Slots
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::Assign_Slots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.Assign Slots");

	AGS_PropHunt_C_Assign_Slots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckVoteMap
//		Flags  -> ()
// Parameters:
//		bool                                               AllAgree                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::CheckVoteMap(bool* AllAgree)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckVoteMap");

	AGS_PropHunt_C_CheckVoteMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllAgree != nullptr)
		*AllAgree = params.AllAgree;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ClearItems
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::ClearItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ClearItems");

	AGS_PropHunt_C_ClearItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.PlaceItemsP2
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::PlaceItemsP2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.PlaceItemsP2");

	AGS_PropHunt_C_PlaceItemsP2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.PlaceItems
//		Flags  -> ()
// Parameters:
//		bool                                               BeginGame_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::PlaceItems(bool BeginGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.PlaceItems");

	AGS_PropHunt_C_PlaceItems_Params params {};
	params.BeginGame_ = BeginGame_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CollectItems
//		Flags  -> ()
// Parameters:
void AGS_PropHunt_C::CollectItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CollectItems");

	AGS_PropHunt_C_CollectItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckPlayerReservedSlot
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Reserved                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::CheckPlayerReservedSlot(class APC_PropHunt_C* Controller, bool* Reserved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckPlayerReservedSlot");

	AGS_PropHunt_C_CheckPlayerReservedSlot_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reserved != nullptr)
		*Reserved = params.Reserved;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetSurvivorGameStart
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerStart*                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::GetSurvivorGameStart(class APC_PropHunt_C* Controller, class APlayerStart** Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetSurvivorGameStart");

	AGS_PropHunt_C_GetSurvivorGameStart_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.MakeEmptyLobby
//		Flags  -> ()
// Parameters:
//		struct FMiniLobbyState                             Result                                                     (Parm, OutParm, HasGetValueTypeHash)
void AGS_PropHunt_C::MakeEmptyLobby(struct FMiniLobbyState* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.MakeEmptyLobby");

	AGS_PropHunt_C_MakeEmptyLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.RemoveAliveSurvivor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Escaped_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::RemoveAliveSurvivor(class AActor* Actor, bool Escaped_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.RemoveAliveSurvivor");

	AGS_PropHunt_C_RemoveAliveSurvivor_Params params {};
	params.Actor = Actor;
	params.Escaped_ = Escaped_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AddAliveSurvivor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::AddAliveSurvivor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AddAliveSurvivor");

	AGS_PropHunt_C_AddAliveSurvivor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetRandomSurvivorPlayerStart
//		Flags  -> ()
// Parameters:
//		class APlayerStart*                                res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::GetRandomSurvivorPlayerStart(class APlayerStart** res)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetRandomSurvivorPlayerStart");

	AGS_PropHunt_C_GetRandomSurvivorPlayerStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetKillerPlayerStart
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerStart*                                PlayerStart                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::GetKillerPlayerStart(class APC_PropHunt_C* Controller, class APlayerStart** PlayerStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetKillerPlayerStart");

	AGS_PropHunt_C_GetKillerPlayerStart_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStart != nullptr)
		*PlayerStart = params.PlayerStart;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AcceptTransport
//		Flags  -> ()
// Parameters:
//		struct FS_LobbyStateTransport                      Transport                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::AcceptTransport(const struct FS_LobbyStateTransport& Transport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AcceptTransport");

	AGS_PropHunt_C_AcceptTransport_Params params {};
	params.Transport = Transport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CreateLobbyTransport
//		Flags  -> ()
// Parameters:
//		struct FS_LobbyStateTransport                      Transport                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::CreateLobbyTransport(struct FS_LobbyStateTransport* Transport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CreateLobbyTransport");

	AGS_PropHunt_C_CreateLobbyTransport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transport != nullptr)
		*Transport = params.Transport;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReceiveBeginPlay
//		Flags  -> ()
void AGS_PropHunt_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReceiveBeginPlay");

	AGS_PropHunt_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.LobbyStateUpdate
//		Flags  -> ()
// Parameters:
//		struct FS_LobbyStateTransport                      State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::LobbyStateUpdate(const struct FS_LobbyStateTransport& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.LobbyStateUpdate");

	AGS_PropHunt_C_LobbyStateUpdate_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ProcessLobbyStateChange
//		Flags  -> ()
void AGS_PropHunt_C::ProcessLobbyStateChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ProcessLobbyStateChange");

	AGS_PropHunt_C_ProcessLobbyStateChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnReserveRequest
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Silent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::OnReserveRequest(class APC_PropHunt_C* Controller, const struct FString& SlotName, bool Silent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnReserveRequest");

	AGS_PropHunt_C_OnReserveRequest_Params params {};
	params.Controller = Controller;
	params.SlotName = SlotName;
	params.Silent = Silent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnReleaseRequest
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Silent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::OnReleaseRequest(class APC_PropHunt_C* Controller, const struct FString& SlotName, bool Silent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnReleaseRequest");

	AGS_PropHunt_C_OnReleaseRequest_Params params {};
	params.Controller = Controller;
	params.SlotName = SlotName;
	params.Silent = Silent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetAlarmsCountEvent
//		Flags  -> ()
void AGS_PropHunt_C::GetAlarmsCountEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetAlarmsCountEvent");

	AGS_PropHunt_C_GetAlarmsCountEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.DecreaseAlarmsCountEvent
//		Flags  -> ()
// Parameters:
//		TArray<class AActor*>                              Surfs                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AGS_PropHunt_C::DecreaseAlarmsCountEvent(TArray<class AActor*> Surfs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.DecreaseAlarmsCountEvent");

	AGS_PropHunt_C_DecreaseAlarmsCountEvent_Params params {};
	params.Surfs = Surfs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnStartGame
//		Flags  -> ()
void AGS_PropHunt_C::OnStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnStartGame");

	AGS_PropHunt_C_OnStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetSurvEvent
//		Flags  -> ()
void AGS_PropHunt_C::GetSurvEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetSurvEvent");

	AGS_PropHunt_C_GetSurvEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SurvStatusChangedEvent
//		Flags  -> ()
void AGS_PropHunt_C::SurvStatusChangedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SurvStatusChangedEvent");

	AGS_PropHunt_C_SurvStatusChangedEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnRaiseLobby
//		Flags  -> ()
void AGS_PropHunt_C::OnRaiseLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnRaiseLobby");

	AGS_PropHunt_C_OnRaiseLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnEndGameGS
//		Flags  -> ()
// Parameters:
//		bool                                               IsKillerWin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::OnEndGameGS(bool IsKillerWin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnEndGameGS");

	AGS_PropHunt_C_OnEndGameGS_Params params {};
	params.IsKillerWin = IsKillerWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.MultiSetIsKillerWin
//		Flags  -> ()
// Parameters:
//		bool                                               IsKillerWin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::MultiSetIsKillerWin(bool IsKillerWin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.MultiSetIsKillerWin");

	AGS_PropHunt_C_MultiSetIsKillerWin_Params params {};
	params.IsKillerWin = IsKillerWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.DoorIsOpen
//		Flags  -> ()
void AGS_PropHunt_C::DoorIsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.DoorIsOpen");

	AGS_PropHunt_C_DoorIsOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CountPlayerStarts
//		Flags  -> ()
void AGS_PropHunt_C::CountPlayerStarts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CountPlayerStarts");

	AGS_PropHunt_C_CountPlayerStarts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnPlayerDeath
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnPlayerDeath(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnPlayerDeath");

	AGS_PropHunt_C_OnPlayerDeath_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnPlayerReady
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnPlayerReady(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnPlayerReady");

	AGS_PropHunt_C_OnPlayerReady_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnPlayerLeft
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnPlayerLeft(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnPlayerLeft");

	AGS_PropHunt_C_OnPlayerLeft_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnPlayerLogin
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnPlayerLogin(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnPlayerLogin");

	AGS_PropHunt_C_OnPlayerLogin_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckForReadyPlayers
//		Flags  -> ()
void AGS_PropHunt_C::CheckForReadyPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckForReadyPlayers");

	AGS_PropHunt_C_CheckForReadyPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetAlarms
//		Flags  -> ()
void AGS_PropHunt_C::GetAlarms()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetAlarms");

	AGS_PropHunt_C_GetAlarms_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetChairs
//		Flags  -> ()
void AGS_PropHunt_C::GetChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetChairs");

	AGS_PropHunt_C_GetChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnPlayerEscaped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnPlayerEscaped(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnPlayerEscaped");

	AGS_PropHunt_C_OnPlayerEscaped_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReceiveTick");

	AGS_PropHunt_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AmbientOff
//		Flags  -> ()
void AGS_PropHunt_C::AmbientOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AmbientOff");

	AGS_PropHunt_C_AmbientOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.BoostMode
//		Flags  -> ()
void AGS_PropHunt_C::BoostMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.BoostMode");

	AGS_PropHunt_C_BoostMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AlarmScore
//		Flags  -> ()
// Parameters:
//		TArray<class AActor*>                              Surfs                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AGS_PropHunt_C::AlarmScore(TArray<class AActor*> Surfs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AlarmScore");

	AGS_PropHunt_C_AlarmScore_Params params {};
	params.Surfs = Surfs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AlarmGood
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::AlarmGood(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AlarmGood");

	AGS_PropHunt_C_AlarmGood_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AlarmSuper
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::AlarmSuper(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AlarmSuper");

	AGS_PropHunt_C_AlarmSuper_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ScoreCalc
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ScoreText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void AGS_PropHunt_C::ScoreCalc(class AActor* Surv, const struct FText& ScoreText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ScoreCalc");

	AGS_PropHunt_C_ScoreCalc_Params params {};
	params.Surv = Surv;
	params.ScoreText = ScoreText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReanimateScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ReanimateScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReanimateScore");

	AGS_PropHunt_C_ReanimateScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OutChairScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OutChairScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OutChairScore");

	AGS_PropHunt_C_OutChairScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ExitScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ExitScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ExitScore");

	AGS_PropHunt_C_ExitScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.DoorOpenScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::DoorOpenScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.DoorOpenScore");

	AGS_PropHunt_C_DoorOpenScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.FlashScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGrabbed_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::FlashScore(class AActor* Surv, bool IsGrabbed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.FlashScore");

	AGS_PropHunt_C_FlashScore_Params params {};
	params.Surv = Surv;
	params.IsGrabbed_ = IsGrabbed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SurvHealScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Other_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::SurvHealScore(class AActor* Surv, bool Other_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SurvHealScore");

	AGS_PropHunt_C_SurvHealScore_Params params {};
	params.Surv = Surv;
	params.Other_ = Other_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.HitScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::HitScore(class AActor* Killer, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.HitScore");

	AGS_PropHunt_C_HitScore_Params params {};
	params.Killer = Killer;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CrawlScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::CrawlScore(class AActor* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CrawlScore");

	AGS_PropHunt_C_CrawlScore_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ChairScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ChairScore(class AActor* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ChairScore");

	AGS_PropHunt_C_ChairScore_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.KillScore
//		Flags  -> ()
void AGS_PropHunt_C::KillScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.KillScore");

	AGS_PropHunt_C_KillScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnServerTravel
//		Flags  -> ()
void AGS_PropHunt_C::OnServerTravel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnServerTravel");

	AGS_PropHunt_C_OnServerTravel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SetKillerType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::SetKillerType(TEnumAsByte<KillerType_EKillerType> KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SetKillerType");

	AGS_PropHunt_C_SetKillerType_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.RedirectPlayers
//		Flags  -> ()
void AGS_PropHunt_C::RedirectPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.RedirectPlayers");

	AGS_PropHunt_C_RedirectPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ItemsClear
//		Flags  -> ()
void AGS_PropHunt_C::ItemsClear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ItemsClear");

	AGS_PropHunt_C_ItemsClear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AlmostPerfect
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::AlmostPerfect(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AlmostPerfect");

	AGS_PropHunt_C_AlmostPerfect_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.AlarmNormal
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::AlarmNormal(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.AlarmNormal");

	AGS_PropHunt_C_AlarmNormal_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.FreezePlayersServ
//		Flags  -> ()
void AGS_PropHunt_C::FreezePlayersServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.FreezePlayersServ");

	AGS_PropHunt_C_FreezePlayersServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.FreezePlayersMulti
//		Flags  -> ()
void AGS_PropHunt_C::FreezePlayersMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.FreezePlayersMulti");

	AGS_PropHunt_C_FreezePlayersMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.Kukarequ
//		Flags  -> ()
void AGS_PropHunt_C::Kukarequ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.Kukarequ");

	AGS_PropHunt_C_Kukarequ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.StartGameState
//		Flags  -> ()
void AGS_PropHunt_C::StartGameState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.StartGameState");

	AGS_PropHunt_C_StartGameState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CancelGameStart
//		Flags  -> ()
void AGS_PropHunt_C::CancelGameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CancelGameStart");

	AGS_PropHunt_C_CancelGameStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnPlayerUnready
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnPlayerUnready(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnPlayerUnready");

	AGS_PropHunt_C_OnPlayerUnready_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.TimerControl
//		Flags  -> ()
// Parameters:
//		bool                                               Add_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::TimerControl(bool Add_, int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.TimerControl");

	AGS_PropHunt_C_TimerControl_Params params {};
	params.Add_ = Add_;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SendTextTimerControl
//		Flags  -> ()
// Parameters:
//		bool                                               Add_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::SendTextTimerControl(bool Add_, int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SendTextTimerControl");

	AGS_PropHunt_C_SendTextTimerControl_Params params {};
	params.Add_ = Add_;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.Intro
//		Flags  -> ()
// Parameters:
//		class APlayerStart*                                KPSRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::Intro(class APlayerStart* KPSRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.Intro");

	AGS_PropHunt_C_Intro_Params params {};
	params.KPSRef = KPSRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.StormTimerServ
//		Flags  -> ()
// Parameters:
//		float                                              F                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMapStormBP_C*                               ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::StormTimerServ(float F, class AMapStormBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.StormTimerServ");

	AGS_PropHunt_C_StormTimerServ_Params params {};
	params.F = F;
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.StormTimerMulti
//		Flags  -> ()
// Parameters:
//		float                                              F                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMapStormBP_C*                               ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::StormTimerMulti(float F, class AMapStormBP_C* ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.StormTimerMulti");

	AGS_PropHunt_C_StormTimerMulti_Params params {};
	params.F = F;
	params.ref = ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.UpdateAvatars
//		Flags  -> ()
void AGS_PropHunt_C::UpdateAvatars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.UpdateAvatars");

	AGS_PropHunt_C_UpdateAvatars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ZeroScoreSendText
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ZeroScoreSendText(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ZeroScoreSendText");

	AGS_PropHunt_C_ZeroScoreSendText_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OutFromHandsScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OutFromHandsScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OutFromHandsScore");

	AGS_PropHunt_C_OutFromHandsScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.StunScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGrabbed_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::StunScore(class AActor* Surv, bool IsGrabbed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.StunScore");

	AGS_PropHunt_C_StunScore_Params params {};
	params.Surv = Surv;
	params.IsGrabbed_ = IsGrabbed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.RemoveAllAlarms
//		Flags  -> ()
void AGS_PropHunt_C::RemoveAllAlarms()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.RemoveAllAlarms");

	AGS_PropHunt_C_RemoveAllAlarms_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.StartFartTime
//		Flags  -> ()
void AGS_PropHunt_C::StartFartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.StartFartTime");

	AGS_PropHunt_C_StartFartTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.Fart
//		Flags  -> ()
void AGS_PropHunt_C::Fart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.Fart");

	AGS_PropHunt_C_Fart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetCategory
//		Flags  -> ()
void AGS_PropHunt_C::GetCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetCategory");

	AGS_PropHunt_C_GetCategory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReadingMapVotes
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<MapVote_EMapVote>                      MapVote                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PrevVoteDelete_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::ReadingMapVotes(TEnumAsByte<MapVote_EMapVote> MapVote, bool PrevVoteDelete_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReadingMapVotes");

	AGS_PropHunt_C_ReadingMapVotes_Params params {};
	params.MapVote = MapVote;
	params.PrevVoteDelete_ = PrevVoteDelete_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ClearAllVotes
//		Flags  -> ()
void AGS_PropHunt_C::ClearAllVotes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ClearAllVotes");

	AGS_PropHunt_C_ClearAllVotes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerVote                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PrevVoteDelete_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::ReadingPlayerVotes(TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerVote, bool PrevVoteDelete_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes");

	AGS_PropHunt_C_ReadingPlayerVotes_Params params {};
	params.PlayerVote = PlayerVote;
	params.PrevVoteDelete_ = PrevVoteDelete_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetRandomMaps
//		Flags  -> ()
void AGS_PropHunt_C::GetRandomMaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetRandomMaps");

	AGS_PropHunt_C_GetRandomMaps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.VoteMapEnd
//		Flags  -> ()
void AGS_PropHunt_C::VoteMapEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.VoteMapEnd");

	AGS_PropHunt_C_VoteMapEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SwapPlayers
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Player1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APC_PropHunt_C*                              Player2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::SwapPlayers(class APC_PropHunt_C* Player1, class APC_PropHunt_C* Player2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SwapPlayers");

	AGS_PropHunt_C_SwapPlayers_Params params {};
	params.Player1 = Player1;
	params.Player2 = Player2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SwapNotification
//		Flags  -> ()
void AGS_PropHunt_C::SwapNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SwapNotification");

	AGS_PropHunt_C_SwapNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckAliveSurvivors
//		Flags  -> ()
void AGS_PropHunt_C::CheckAliveSurvivors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckAliveSurvivors");

	AGS_PropHunt_C_CheckAliveSurvivors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.LoadPlayerStart
//		Flags  -> ()
void AGS_PropHunt_C::LoadPlayerStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.LoadPlayerStart");

	AGS_PropHunt_C_LoadPlayerStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckSurvs
//		Flags  -> ()
void AGS_PropHunt_C::CheckSurvs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckSurvs");

	AGS_PropHunt_C_CheckSurvs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckOnChairSurvs
//		Flags  -> ()
void AGS_PropHunt_C::CheckOnChairSurvs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckOnChairSurvs");

	AGS_PropHunt_C_CheckOnChairSurvs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnChairSurvsSoundMulticast
//		Flags  -> ()
// Parameters:
//		class UFMODEvent*                                  Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnChairSurvsSoundMulticast(class UFMODEvent* Event, int Count_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnChairSurvsSoundMulticast");

	AGS_PropHunt_C_OnChairSurvsSoundMulticast_Params params {};
	params.Event = Event;
	params.Count_ = Count_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.UpdateLobbyTime
//		Flags  -> ()
void AGS_PropHunt_C::UpdateLobbyTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.UpdateLobbyTime");

	AGS_PropHunt_C_UpdateLobbyTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.EndGameAllPostProcessOff
//		Flags  -> ()
void AGS_PropHunt_C::EndGameAllPostProcessOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.EndGameAllPostProcessOff");

	AGS_PropHunt_C_EndGameAllPostProcessOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.TeamScore
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::TeamScore(bool Killer_, int Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.TeamScore");

	AGS_PropHunt_C_TeamScore_Params params {};
	params.Killer_ = Killer_;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.printmulti
//		Flags  -> ()
// Parameters:
//		struct FString                                     inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGS_PropHunt_C::printmulti(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.printmulti");

	AGS_PropHunt_C_printmulti_Params params {};
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CalculateLobbyTime
//		Flags  -> ()
void AGS_PropHunt_C::CalculateLobbyTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CalculateLobbyTime");

	AGS_PropHunt_C_CalculateLobbyTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SuperRoma
//		Flags  -> ()
void AGS_PropHunt_C::SuperRoma()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SuperRoma");

	AGS_PropHunt_C_SuperRoma_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SwapLeave_FromServer
//		Flags  -> ()
// Parameters:
//		class APawn*                                       LeftPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::SwapLeave_FromServer(class APawn* LeftPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SwapLeave_FromServer");

	AGS_PropHunt_C_SwapLeave_FromServer_Params params {};
	params.LeftPlayer = LeftPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.GetMvpPlayer
//		Flags  -> ()
void AGS_PropHunt_C::GetMvpPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.GetMvpPlayer");

	AGS_PropHunt_C_GetMvpPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.CheckForKiller
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APC_PropHunt_C*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::CheckForKiller(const struct FString& ID, class APC_PropHunt_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.CheckForKiller");

	AGS_PropHunt_C_CheckForKiller_Params params {};
	params.ID = ID;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimer
//		Flags  -> ()
void AGS_PropHunt_C::WaitPlayersTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimer");

	AGS_PropHunt_C_WaitPlayersTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimeout
//		Flags  -> ()
void AGS_PropHunt_C::WaitPlayersTimeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimeout");

	AGS_PropHunt_C_WaitPlayersTimeout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.MultiWaitPlayersTimeout
//		Flags  -> ()
void AGS_PropHunt_C::MultiWaitPlayersTimeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.MultiWaitPlayersTimeout");

	AGS_PropHunt_C_MultiWaitPlayersTimeout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SendLobbyState
//		Flags  -> ()
void AGS_PropHunt_C::SendLobbyState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SendLobbyState");

	AGS_PropHunt_C_SendLobbyState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.KillerLeave
//		Flags  -> ()
void AGS_PropHunt_C::KillerLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.KillerLeave");

	AGS_PropHunt_C_KillerLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.SurvLeaved
//		Flags  -> ()
void AGS_PropHunt_C::SurvLeaved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.SurvLeaved");

	AGS_PropHunt_C_SurvLeaved_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.RandomPerks
//		Flags  -> ()
void AGS_PropHunt_C::RandomPerks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.RandomPerks");

	AGS_PropHunt_C_RandomPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReadyRandomPerk
//		Flags  -> ()
void AGS_PropHunt_C::ReadyRandomPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReadyRandomPerk");

	AGS_PropHunt_C_ReadyRandomPerk_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes_v2
//		Flags  -> ()
// Parameters:
//		struct FString                                     PlayerNickName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               PrevVoteDelete                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGS_PropHunt_C::ReadingPlayerVotes_v2(const struct FString& PlayerNickName, bool PrevVoteDelete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes_v2");

	AGS_PropHunt_C_ReadingPlayerVotes_v2_Params params {};
	params.PlayerNickName = PlayerNickName;
	params.PrevVoteDelete = PrevVoteDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes_v2_Multicast
//		Flags  -> ()
// Parameters:
//		struct FString                                     Player_Nickname                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Votes_Number                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ReadingPlayerVotes_v2_Multicast(const struct FString& Player_Nickname, int Votes_Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes_v2_Multicast");

	AGS_PropHunt_C_ReadingPlayerVotes_v2_Multicast_Params params {};
	params.Player_Nickname = Player_Nickname;
	params.Votes_Number = Votes_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.exitvoice
//		Flags  -> ()
// Parameters:
//		class APawn*                                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::exitvoice(class APawn* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.exitvoice");

	AGS_PropHunt_C_exitvoice_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.ExecuteUbergraph_GS_PropHunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::ExecuteUbergraph_GS_PropHunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.ExecuteUbergraph_GS_PropHunt");

	AGS_PropHunt_C_ExecuteUbergraph_GS_PropHunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GS_PropHunt.GS_PropHunt_C.OnVoted__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     Player_Nickname                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Votes_Number                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGS_PropHunt_C::OnVoted__DelegateSignature(const struct FString& Player_Nickname, int Votes_Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GS_PropHunt.GS_PropHunt_C.OnVoted__DelegateSignature");

	AGS_PropHunt_C_OnVoted__DelegateSignature_Params params {};
	params.Player_Nickname = Player_Nickname;
	params.Votes_Number = Votes_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
