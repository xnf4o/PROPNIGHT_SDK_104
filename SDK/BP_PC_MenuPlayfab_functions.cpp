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
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetQueueName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetQueueName(struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetQueueName");

	UBP_PC_MenuPlayfab_C_GetQueueName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakePingRequest
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerListQosServersForTitleResponse  ListQosServers                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_PC_MenuPlayfab_C::MakePingRequest(const struct FMultiplayerListQosServersForTitleResponse& ListQosServers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakePingRequest");

	UBP_PC_MenuPlayfab_C_MakePingRequest_Params params {};
	params.ListQosServers = ListQosServers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Ticket Member
//		Flags  -> ()
// Parameters:
//		class UPlayFabJsonObject*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPlayFabJsonObject*                          RMember                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::Ticket_Member(class UPlayFabJsonObject* Data, class UPlayFabJsonObject** RMember)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Ticket Member");

	UBP_PC_MenuPlayfab_C_Ticket_Member_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RMember != nullptr)
		*RMember = params.RMember;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.PlayersToEntities
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<class UPlayFabJsonObject*>                  Entities                                                   (Parm, OutParm)
void UBP_PC_MenuPlayfab_C::PlayersToEntities(TArray<struct FString>* Players, TArray<class UPlayFabJsonObject*>* Entities)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.PlayersToEntities");

	UBP_PC_MenuPlayfab_C_PlayersToEntities_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (Entities != nullptr)
		*Entities = params.Entities;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetPortByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UPlayFabJsonObject*                          ServerDetails                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Port                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetPortByName(const struct FString& Name, class UPlayFabJsonObject* ServerDetails, int* Port)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetPortByName");

	UBP_PC_MenuPlayfab_C_GetPortByName_Params params {};
	params.Name = Name;
	params.ServerDetails = ServerDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Port != nullptr)
		*Port = params.Port;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeInfoRequest
//		Flags  -> ()
// Parameters:
//		class UPlayFabJsonObject*                          res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::MakeInfoRequest(class UPlayFabJsonObject** res)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeInfoRequest");

	UBP_PC_MenuPlayfab_C_MakeInfoRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeTicketCreator
//		Flags  -> ()
// Parameters:
//		class UPlayFabJsonObject*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPlayFabJsonObject*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::MakeTicketCreator(class UPlayFabJsonObject* Data, class UPlayFabJsonObject** Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeTicketCreator");

	UBP_PC_MenuPlayfab_C_MakeTicketCreator_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeListRequest
