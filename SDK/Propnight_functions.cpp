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
//		Name   -> Function Propnight.BlueprintCopyTextMethod.PasteMessageFromClipboard
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintCopyTextMethod::PasteMessageFromClipboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.BlueprintCopyTextMethod.PasteMessageFromClipboard");

	UBlueprintCopyTextMethod_PasteMessageFromClipboard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.BlueprintCopyTextMethod.GetImportedTextureSize
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntPoint                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UBlueprintCopyTextMethod::GetImportedTextureSize(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.BlueprintCopyTextMethod.GetImportedTextureSize");

	UBlueprintCopyTextMethod_GetImportedTextureSize_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.BlueprintCopyTextMethod.CopyMessageToClipboard
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlueprintCopyTextMethod::CopyMessageToClipboard(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.BlueprintCopyTextMethod.CopyMessageToClipboard");

	UBlueprintCopyTextMethod_CopyMessageToClipboard_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.GSN_Prophunt.SetMaxPlayers
//		Flags  -> ()
// Parameters:
//		int                                                maxPlayerClients                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGSN_Prophunt::SetMaxPlayers(int maxPlayerClients)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.GSN_Prophunt.SetMaxPlayers");

	AGSN_Prophunt_SetMaxPlayers_Params params {};
	params.maxPlayerClients = maxPlayerClients;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.ShutdownGame
//		Flags  -> ()
void UHTTP_Wrapper::ShutdownGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.ShutdownGame");

	UHTTP_Wrapper_ShutdownGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.ServerInfoToJSON
//		Flags  -> ()
// Parameters:
//		struct FServerInfo                                 ServerInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UHTTP_Wrapper::ServerInfoToJSON(const struct FServerInfo& ServerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.ServerInfoToJSON");

	UHTTP_Wrapper_ServerInfoToJSON_Params params {};
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.SendRequest
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHTTP_Wrapper::SendRequest(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.SendRequest");

	UHTTP_Wrapper_SendRequest_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.SendPOSTRequestWithHeader
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsServer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Header                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     HeaderValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHTTP_Wrapper::SendPOSTRequestWithHeader(const struct FString& Address, const struct FString& Content, bool IsServer, const struct FString& Header, const struct FString& HeaderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.SendPOSTRequestWithHeader");

	UHTTP_Wrapper_SendPOSTRequestWithHeader_Params params {};
	params.Address = Address;
	params.Content = Content;
	params.IsServer = IsServer;
	params.Header = Header;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.SendPOSTRequest
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsServer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHTTP_Wrapper::SendPOSTRequest(const struct FString& Address, const struct FString& Content, bool IsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.SendPOSTRequest");

	UHTTP_Wrapper_SendPOSTRequest_Params params {};
	params.Address = Address;
	params.Content = Content;
	params.IsServer = IsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.OnResponse
//		Flags  -> ()
// Parameters:
//		struct FString                                     Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHTTP_Wrapper::OnResponse(const struct FString& Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.OnResponse");

	UHTTP_Wrapper_OnResponse_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.OnError
//		Flags  -> ()
void UHTTP_Wrapper::OnError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.OnError");

	UHTTP_Wrapper_OnError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.JSONToArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Json                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FServerInfo>                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FServerInfo> UHTTP_Wrapper::JSONToArray(const struct FString& Json)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.JSONToArray");

	UHTTP_Wrapper_JSONToArray_Params params {};
	params.Json = Json;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.HTTP_Wrapper.GetURL
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UHTTP_Wrapper::GetURL()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.HTTP_Wrapper.GetURL");

	UHTTP_Wrapper_GetURL_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.NewATPCCameraFOVObject.CameraReset
//		Flags  -> ()
void UNewATPCCameraFOVObject::CameraReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.NewATPCCameraFOVObject.CameraReset");

	UNewATPCCameraFOVObject_CameraReset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PC_PropnightMainMenu.LabFunction
//		Flags  -> ()
void APC_PropnightMainMenu::LabFunction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PC_PropnightMainMenu.LabFunction");

	APC_PropnightMainMenu_LabFunction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PC_PropnightMainMenu.CheckIsSteamModuleAvailable
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APC_PropnightMainMenu::CheckIsSteamModuleAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PC_PropnightMainMenu.CheckIsSteamModuleAvailable");

	APC_PropnightMainMenu_CheckIsSteamModuleAvailable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PC_PropnightMainMenu.CheckIsSteamInitialized
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APC_PropnightMainMenu::CheckIsSteamInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PC_PropnightMainMenu.CheckIsSteamInitialized");

	APC_PropnightMainMenu_CheckIsSteamInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PhysicsCharacter.setPhysicsComponent
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             theComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APhysicsCharacter::setPhysicsComponent(class USceneComponent* theComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PhysicsCharacter.setPhysicsComponent");

	APhysicsCharacter_setPhysicsComponent_Params params {};
	params.theComponent = theComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PhysicsCharacter.PhysicsTick
//		Flags  -> ()
// Parameters:
//		float                                              SubstepDeltaTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APhysicsCharacter::PhysicsTick(float SubstepDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PhysicsCharacter.PhysicsTick");

	APhysicsCharacter_PhysicsTick_Params params {};
	params.SubstepDeltaTime = SubstepDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.WriteSteamAppidFile
//		Flags  -> ()
void UProphuntGameInstance::WriteSteamAppidFile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.WriteSteamAppidFile");

	UProphuntGameInstance_WriteSteamAppidFile_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.WithEditor
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProphuntGameInstance::WithEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.WithEditor");

	UProphuntGameInstance_WithEditor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.UninitializeVivox
//		Flags  -> ()
void UProphuntGameInstance::UninitializeVivox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.UninitializeVivox");

	UProphuntGameInstance_UninitializeVivox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.ToggleMuteParticipant
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMuted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::ToggleMuteParticipant(const struct FString& Name, bool bMuted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.ToggleMuteParticipant");

	UProphuntGameInstance_ToggleMuteParticipant_Params params {};
	params.Name = Name;
	params.bMuted = bMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.SetVoiceChatOutputVolume
//		Flags  -> ()
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::SetVoiceChatOutputVolume(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.SetVoiceChatOutputVolume");

	UProphuntGameInstance_SetVoiceChatOutputVolume_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.SetVoiceChatMuted
//		Flags  -> ()
// Parameters:
//		bool                                               bMuted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::SetVoiceChatMuted(bool bMuted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.SetVoiceChatMuted");

	UProphuntGameInstance_SetVoiceChatMuted_Params params {};
	params.bMuted = bMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.SetVoiceChatInputVolume
//		Flags  -> ()
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::SetVoiceChatInputVolume(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.SetVoiceChatInputVolume");

	UProphuntGameInstance_SetVoiceChatInputVolume_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.SetSteamLobbyUserData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::SetSteamLobbyUserData(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.SetSteamLobbyUserData");

	UProphuntGameInstance_SetSteamLobbyUserData_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.SetLobbyData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::SetLobbyData(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.SetLobbyData");

	UProphuntGameInstance_SetLobbyData_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.SendSteamLobbyMessage
//		Flags  -> ()
// Parameters:
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::SendSteamLobbyMessage(const struct FString& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.SendSteamLobbyMessage");

	UProphuntGameInstance_SendSteamLobbyMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.RestoreSteamLobbyMembers
//		Flags  -> ()
void UProphuntGameInstance::RestoreSteamLobbyMembers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.RestoreSteamLobbyMembers");

	UProphuntGameInstance_RestoreSteamLobbyMembers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.ReleaseSteam
//		Flags  -> ()
void UProphuntGameInstance::ReleaseSteam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.ReleaseSteam");

	UProphuntGameInstance_ReleaseSteam_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.PushToTalk
//		Flags  -> ()
// Parameters:
//		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::PushToTalk(bool bPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.PushToTalk");

	UProphuntGameInstance_PushToTalk_Params params {};
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnUserLeaveLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnUserLeaveLobby(const struct FString& Name, const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnUserLeaveLobby");

	UProphuntGameInstance_OnUserLeaveLobby_Params params {};
	params.Name = Name;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnUserEnterLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnUserEnterLobby(const struct FString& Name, const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnUserEnterLobby");

	UProphuntGameInstance_OnUserEnterLobby_Params params {};
	params.Name = Name;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnSteamMessage
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnSteamMessage(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnSteamMessage");

	UProphuntGameInstance_OnSteamMessage_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnLobbyUserDataUpdated
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Entity                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnLobbyUserDataUpdated(const struct FString& ID, const struct FString& Entity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnLobbyUserDataUpdated");

	UProphuntGameInstance_OnLobbyUserDataUpdated_Params params {};
	params.ID = ID;
	params.Entity = Entity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnLobbyCreatedExt
//		Flags  -> ()
void UProphuntGameInstance::OnLobbyCreatedExt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnLobbyCreatedExt");

	UProphuntGameInstance_OnLobbyCreatedExt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnJoinLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     LobbyId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnJoinLobby(const struct FString& LobbyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnJoinLobby");

	UProphuntGameInstance_OnJoinLobby_Params params {};
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnGetSessionTicketResponse
//		Flags  -> ()
// Parameters:
//		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Ticket                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnGetSessionTicketResponse(bool Success, const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnGetSessionTicketResponse");

	UProphuntGameInstance_OnGetSessionTicketResponse_Params params {};
	params.Success = Success;
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnFriendGoneOffline
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnFriendGoneOffline(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnFriendGoneOffline");

	UProphuntGameInstance_OnFriendGoneOffline_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.OnFriendComeOnline
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::OnFriendComeOnline(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.OnFriendComeOnline");

	UProphuntGameInstance_OnFriendComeOnline_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.Logout
//		Flags  -> ()
void UProphuntGameInstance::Logout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.Logout");

	UProphuntGameInstance_Logout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.LeaveVoiceChat
//		Flags  -> ()
void UProphuntGameInstance::LeaveVoiceChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.LeaveVoiceChat");

	UProphuntGameInstance_LeaveVoiceChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.LeaveSteamLobby
//		Flags  -> ()
void UProphuntGameInstance::LeaveSteamLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.LeaveSteamLobby");

	UProphuntGameInstance_LeaveSteamLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.JoinVoiceChatImpl
//		Flags  -> ()
// Parameters:
//		struct FString                                     ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::JoinVoiceChatImpl(const struct FString& ChannelName, int TeamNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.JoinVoiceChatImpl");

	UProphuntGameInstance_JoinVoiceChatImpl_Params params {};
	params.ChannelName = ChannelName;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.JoinSteamLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     LobbyId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::JoinSteamLobby(const struct FString& LobbyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.JoinSteamLobby");

	UProphuntGameInstance_JoinSteamLobby_Params params {};
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.IsAnyoneOnMySteamLobby
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProphuntGameInstance::IsAnyoneOnMySteamLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.IsAnyoneOnMySteamLobby");

	UProphuntGameInstance_IsAnyoneOnMySteamLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.InviteSteamFriend
//		Flags  -> ()
// Parameters:
//		struct FString                                     FriendID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProphuntGameInstance::InviteSteamFriend(const struct FString& FriendID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.InviteSteamFriend");

	UProphuntGameInstance_InviteSteamFriend_Params params {};
	params.FriendID = FriendID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.InitializeVivox_Impl
//		Flags  -> ()
void UProphuntGameInstance::InitializeVivox_Impl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.InitializeVivox_Impl");

	UProphuntGameInstance_InitializeVivox_Impl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.InitializeSteam
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProphuntGameInstance::InitializeSteam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.InitializeSteam");

	UProphuntGameInstance_InitializeSteam_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamSessionTicket
//		Flags  -> ()
void UProphuntGameInstance::GetSteamSessionTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamSessionTicket");

	UProphuntGameInstance_GetSteamSessionTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamNickname
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProphuntGameInstance::GetSteamNickname()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamNickname");

	UProphuntGameInstance_GetSteamNickname_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamLobbyOwnerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProphuntGameInstance::GetSteamLobbyOwnerID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamLobbyOwnerID");

	UProphuntGameInstance_GetSteamLobbyOwnerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UProphuntGameInstance::GetSteamLobbyMembersData(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersData");

	UProphuntGameInstance_GetSteamLobbyMembersData_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersCount
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UProphuntGameInstance::GetSteamLobbyMembersCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersCount");

	UProphuntGameInstance_GetSteamLobbyMembersCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamLobbyData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProphuntGameInstance::GetSteamLobbyData(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamLobbyData");

	UProphuntGameInstance_GetSteamLobbyData_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProphuntGameInstance::GetSteamID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamID");

	UProphuntGameInstance_GetSteamID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.GetSteamFriends
//		Flags  -> ()
// Parameters:
//		TArray<struct FSteamFriend>                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FSteamFriend> UProphuntGameInstance::GetSteamFriends()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.GetSteamFriends");

	UProphuntGameInstance_GetSteamFriends_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.CreateLobby
//		Flags  -> ()
void UProphuntGameInstance::CreateLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.CreateLobby");

	UProphuntGameInstance_CreateLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.CallSteamCallback
//		Flags  -> ()
void UProphuntGameInstance::CallSteamCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.CallSteamCallback");

	UProphuntGameInstance_CallSteamCallback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.ProphuntGameInstance.AmILobbyOwner
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProphuntGameInstance::AmILobbyOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.ProphuntGameInstance.AmILobbyOwner");

	UProphuntGameInstance_AmILobbyOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightBeaconHost.Start
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APropnightBeaconHost::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightBeaconHost.Start");

	APropnightBeaconHost_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightBeaconHost.AddHost
//		Flags  -> ()
// Parameters:
//		class AOnlineBeaconHostObject*                     HostObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APropnightBeaconHost::AddHost(class AOnlineBeaconHostObject* HostObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightBeaconHost.AddHost");

	APropnightBeaconHost_AddHost_Params params {};
	params.HostObject = HostObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightBeaconHostObject.UpdatePNClientBeaconType
//		Flags  -> ()
void APropnightBeaconHostObject::UpdatePNClientBeaconType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightBeaconHostObject.UpdatePNClientBeaconType");

	APropnightBeaconHostObject_UpdatePNClientBeaconType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightOnlineBeaconClient.Start
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               portOverride                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APropnightOnlineBeaconClient::Start(const struct FString& Address, int Port, bool portOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightOnlineBeaconClient.Start");

	APropnightOnlineBeaconClient_Start_Params params {};
	params.Address = Address;
	params.Port = Port;
	params.portOverride = portOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightOnlineBeaconClient.Ready
//		Flags  -> ()
void APropnightOnlineBeaconClient::Ready()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightOnlineBeaconClient.Ready");

	APropnightOnlineBeaconClient_Ready_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightOnlineBeaconClient.OnReady
//		Flags  -> ()
void APropnightOnlineBeaconClient::OnReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightOnlineBeaconClient.OnReady");

	APropnightOnlineBeaconClient_OnReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightOnlineBeaconClient.OnBeaconFailure
//		Flags  -> ()
void APropnightOnlineBeaconClient::OnBeaconFailure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightOnlineBeaconClient.OnBeaconFailure");

	APropnightOnlineBeaconClient_OnBeaconFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightOnlineBeaconClient.Disconnect
//		Flags  -> ()
void APropnightOnlineBeaconClient::Disconnect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightOnlineBeaconClient.Disconnect");

	APropnightOnlineBeaconClient_Disconnect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Propnight.PropnightPlayerController.ClientJoinVoice
//		Flags  -> ()
// Parameters:
//		struct FString                                     ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TeamNum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APropnightPlayerController::ClientJoinVoice(const struct FString& ChannelName, int TeamNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Propnight.PropnightPlayerController.ClientJoinVoice");

	APropnightPlayerController_ClientJoinVoice_Params params {};
	params.ChannelName = ChannelName;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
