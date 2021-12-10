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
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.CheckSetSkin
//		Flags  -> ()
// Parameters:
//		int                                                SkinID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               Mesh                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPlayerMesh_C::CheckSetSkin(int* SkinID, class USkeletalMesh** Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.CheckSetSkin");

	ALobbyPlayerMesh_C_CheckSetSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkinID != nullptr)
		*SkinID = params.SkinID;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.RedGirlSkin
//		Flags  -> ()
// Parameters:
void ALobbyPlayerMesh_C::RedGirlSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.RedGirlSkin");

	ALobbyPlayerMesh_C_RedGirlSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.SkinCheat
//		Flags  -> ()
// Parameters:
void ALobbyPlayerMesh_C::SkinCheat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.SkinCheat");

	ALobbyPlayerMesh_C_SkinCheat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.NewFunction_1
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPlayerMesh_C::NewFunction_1(TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.NewFunction_1");

	ALobbyPlayerMesh_C_NewFunction_1_Params params {};
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.Skin IDDuplicat Checker
//		Flags  -> ()
// Parameters:
//		bool                                               Bool                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPlayerMesh_C::Skin_IDDuplicat_Checker(bool* Bool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.Skin IDDuplicat Checker");

	ALobbyPlayerMesh_C_Skin_IDDuplicat_Checker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.SurvSkinChanger
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LobbyCharacter_ELobbyCharacter>        char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPlayerMesh_C::SurvSkinChanger(TEnumAsByte<LobbyCharacter_ELobbyCharacter> char_, class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.SurvSkinChanger");

	ALobbyPlayerMesh_C_SurvSkinChanger_Params params {};
	params.char_ = char_;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveBeginPlay
//		Flags  -> ()
void ALobbyPlayerMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveBeginPlay");

	ALobbyPlayerMesh_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPlayerMesh_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.ReceiveTick");

	ALobbyPlayerMesh_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.ChangeMesh
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LobbyCharacter_ELobbyCharacter>        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               LocalBlock_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ScaleLock_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPlayerMesh_C::ChangeMesh(TEnumAsByte<LobbyCharacter_ELobbyCharacter> Character, bool LocalBlock_, bool ScaleLock_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.ChangeMesh");

	ALobbyPlayerMesh_C_ChangeMesh_Params params {};
	params.Character = Character;
	params.LocalBlock_ = LocalBlock_;
	params.ScaleLock_ = ScaleLock_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.HideAll
//		Flags  -> ()
// Parameters:
//		bool                                               OnlyMesh_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPlayerMesh_C::HideAll(bool OnlyMesh_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.HideAll");

	ALobbyPlayerMesh_C_HideAll_Params params {};
	params.OnlyMesh_ = OnlyMesh_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.SetPlayerState
//		Flags  -> ()
// Parameters:
//		class APS_PropHunt_C*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               LocalBlock_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALobbyPlayerMesh_C::SetPlayerState(class APS_PropHunt_C* Player, bool LocalBlock_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.SetPlayerState");

	ALobbyPlayerMesh_C_SetPlayerState_Params params {};
	params.Player = Player;
	params.LocalBlock_ = LocalBlock_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.EndGame
//		Flags  -> ()
void ALobbyPlayerMesh_C::EndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.EndGame");

	ALobbyPlayerMesh_C_EndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.ScaleChange
//		Flags  -> ()
void ALobbyPlayerMesh_C::ScaleChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.ScaleChange");

	ALobbyPlayerMesh_C_ScaleChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyPlayerMesh.LobbyPlayerMesh_C.ExecuteUbergraph_LobbyPlayerMesh
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyPlayerMesh_C::ExecuteUbergraph_LobbyPlayerMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyPlayerMesh.LobbyPlayerMesh_C.ExecuteUbergraph_LobbyPlayerMesh");

	ALobbyPlayerMesh_C_ExecuteUbergraph_LobbyPlayerMesh_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