//		Flags  -> ()
// Parameters:
//		class UPlayFabJsonObject*                          Request                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::MakeListRequest(class UPlayFabJsonObject** Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeListRequest");

	UBP_PC_MenuPlayfab_C_MakeListRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetBuidID
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetBuidID(struct FString* BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetBuidID");

	UBP_PC_MenuPlayfab_C_GetBuidID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildId != nullptr)
		*BuildId = params.BuildId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetSteamID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetSteamID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetSteamID");

	UBP_PC_MenuPlayfab_C_GetSteamID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetDevID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetDevID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetDevID");

	UBP_PC_MenuPlayfab_C_GetDevID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetID
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetID(const struct FString& Key, struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetID");

	UBP_PC_MenuPlayfab_C_GetID_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainSteamID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::ObtainSteamID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainSteamID");

	UBP_PC_MenuPlayfab_C_ObtainSteamID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainDevID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::ObtainDevID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainDevID");

	UBP_PC_MenuPlayfab_C_ObtainDevID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SaveID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::SaveID(const struct FString& ID, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SaveID");

	UBP_PC_MenuPlayfab_C_SaveID_Params params {};
	params.ID = ID;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadSteamID
//		Flags  -> ()
// Parameters:
//		bool                                               Has                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::LoadSteamID(bool* Has, struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadSteamID");

	UBP_PC_MenuPlayfab_C_LoadSteamID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadDevID
//		Flags  -> ()
// Parameters:
//		bool                                               Has                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::LoadDevID(bool* Has, struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadDevID");

	UBP_PC_MenuPlayfab_C_LoadDevID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadID
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Has                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::LoadID(const struct FString& Key, bool* Has, struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadID");

	UBP_PC_MenuPlayfab_C_LoadID_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_38B701DD4151EECD732D4887140B423E
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::OnPlayFabResponse_38B701DD4151EECD732D4887140B423E(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_38B701DD4151EECD732D4887140B423E");

	UBP_PC_MenuPlayfab_C_OnPlayFabResponse_38B701DD4151EECD732D4887140B423E_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveBeginPlay
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveBeginPlay");

	UBP_PC_MenuPlayfab_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginDev
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::LoginDev()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginDev");

	UBP_PC_MenuPlayfab_C_LoginDev_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServer
//		Flags  -> ()
// Parameters:
//		struct FString                                     Cookie                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CreateServer(const struct FString& Cookie)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServer");

	UBP_PC_MenuPlayfab_C_CreateServer_Params params {};
	params.Cookie = Cookie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerRequestMultiplayerServerResponse Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CreateServerOK(const struct FMultiplayerRequestMultiplayerServerResponse& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerOK");

	UBP_PC_MenuPlayfab_C_CreateServerOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CreateServerFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerFail");

	UBP_PC_MenuPlayfab_C_CreateServerFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServers
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::ListServers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServers");

	UBP_PC_MenuPlayfab_C_ListServers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersOK
//		Flags  -> ()
// Parameters:
//		struct FClientExecuteCloudScriptResult             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::ListServersOK(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersOK");

	UBP_PC_MenuPlayfab_C_ListServersOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::ListServersFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersFail");

	UBP_PC_MenuPlayfab_C_ListServersFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Search
//		Flags  -> ()
// Parameters:
//		struct FString                                     Queue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UPlayFabJsonObject*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::Search(const struct FString& Queue, class UPlayFabJsonObject* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Search");

	UBP_PC_MenuPlayfab_C_Search_Params params {};
	params.Queue = Queue;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerCreateMatchmakingTicketResult   Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::SearchOK(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchOK");

	UBP_PC_MenuPlayfab_C_SearchOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::SearchFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchFail");

	UBP_PC_MenuPlayfab_C_SearchFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveTick");

	UBP_PC_MenuPlayfab_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicket
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::CheckTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicket");

	UBP_PC_MenuPlayfab_C_CheckTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerGetMatchmakingTicketResult      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CheckTicketOK(const struct FMultiplayerGetMatchmakingTicketResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketOK");

	UBP_PC_MenuPlayfab_C_CheckTicketOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CheckTicketFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketFail");

	UBP_PC_MenuPlayfab_C_CheckTicketFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearch
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::CancelSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearch");

	UBP_PC_MenuPlayfab_C_CancelSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerCancelMatchmakingTicketResult   Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CancelSearchOK(const struct FMultiplayerCancelMatchmakingTicketResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchOK");

	UBP_PC_MenuPlayfab_C_CancelSearchOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CancelSearchFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchFail");

	UBP_PC_MenuPlayfab_C_CancelSearchFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatch
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::GetMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatch");

	UBP_PC_MenuPlayfab_C_GetMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerGetMatchResult                  Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetMatchOK(const struct FMultiplayerGetMatchResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchOK");

	UBP_PC_MenuPlayfab_C_GetMatchOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::GetMatchFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchFail");

	UBP_PC_MenuPlayfab_C_GetMatchFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginSteam
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::LoginSteam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginSteam");

	UBP_PC_MenuPlayfab_C_LoginSteam_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Login
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::Login(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Login");

	UBP_PC_MenuPlayfab_C_Login_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginOK
//		Flags  -> ()
// Parameters:
//		struct FClientLoginResult                          Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::LoginOK(const struct FClientLoginResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginOK");

	UBP_PC_MenuPlayfab_C_LoginOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::LoginFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginFail");

	UBP_PC_MenuPlayfab_C_LoginFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTickets
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::CancelAllTickets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTickets");

	UBP_PC_MenuPlayfab_C_CancelAllTickets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CancelAllTicketsOK(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsOK");

	UBP_PC_MenuPlayfab_C_CancelAllTicketsOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::CancelAllTicketsFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsFail");

	UBP_PC_MenuPlayfab_C_CancelAllTicketsFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UPlayFabJsonObject*                          DataObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::JoinTicket(const struct FString& Ticket, class UPlayFabJsonObject* DataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicket");

	UBP_PC_MenuPlayfab_C_JoinTicket_Params params {};
	params.Ticket = Ticket;
	params.DataObject = DataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketOK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerJoinMatchmakingTicketResult     Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::JoinTicketOK(const struct FMultiplayerJoinMatchmakingTicketResult& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketOK");

	UBP_PC_MenuPlayfab_C_JoinTicketOK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketFail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::JoinTicketFail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketFail");

	UBP_PC_MenuPlayfab_C_JoinTicketFail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersSuccess
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerListQosServersForTitleResponse  Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::OnQosServersSuccess(const struct FMultiplayerListQosServersForTitleResponse& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersSuccess");

	UBP_PC_MenuPlayfab_C_OnQosServersSuccess_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersFailure
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::OnQosServersFailure(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersFailure");

	UBP_PC_MenuPlayfab_C_OnQosServersFailure_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CallPingRequest
//		Flags  -> ()
// Parameters:
//		bool                                               Include_All_Regions                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfab_C::CallPingRequest(bool Include_All_Regions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CallPingRequest");

	UBP_PC_MenuPlayfab_C_CallPingRequest_Params params {};
	params.Include_All_Regions = Include_All_Regions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnTicketCanceled
//		Flags  -> ()
void UBP_PC_MenuPlayfab_C::OnTicketCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnTicketCanceled");

	UBP_PC_MenuPlayfab_C_OnTicketCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ExecuteUbergraph_BP_PC_MenuPlayfab
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfab_C::ExecuteUbergraph_BP_PC_MenuPlayfab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ExecuteUbergraph_BP_PC_MenuPlayfab");

	UBP_PC_MenuPlayfab_C_ExecuteUbergraph_BP_PC_MenuPlayfab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
