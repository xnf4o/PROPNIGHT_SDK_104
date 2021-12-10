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
// Enums
//---------------------------------------------------------------------------

// Enum EOSCore.EOSResult
enum class EOSCore_EOSResult : uint8_t
{
	EOSResult__EOS_Success         = 0,
	EOSResult__EOS_NoConnection    = 1,
	EOSResult__EOS_InvalidCredentials = 2,
	EOSResult__EOS_InvalidUser     = 3,
	EOSResult__EOS_InvalidAuth     = 4,
	EOSResult__EOS_AccessDenied    = 5,
	EOSResult__EOS_MissingPermissions = 6,
	EOSResult__EOS_Token_Not_Account = 7,
	EOSResult__EOS_TooManyRequests = 8,
	EOSResult__EOS_AlreadyPending  = 9,
	EOSResult__EOS_InvalidParameters = 10,
	EOSResult__EOS_InvalidRequest  = 11,
	EOSResult__EOS_UnrecognizedResponse = 12,
	EOSResult__EOS_IncompatibleVersion = 13,
	EOSResult__EOS_NotConfigured   = 14,
	EOSResult__EOS_AlreadyConfigured = 15,
	EOSResult__EOS_NotImplemented  = 16,
	EOSResult__EOS_Canceled        = 17,
	EOSResult__EOS_NotFound        = 18,
	EOSResult__EOS_OperationWillRetry = 19,
	EOSResult__EOS_NoChange        = 20,
	EOSResult__EOS_VersionMismatch = 21,
	EOSResult__EOS_LimitExceeded   = 22,
	EOSResult__EOS_Disabled        = 23,
	EOSResult__EOS_DuplicateNotAllowed = 24,
	EOSResult__EOS_MissingParameters_DEPRECATED = 25,
	EOSResult__EOS_InvalidSandboxId = 26,
	EOSResult__EOS_TimedOut        = 27,
	EOSResult__EOS_PartialResult   = 28,
	EOSResult__EOS_Missing_Role    = 29,
	EOSResult__EOS_Missing_Feature = 30,
	EOSResult__EOS_Invalid_Sandbox = 31,
	EOSResult__EOS_Invalid_Deployment = 32,
	EOSResult__EOS_Invalid_Product = 33,
	EOSResult__EOS_Invalid_ProductUserID = 34,
	EOSResult__EOS_ServiceFailure  = 35,
	EOSResult__EOS_CacheDirectoryMissing = 36,
	EOSResult__EOS_CacheDirectoryInvalid = 37,
	EOSResult__EOS_InvalidState    = 38,
	EOSResult__EOS_RequestInProgress = 39,
	EOSResult__EOS_Auth_AccountLocked = 40,
	EOSResult__EOS_Auth_AccountLockedForUpdate = 41,
	EOSResult__EOS_Auth_InvalidRefreshToken = 42,
	EOSResult__EOS_Auth_InvalidToken = 43,
	EOSResult__EOS_Auth_AuthenticationFailure = 44,
	EOSResult__EOS_Auth_InvalidPlatformToken = 45,
	EOSResult__EOS_Auth_WrongAccount = 46,
	EOSResult__EOS_Auth_WrongClient = 47,
	EOSResult__EOS_Auth_FullAccountRequired = 48,
	EOSResult__EOS_Auth_HeadlessAccountRequired = 49,
	EOSResult__EOS_Auth_PasswordResetRequired = 50,
	EOSResult__EOS_Auth_PasswordCannotBeReused = 51,
	EOSResult__EOS_Auth_Expired    = 52,
	EOSResult__EOS_Auth_ScopeConsentRequired = 53,
	EOSResult__EOS_Auth_ApplicationNotFound = 54,
	EOSResult__EOS_Auth_ScopeNotFound = 55,
	EOSResult__EOS_Auth_AccountFeatureRestricted = 56,
	EOSResult__EOS_Auth_PinGrantCode = 57,
	EOSResult__EOS_Auth_PinGrantExpired = 58,
	EOSResult__EOS_Auth_PinGrantPending = 59,
	EOSResult__EOS_Auth_ExternalAuthNotLinked = 60,
	EOSResult__EOS_Auth_ExternalAuthRevoked = 61,
	EOSResult__EOS_Auth_ExternalAuthInvalid = 62,
	EOSResult__EOS_Auth_ExternalAuthRestricted = 63,
	EOSResult__EOS_Auth_ExternalAuthCannotLogin = 64,
	EOSResult__EOS_Auth_ExternalAuthExpired = 65,
	EOSResult__EOS_Auth_ExternalAuthIsLastLoginType = 66,
	EOSResult__EOS_Auth_ExchangeCodeNotFound = 67,
	EOSResult__EOS_Auth_OriginatingExchangeCodeSessionExpired = 68,
	EOSResult__EOS_Auth_PersistentAuth_AccountNotActive = 69,
	EOSResult__EOS_Auth_MFARequired = 70,
	EOSResult__EOS_Auth_ParentalControls = 71,
	EOSResult__EOS_Auth_NoRealId   = 72,
	EOSResult__EOS_Friends_InviteAwaitingAcceptance = 73,
	EOSResult__EOS_Friends_NoInvitation = 74,
	EOSResult__EOS_Friends_AlreadyFriends = 75,
	EOSResult__EOS_Friends_NotFriends = 76,
	EOSResult__EOS_Friends_TargetUserTooManyInvites = 77,
	EOSResult__EOS_Friends_LocalUserTooManyInvites = 78,
	EOSResult__EOS_Friends_TargetUserFriendLimitExceeded = 79,
	EOSResult__EOS_Friends_LocalUserFriendLimitExceeded = 80,
	EOSResult__EOS_Presence_DataInvalid = 81,
	EOSResult__EOS_Presence_DataLengthInvalid = 82,
	EOSResult__EOS_Presence_DataKeyInvalid = 83,
	EOSResult__EOS_Presence_DataKeyLengthInvalid = 84,
	EOSResult__EOS_Presence_DataValueInvalid = 85,
	EOSResult__EOS_Presence_DataValueLengthInvalid = 86,
	EOSResult__EOS_Presence_RichTextInvalid = 87,
	EOSResult__EOS_Presence_RichTextLengthInvalid = 88,
	EOSResult__EOS_Presence_StatusInvalid = 89,
	EOSResult__EOS_Ecom_EntitlementStale = 90,
	EOSResult__EOS_Ecom_CatalogOfferStale = 91,
	EOSResult__EOS_Ecom_CatalogItemStale = 92,
	EOSResult__EOS_Ecom_CatalogOfferPriceInvalid = 93,
	EOSResult__EOS_Ecom_CheckoutLoadError = 94,
	EOSResult__EOS_Sessions_SessionInProgress = 95,
	EOSResult__EOS_Sessions_TooManyPlayers = 96,
	EOSResult__EOS_Sessions_NoPermission = 97,
	EOSResult__EOS_Sessions_SessionAlreadyExists = 98,
	EOSResult__EOS_Sessions_InvalidLock = 99,
	EOSResult__EOS_Sessions_InvalidSession = 100,
	EOSResult__EOS_Sessions_SandboxNotAllowed = 101,
	EOSResult__EOS_Sessions_InviteFailed = 102,
	EOSResult__EOS_Sessions_InviteNotFound = 103,
	EOSResult__EOS_Sessions_UpsertNotAllowed = 104,
	EOSResult__EOS_Sessions_AggregationFailed = 105,
	EOSResult__EOS_Sessions_HostAtCapacity = 106,
	EOSResult__EOS_Sessions_SandboxAtCapacity = 107,
	EOSResult__EOS_Sessions_SessionNotAnonymous = 108,
	EOSResult__EOS_Sessions_OutOfSync = 109,
	EOSResult__EOS_Sessions_TooManyInvites = 110,
	EOSResult__EOS_Sessions_PresenceSessionExists = 111,
	EOSResult__EOS_Sessions_DeploymentAtCapacity = 112,
	EOSResult__EOS_Sessions_NotAllowed = 113,
	EOSResult__EOS_PlayerDataStorage_FilenameInvalid = 114,
	EOSResult__EOS_PlayerDataStorage_FilenameLengthInvalid = 115,
	EOSResult__EOS_PlayerDataStorage_FilenameInvalidChars = 116,
	EOSResult__EOS_PlayerDataStorage_FileSizeTooLarge = 117,
	EOSResult__EOS_PlayerDataStorage_FileSizeInvalid = 118,
	EOSResult__EOS_PlayerDataStorage_FileHandleInvalid = 119,
	EOSResult__EOS_PlayerDataStorage_DataInvalid = 120,
	EOSResult__EOS_PlayerDataStorage_DataLengthInvalid = 121,
	EOSResult__EOS_PlayerDataStorage_StartIndexInvalid = 122,
	EOSResult__EOS_PlayerDataStorage_RequestInProgress = 123,
	EOSResult__EOS_PlayerDataStorage_UserThrottled = 124,
	EOSResult__EOS_PlayerDataStorage_EncryptionKeyNotSet = 125,
	EOSResult__EOS_PlayerDataStorage_UserErrorFromDataCallback = 126,
	EOSResult__EOS_PlayerDataStorage_FileHeaderHasNewerVersion = 127,
	EOSResult__EOS_PlayerDataStorage_FileCorrupted = 128,
	EOSResult__EOS_Connect_ExternalTokenValidationFailed = 129,
	EOSResult__EOS_Connect_UserAlreadyExists = 130,
	EOSResult__EOS_Connect_AuthExpired = 131,
	EOSResult__EOS_Connect_InvalidToken = 132,
	EOSResult__EOS_Connect_UnsupportedTokenType = 133,
	EOSResult__EOS_Connect_LinkAccountFailed = 134,
	EOSResult__EOS_Connect_ExternalServiceUnavailable = 135,
	EOSResult__EOS_Connect_ExternalServiceConfigurationFailure = 136,
	EOSResult__EOS_Connect_LinkAccountFailedMissingNintendoIdAccount_DEPRECATED = 137,
	EOSResult__EOS_UI_SocialOverlayLoadError = 138,
	EOSResult__EOS_Lobby_NotOwner  = 139,
	EOSResult__EOS_Lobby_InvalidLock = 140,
	EOSResult__EOS_Lobby_LobbyAlreadyExists = 141,
	EOSResult__EOS_Lobby_SessionInProgress = 142,
	EOSResult__EOS_Lobby_TooManyPlayers = 143,
	EOSResult__EOS_Lobby_NoPermission = 144,
	EOSResult__EOS_Lobby_InvalidSession = 145,
	EOSResult__EOS_Lobby_SandboxNotAllowed = 146,
	EOSResult__EOS_Lobby_InviteFailed = 147,
	EOSResult__EOS_Lobby_InviteNotFound = 148,
	EOSResult__EOS_Lobby_UpsertNotAllowed = 149,
	EOSResult__EOS_Lobby_AggregationFailed = 150,
	EOSResult__EOS_Lobby_HostAtCapacity = 151,
	EOSResult__EOS_Lobby_SandboxAtCapacity = 152,
	EOSResult__EOS_Lobby_TooManyInvites = 153,
	EOSResult__EOS_Lobby_DeploymentAtCapacity = 154,
	EOSResult__EOS_Lobby_NotAllowed = 155,
	EOSResult__EOS_Lobby_MemberUpdateOnly = 156,
	EOSResult__EOS_Lobby_PresenceLobbyExists = 157,
	EOSResult__EOS_TitleStorage_UserErrorFromDataCallback = 158,
	EOSResult__EOS_TitleStorage_EncryptionKeyNotSet = 159,
	EOSResult__EOS_TitleStorage_FileCorrupted = 160,
	EOSResult__EOS_TitleStorage_FileHeaderHasNewerVersion = 161,
	EOSResult__EOS_Mods_ModSdkProcessIsAlreadyRunning = 162,
	EOSResult__EOS_Mods_ModSdkCommandIsEmpty = 163,
	EOSResult__EOS_Mods_ModSdkProcessCreationFailed = 164,
	EOSResult__EOS_Mods_CriticalError = 165,
	EOSResult__EOS_Mods_ToolInternalError = 166,
	EOSResult__EOS_Mods_IPCFailure = 167,
	EOSResult__EOS_Mods_InvalidIPCResponse = 168,
	EOSResult__EOS_Mods_URILaunchFailure = 169,
	EOSResult__EOS_Mods_ModIsNotInstalled = 170,
	EOSResult__EOS_Mods_UserDoesNotOwnTheGame = 171,
	EOSResult__EOS_Mods_OfferRequestByIdInvalidResult = 172,
	EOSResult__EOS_Mods_CouldNotFindOffer = 173,
	EOSResult__EOS_Mods_OfferRequestByIdFailure = 174,
	EOSResult__EOS_Mods_PurchaseFailure = 175,
	EOSResult__EOS_Mods_InvalidGameInstallInfo = 176,
	EOSResult__EOS_Mods_CannotGetManifestLocation = 177,
	EOSResult__EOS_Mods_UnsupportedOS = 178,
	EOSResult__EOS_AntiCheat_ClientProtectionNotAvailable = 179,
	EOSResult__EOS_AntiCheat_InvalidMode = 180,
	EOSResult__EOS_AntiCheat_ClientProductIdMismatch = 181,
	EOSResult__EOS_AntiCheat_ClientSandboxIdMismatch = 182,
	EOSResult__EOS_AntiCheat_ProtectMessageSessionKeyRequired = 183,
	EOSResult__EOS_AntiCheat_ProtectMessageValidationFailed = 184,
	EOSResult__EOS_AntiCheat_ProtectMessageInitializationFailed = 185,
	EOSResult__EOS_AntiCheat_PeerAlreadyRegistered = 186,
	EOSResult__EOS_AntiCheat_PeerNotFound = 187,
	EOSResult__EOS_AntiCheat_PeerNotProtected = 188,
	EOSResult__EOS_RTC_TooManyParticipants = 189,
	EOSResult__EOS_RTC_RoomAlreadyExists = 190,
	EOSResult__EOS_RTC_UserKicked  = 191,
	EOSResult__EOS_RTC_UserBanned  = 192,
	EOSResult__EOS_RTC_RoomWasLeft = 193,
	EOSResult__EOS_RTC_ReconnectionTimegateExpired = 194,
	EOSResult__EOS_ProgressionSnapshot_SnapshotIdUnavailable = 195,
	EOSResult__EOS_KWS_ParentEmailMissing = 196,
	EOSResult__EOS_KWS_UserGraduated = 197,
	EOSResult__EOS_Android_JavaVMNotStored = 198,
	EOSResult__EOS_UnexpectedError = 199,
	EOSResult__MAX                 = 200,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientActionReason
enum class EOSCore_EEOSEAntiCheatCommonClientActionReason : uint8_t
{
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_Invalid = 0,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_InternalError = 1,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_InvalidMessage = 2,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_AuthenticationFailed = 3,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_NullClient = 4,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_HeartbeatTimeout = 5,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_ClientViolation = 6,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_BackendViolation = 7,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_TemporaryCooldown = 8,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_TemporaryBanned = 9,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_PermanentBanned = 10,
	EEOSEAntiCheatCommonClientActionReason__EOS_ACCCAR_MAX = 11,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientAction
enum class EOSCore_EEOSEAntiCheatCommonClientAction : uint8_t
{
	EEOSEAntiCheatCommonClientAction__EOS_ACCCA_Invalid = 0,
	EEOSEAntiCheatCommonClientAction__EOS_ACCCA_RemovePlayer = 1,
	EEOSEAntiCheatCommonClientAction__EOS_ACCCA_MAX = 2,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientAuthStatus
enum class EOSCore_EEOSEAntiCheatCommonClientAuthStatus : uint8_t
{
	EEOSEAntiCheatCommonClientAuthStatus__EOS_ACCCAS_Invalid = 0,
	EEOSEAntiCheatCommonClientAuthStatus__EOS_ACCCAS_LocalAuthComplete = 1,
	EEOSEAntiCheatCommonClientAuthStatus__EOS_ACCCAS_RemoteAuthComplete = 2,
	EEOSEAntiCheatCommonClientAuthStatus__EOS_ACCCAS_MAX = 3,

};

// Enum EOSCore.EEOSELoginStatus
enum class EOSCore_EEOSELoginStatus : uint8_t
{
	EEOSELoginStatus__EOS_LS_NotLoggedIn = 0,
	EEOSELoginStatus__EOS_LS_UsingLocalProfile = 1,
	EEOSELoginStatus__EOS_LS_LoggedIn = 2,
	EEOSELoginStatus__EOS_LS_MAX   = 3,

};

// Enum EOSCore.EEOSEExternalAccountType
enum class EOSCore_EEOSEExternalAccountType : uint8_t
{
	EEOSEExternalAccountType__EOS_EAT_EPIC = 0,
	EEOSEExternalAccountType__EOS_EAT_STEAM = 1,
	EEOSEExternalAccountType__EOS_EAT_PSN = 2,
	EEOSEExternalAccountType__EOS_EAT_XBL = 3,
	EEOSEExternalAccountType__EOS_EAT_DISCORD = 4,
	EEOSEExternalAccountType__EOS_EAT_GOG = 5,
	EEOSEExternalAccountType__EOS_EAT_NINTENDO = 6,
	EEOSEExternalAccountType__EOS_EAT_UPLAY = 7,
	EEOSEExternalAccountType__EOS_EAT_OPENID = 8,
	EEOSEExternalAccountType__EOS_EAT_APPLE = 9,
	EEOSEExternalAccountType__EOS_EAT_GOOGLE = 10,
	EEOSEExternalAccountType__EOS_EAT_OCULUS = 11,
	EEOSEExternalAccountType__EOS_EAT_ITCHIO = 12,
	EEOSEExternalAccountType__EOS_EAT_AMAZON = 13,
	EEOSEExternalAccountType__EOS_EAT_MAX = 14,

};

// Enum EOSCore.EOSELoginStatus
enum class EOSCore_EOSELoginStatus : uint8_t
{
	EOSELoginStatus__EOS_LS_NotLoggedIn = 0,
	EOSELoginStatus__EOS_LS_UsingLocalProfile = 1,
	EOSELoginStatus__EOS_LS_LoggedIn = 2,
	EOSELoginStatus__EOS_LS_MAX    = 3,

};

// Enum EOSCore.EEOSEConnectionClosedReason
enum class EOSCore_EEOSEConnectionClosedReason : uint8_t
{
	EEOSEConnectionClosedReason__EOS_CCR_Unknown = 0,
	EEOSEConnectionClosedReason__EOS_CCR_ClosedByLocalUser = 1,
	EEOSEConnectionClosedReason__EOS_CCR_ClosedByPeer = 2,
	EEOSEConnectionClosedReason__EOS_CCR_TimedOut = 3,
	EEOSEConnectionClosedReason__EOS_CCR_TooManyConnections = 4,
	EEOSEConnectionClosedReason__EOS_CCR_InvalidMessage = 5,
	EEOSEConnectionClosedReason__EOS_CCR_InvalidData = 6,
	EEOSEConnectionClosedReason__EOS_CCR_ConnectionFailed = 7,
	EEOSEConnectionClosedReason__EOS_CCR_ConnectionClosed = 8,
	EEOSEConnectionClosedReason__EOS_CCR_NegotiationFailed = 9,
	EEOSEConnectionClosedReason__EOS_CCR_UnexpectedError = 10,
	EEOSEConnectionClosedReason__EOS_CCR_MAX = 11,

};

// Enum EOSCore.EEOSENATType
enum class EOSCore_EEOSENATType : uint8_t
{
	EEOSENATType__EOS_NAT_Unknown  = 0,
	EEOSENATType__EOS_NAT_Open     = 1,
	EEOSENATType__EOS_NAT_Moderate = 2,
	EEOSENATType__EOS_NAT_Strict   = 3,
	EEOSENATType__EOS_NAT_MAX      = 4,

};

// Enum EOSCore.EEOSELobbyMemberStatus
enum class EOSCore_EEOSELobbyMemberStatus : uint8_t
{
	EEOSELobbyMemberStatus__EOS_LMS_JOINED = 0,
	EEOSELobbyMemberStatus__EOS_LMS_LEFT = 1,
	EEOSELobbyMemberStatus__EOS_LMS_DISCONNECTED = 2,
	EEOSELobbyMemberStatus__EOS_LMS_KICKED = 3,
	EEOSELobbyMemberStatus__EOS_LMS_PROMOTED = 4,
	EEOSELobbyMemberStatus__EOS_LMS_CLOSED = 5,
	EEOSELobbyMemberStatus__EOS_LMS_MAX = 6,

};

// Enum EOSCore.EEOSEOwnershipStatus
enum class EOSCore_EEOSEOwnershipStatus : uint8_t
{
	EEOSEOwnershipStatus__EOS_OS_NotOwned = 0,
	EEOSEOwnershipStatus__EOS_OS_Owned = 1,
	EEOSEOwnershipStatus__EOS_OS_MAX = 2,

};

// Enum EOSCore.EEOSLogLevel
enum class EOSCore_EEOSLogLevel : uint8_t
{
	EEOSLogLevel__Off              = 0,
	EEOSLogLevel__Fatal            = 1,
	EEOSLogLevel__Error            = 2,
	EEOSLogLevel__Warning          = 3,
	EEOSLogLevel__Info             = 4,
	EEOSLogLevel__Verbose          = 5,
	EEOSLogLevel__VeryVerbose      = 6,
	EEOSLogLevel__EEOSLogLevel_MAX = 7,

};

// Enum EOSCore.EEOSERTCParticipantStatus
enum class EOSCore_EEOSERTCParticipantStatus : uint8_t
{
	EEOSERTCParticipantStatus__EOS_RTCPS_Joined = 0,
	EEOSERTCParticipantStatus__EOS_RTCPS_Left = 1,
	EEOSERTCParticipantStatus__EOS_RTCPS_MAX = 2,

};

// Enum EOSCore.EEOSERTCAudioStatus
enum class EOSCore_EEOSERTCAudioStatus : uint8_t
{
	EEOSERTCAudioStatus__EOS_RTCAS_Unsupported = 0,
	EEOSERTCAudioStatus__EOS_RTCAS_Enabled = 1,
	EEOSERTCAudioStatus__EOS_RTCAS_Disabled = 2,
	EEOSERTCAudioStatus__EOS_RTCAS_AdminDisabled = 3,
	EEOSERTCAudioStatus__EOS_RTCAS_NotListeningDisabled = 4,
	EEOSERTCAudioStatus__EOS_RTCAS_MAX = 5,

};

// Enum EOSCore.EEOSERTCAudioInputStatus
enum class EOSCore_EEOSERTCAudioInputStatus : uint8_t
{
	EEOSERTCAudioInputStatus__EOS_RTCAIS_Idle = 0,
	EEOSERTCAudioInputStatus__EOS_RTCAIS_Recording = 1,
	EEOSERTCAudioInputStatus__EOS_RTCAIS_RecordingSilent = 2,
	EEOSERTCAudioInputStatus__EOS_RTCAIS_RecordingDisconnected = 3,
	EEOSERTCAudioInputStatus__EOS_RTCAIS_Failed = 4,
	EEOSERTCAudioInputStatus__EOS_RTCAIS_MAX = 5,

};

// Enum EOSCore.EEOSERTCAudioOutputStatus
enum class EOSCore_EEOSERTCAudioOutputStatus : uint8_t
{
	EEOSERTCAudioOutputStatus__EOS_RTCAOS_Idle = 0,
	EEOSERTCAudioOutputStatus__EOS_RTCAOS_Playing = 1,
	EEOSERTCAudioOutputStatus__EOS_RTCAOS_Failed = 2,
	EEOSERTCAudioOutputStatus__EOS_RTCAOS_MAX = 3,

};

// Enum EOSCore.EEOSEAntiCheatClientViolationType
enum class EOSCore_EEOSEAntiCheatClientViolationType : uint8_t
{
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_Invalid = 0,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_IntegrityCatalogNotFound = 1,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_IntegrityCatalogError = 2,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_IntegrityCatalogCertificateRevoked = 3,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_IntegrityCatalogMissingMainExecutable = 4,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_GameFileMismatch = 5,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_RequiredGameFileNotFound = 6,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_UnknownGameFileForbidden = 7,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_SystemFileUntrusted = 8,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_ForbiddenModuleLoaded = 9,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_CorruptedMemory = 10,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_ForbiddenToolDetected = 11,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_InternalAntiCheatViolation = 12,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_CorruptedNetworkMessageFlow = 13,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_VirtualMachineNotAllowed = 14,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_ForbiddenSystemConfiguration = 15,
	EEOSEAntiCheatClientViolationType__EOS_ACCVT_MAX = 16,

};

// Enum EOSCore.EEOSEAntiCheatClientMode
enum class EOSCore_EEOSEAntiCheatClientMode : uint8_t
{
	EEOSEAntiCheatClientMode__EOS_ACCM_Invalid = 0,
	EEOSEAntiCheatClientMode__EOS_ACCM_ClientServer = 1,
	EEOSEAntiCheatClientMode__EOS_ACCM_PeerToPeer = 2,
	EEOSEAntiCheatClientMode__EOS_ACCM_MAX = 3,

};

// Enum EOSCore.EOSEAuthScopeFlags
enum class EOSCore_EOSEAuthScopeFlags : uint8_t
{
	EOSEAuthScopeFlags__EOS_AS_NoFlags = 0,
	EOSEAuthScopeFlags__EOS_AS_BasicProfile = 1,
	EOSEAuthScopeFlags__EOS_AS_FriendsList = 2,
	EOSEAuthScopeFlags__EOS_AS_Presence = 3,
	EOSEAuthScopeFlags__EOS_AS_FriendsManagement = 4,
	EOSEAuthScopeFlags__EOS_AS_Email = 5,
	EOSEAuthScopeFlags__EOS_AS_MAX = 6,

};

// Enum EOSCore.EOSEAuthTokenType
enum class EOSCore_EOSEAuthTokenType : uint8_t
{
	EOSEAuthTokenType__EOS_ATT_Client = 0,
	EOSEAuthTokenType__EOS_ATT_User = 1,
	EOSEAuthTokenType__EOS_ATT_MAX = 2,

};

// Enum EOSCore.EEOSLoginCredentialType
enum class EOSCore_EEOSLoginCredentialType : uint8_t
{
	EEOSLoginCredentialType__EOS_LCT_Password = 0,
	EEOSLoginCredentialType__EOS_LCT_ExchangeCode = 1,
	EEOSLoginCredentialType__EOS_LCT_PersistentAuth = 2,
	EEOSLoginCredentialType__EOS_LCT_DeviceCode = 3,
	EEOSLoginCredentialType__EOS_LCT_Developer = 4,
	EEOSLoginCredentialType__EOS_LCT_RefreshToken = 5,
	EEOSLoginCredentialType__EOS_LCT_AccountPortal = 6,
	EEOSLoginCredentialType__EOS_LCT_ExternalAuth = 7,
	EEOSLoginCredentialType__EOS_LCT_MAX = 8,

};

// Enum EOSCore.EEOSELinkAccountFlags
enum class EOSCore_EEOSELinkAccountFlags : uint8_t
{
	EEOSELinkAccountFlags__EOS_LA_NoFlags = 0,
	EEOSELinkAccountFlags__EOS_LA_NintendoNsaId = 1,
	EEOSELinkAccountFlags__EOS_LA_MAX = 2,

};

// Enum EOSCore.EEOSEExternalCredentialType
enum class EOSCore_EEOSEExternalCredentialType : uint8_t
{
	EEOSEExternalCredentialType__EOS_ECT_EPIC = 0,
	EEOSEExternalCredentialType__EOS_ECT_STEAM_APP_TICKET = 1,
	EEOSEExternalCredentialType__EOS_ECT_PSN_ID_TOKEN = 2,
	EEOSEExternalCredentialType__EOS_ECT_XBL_XSTS_TOKEN = 3,
	EEOSEExternalCredentialType__EOS_ECT_DISCORD_ACCESS_TOKEN = 4,
	EEOSEExternalCredentialType__EOS_ECT_GOG_SESSION_TICKET = 5,
	EEOSEExternalCredentialType__EOS_ECT_NINTENDO_ID_TOKEN = 6,
	EEOSEExternalCredentialType__EOS_ECT_NINTENDO_NSA_ID_TOKEN = 7,
	EEOSEExternalCredentialType__EOS_ECT_UPLAY_ACCESS_TOKEN = 8,
	EEOSEExternalCredentialType__EOS_ECT_OPENID_ACCESS_TOKEN = 9,
	EEOSEExternalCredentialType__EOS_ECT_DEVICEID_ACCESS_TOKEN = 10,
	EEOSEExternalCredentialType__EOS_ECT_APPLE_ID_TOKEN = 11,
	EEOSEExternalCredentialType__EOS_ECT_GOOGLE_ID_TOKEN = 12,
	EEOSEExternalCredentialType__EOS_ECT_OCULUS_USERID_NONCE = 13,
	EEOSEExternalCredentialType__EOS_ECT_ITCHIO_JWT = 14,
	EEOSEExternalCredentialType__EOS_ECT_ITCHIO_KEY = 15,
	EEOSEExternalCredentialType__EOS_ECT_EPIC_ID_TOKEN = 16,
	EEOSEExternalCredentialType__EOS_ECT_AMAZON_ACCESS_TOKEN = 17,
	EEOSEExternalCredentialType__EOS_ECT_MAX = 18,

};

// Enum EOSCore.EEOSEAntiCheatCommonPlayerTakeDamageResult
enum class EOSCore_EEOSEAntiCheatCommonPlayerTakeDamageResult : uint8_t
{
	EEOSEAntiCheatCommonPlayerTakeDamageResult__EOS_ACCPTDR_None = 0,
	EEOSEAntiCheatCommonPlayerTakeDamageResult__EOS_ACCPTDR_Downed = 1,
	EEOSEAntiCheatCommonPlayerTakeDamageResult__EOS_ACCPTDR_Eliminated = 2,
	EEOSEAntiCheatCommonPlayerTakeDamageResult__EOS_ACCPTDR_MAX = 3,

};

// Enum EOSCore.EEOSEAntiCheatCommonPlayerTakeDamageType
enum class EOSCore_EEOSEAntiCheatCommonPlayerTakeDamageType : uint8_t
{
	EEOSEAntiCheatCommonPlayerTakeDamageType__EOS_ACCPTDT_None = 0,
	EEOSEAntiCheatCommonPlayerTakeDamageType__EOS_ACCPTDT_PointDamage = 1,
	EEOSEAntiCheatCommonPlayerTakeDamageType__EOS_ACCPTDT_RadialDamage = 2,
	EEOSEAntiCheatCommonPlayerTakeDamageType__EOS_ACCPTDT_DamageOverTime = 3,
	EEOSEAntiCheatCommonPlayerTakeDamageType__EOS_ACCPTDT_MAX = 4,

};

// Enum EOSCore.EEOSEAntiCheatCommonPlayerTakeDamageSource
enum class EOSCore_EEOSEAntiCheatCommonPlayerTakeDamageSource : uint8_t
{
	EEOSEAntiCheatCommonPlayerTakeDamageSource__EOS_ACCPTDS_None = 0,
	EEOSEAntiCheatCommonPlayerTakeDamageSource__EOS_ACCPTDS_Player = 1,
	EEOSEAntiCheatCommonPlayerTakeDamageSource__EOS_ACCPTDS_NonPlayerCharacter = 2,
	EEOSEAntiCheatCommonPlayerTakeDamageSource__EOS_ACCPTDS_World = 3,
	EEOSEAntiCheatCommonPlayerTakeDamageSource__EOS_ACCPTDS_MAX = 4,

};

// Enum EOSCore.EEOSEAntiCheatCommonPlayerMovementState
enum class EOSCore_EEOSEAntiCheatCommonPlayerMovementState : uint8_t
{
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_None = 0,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_Crouching = 1,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_Prone = 2,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_Mounted = 3,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_Swimming = 4,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_Falling = 5,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_Flying = 6,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_OnLadder = 7,
	EEOSEAntiCheatCommonPlayerMovementState__EOS_ACCPMS_MAX = 8,

};

// Enum EOSCore.EEOSEAntiCheatCommonEventParamType
enum class EOSCore_EEOSEAntiCheatCommonEventParamType : uint8_t
{
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_Invalid = 0,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_ClientHandle = 1,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_String = 2,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_UInt32 = 3,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_Int32 = 4,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_UInt64 = 5,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_Int64 = 6,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_Vector3f = 7,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_Quat = 8,
	EEOSEAntiCheatCommonEventParamType__EOS_ACCEPT_MAX = 9,

};

// Enum EOSCore.EEOSEAntiCheatCommonEventType
enum class EOSCore_EEOSEAntiCheatCommonEventType : uint8_t
{
	EEOSEAntiCheatCommonEventType__EOS_ACCET_Invalid = 0,
	EEOSEAntiCheatCommonEventType__EOS_ACCET_GameEvent = 1,
	EEOSEAntiCheatCommonEventType__EOS_ACCET_PlayerEvent = 2,
	EEOSEAntiCheatCommonEventType__EOS_ACCET_MAX = 3,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientInput
enum class EOSCore_EEOSEAntiCheatCommonClientInput : uint8_t
{
	EEOSEAntiCheatCommonClientInput__EOS_ACCCI_Unknown = 0,
	EEOSEAntiCheatCommonClientInput__EOS_ACCCI_MouseKeyboard = 1,
	EEOSEAntiCheatCommonClientInput__EOS_ACCCI_Gamepad = 2,
	EEOSEAntiCheatCommonClientInput__EOS_ACCCI_TouchInput = 3,
	EEOSEAntiCheatCommonClientInput__EOS_ACCCI_MAX = 4,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientFlags
enum class EOSCore_EEOSEAntiCheatCommonClientFlags : uint8_t
{
	EEOSEAntiCheatCommonClientFlags__EOS_ACCCF_None = 0,
	EEOSEAntiCheatCommonClientFlags__EOS_ACCCF_Admin = 1,
	EEOSEAntiCheatCommonClientFlags__EOS_ACCCF_MAX = 2,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientPlatform
enum class EOSCore_EEOSEAntiCheatCommonClientPlatform : uint8_t
{
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Unknown = 0,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Windows = 1,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Mac = 2,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Linux = 3,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Xbox = 4,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_PlayStation = 5,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Nintendo = 6,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_iOS = 7,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_Android = 8,
	EEOSEAntiCheatCommonClientPlatform__EOS_ACCCP_MAX = 9,

};

// Enum EOSCore.EEOSEAntiCheatCommonClientType
enum class EOSCore_EEOSEAntiCheatCommonClientType : uint8_t
{
	EEOSEAntiCheatCommonClientType__EOS_ACCCT_ProtectedClient = 0,
	EEOSEAntiCheatCommonClientType__EOS_ACCCT_UnprotectedClient = 1,
	EEOSEAntiCheatCommonClientType__EOS_ACCCT_AIBot = 2,
	EEOSEAntiCheatCommonClientType__EOS_ACCCT_MAX = 3,

};

// Enum EOSCore.EEOSEEcomItemType
enum class EOSCore_EEOSEEcomItemType : uint8_t
{
	EEOSEEcomItemType__EOS_EIT_Durable = 0,
	EEOSEEcomItemType__EOS_EIT_Consumable = 1,
	EEOSEEcomItemType__EOS_EIT_Other = 2,
	EEOSEEcomItemType__EOS_EIT_MAX = 3,

};

// Enum EOSCore.EEOSELeaderboardAggregation
enum class EOSCore_EEOSELeaderboardAggregation : uint8_t
{
	EEOSELeaderboardAggregation__EOS_LA_Min = 0,
	EEOSELeaderboardAggregation__EOS_LA_Max = 1,
	EEOSELeaderboardAggregation__EOS_LA_Sum = 2,
	EEOSELeaderboardAggregation__EOS_LA_Latest = 3,

};

// Enum EOSCore.EEOSELobbyAttributeVisibility
enum class EOSCore_EEOSELobbyAttributeVisibility : uint8_t
{
	EEOSELobbyAttributeVisibility__EOS_LAT_PUBLIC = 0,
	EEOSELobbyAttributeVisibility__EOS_LAT_PRIVATE = 1,
	EEOSELobbyAttributeVisibility__EOS_LAT_MAX = 2,

};

// Enum EOSCore.EEOSELobbyPermissionLevel
enum class EOSCore_EEOSELobbyPermissionLevel : uint8_t
{
	EEOSELobbyPermissionLevel__EOS_LPL_PUBLICADVERTISED = 0,
	EEOSELobbyPermissionLevel__EOS_LPL_JOINVIAPRESENCE = 1,
	EEOSELobbyPermissionLevel__EOS_LPL_INVITEONLY = 2,
	EEOSELobbyPermissionLevel__EOS_LPL_MAX = 3,

};

// Enum EOSCore.EEOSEMetricsAccountIdType
enum class EOSCore_EEOSEMetricsAccountIdType : uint8_t
{
	EEOSEMetricsAccountIdType__EOS_MAIT_Epic = 0,
	EEOSEMetricsAccountIdType__EOS_MAIT_External = 1,
	EEOSEMetricsAccountIdType__EOS_MAIT_MAX = 2,

};

// Enum EOSCore.EEOSEUserControllerType
enum class EOSCore_EEOSEUserControllerType : uint8_t
{
	EEOSEUserControllerType__EOS_UCT_Unknown = 0,
	EEOSEUserControllerType__EOS_UCT_MouseKeyboard = 1,
	EEOSEUserControllerType__EOS_UCT_GamepadControl = 2,
	EEOSEUserControllerType__EOS_UCT_TouchControl = 3,
	EEOSEUserControllerType__EOS_UCT_MAX = 4,

};

// Enum EOSCore.EEOSEPacketReliability
enum class EOSCore_EEOSEPacketReliability : uint8_t
{
	EEOSEPacketReliability__EOS_PR_UnreliableUnordered = 0,
	EEOSEPacketReliability__EOS_PR_ReliableUnordered = 1,
	EEOSEPacketReliability__EOS_PR_ReliableOrdered = 2,
	EEOSEPacketReliability__EOS_PR_MAX = 3,

};

// Enum EOSCore.EEOSERelayControl
enum class EOSCore_EEOSERelayControl : uint8_t
{
	EEOSERelayControl__EOS_RC_NoRelays = 0,
	EEOSERelayControl__EOS_RC_AllowRelays = 1,
	EEOSERelayControl__EOS_RC_ForceRelays = 2,
	EEOSERelayControl__EOS_RC_MAX  = 3,

};

// Enum EOSCore.EEOSPlayerDataStorageEWriteResult
enum class EOSCore_EEOSPlayerDataStorageEWriteResult : uint8_t
{
	EEOSPlayerDataStorageEWriteResult__None = 0,
	EEOSPlayerDataStorageEWriteResult__EOS_WR_ContinueWriting = 1,
	EEOSPlayerDataStorageEWriteResult__EOS_WR_CompleteRequest = 2,
	EEOSPlayerDataStorageEWriteResult__EOS_WR_FailRequest = 3,
	EEOSPlayerDataStorageEWriteResult__EOS_WR_CancelRequest = 4,
	EEOSPlayerDataStorageEWriteResult__EEOSPlayerDataStorageEWriteResult_MAX = 5,

};

// Enum EOSCore.EEOSPlayerDataStorag_EReadResult
enum class EOSCore_EEOSPlayerDataStorag_EReadResult : uint8_t
{
	EEOSPlayerDataStorag_EReadResult__None = 0,
	EEOSPlayerDataStorag_EReadResult__EOS_RR_ContinueReading = 1,
	EEOSPlayerDataStorag_EReadResult__EOS_RR_FailRequest = 2,
	EEOSPlayerDataStorag_EReadResult__EOS_RR_CancelRequest = 3,
	EEOSPlayerDataStorag_EReadResult__EEOSPlayerDataStorag_MAX = 4,

};

// Enum EOSCore.EEOSPresenceEStatus
enum class EOSCore_EEOSPresenceEStatus : uint8_t
{
	EEOSPresenceEStatus__EOS_PS_Offline = 0,
	EEOSPresenceEStatus__EOS_PS_Online = 1,
	EEOSPresenceEStatus__EOS_PS_Away = 2,
	EEOSPresenceEStatus__EOS_PS_ExtendedAway = 3,
	EEOSPresenceEStatus__EOS_PS_DoNotDisturb = 4,
	EEOSPresenceEStatus__EOS_PS_MAX = 5,

};

// Enum EOSCore.EEOSEPlayerReportsCategory
enum class EOSCore_EEOSEPlayerReportsCategory : uint8_t
{
	EEOSEPlayerReportsCategory__EOS_PRC_Invalid = 0,
	EEOSEPlayerReportsCategory__EOS_PRC_Cheating = 1,
	EEOSEPlayerReportsCategory__EOS_PRC_Exploiting = 2,
	EEOSEPlayerReportsCategory__EOS_PRC_OffensiveProfile = 3,
	EEOSEPlayerReportsCategory__EOS_PRC_VerbalAbuse = 4,
	EEOSEPlayerReportsCategory__EOS_PRC_Scamming = 5,
	EEOSEPlayerReportsCategory__EOS_PRC_Spamming = 6,
	EEOSEPlayerReportsCategory__EOS_PRC_Other = 7,
	EEOSEPlayerReportsCategory__EOS_PRC_MAX = 8,

};

// Enum EOSCore.EEOSEOnlineSessionPermissionLevel
enum class EOSCore_EEOSEOnlineSessionPermissionLevel : uint8_t
{
	EEOSEOnlineSessionPermissionLevel__EOS_OSPF_PublicAdvertised = 0,
	EEOSEOnlineSessionPermissionLevel__EOS_OSPF_JoinViaPresence = 1,
	EEOSEOnlineSessionPermissionLevel__EOS_OSPF_InviteOnly = 2,
	EEOSEOnlineSessionPermissionLevel__EOS_OSPF_MAX = 3,

};

// Enum EOSCore.EEOSESessionAttributeAdvertisementType
enum class EOSCore_EEOSESessionAttributeAdvertisementType : uint8_t
{
	EEOSESessionAttributeAdvertisementType__EOS_SAAT_DontAdvertise = 0,
	EEOSESessionAttributeAdvertisementType__EOS_SAAT_Advertise = 1,
	EEOSESessionAttributeAdvertisementType__EOS_SAAT_MAX = 2,

};

// Enum EOSCore.EEOSEOnlineSessionState
enum class EOSCore_EEOSEOnlineSessionState : uint8_t
{
	EEOSEOnlineSessionState__EOS_OSS_NoSession = 0,
	EEOSEOnlineSessionState__EOS_OSS_Creating = 1,
	EEOSEOnlineSessionState__EOS_OSS_Pending = 2,
	EEOSEOnlineSessionState__EOS_OSS_Starting = 3,
	EEOSEOnlineSessionState__EOS_OSS_InProgress = 4,
	EEOSEOnlineSessionState__EOS_OSS_Ending = 5,
	EEOSEOnlineSessionState__EOS_OSS_Ended = 6,
	EEOSEOnlineSessionState__EOS_OSS_Destroying = 7,
	EEOSEOnlineSessionState__EOS_OSS_MAX = 8,

};

// Enum EOSCore.EEOSTitleStorageEReadResult
enum class EOSCore_EEOSTitleStorageEReadResult : uint8_t
{
	EEOSTitleStorageEReadResult__NONE = 0,
	EEOSTitleStorageEReadResult__EOS_TS_RR_ContinueReading = 1,
	EEOSTitleStorageEReadResult__EOS_TS_RR_FailRequest = 2,
	EEOSTitleStorageEReadResult__EOS_TS_RR_CancelRequest = 3,
	EEOSTitleStorageEReadResult__EEOSTitleStorageEReadResult_MAX = 4,

};

// Enum EOSCore.ESuccessFail
enum class EOSCore_ESuccessFail : uint8_t
{
	ESuccessFail__Success          = 0,
	ESuccessFail__Fail             = 1,
	ESuccessFail__ESuccessFail_MAX = 2,

};

// Enum EOSCore.EEOSEComparisonOp
enum class EOSCore_EEOSEComparisonOp : uint8_t
{
	EEOSEComparisonOp__EOS_CO_EQUAL = 0,
	EEOSEComparisonOp__EOS_CO_NOTEQUAL = 1,
	EEOSEComparisonOp__EOS_CO_GREATERTHAN = 2,
	EEOSEComparisonOp__EOS_CO_GREATERTHANOREQUAL = 3,
	EEOSEComparisonOp__EOS_CO_LESSTHAN = 4,
	EEOSEComparisonOp__EOS_CO_LESSTHANOREQUAL = 5,
	EEOSEComparisonOp__EOS_CO_DISTANCE = 6,
	EEOSEComparisonOp__EOS_CO_ANYOF = 7,
	EEOSEComparisonOp__EOS_CO_NOTANYOF = 8,
	EEOSEComparisonOp__EOS_CO_MAX  = 9,

};

// Enum EOSCore.EEOSEAttributeType
enum class EOSCore_EEOSEAttributeType : uint8_t
{
	EEOSEAttributeType__EOS_AT_BOOLEAN = 0,
	EEOSEAttributeType__EOS_AT_INT64 = 1,
	EEOSEAttributeType__EOS_AT_DOUBLE = 2,
	EEOSEAttributeType__EOS_AT_STRING = 3,
	EEOSEAttributeType__EOS_AT_MAX = 4,

};

// Enum EOSCore.EEOSChannelType
enum class EOSCore_EEOSChannelType : uint8_t
{
	EEOSChannelType__DEFAULT       = 0,
	EEOSChannelType__DATA_REQUEST  = 1,
	EEOSChannelType__DATA_HANDSHAKE = 2,
	EEOSChannelType__DATA_SUBSYSTEM = 3,
	EEOSChannelType__DATA_CHAT     = 4,
	EEOSChannelType__EEOSChannelType_MAX = 5,

};

// Enum EOSCore.EEOSUIENotificationLocation
enum class EOSCore_EEOSUIENotificationLocation : uint8_t
{
	EEOSUIENotificationLocation__EOS_UNL_TopLeft = 0,
	EEOSUIENotificationLocation__EOS_UNL_TopRight = 1,
	EEOSUIENotificationLocation__EOS_UNL_BottomLeft = 2,
	EEOSUIENotificationLocation__EOS_UNL_BottomRight = 3,
	EEOSUIENotificationLocation__EOS_UNL_MAX = 4,

};

// Enum EOSCore.EEOSEFriendsStatus
enum class EOSCore_EEOSEFriendsStatus : uint8_t
{
	EEOSEFriendsStatus__EOS_FS_NotFriends = 0,
	EEOSEFriendsStatus__EOS_FS_InviteSent = 1,
	EEOSEFriendsStatus__EOS_FS_InviteReceived = 2,
	EEOSEFriendsStatus__EOS_FS_Friends = 3,
	EEOSEFriendsStatus__EOS_FS_MAX = 4,

};

// Enum EOSCore.EEOSEModEnumerationType
enum class EOSCore_EEOSEModEnumerationType : uint8_t
{
	EEOSEModEnumerationType__EOS_MET_INSTALLED = 0,
	EEOSEModEnumerationType__EOS_MET_ALL_AVAILABLE = 1,
	EEOSEModEnumerationType__EOS_MET_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EOSCore.EOSAchievementsOnQueryDefinitionsCompleteCallbackInfo
// 0x0010
struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6RBA[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSProductUserId
// 0x0021
struct FEOSProductUserId
{
	unsigned char                                      UnknownData_IC33[0x21];                                    // 0x0000(0x0021) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo
// 0x0038
struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOIL[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_533H[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsOnUnlockAchievementsCompleteCallbackInfo
// 0x0038
struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKWU[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSUD[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AchievementsCount;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSNotificationId
// 0x0008
struct FEOSNotificationId
{
	unsigned char                                      UnknownData_QSWJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsOnAchievementsUnlockedCallbackV2Info
// 0x0058
struct FEOSAchievementsOnAchievementsUnlockedCallbackV2Info
{
	unsigned char                                      UnknownData_4TFW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTA7[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AchievementId;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockTime;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientOnMessageToServerCallbackInfo
// 0x0020
struct FEOSAntiCheatClientOnMessageToServerCallbackInfo
{
	unsigned char                                      UnknownData_EK8W[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00QN[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonClientHandle
// 0x0008
struct FEOSAntiCheatCommonClientHandle
{
	unsigned char                                      UnknownData_UDE3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonOnMessageToClientCallbackInfo
// 0x0028
struct FEOSAntiCheatCommonOnMessageToClientCallbackInfo
{
	unsigned char                                      UnknownData_VOV7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     MessageData;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Z17[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonOnClientActionRequiredCallbackInfo
// 0x0028
struct FEOSAntiCheatCommonOnClientActionRequiredCallbackInfo
{
	unsigned char                                      UnknownData_CTGL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientAction           ClientAction;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientActionReason     ActionReasonCode;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P598[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActionReasonDetailsString;                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonOnClientAuthStatusChangedCallbackInfo
// 0x0018
struct FEOSAntiCheatCommonOnClientAuthStatusChangedCallbackInfo
{
	unsigned char                                      UnknownData_K08A[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientAuthStatus       ClientAuthStatus;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_35IC[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.ContinuanceToken
// 0x0008
struct FContinuanceToken
{
	unsigned char                                      UnknownData_CSHJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectLoginCallbackInfo
// 0x0040
struct FEOSConnectLoginCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KE5L[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75EM[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FContinuanceToken                           ContinuanceToken;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectCreateUserCallbackInfo
// 0x0038
struct FEOSConnectCreateUserCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3R4Q[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4W9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectLinkAccountCallbackInfo
// 0x0038
struct FEOSConnectLinkAccountCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVBC[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L2WS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectUnlinkAccountCallbackInfo
// 0x0038
struct FEOSConnectUnlinkAccountCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U167[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3HT[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectCreateDeviceIdCallbackInfo
// 0x0010
struct FEOSConnectCreateDeviceIdCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6BK[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectDeleteDeviceIdCallbackInfo
// 0x0010
struct FEOSConnectDeleteDeviceIdCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AYBO[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectTransferDeviceIdAccountCallbackInfo
// 0x0038
struct FEOSConnectTransferDeviceIdAccountCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVG5[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VIR8[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectQueryExternalAccountMappingsCallbackInfo
// 0x0038
struct FEOSConnectQueryExternalAccountMappingsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9GIA[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKEM[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectQueryProductUserIdMappingsCallbackInfo
// 0x0038
struct FEOSConnectQueryProductUserIdMappingsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXR0[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V16L[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectLoginStatusChangedCallbackInfo
// 0x0030
struct FEOSConnectLoginStatusChangedCallbackInfo
{
	unsigned char                                      UnknownData_K8Y5[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELoginStatus                           PreviousStatus;                                            // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELoginStatus                           CurrentStatus;                                             // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZCH[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectAuthExpirationCallbackInfo
// 0x0030
struct FEOSConnectAuthExpirationCallbackInfo
{
	unsigned char                                      UnknownData_8T2W[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75PO[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectOnVerifyIdTokenCallback
// 0x0068
struct FEOSConnectOnVerifyIdTokenCallback
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NWYQ[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           ProductUserId;                                             // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAccountInfoPresent;                                     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountIdType;                                             // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FKY3[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceType;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEpicAccountId
// 0x0021
struct FEOSEpicAccountId
{
	unsigned char                                      UnknownData_GGH2[0x21];                                    // 0x0000(0x0021) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthPinGrantInfo
// 0x0040
struct FEOSAuthPinGrantInfo
{
	unsigned char                                      UnknownData_GRLD[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserCode;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VerificationURI;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpiresIn;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2AA[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VerificationURIComplete;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthAccountFeatureRestrictedInfo
// 0x0018
struct FEOSAuthAccountFeatureRestrictedInfo
{
	unsigned char                                      UnknownData_PYDE[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VerificationURI;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthLoginCallbackInfo
// 0x0090
struct FEOSAuthLoginCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5753[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6GR2[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAuthPinGrantInfo                        PinGrantInfo;                                              // 0x0038(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEOSAuthAccountFeatureRestrictedInfo        AccountFeatureRestrictedInfo;                              // 0x0078(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthLogoutCallbackInfo
// 0x0038
struct FEOSAuthLogoutCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6VA[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EY9J[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthLinkAccountCallbackInfo
// 0x00A0
struct FEOSAuthLinkAccountCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WR8A[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QE6N[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAuthPinGrantInfo                        PinGrantInfo;                                              // 0x0038(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           SelectedAccountId;                                         // 0x0078(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H50R[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthVerifyUserAuthCallbackInfo
// 0x0010
struct FEOSAuthVerifyUserAuthCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OHHM[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthDeletePersistentAuthCallbackInfo
// 0x0010
struct FEOSAuthDeletePersistentAuthCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6GEH[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthLoginStatusChangedCallbackInfo
// 0x0038
struct FEOSAuthLoginStatusChangedCallbackInfo
{
	unsigned char                                      UnknownData_LVKG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSELoginStatus                            PrevStatus;                                                // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSELoginStatus                            CurrentStatus;                                             // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XS3R[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthQueryIdTokenCallbackInfo
// 0x0058
struct FEOSAuthQueryIdTokenCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84N2[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetAccountId;                                           // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KEV2[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthVerifyIdTokenCallbackInfo
// 0x0010
struct FEOSAuthVerifyIdTokenCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWM6[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PSocketId
// 0x0018
struct FEOSP2PSocketId
{
	unsigned char                                      UnknownData_3M0B[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SocketName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2POnIncomingConnectionRequestInfo
// 0x0068
struct FEOSP2POnIncomingConnectionRequestInfo
{
	unsigned char                                      UnknownData_G29T[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           RemoteUserId;                                              // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94ZZ[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0050(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2POnRemoteConnectionClosedInfo
// 0x0070
struct FEOSP2POnRemoteConnectionClosedInfo
{
	unsigned char                                      UnknownData_532P[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           RemoteUserId;                                              // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5Z7[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0050(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EOSCore_EEOSEConnectionClosedReason                Reason;                                                    // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0JHY[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2POnQueryNATTypeCompleteInfo
// 0x0018
struct FEOSP2POnQueryNATTypeCompleteInfo
{
	unsigned char                                      UnknownData_OSBY[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1CJ2[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSENATType                               NATType;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUCK[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2POnIncomingPacketQueueFullInfo
// 0x0058
struct FEOSP2POnIncomingPacketQueueFullInfo
{
	unsigned char                                      UnknownData_QFJW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PacketQueueMaxSizeBytes;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PacketQueueCurrentSizeBytes;                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           OverflowPacketLocalUserId;                                 // 0x0028(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CEB5[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OverflowPacketChannel;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OverflowPacketSizeBytes;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A5C1[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsSendInviteCallbackInfo
// 0x0010
struct FEOSSessionsSendInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NN9[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsRejectInviteCallbackInfo
// 0x0010
struct FEOSSessionsRejectInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1A5U[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsQueryInvitesCallbackInfo
// 0x0038
struct FEOSSessionsQueryInvitesCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJ0X[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDJS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsUpdateSessionCallbackInfo
// 0x0030
struct FEOSSessionsUpdateSessionCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7WA[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsDestroySessionCallbackInfo
// 0x0010
struct FEOSSessionsDestroySessionCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VC6U[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsJoinSessionCallbackInfo
// 0x0010
struct FEOSSessionsJoinSessionCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W4N5[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsStartSessionCallbackInfo
// 0x0010
struct FEOSSessionsStartSessionCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PMQ[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsEndSessionCallbackInfo
// 0x0010
struct FEOSSessionsEndSessionCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T6A7[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsRegisterPlayersCallbackInfo
// 0x0010
struct FEOSSessionsRegisterPlayersCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6XG[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsUnregisterPlayersCallbackInfo
// 0x0010
struct FEOSSessionsUnregisterPlayersCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BXM9[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchFindCallbackInfo
// 0x0010
struct FEOSSessionSearchFindCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0HVQ[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsSessionInviteReceivedCallbackInfo
// 0x0060
struct FEOSSessionsSessionInviteReceivedCallbackInfo
{
	unsigned char                                      UnknownData_M7UI[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0J88[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsSessionInviteAcceptedCallbackInfo
// 0x0070
struct FEOSSessionsSessionInviteAcceptedCallbackInfo
{
	unsigned char                                      UnknownData_YOFA[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0039(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V5XQ[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUIEventId
// 0x0008
struct FEOSUIEventId
{
	unsigned char                                      UnknownData_XWNZ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsJoinSessionAcceptedCallbackInfo
// 0x0038
struct FEOSSessionsJoinSessionAcceptedCallbackInfo
{
	unsigned char                                      UnknownData_THYJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_523P[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSUIEventId                               UiEventId;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyCreateLobbyCallbackInfo
// 0x0020
struct FEOSLobbyCreateLobbyCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSE4[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDestroyLobbyCallbackInfo
// 0x0020
struct FEOSLobbyDestroyLobbyCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SMHC[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyJoinLobbyCallbackInfo
// 0x0020
struct FEOSLobbyJoinLobbyCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LT1Y[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyLeaveLobbyCallbackInfo
// 0x0020
struct FEOSLobbyLeaveLobbyCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J6CG[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyUpdateLobbyCallbackInfo
// 0x0020
struct FEOSLobbyUpdateLobbyCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GPTU[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyPromoteMemberCallbackInfo
// 0x0020
struct FEOSLobbyPromoteMemberCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LAO[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyKickMemberCallbackInfo
// 0x0020
struct FEOSLobbyKickMemberCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_730R[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyUpdateReceivedCallbackInfo
// 0x0018
struct FEOSLobbyUpdateReceivedCallbackInfo
{
	unsigned char                                      UnknownData_MUP2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyMemberUpdateReceivedCallbackInfo
// 0x0040
struct FEOSLobbyMemberUpdateReceivedCallbackInfo
{
	unsigned char                                      UnknownData_FRCP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJHA[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyMemberStatusReceivedCallbackInfo
// 0x0040
struct FEOSLobbyMemberStatusReceivedCallbackInfo
{
	unsigned char                                      UnknownData_3JVD[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyMemberStatus                     CurrentStatus;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YG4V[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyInviteReceivedCallbackInfo
// 0x0060
struct FEOSLobbyInviteReceivedCallbackInfo
{
	unsigned char                                      UnknownData_QIQK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0039(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJ00[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySendInviteCallbackInfo
// 0x0020
struct FEOSLobbySendInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MX78[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyRejectInviteCallbackInfo
// 0x0020
struct FEOSLobbyRejectInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WRPR[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyQueryInvitesCallbackInfo
// 0x0038
struct FEOSLobbyQueryInvitesCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3MIC[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMW8[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySearchFindCallbackInfo
// 0x0010
struct FEOSLobbySearchFindCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UY0S[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyInviteAcceptedCallbackInfo
// 0x0070
struct FEOSLobbyInviteAcceptedCallbackInfo
{
	unsigned char                                      UnknownData_QK3K[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0039(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_519W[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyJoinLobbyAcceptedCallbackInfo
// 0x0038
struct FEOSLobbyJoinLobbyAcceptedCallbackInfo
{
	unsigned char                                      UnknownData_5PXJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SST[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSUIEventId                               UiEventId;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyRTCRoomConnectionChangedCallbackInfo
// 0x0040
struct FEOSLobbyRTCRoomConnectionChangedCallbackInfo
{
	unsigned char                                      UnknownData_Z39C[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsConnected;                                              // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  DisconnectReason;                                          // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRDN[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomItemOwnership
// 0x0020
struct FEOSEcomItemOwnership
{
	unsigned char                                      UnknownData_CCCO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEOwnershipStatus                       OwnershipStatus;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3UTA[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomQueryOwnershipCallbackInfo
// 0x0050
struct FEOSEcomQueryOwnershipCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D41U[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQ17[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSEcomItemOwnership>               ItemOwnership;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ID4A[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomQueryOwnershipTokenCallbackInfo
// 0x0048
struct FEOSEcomQueryOwnershipTokenCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2LT0[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z00S[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OwnershipToken;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomQueryEntitlementsCallbackInfo
// 0x0038
struct FEOSEcomQueryEntitlementsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5P2Z[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_532S[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomQueryOffersCallbackInfo
// 0x0038
struct FEOSEcomQueryOffersCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q49P[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZQ8[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomCheckoutCallbackInfo
// 0x0048
struct FEOSEcomCheckoutCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DE5K[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IAN[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TransactionId;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomRedeemEntitlementsCallbackInfo
// 0x0038
struct FEOSEcomRedeemEntitlementsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4S0G[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2D5W[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSCustomInvitesOnSendCustomInviteCallbackInfo
// 0x0048
struct FEOSCustomInvitesOnSendCustomInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_USEB[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JF3Z[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSProductUserId>                   TargetUserIds;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotDeleteSnapshotCallbackInfo
// 0x0030
struct FEOSProgressionSnapshotDeleteSnapshotCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0001(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H865[0xE];                                     // 0x0022(0x000E) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSReportsSendPlayerBehaviorReportCompleteCallbackInfo
// 0x0010
struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVO0[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSRTCJoinRoomCallbackInfo
// 0x0048
struct FEOSRTCJoinRoomCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O86U[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTOS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSRTCLeaveRoomCallbackInfo
// 0x0048
struct FEOSRTCLeaveRoomCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0ZE[0x47];                                    // 0x0001(0x0047) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSRTCBlockParticipantCallbackInfo
// 0x0070
struct FEOSRTCBlockParticipantCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NW5R[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_50V4[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0048(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlocked;                                                  // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UROZ[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSRTCDisconnectedCallbackInfo
// 0x0048
struct FEOSRTCDisconnectedCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3DW[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XV49[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSRTCParticipantMetadata
// 0x0020
struct FEOSRTCParticipantMetadata
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSRTCParticipantStatusChangedCallbackInfo
// 0x0078
struct FEOSRTCParticipantStatusChangedCallbackInfo
{
	unsigned char                                      UnknownData_HAMP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_42V6[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0040(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSERTCParticipantStatus                  ParticipantStatus;                                         // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5PV[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSRTCParticipantMetadata>          ParticipantMetadata;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSQueryJoinRoomTokenCompleteCallbackInfo
// 0x0038
struct FEOSQueryJoinRoomTokenCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VB6[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientBaseUrl;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryId;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TokenCount;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSKickCompleteCallbackInfo
// 0x0010
struct FEOSKickCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YAH6[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSetParticipantHardMuteCompleteCallbackInfo
// 0x0010
struct FEOSSetParticipantHardMuteCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJMU[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSJoinRoomCallbackInfo
// 0x0068
struct FEOSJoinRoomCallbackInfo
{
	unsigned char                                      UnknownData_X2GR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CQ4[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0040(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpeaking;                                                 // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSERTCAudioStatus                        AudioStatus;                                               // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2P9[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAudioInputStateCallbackInfo
// 0x0048
struct FEOSAudioInputStateCallbackInfo
{
	unsigned char                                      UnknownData_SBEW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JAIN[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSERTCAudioInputStatus                   Status;                                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQ7C[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSOutputStateCallbackInfo
// 0x0048
struct FEOSOutputStateCallbackInfo
{
	unsigned char                                      UnknownData_7AQF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_95MH[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSERTCAudioOutputStatus                  Status;                                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_17IN[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSRTCAudioAudioBuffer
// 0x0010
struct FEOSRTCAudioAudioBuffer
{
	int                                                SampleRate;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Channels;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D6EP[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSBeforeSendCallbackInfo
// 0x0050
struct FEOSBeforeSendCallbackInfo
{
	unsigned char                                      UnknownData_W6CY[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DALX[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSRTCAudioAudioBuffer                     Buffer;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSBeforeRenderCallbackInfo
// 0x0078
struct FEOSBeforeRenderCallbackInfo
{
	unsigned char                                      UnknownData_VHCD[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BDW[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSRTCAudioAudioBuffer                     Buffer;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0050(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WXRA[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUpdateSendingCallbackInfo
// 0x0050
struct FEOSUpdateSendingCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MP57[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F88Q[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSERTCAudioStatus                        AudioStatus;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVXS[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUpdateReceivingCallbackInfo
// 0x0070
struct FEOSUpdateReceivingCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FEV0[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W0X2[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0048(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAudioEnabled;                                             // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPTW[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAudioDevicesChangedCallbackInfo
// 0x0008
struct FEOSAudioDevicesChangedCallbackInfo
{
	unsigned char                                      UnknownData_83GR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSanctionsQueryActivePlayerSanctionsCallbackInfo
// 0x0058
struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M25U[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBC7[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsIngestStatCompleteCallbackInfo
// 0x0058
struct FEOSStatsIngestStatCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6M9Z[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7CD[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsOnQueryStatsCompleteCallbackInfo
// 0x0058
struct FEOSStatsOnQueryStatsCompleteCallbackInfo
{
	unsigned char                                      UnknownData_DS3L[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4S8B[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T4V5[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageQueryFileCallbackInfo
// 0x0038
struct FEOSTitleStorageQueryFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7T47[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJJH[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageQueryFileListCallbackInfo
// 0x0038
struct FEOSTitleStorageQueryFileListCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNVZ[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R2F2[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FileCount;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageFileTransferProgressCallbackInfo
// 0x0048
struct FEOSTitleStorageFileTransferProgressCallbackInfo
{
	unsigned char                                      UnknownData_6ZV0[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JT93[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesTransferred;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFileSizeBytes;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageReadFileCallbackInfo
// 0x0048
struct FEOSTitleStorageReadFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGXG[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4O0W[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageDeleteCacheCallbackInfo
// 0x0038
struct FEOSTitleStorageDeleteCacheCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S57Q[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AOH4[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIShowFriendsCallbackInfo
// 0x0038
struct FEOSUIShowFriendsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UYVH[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3B9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIHideFriendsCallbackInfo
// 0x0038
struct FEOSUIHideFriendsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5U1[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3CR9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIOnDisplaySettingsUpdatedCallbackInfo
// 0x0010
struct FEOSUIOnDisplaySettingsUpdatedCallbackInfo
{
	unsigned char                                      UnknownData_5JSL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsVisible;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsExclusiveInput;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNLS[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfoQueryUserInfoCallbackInfo
// 0x0058
struct FEOSUserInfoQueryUserInfoCallbackInfo
{
	unsigned char                                      UnknownData_0VMW[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YG9P[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3A0R[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByDisplayNameCallbackInfo
// 0x0068
struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo
{
	unsigned char                                      UnknownData_V1QV[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1HHS[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I52D[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByExternalAccountCallbackInfo
// 0x0070
struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo
{
	unsigned char                                      UnknownData_RHI1[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1781[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODO1[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExternalAccountId;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountType;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0049(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCWI[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsAddNotifyAchievementsUnlockedV2Options
// 0x0004
struct FEOSAchievementsAddNotifyAchievementsUnlockedV2Options
{
	unsigned char                                      UnknownData_62TS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsUnlockAchievementsOptions
// 0x0038
struct FEOSAchievementsUnlockAchievementsOptions
{
	unsigned char                                      UnknownData_DJMR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1DMU[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             AchievementIds;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAchievementsCopyPlayerAchievementByAchievementIdOptions
// 0x0060
struct FEOSAchievementsCopyPlayerAchievementByAchievementIdOptions
{
	unsigned char                                      UnknownData_4VX3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IUY7[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AchievementId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0038(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QAFE[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsCopyPlayerAchievementByIndexOptions
// 0x0050
struct FEOSAchievementsCopyPlayerAchievementByIndexOptions
{
	unsigned char                                      UnknownData_JAVC[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVKR[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AchievementIndex;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x002C(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EYNM[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsGetPlayerAchievementCountOptions
// 0x0028
struct FEOSAchievementsGetPlayerAchievementCountOptions
{
	unsigned char                                      UnknownData_A0J2[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IFP[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsPlayerStatInfo
// 0x0020
struct FEOSAchievementsPlayerStatInfo
{
	unsigned char                                      UnknownData_MVUJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentValue;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThresholdValue;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAchievementsPlayerAchievement
// 0x0088
struct FEOSAchievementsPlayerAchievement
{
	unsigned char                                      UnknownData_DWCR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AchievementId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Progress;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O54W[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UnlockTime;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatInfoCount;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2I6N[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSAchievementsPlayerStatInfo>      StatInfo;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconURL;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FlavorText;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAchievementsQueryPlayerAchievementsOptions
// 0x0048
struct FEOSAchievementsQueryPlayerAchievementsOptions
{
	unsigned char                                      UnknownData_LX0W[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_16JK[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions
// 0x0010
struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions
{
	struct FString                                     AchievementId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAchievementsCopyAchievementDefinitionV2ByIndexOptions
// 0x0004
struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions
{
	int                                                AchievementIndex;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAchievementsGetAchievementDefinitionCountOptions
// 0x0004
struct FEOSAchievementsGetAchievementDefinitionCountOptions
{
	unsigned char                                      UnknownData_BMQQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsStatThresholds
// 0x0020
struct FEOSAchievementsStatThresholds
{
	unsigned char                                      UnknownData_BN04[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNUR[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAchievementsDefinitionV2
// 0x00A0
struct FEOSAchievementsDefinitionV2
{
	unsigned char                                      UnknownData_QYSG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AchievementId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedDisplayName;                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedDescription;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LockedDisplayName;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LockedDescription;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FlavorText;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedIconURL;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LockedIconURL;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHidden;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3SJ[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StatThresholdsCount;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSAchievementsStatThresholds>      StatThresholds;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAchievementsQueryDefinitionsOptions
// 0x0021
struct FEOSAchievementsQueryDefinitionsOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientReceiveMessageFromPeerOptions
// 0x0028
struct FEOSAntiCheatClientReceiveMessageFromPeerOptions
{
	unsigned char                                      UnknownData_LM2O[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             PeerHandle;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_724A[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Data;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PAddNotifyPeerConnectionRequestOptions
// 0x0040
struct FEOSP2PAddNotifyPeerConnectionRequestOptions
{
	unsigned char                                      UnknownData_KZVH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8LPV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PReceivePacketOptions
// 0x0030
struct FEOSP2PReceivePacketOptions
{
	unsigned char                                      UnknownData_6JAB[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XKZ6[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxDataSizeBytes;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequestedChannel;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PGetNextReceivedPacketSizeOptions
// 0x002C
struct FEOSP2PGetNextReceivedPacketSizeOptions
{
	unsigned char                                      UnknownData_6Y8G[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H8V8[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RequestedChannel;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PSendPacketOptions
// 0x0080
struct FEOSP2PSendPacketOptions
{
	unsigned char                                      UnknownData_D912[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           RemoteUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9UR[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                Channel;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MWZO[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Data;                                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bAllowDelayedDelivery;                                     // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEPacketReliability                     Reliability;                                               // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAQT[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageDeleteCacheOptions
// 0x0028
struct FEOSPlayerDataStorageDeleteCacheOptions
{
	unsigned char                                      UnknownData_MC4D[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VENM[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageWriteFileOptions
// 0x0060
struct FEOSPlayerDataStorageWriteFileOptions
{
	unsigned char                                      UnknownData_DXQJ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XR6[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LocalFile;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RemoteFile;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChunkLengthBytes;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SI4Y[0x14];                                    // 0x004C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageWriteFileDataCallbackInfo
// 0x0048
struct FEOSPlayerDataStorageWriteFileDataCallbackInfo
{
	unsigned char                                      UnknownData_9T8U[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W4I0[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataBufferLengthBytes;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J2PA[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageReadFileOptions
// 0x0060
struct FEOSPlayerDataStorageReadFileOptions
{
	unsigned char                                      UnknownData_FXGB[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHNY[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LocalFile;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RemoteFile;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReadChunkLengthBytes;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQPV[0x14];                                    // 0x004C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageReadFileDataCallbackInfo
// 0x0058
struct FEOSPlayerDataStorageReadFileDataCallbackInfo
{
	unsigned char                                      UnknownData_F13E[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SUEB[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFileSizeBytes;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLastChunk;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZ9G[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataChunkLengthBytes;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQ14[0xC];                                     // 0x004C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageDeleteFileOptions
// 0x0038
struct FEOSPlayerDataStorageDeleteFileOptions
{
	unsigned char                                      UnknownData_B3BS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55DT[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageDuplicateFileOptions
// 0x0048
struct FEOSPlayerDataStorageDuplicateFileOptions
{
	unsigned char                                      UnknownData_ENPH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V1UR[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SourceFilename;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DestinationFilename;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageCopyFileMetadataByFilenameOptions
// 0x0038
struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions
{
	unsigned char                                      UnknownData_9LSV[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TF53[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageCopyFileMetadataAtIndexOptions
// 0x002C
struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions
{
	unsigned char                                      UnknownData_RDJQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QINY[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageGetFileMetadataCountOptions
// 0x0028
struct FEOSPlayerDataStorageGetFileMetadataCountOptions
{
	unsigned char                                      UnknownData_XOPM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KIW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileListOptions
// 0x0028
struct FEOSPlayerDataStorageQueryFileListOptions
{
	unsigned char                                      UnknownData_RV73[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NTYW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileOptions
// 0x0038
struct FEOSPlayerDataStorageQueryFileOptions
{
	unsigned char                                      UnknownData_ERH6[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8GL6[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageFileMetadata
// 0x0038
struct FEOSPlayerDataStorageFileMetadata
{
	unsigned char                                      UnknownData_7IB1[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FileSizeBytes;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MD5Hash;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastModifiedTime;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnencryptedDataSizeBytes;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VWC5[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceModificationDataRecordId
// 0x0018
struct FEOSPresenceModificationDataRecordId
{
	unsigned char                                      UnknownData_ICP8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresenceModificationDeleteDataOptions
// 0x0018
struct FEOSPresenceModificationDeleteDataOptions
{
	unsigned char                                      UnknownData_PWM9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSPresenceModificationDataRecordId> Records;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresenceDataRecord
// 0x0028
struct FEOSPresenceDataRecord
{
	unsigned char                                      UnknownData_BR0Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresenceModificationSetDataOptions
// 0x0018
struct FEOSPresenceModificationSetDataOptions
{
	unsigned char                                      UnknownData_CSPS[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSPresenceDataRecord>              Records;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresenceModificationSetRawRichTextOptions
// 0x0018
struct FEOSPresenceModificationSetRawRichTextOptions
{
	unsigned char                                      UnknownData_JRB4[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RichText;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresenceModificationSetStatusOptions
// 0x0008
struct FEOSPresenceModificationSetStatusOptions
{
	unsigned char                                      UnknownData_SC3X[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSPresenceEStatus                        Status;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9RK6[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceModificationSetJoinInfoOptions
// 0x0018
struct FEOSPresenceModificationSetJoinInfoOptions
{
	unsigned char                                      UnknownData_0S3C[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JoinInfo;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSCustomInvitesOnCustomInviteReceivedCallbackInfo
// 0x0070
struct FEOSCustomInvitesOnCustomInviteReceivedCallbackInfo
{
	unsigned char                                      UnknownData_FIUO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BE8[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomInviteId;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Payload;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSCustomInvitesOnCustomInviteAcceptedCallbackInfo
// 0x0070
struct FEOSCustomInvitesOnCustomInviteAcceptedCallbackInfo
{
	unsigned char                                      UnknownData_DAS6[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0QEO[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomInviteId;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Payload;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSFriendsQueryFriendsCallbackInfo
// 0x0038
struct FEOSFriendsQueryFriendsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PB9K[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7HD0[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsSendInviteCallbackInfo
// 0x0058
struct FEOSFriendsSendInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHF2[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OFQ[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsAcceptInviteCallbackInfo
// 0x0058
struct FEOSFriendsAcceptInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYIY[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CI0F[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsRejectInviteCallbackInfo
// 0x0058
struct FEOSFriendsRejectInviteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DK36[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMH5[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsDeleteFriendCallbackInfo
// 0x0058
struct FEOSFriendsDeleteFriendCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TE6Y[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_82N4[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsOnFriendsUpdateInfo
// 0x0050
struct FEOSFriendsOnFriendsUpdateInfo
{
	unsigned char                                      UnknownData_8I12[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEFriendsStatus                         PreviousStatus;                                            // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEFriendsStatus                         CurrentStatus;                                             // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NYU[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo
// 0x0010
struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7T5V[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo
// 0x0010
struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_121J[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo
// 0x0010
struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJHM[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSModIdentifier
// 0x0058
struct FEOSModIdentifier
{
	unsigned char                                      UnknownData_IACQ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NamespaceId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ArtifactId;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSModsInstallModCallbackInfo
// 0x0088
struct FEOSModsInstallModCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0001(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2FXW[0xE];                                     // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSModIdentifier                           Mod;                                                       // 0x0030(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSModsUninstallModCallbackInfo
// 0x0088
struct FEOSModsUninstallModCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0001(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTYC[0xE];                                     // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSModIdentifier                           Mod;                                                       // 0x0030(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSModsEnumerateModsCallbackInfo
// 0x0038
struct FEOSModsEnumerateModsCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0001(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHMY[0xE];                                     // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSEModEnumerationType                    Type;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KN31[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSModsUpdateModCallbackInfo
// 0x0088
struct FEOSModsUpdateModCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0001(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL5W[0xE];                                     // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSModIdentifier                           Mod;                                                       // 0x0030(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileCallbackInfo
// 0x0038
struct FEOSPlayerDataStorageQueryFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IWPG[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FKGS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileListCallbackInfo
// 0x0038
struct FEOSPlayerDataStorageQueryFileListCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4DA[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_14G8[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FileCount;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageDuplicateFileCallbackInfo
// 0x0038
struct FEOSPlayerDataStorageDuplicateFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCKB[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLU7[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageDeleteFileCallbackInfo
// 0x0038
struct FEOSPlayerDataStorageDeleteFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8K1[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUKV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageFileTransferProgressCallbackInfo
// 0x0048
struct FEOSPlayerDataStorageFileTransferProgressCallbackInfo
{
	unsigned char                                      UnknownData_Y3WT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MAXO[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesTransferred;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFileSizeBytes;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHPlayerDataStorageFileTransferRequest
// 0x0008
struct FEOSHPlayerDataStorageFileTransferRequest
{
	unsigned char                                      UnknownData_A4M7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageReadFileCallbackInfo
// 0x0050
struct FEOSPlayerDataStorageReadFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CS3H[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TS4G[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageWriteFileCallbackInfo
// 0x0050
struct FEOSPlayerDataStorageWriteFileCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OV63[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N4IT[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSOnFileTransferProgressUpdated
// 0x0050
struct FEOSOnFileTransferProgressUpdated
{
	unsigned char                                      UnknownData_L1PO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75UL[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesTransferred;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFileSizeBytes;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPlayerDataStorageDeleteCacheCallbackInfo
// 0x0038
struct FEOSPlayerDataStorageDeleteCacheCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HTDV[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQZZ[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceQueryPresenceCallbackInfo
// 0x0058
struct FEOSPresenceQueryPresenceCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MDFG[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QGL[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceSetPresenceCallbackInfo
// 0x0038
struct FEOSPresenceSetPresenceCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMAO[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7STH[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceJoinGameAcceptedCallbackInfo
// 0x0068
struct FEOSPresenceJoinGameAcceptedCallbackInfo
{
	unsigned char                                      UnknownData_A6LH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JoinInfo;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0039(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VR0X[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSUIEventId                               UiEventId;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresencePresenceChangedCallbackInfo
// 0x0050
struct FEOSPresencePresenceChangedCallbackInfo
{
	unsigned char                                      UnknownData_Y9X6[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           PresenceUserId;                                            // 0x0029(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJ2A[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotSubmitSnapshotCallbackInfo
// 0x0010
struct FEOSProgressionSnapshotSubmitSnapshotCallbackInfo
{
	EOSCore_EOSResult                                  ResultCode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34G2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SnapshotId;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YSMI[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceGetJoinInfoOptions
// 0x0048
struct FEOSPresenceGetJoinInfoOptions
{
	unsigned char                                      UnknownData_2DM8[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KD3S[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceAddNotifyJoinGameAcceptedOptions
// 0x0004
struct FEOSPresenceAddNotifyJoinGameAcceptedOptions
{
	unsigned char                                      UnknownData_ADE3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceAddNotifyOnPresenceChangedOptions
// 0x0004
struct FEOSPresenceAddNotifyOnPresenceChangedOptions
{
	unsigned char                                      UnknownData_4JPG[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSHPresenceModification
// 0x0008
struct FEOSHPresenceModification
{
	unsigned char                                      UnknownData_I298[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceSetPresenceOptions
// 0x0030
struct FEOSPresenceSetPresenceOptions
{
	unsigned char                                      UnknownData_XXOZ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4UZF[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSHPresenceModification                   PresenceModificationHandle;                                // 0x0028(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPresenceCreatePresenceModificationOptions
// 0x0028
struct FEOSPresenceCreatePresenceModificationOptions
{
	unsigned char                                      UnknownData_ILW5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MQDQ[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceCopyPresenceOptions
// 0x0048
struct FEOSPresenceCopyPresenceOptions
{
	unsigned char                                      UnknownData_DII3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RWA[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceHasPresenceOptions
// 0x0048
struct FEOSPresenceHasPresenceOptions
{
	unsigned char                                      UnknownData_EOW4[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4L4N[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceQueryPresenceOptions
// 0x0048
struct FEOSPresenceQueryPresenceOptions
{
	unsigned char                                      UnknownData_ZP8I[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJP1[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSPresenceInfo
// 0x0090
struct FEOSPresenceInfo
{
	unsigned char                                      UnknownData_Y977[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSPresenceEStatus                        Status;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           UserId;                                                    // 0x0005(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDV5[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProductId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProductVersion;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RichText;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1PO[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSPresenceDataRecord>              Records;                                                   // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ProductName;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHPresence
// 0x0008
struct FEOSHPresence
{
	unsigned char                                      UnknownData_OU1M[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotDeleteSnapshotOptions
// 0x0021
struct FEOSProgressionSnapshotDeleteSnapshotOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotEndSnapshotOptions
// 0x0004
struct FEOSProgressionSnapshotEndSnapshotOptions
{
	int                                                SnapshotId;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotSubmitSnapshotOptions
// 0x0004
struct FEOSProgressionSnapshotSubmitSnapshotOptions
{
	int                                                SnapshotId;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotAddProgressionOptions
// 0x0028
struct FEOSProgressionSnapshotAddProgressionOptions
{
	int                                                SnapshotId;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJG7[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSProgressionSnapshotBeginSnapshotOptions
// 0x0021
struct FEOSProgressionSnapshotBeginSnapshotOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSReportsSendPlayerBehaviorReportOptions
// 0x0068
struct FEOSReportsSendPlayerBehaviorReportOptions
{
	unsigned char                                      UnknownData_3QE8[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           ReporterUserId;                                            // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReportedUserId;                                            // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEPlayerReportsCategory                 ReportCategory;                                            // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZ4A[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSetParticipantHardMuteOptions
// 0x0038
struct FEOSSetParticipantHardMuteOptions
{
	struct FString                                     RoomName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMute;                                                     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_20SC[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSKickOptions
// 0x0038
struct FEOSKickOptions
{
	struct FString                                     RoomName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Q8E[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSCopyUserTokenByUserIdOptions
// 0x0028
struct FEOSCopyUserTokenByUserIdOptions
{
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVK4[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryId;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSCopyUserTokenByIndexOptions
// 0x0008
struct FEOSCopyUserTokenByIndexOptions
{
	int                                                UserTokenIndex;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryId;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserToken
// 0x0038
struct FEOSUserToken
{
	struct FEOSProductUserId                           ProductUserId;                                             // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYL9[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Token;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSQueryJoinRoomTokenOptions
// 0x0058
struct FEOSQueryJoinRoomTokenOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OBQ5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSProductUserId>                   TargetUserIds;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             TargetUserIpAddresses;                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUpdateReceivingOptions
// 0x0060
struct FEOSUpdateReceivingOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6YOQ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0038(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAudioEnabled;                                             // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VV7[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUpdateSendingOptions
// 0x0040
struct FEOSUpdateSendingOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P22I[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSERTCAudioStatus                        AudioStatus;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4A8Z[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSendAudioOptions
// 0x0048
struct FEOSSendAudioOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KBJ6[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSRTCAudioAudioBuffer                     Buffer;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAddNotifyAudioBeforeRenderOptions
// 0x0040
struct FEOSAddNotifyAudioBeforeRenderOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UCWE[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnmixedAudio;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFUS[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAddNotifyAudioBeforeSendOptions
// 0x0038
struct FEOSAddNotifyAudioBeforeSendOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I8ED[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAddNotifyAudioOutputStateOptions
// 0x0038
struct FEOSAddNotifyAudioOutputStateOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MCHK[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAddNotifyAudioInputStateOptions
// 0x0038
struct FEOSAddNotifyAudioInputStateOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4AY5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSetAudioOutputSettingsOptions
// 0x0040
struct FEOSSetAudioOutputSettingsOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2B9H[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceID;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZV25[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSetAudioInputSettingsOptions
// 0x0040
struct FEOSSetAudioInputSettingsOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQV5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceID;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlatformAEC;                                              // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PS62[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAudioOutputDeviceInfo
// 0x0028
struct FEOSAudioOutputDeviceInfo
{
	bool                                               bDefaultDevice;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9R2K[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceID;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSGetAudioOutputDeviceByIndexOptions
// 0x0004
struct FEOSGetAudioOutputDeviceByIndexOptions
{
	int                                                DeviceInfoIndex;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSGetAudioOutputDevicesCountOptions
// 0x0001
struct FEOSGetAudioOutputDevicesCountOptions
{
	unsigned char                                      UnknownData_IJA5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAudioInputDeviceInfo
// 0x0028
struct FEOSAudioInputDeviceInfo
{
	bool                                               bDefaultDevice;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_65NE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceID;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSGetAudioInputDeviceByIndexOptions
// 0x0004
struct FEOSGetAudioInputDeviceByIndexOptions
{
	int                                                DeviceInfoIndex;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSGetAudioInputDevicesCountOptions
// 0x0001
struct FEOSGetAudioInputDevicesCountOptions
{
	unsigned char                                      UnknownData_LZFJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAddNotifyAudioDevicesChangedOptions
// 0x0001
struct FEOSAddNotifyAudioDevicesChangedOptions
{
	unsigned char                                      UnknownData_MNDS[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAddNotifyParticipantUpdatedOptions
// 0x0038
struct FEOSAddNotifyParticipantUpdatedOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_COOT[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUnregisterPlatformAudioUserOptions
// 0x0010
struct FEOSUnregisterPlatformAudioUserOptions
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSRegisterPlatformAudioUserOptions
// 0x0010
struct FEOSRegisterPlatformAudioUserOptions
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.AddNotifyParticipantStatusChangedOptions
// 0x0038
struct FAddNotifyParticipantStatusChangedOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IYUK[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.AddNotifyDisconnectedOptions
// 0x0038
struct FAddNotifyDisconnectedOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJ7U[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.BlockParticipantOptions
// 0x0060
struct FBlockParticipantOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1B8[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0038(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlocked;                                                  // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1UR8[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.LeaveRoomOptions
// 0x0038
struct FLeaveRoomOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EIQC[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.JoinRoomOptions
// 0x0088
struct FJoinRoomOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QC12[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoomName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientBaseUrl;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ParticipantToken;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ParticipantId;                                             // 0x0058(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0X6U[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Flags;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bManualAudioInputEnabled;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bManualAudioOutputEnabled;                                 // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JTJ4[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSanctionsCopyPlayerSanctionByIndexOptions
// 0x002C
struct FEOSSanctionsCopyPlayerSanctionByIndexOptions
{
	unsigned char                                      UnknownData_50QS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9IPS[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SanctionIndex;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSanctionsGetPlayerSanctionCountOptions
// 0x0028
struct FEOSSanctionsGetPlayerSanctionCountOptions
{
	unsigned char                                      UnknownData_2Q7T[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEGW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSanctionsQueryActivePlayerSanctionsOptions
// 0x0048
struct FEOSSanctionsQueryActivePlayerSanctionsOptions
{
	unsigned char                                      UnknownData_PDRY[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ZNR[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSanctionsPlayerSanction
// 0x0020
struct FEOSSanctionsPlayerSanction
{
	unsigned char                                      UnknownData_5V8Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   TimePlaced;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Action;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsDumpSessionStateOptions
// 0x0018
struct FEOSSessionsDumpSessionStateOptions
{
	unsigned char                                      UnknownData_M52G[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsIsUserInSessionOptions
// 0x0040
struct FEOSSessionsIsUserInSessionOptions
{
	unsigned char                                      UnknownData_NU79[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L38I[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsCopySessionHandleForPresenceOptions
// 0x0028
struct FEOSSessionsCopySessionHandleForPresenceOptions
{
	unsigned char                                      UnknownData_WIAF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFUV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsCopySessionHandleByUiEventIdOptions
// 0x0010
struct FEOSSessionsCopySessionHandleByUiEventIdOptions
{
	unsigned char                                      UnknownData_RKEF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSUIEventId                               UiEventId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsCopySessionHandleByInviteIdOptions
// 0x0018
struct FEOSSessionsCopySessionHandleByInviteIdOptions
{
	unsigned char                                      UnknownData_BVCG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsAddNotifySessionInviteAcceptedOptions
// 0x0004
struct FEOSSessionsAddNotifySessionInviteAcceptedOptions
{
	unsigned char                                      UnknownData_X0FU[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsAddNotifySessionInviteReceivedOptions
// 0x0004
struct FEOSSessionsAddNotifySessionInviteReceivedOptions
{
	unsigned char                                      UnknownData_GGKV[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsCopyActiveSessionHandleOptions
// 0x0018
struct FEOSSessionsCopyActiveSessionHandleOptions
{
	unsigned char                                      UnknownData_EJBT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionDetailsSettings
// 0x0020
struct FEOSSessionDetailsSettings
{
	unsigned char                                      UnknownData_S1WN[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BucketId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPublicConnections;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinInProgress;                                      // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEOnlineSessionPermissionLevel          PermissionLevel;                                           // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvitesAllowed;                                           // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HV8Y[0x1];                                     // 0x001F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionDetailsInfo
// 0x0050
struct FEOSSessionDetailsInfo
{
	unsigned char                                      UnknownData_CDS9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostAddress;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOpenPublicConnections;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AOL[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSSessionDetailsSettings                  Settings;                                                  // 0x0030(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSActiveSessionInfo
// 0x0090
struct FEOSActiveSessionInfo
{
	unsigned char                                      UnknownData_9TB1[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEOnlineSessionState                    State;                                                     // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSRG[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSSessionDetailsInfo                      SessionDetails;                                            // 0x0040(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionDetailsCopySessionAttributeByKeyOptions
// 0x0018
struct FEOSSessionDetailsCopySessionAttributeByKeyOptions
{
	unsigned char                                      UnknownData_G5M6[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AttrKey;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionDetailsCopySessionAttributeByIndexOptions
// 0x0008
struct FEOSSessionDetailsCopySessionAttributeByIndexOptions
{
	unsigned char                                      UnknownData_AEFA[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttrIndex;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionDetailsGetSessionAttributeCountOptions
// 0x0004
struct FEOSSessionDetailsGetSessionAttributeCountOptions
{
	unsigned char                                      UnknownData_UNCP[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionDetailsCopyInfoOptions
// 0x0004
struct FEOSSessionDetailsCopyInfoOptions
{
	unsigned char                                      UnknownData_U7OT[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchRemoveParameterOptions
// 0x0020
struct FEOSSessionSearchRemoveParameterOptions
{
	unsigned char                                      UnknownData_LNRV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y21B[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsAttributeData
// 0x0028
struct FEOSSessionsAttributeData
{
	unsigned char                                      UnknownData_9XCH[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchSetParameterOptions
// 0x0038
struct FEOSSessionSearchSetParameterOptions
{
	unsigned char                                      UnknownData_VNJ9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSSessionsAttributeData                   Parameter;                                                 // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQGL[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchSetTargetUserIdOptions
// 0x0028
struct FEOSSessionSearchSetTargetUserIdOptions
{
	unsigned char                                      UnknownData_JCX7[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ROW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchSetSessionIdOptions
// 0x0018
struct FEOSSessionSearchSetSessionIdOptions
{
	unsigned char                                      UnknownData_891C[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionSearchCopySearchResultByIndexOptions
// 0x0008
struct FEOSSessionSearchCopySearchResultByIndexOptions
{
	unsigned char                                      UnknownData_ERQF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SessionIndex;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionSearchGetSearchResultCountOptions
// 0x0004
struct FEOSSessionSearchGetSearchResultCountOptions
{
	unsigned char                                      UnknownData_A5RO[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchFindOptions
// 0x0028
struct FEOSSessionSearchFindOptions
{
	unsigned char                                      UnknownData_EK7N[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7OH[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionSearchSetMaxResultsOptions
// 0x0008
struct FEOSSessionSearchSetMaxResultsOptions
{
	unsigned char                                      UnknownData_DCEE[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSearchResults;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionModificationRemoveAttributeOptions
// 0x0018
struct FEOSSessionModificationRemoveAttributeOptions
{
	unsigned char                                      UnknownData_1CKJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionModificationAddAttributeOptions
// 0x0038
struct FEOSSessionModificationAddAttributeOptions
{
	unsigned char                                      UnknownData_EK4B[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSSessionsAttributeData                   Data;                                                      // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSESessionAttributeAdvertisementType     AdvertisementType;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DGS5[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionDetailsAttribute
// 0x0038
struct FEOSSessionDetailsAttribute
{
	unsigned char                                      UnknownData_4XLC[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSSessionsAttributeData                   Data;                                                      // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSESessionAttributeAdvertisementType     AdvertisementType;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKA9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSActiveSessionGetRegisteredPlayerByIndexOptions
// 0x0008
struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions
{
	unsigned char                                      UnknownData_H7RD[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerIndex;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSActiveSessionGetRegisteredPlayerCountOptions
// 0x0004
struct FEOSActiveSessionGetRegisteredPlayerCountOptions
{
	unsigned char                                      UnknownData_3KK9[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSActiveSessionCopyInfoOptions
// 0x0004
struct FEOSActiveSessionCopyInfoOptions
{
	unsigned char                                      UnknownData_DZF9[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionModificationSetInvitesAllowedOptions
// 0x0008
struct FEOSSessionModificationSetInvitesAllowedOptions
{
	unsigned char                                      UnknownData_5LEP[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInvitesAllowed;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHFI[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionModificationSetMaxPlayersOptions
// 0x0008
struct FEOSSessionModificationSetMaxPlayersOptions
{
	unsigned char                                      UnknownData_YB6Z[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayers;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionModificationSetJoinInProgressAllowedOptions
// 0x0008
struct FEOSSessionModificationSetJoinInProgressAllowedOptions
{
	unsigned char                                      UnknownData_1H0H[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAllowJoinInProgress;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_20H2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionModificationSetPermissionLevelOptions
// 0x0008
struct FEOSSessionModificationSetPermissionLevelOptions
{
	unsigned char                                      UnknownData_6T2E[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSEOnlineSessionPermissionLevel          PermissionLevel;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9ZX[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionModificationSetHostAddressOptions
// 0x0018
struct FEOSSessionModificationSetHostAddressOptions
{
	unsigned char                                      UnknownData_G2OA[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HostAddress;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionModificationSetBucketIdOptions
// 0x0018
struct FEOSSessionModificationSetBucketIdOptions
{
	unsigned char                                      UnknownData_1IO2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BucketId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsUnregisterPlayersOptions
// 0x0030
struct FEOSSessionsUnregisterPlayersOptions
{
	unsigned char                                      UnknownData_OUKT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSProductUserId>                   PlayersToUnregister;                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V6X9[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsRegisterPlayersOptions
// 0x0030
struct FEOSSessionsRegisterPlayersOptions
{
	unsigned char                                      UnknownData_OB0N[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSProductUserId>                   PlayersToRegister;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4AWZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsEndSessionOptions
// 0x0018
struct FEOSSessionsEndSessionOptions
{
	unsigned char                                      UnknownData_3SS8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsStartSessionOptions
// 0x0018
struct FEOSSessionsStartSessionOptions
{
	unsigned char                                      UnknownData_30QT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHSessionDetails
// 0x0008
struct FEOSHSessionDetails
{
	unsigned char                                      UnknownData_MOOL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsJoinSessionOptions
// 0x0048
struct FEOSSessionsJoinSessionOptions
{
	unsigned char                                      UnknownData_IIUB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         SessionHandle;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0020(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPresenceEnabled;                                          // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DTKH[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsDestroySessionOptions
// 0x0018
struct FEOSSessionsDestroySessionOptions
{
	unsigned char                                      UnknownData_SMV0[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHSessionModification
// 0x0008
struct FEOSHSessionModification
{
	unsigned char                                      UnknownData_8U0B[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsUpdateSessionOptions
// 0x0010
struct FEOSSessionsUpdateSessionOptions
{
	unsigned char                                      UnknownData_PDX9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSHSessionModification                    SessionModificationHandle;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsCreateSessionSearchOptions
// 0x0008
struct FEOSSessionsCreateSessionSearchOptions
{
	unsigned char                                      UnknownData_683F[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSearchResults;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsGetInviteIdByIndexOptions
// 0x002C
struct FEOSSessionsGetInviteIdByIndexOptions
{
	unsigned char                                      UnknownData_E0BK[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBNX[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsGetInviteCountOptions
// 0x0028
struct FEOSSessionsGetInviteCountOptions
{
	unsigned char                                      UnknownData_RSD3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YO1J[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsQueryInvitesOptions
// 0x0028
struct FEOSSessionsQueryInvitesOptions
{
	unsigned char                                      UnknownData_DJ9T[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQJ3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsRejectInviteOptions
// 0x0038
struct FEOSSessionsRejectInviteOptions
{
	unsigned char                                      UnknownData_1XWU[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY2L[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsSendInviteOptions
// 0x0060
struct FEOSSessionsSendInviteOptions
{
	unsigned char                                      UnknownData_3N1Z[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0039(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BMT5[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSSessionsUpdateSessionModificationOptions
// 0x0018
struct FEOSSessionsUpdateSessionModificationOptions
{
	unsigned char                                      UnknownData_VGX8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSSessionsCreateSessionModificationOptions
// 0x0050
struct FEOSSessionsCreateSessionModificationOptions
{
	unsigned char                                      UnknownData_XE8A[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BucketId;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x002C(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPresenceEnabled;                                          // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W68Y[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSHSessionSearch
// 0x0008
struct FEOSHSessionSearch
{
	unsigned char                                      UnknownData_RHS2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSHActiveSession
// 0x0008
struct FEOSHActiveSession
{
	unsigned char                                      UnknownData_O2Q3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSHSessions
// 0x0008
struct FEOSHSessions
{
	unsigned char                                      UnknownData_2KIL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsCopyStatByNameOptions
// 0x0038
struct FEOSStatsCopyStatByNameOptions
{
	unsigned char                                      UnknownData_Z1Y7[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODI4[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSStatsCopyStatByIndexOptions
// 0x002C
struct FEOSStatsCopyStatByIndexOptions
{
	unsigned char                                      UnknownData_30Q2[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04I3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StatIndex;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientUnregisterPeerOptions
// 0x0010
struct FEOSAntiCheatClientUnregisterPeerOptions
{
	unsigned char                                      UnknownData_J5Y7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             PeerHandle;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientRegisterPeerOptions
// 0x0038
struct FEOSAntiCheatClientRegisterPeerOptions
{
	unsigned char                                      UnknownData_VAU7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             PeerHandle;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientType             ClientType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientPlatform         ClientPlatform;                                            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y5GD[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IpAddress;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientUnprotectMessageOptions
// 0x0020
struct FEOSAntiCheatClientUnprotectMessageOptions
{
	unsigned char                                      UnknownData_LOM5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataLengthBytes;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBufferSizeBytes;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JG0S[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientProtectMessageOptions
// 0x0020
struct FEOSAntiCheatClientProtectMessageOptions
{
	unsigned char                                      UnknownData_9EMR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataLengthBytes;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBufferSizeBytes;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_85HE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientGetProtectMessageOutputLengthOptions
// 0x0008
struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions
{
	unsigned char                                      UnknownData_7I74[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataLengthBytes;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientReceiveMessageFromServerOptions
// 0x0018
struct FEOSAntiCheatClientReceiveMessageFromServerOptions
{
	unsigned char                                      UnknownData_QPKS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataLengthBytes;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientAddExternalIntegrityCatalogOptions
// 0x0018
struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions
{
	unsigned char                                      UnknownData_XVLV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PathToBinFile;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientPollStatusOptions
// 0x0008
struct FEOSAntiCheatClientPollStatusOptions
{
	unsigned char                                      UnknownData_NFRW[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OutMessageLength;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatClientEndSessionOptions
// 0x0004
struct FEOSAntiCheatClientEndSessionOptions
{
	unsigned char                                      UnknownData_Y847[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientBeginSessionOptions
// 0x0028
struct FEOSAntiCheatClientBeginSessionOptions
{
	unsigned char                                      UnknownData_T83S[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatClientMode                   Mode;                                                      // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CO4S[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions
// 0x0004
struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions
{
	unsigned char                                      UnknownData_05A0[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyPeerActionRequiredOptions
// 0x0004
struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions
{
	unsigned char                                      UnknownData_SCRC[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyMessageToPeerOptions
// 0x0004
struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions
{
	unsigned char                                      UnknownData_RROF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyMessageToServerOptions
// 0x0004
struct FEOSAntiCheatClientAddNotifyMessageToServerOptions
{
	unsigned char                                      UnknownData_Q3UY[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerUnprotectMessageOptions
// 0x0030
struct FEOSAntiCheatServerUnprotectMessageOptions
{
	unsigned char                                      UnknownData_5EF4[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                DataLengthBytes;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X039[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Data;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBufferSizeBytes;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJV8[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerProtectMessageOptions
// 0x0030
struct FEOSAntiCheatServerProtectMessageOptions
{
	unsigned char                                      UnknownData_PO2C[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                DataLengthBytes;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V212[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Data;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBufferSizeBytes;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UUCK[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerGetProtectMessageOutputLengthOptions
// 0x0008
struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions
{
	unsigned char                                      UnknownData_YOFG[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataLengthBytes;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatServerSetClientNetworkStateOptions
// 0x0018
struct FEOSAntiCheatServerSetClientNetworkStateOptions
{
	unsigned char                                      UnknownData_OEX7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsNetworkActive;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CA0J[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerReceiveMessageFromClientOptions
// 0x0020
struct FEOSAntiCheatServerReceiveMessageFromClientOptions
{
	unsigned char                                      UnknownData_RSXC[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatServerUnregisterClientOptions
// 0x0010
struct FEOSAntiCheatServerUnregisterClientOptions
{
	unsigned char                                      UnknownData_ZLUY[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatServerRegisterClientOptions
// 0x0038
struct FEOSAntiCheatServerRegisterClientOptions
{
	unsigned char                                      UnknownData_B5GJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientType             ClientType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientPlatform         ClientPlatform;                                            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_144W[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IpAddress;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatServerEndSessionOptions
// 0x0004
struct FEOSAntiCheatServerEndSessionOptions
{
	unsigned char                                      UnknownData_332G[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerBeginSessionOptions
// 0x0040
struct FEOSAntiCheatServerBeginSessionOptions
{
	unsigned char                                      UnknownData_0CRI[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RegisterTimeoutSeconds;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableGameplayData;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0019(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3XW[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions
// 0x0004
struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions
{
	unsigned char                                      UnknownData_BL6M[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerAddNotifyClientActionRequiredOptions
// 0x0004
struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions
{
	unsigned char                                      UnknownData_3WOP[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatServerAddNotifyMessageToClientOptions
// 0x0004
struct FEOSAntiCheatServerAddNotifyMessageToClientOptions
{
	unsigned char                                      UnknownData_UPRW[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthCopyIdTokenOptions
// 0x0021
struct FEOSAuthCopyIdTokenOptions
{
	struct FEOSEpicAccountId                           AccountId;                                                 // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthIdToken
// 0x0038
struct FEOSAuthIdToken
{
	struct FEOSEpicAccountId                           AccountId;                                                 // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NK4[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JsonWebToken;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthVerifyIdTokenOptions
// 0x0038
struct FEOSAuthVerifyIdTokenOptions
{
	struct FEOSAuthIdToken                             IdToken;                                                   // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthQueryIdTokenOptions
// 0x0042
struct FEOSAuthQueryIdTokenOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetAccountId;                                           // 0x0021(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHAuth
// 0x0008
struct FEOSHAuth
{
	unsigned char                                      UnknownData_4ZJ2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthDeletePersistentAuthOptions
// 0x0010
struct FEOSAuthDeletePersistentAuthOptions
{
	struct FString                                     RefreshToken;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthAddNotifyLoginStatusChangedOptions
// 0x0004
struct FEOSAuthAddNotifyLoginStatusChangedOptions
{
	unsigned char                                      UnknownData_EQ71[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthCopyUserAuthTokenOptions
// 0x0004
struct FEOSAuthCopyUserAuthTokenOptions
{
	unsigned char                                      UnknownData_UD46[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthToken
// 0x00B0
struct FEOSAuthToken
{
	struct FString                                     App;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           AccountId;                                                 // 0x0020(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAHR[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccessToken;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExpiresIn;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExpiresAt;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSEAuthTokenType                          AuthType;                                                  // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JJ7[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RefreshToken;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RefreshExpiresIn;                                          // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RefreshExpiresAt;                                          // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthVerifyUserAuthOptions
// 0x00B0
struct FEOSAuthVerifyUserAuthOptions
{
	struct FEOSAuthToken                               AuthToken;                                                 // 0x0000(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAuthLinkAccountOptions
// 0x0038
struct FEOSAuthLinkAccountOptions
{
	unsigned char                                      UnknownData_IX1E[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSELinkAccountFlags                      LinkAccountFlags;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IP28[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FContinuanceToken                           ContinuanceToken;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7AES[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthLogoutOptions
// 0x0028
struct FEOSAuthLogoutOptions
{
	unsigned char                                      UnknownData_420Y[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KNT[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthCredentials
// 0x0030
struct FEOSAuthCredentials
{
	unsigned char                                      UnknownData_98NB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSLoginCredentialType                    Type;                                                      // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalCredentialType                ExternalType;                                              // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B924[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAuthLoginOptions
// 0x0040
struct FEOSAuthLoginOptions
{
	unsigned char                                      UnknownData_ITEM[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAuthCredentials                         Credentials;                                               // 0x0008(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                ScopeFlags;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIMK[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectIdToken
// 0x0038
struct FEOSConnectIdToken
{
	struct FEOSProductUserId                           ProductUserId;                                             // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IBTN[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JsonWebToken;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectVerifyIdTokenOptions
// 0x0038
struct FEOSConnectVerifyIdTokenOptions
{
	struct FEOSConnectIdToken                          IdToken;                                                   // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectCopyIdTokenOptions
// 0x0021
struct FEOSConnectCopyIdTokenOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectAddNotifyLoginStatusChangedOptions
// 0x0004
struct FEOSConnectAddNotifyLoginStatusChangedOptions
{
	unsigned char                                      UnknownData_DXJB[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectAddNotifyAuthExpirationOptions
// 0x0004
struct FEOSConnectAddNotifyAuthExpirationOptions
{
	unsigned char                                      UnknownData_T87V[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectExternalAccountInfo
// 0x0060
struct FEOSConnectExternalAccountInfo
{
	unsigned char                                      UnknownData_01DJ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           ProductUserId;                                             // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TNN6[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AccountId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountIdType;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0KZ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastLoginTime;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectCopyProductUserInfoOptions
// 0x0028
struct FEOSConnectCopyProductUserInfoOptions
{
	unsigned char                                      UnknownData_V3R2[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIV1[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectCopyProductUserExternalAccountByAccountIdOptions
// 0x0038
struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions
{
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OEDL[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectCopyProductUserExternalAccountByAccountTypeOptions
// 0x0028
struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions
{
	unsigned char                                      UnknownData_QL18[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountIdType;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1V6G[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectCopyProductUserExternalAccountByIndexOptions
// 0x002C
struct FEOSConnectCopyProductUserExternalAccountByIndexOptions
{
	unsigned char                                      UnknownData_P426[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JKIQ[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExternalAccountInfoIndex;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectGetProductUserExternalAccountCountOptions
// 0x0028
struct FEOSConnectGetProductUserExternalAccountCountOptions
{
	unsigned char                                      UnknownData_UQU6[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G1SO[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectGetProductUserIdMappingOptions
// 0x0048
struct FEOSConnectGetProductUserIdMappingOptions
{
	unsigned char                                      UnknownData_X9IA[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountIdType;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetProductUserId;                                       // 0x0026(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_88L9[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectQueryProductUserIdMappingsOptions
// 0x0038
struct FEOSConnectQueryProductUserIdMappingsOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F900[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSProductUserId>                   ProductUserIds;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectGetExternalAccountMappingsOptions
// 0x0038
struct FEOSConnectGetExternalAccountMappingsOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountIdType;                                             // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CKNL[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetExternalUserId;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectQueryExternalAccountMappingsOptions
// 0x0038
struct FEOSConnectQueryExternalAccountMappingsOptions
{
	unsigned char                                      UnknownData_B993[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountIdType;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SX8B[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ExternalAccountIds;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectTransferDeviceIdAccountOptions
// 0x0063
struct FEOSConnectTransferDeviceIdAccountOptions
{
	struct FEOSProductUserId                           PrimaryLocalUserId;                                        // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalDeviceUserId;                                         // 0x0021(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ProductUserIdToPreserve;                                   // 0x0042(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectDeleteDeviceIdOptions
// 0x0004
struct FEOSConnectDeleteDeviceIdOptions
{
	unsigned char                                      UnknownData_T298[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectCreateDeviceIdOptions
// 0x0010
struct FEOSConnectCreateDeviceIdOptions
{
	struct FString                                     DeviceModel;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectUnlinkAccountOptions
// 0x0028
struct FEOSConnectUnlinkAccountOptions
{
	unsigned char                                      UnknownData_QMEH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMUB[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectLinkAccountOptions
// 0x0030
struct FEOSConnectLinkAccountOptions
{
	unsigned char                                      UnknownData_JZAS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CNY[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FContinuanceToken                           ContinuanceToken;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectCreateUserOptions
// 0x0008
struct FEOSConnectCreateUserOptions
{
	struct FContinuanceToken                           ContinuanceToken;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectCredentials
// 0x0018
struct FEOSConnectCredentials
{
	struct FString                                     AccessToken;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalCredentialType                Type;                                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FS6Q[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSConnectUserLoginInfo
// 0x0010
struct FEOSConnectUserLoginInfo
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSConnectLoginOptions
// 0x0030
struct FEOSConnectLoginOptions
{
	unsigned char                                      UnknownData_ZTMY[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSConnectCredentials                      Credentials;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEOSConnectUserLoginInfo                    UserLoginInfo;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonVec3f
// 0x000C
struct FEOSAntiCheatCommonVec3f
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonQuat
// 0x0010
struct FEOSAntiCheatCommonQuat
{
	float                                              W;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              X;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerUseWeaponData
// 0x0040
struct FEOSAntiCheatCommonLogPlayerUseWeaponData
{
	unsigned char                                      UnknownData_BWKB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             PlayerHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonVec3f                    PlayerPosition;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonQuat                     PlayerViewRotation;                                        // 0x001C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsPlayerViewZoomed;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMeleeAttack;                                            // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AEGT[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WeaponName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerTakeDamageOptions
// 0x00B0
struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions
{
	unsigned char                                      UnknownData_F1FT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             VictimPlayerHandle;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonVec3f                    VictimPlayerPosition;                                      // 0x0010(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonQuat                     VictimPlayerViewRotation;                                  // 0x001C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1BT[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             AttackerPlayerHandle;                                      // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonVec3f                    AttackerPlayerPosition;                                    // 0x0038(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonQuat                     AttackerPlayerViewRotation;                                // 0x0044(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsHitscanAttack;                                          // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLineOfSight;                                           // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCriticalHit;                                            // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3GNX[0x1];                                     // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageTaken;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthRemaining;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonPlayerTakeDamageSource DamageSource;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonPlayerTakeDamageType   DamageType;                                                // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonPlayerTakeDamageResult DamageResult;                                              // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GLOJ[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonLogPlayerUseWeaponData   PlayerUseWeaponData;                                       // 0x0068(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                TimeSincePlayerUseWeaponMs;                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SP7[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerUseAbilityOptions
// 0x0020
struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions
{
	unsigned char                                      UnknownData_EFCS[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             PlayerHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                AbilityId;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AbilityDurationMs;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AbilityCooldownMs;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QX1W[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerUseWeaponOptions
// 0x0048
struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions
{
	unsigned char                                      UnknownData_GAH0[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonLogPlayerUseWeaponData   UseWeaponData;                                             // 0x0008(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerTickOptions
// 0x0038
struct FEOSAntiCheatCommonLogPlayerTickOptions
{
	unsigned char                                      UnknownData_OQLR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             PlayerHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonVec3f                    PlayerPosition;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonQuat                     PlayerViewRotation;                                        // 0x001C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsPlayerViewZoomed;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55JK[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayerHealth;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonPlayerMovementState    PlayerMovementState;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VJ8[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerReviveOptions
// 0x0018
struct FEOSAntiCheatCommonLogPlayerReviveOptions
{
	unsigned char                                      UnknownData_VXO1[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             RevivedPlayerHandle;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonClientHandle             ReviverPlayerHandle;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerDespawnOptions
// 0x0010
struct FEOSAntiCheatCommonLogPlayerDespawnOptions
{
	unsigned char                                      UnknownData_IQHY[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             DespawnedPlayerHandle;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerSpawnOptions
// 0x0018
struct FEOSAntiCheatCommonLogPlayerSpawnOptions
{
	unsigned char                                      UnknownData_HYV4[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             SpawnedPlayerHandle;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharacterId;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogGameRoundEndOptions
// 0x0008
struct FEOSAntiCheatCommonLogGameRoundEndOptions
{
	unsigned char                                      UnknownData_8RRE[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WinningTeamId;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogGameRoundStartOptions
// 0x0040
struct FEOSAntiCheatCommonLogGameRoundStartOptions
{
	unsigned char                                      UnknownData_IUDN[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionIdentifier;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LevelName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModeName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundTimeSeconds;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3QZ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogEventParamPair
// 0x0018
struct FEOSAntiCheatCommonLogEventParamPair
{
	unsigned char                                      UnknownData_GI11[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonLogEventOptions
// 0x0028
struct FEOSAntiCheatCommonLogEventOptions
{
	unsigned char                                      UnknownData_S6CX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EventId;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIAS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSAntiCheatCommonLogEventParamPair> Params;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonRegisterEventParamDef
// 0x0018
struct FEOSAntiCheatCommonRegisterEventParamDef
{
	struct FString                                     ParamName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonEventParamType         ParamType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWU8[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonRegisterEventOptions
// 0x0030
struct FEOSAntiCheatCommonRegisterEventOptions
{
	unsigned char                                      UnknownData_0VJ3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EventId;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonEventType              EventType;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXS3[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSAntiCheatCommonRegisterEventParamDef> ParamDefs;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonSetGameSessionIdOptions
// 0x0018
struct FEOSAntiCheatCommonSetGameSessionIdOptions
{
	unsigned char                                      UnknownData_85T3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSessionId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSAntiCheatCommonSetClientDetailsOptions
// 0x0018
struct FEOSAntiCheatCommonSetClientDetailsOptions
{
	unsigned char                                      UnknownData_RI6T[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSAntiCheatCommonClientHandle             ClientHandle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientFlags            ClientFlags;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatCommonClientInput            ClientInputMethod;                                         // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T56P[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSCustomInvitesFinalizeInviteOptions
// 0x0060
struct FEOSCustomInvitesFinalizeInviteOptions
{
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0021(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N6DM[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomInviteId;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ProcessingResult;                                          // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3EJU[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSCustomInvitesAddNotifyCustomInviteAcceptedOptions
// 0x0001
struct FEOSCustomInvitesAddNotifyCustomInviteAcceptedOptions
{
	unsigned char                                      UnknownData_1JBN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSCustomInvitesAddNotifyCustomInviteReceivedOptions
// 0x0001
struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions
{
	unsigned char                                      UnknownData_7IZ8[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSCustomInvitesSendCustomInviteOptions
// 0x0038
struct FEOSCustomInvitesSendCustomInviteOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1DCG[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSProductUserId>                   TargetUserIds;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSCustomInvitesSetCustomInviteOptions
// 0x0038
struct FEOSCustomInvitesSetCustomInviteOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B9KU[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Payload;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomTransactionCopyEntitlementByIndexOptions
// 0x0008
struct FEOSEcomTransactionCopyEntitlementByIndexOptions
{
	unsigned char                                      UnknownData_8WAH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntitlementIndex;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomTransactionGetEntitlementsCountOptions
// 0x0028
struct FEOSEcomTransactionGetEntitlementsCountOptions
{
	unsigned char                                      UnknownData_KIR8[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E5CC[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomCopyTransactionByIdOptions
// 0x0038
struct FEOSEcomCopyTransactionByIdOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GCZ9[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TransactionId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyTransactionByIndexOptions
// 0x002C
struct FEOSEcomCopyTransactionByIndexOptions
{
	unsigned char                                      UnknownData_MFYF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMHJ[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TransactionIndex;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomGetTransactionCountOptions
// 0x0028
struct FEOSEcomGetTransactionCountOptions
{
	unsigned char                                      UnknownData_TR08[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K4GK[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomCopyItemReleaseByIndexOptions
// 0x0040
struct FEOSEcomCopyItemReleaseByIndexOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XLB[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReleaseIndex;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5E5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomGetItemReleaseCountOptions
// 0x0038
struct FEOSEcomGetItemReleaseCountOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJZX[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyItemImageInfoByIndexOptions
// 0x0040
struct FEOSEcomCopyItemImageInfoByIndexOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O41V[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ImageInfoIndex;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y0RG[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomGetItemImageInfoCountOptions
// 0x0038
struct FEOSEcomGetItemImageInfoCountOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EB3Q[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyOfferImageInfoByIndexOptions
// 0x0040
struct FEOSEcomCopyOfferImageInfoByIndexOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FR5D[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfferId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ImageInfoIndex;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I6SI[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomGetOfferImageInfoCountOptions
// 0x0038
struct FEOSEcomGetOfferImageInfoCountOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5TQ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfferId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyItemByIdOptions
// 0x0038
struct FEOSEcomCopyItemByIdOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_71R6[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyOfferItemByIndexOptions
// 0x0040
struct FEOSEcomCopyOfferItemByIndexOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZE32[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfferId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemIndex;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IKW[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomGetOfferItemCountOptions
// 0x0038
struct FEOSEcomGetOfferItemCountOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZRI[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfferId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyOfferByIdOptions
// 0x0038
struct FEOSEcomCopyOfferByIdOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_170I[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfferId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyOfferByIndexOptions
// 0x002C
struct FEOSEcomCopyOfferByIndexOptions
{
	unsigned char                                      UnknownData_Z559[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PN6R[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OfferIndex;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomGetOfferCountOptions
// 0x0028
struct FEOSEcomGetOfferCountOptions
{
	unsigned char                                      UnknownData_HOPF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I00Q[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomEntitlementId
// 0x0010
struct FEOSEcomEntitlementId
{
	struct FString                                     EntitlementId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyEntitlementByIdOptions
// 0x0038
struct FEOSEcomCopyEntitlementByIdOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K5DY[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEcomEntitlementId                       EntitlementId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomEntitlementName
// 0x0010
struct FEOSEcomEntitlementName
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCopyEntitlementByNameAndIndexOptions
// 0x0040
struct FEOSEcomCopyEntitlementByNameAndIndexOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DECF[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEcomEntitlementName                     EntitlementName;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQ6A[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomCopyEntitlementByIndexOptions
// 0x002C
struct FEOSEcomCopyEntitlementByIndexOptions
{
	unsigned char                                      UnknownData_QRD5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LL1U[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntitlementIndex;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomGetEntitlementsByNameCountOptions
// 0x0038
struct FEOSEcomGetEntitlementsByNameCountOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MRCT[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEcomEntitlementName                     EntitlementName;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomGetEntitlementsCountOptions
// 0x0028
struct FEOSEcomGetEntitlementsCountOptions
{
	unsigned char                                      UnknownData_5L3T[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGO7[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomRedeemEntitlementsOptions
// 0x0038
struct FEOSEcomRedeemEntitlementsOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AOEJ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSEcomEntitlementId>               EntitlementIds;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCheckoutEntry
// 0x0018
struct FEOSEcomCheckoutEntry
{
	unsigned char                                      UnknownData_OAWS[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfferId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCheckoutOptions
// 0x0048
struct FEOSEcomCheckoutOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IM6J[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OverrideCatalogNamespace;                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSEcomCheckoutEntry>               Entries;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomQueryOffersOptions
// 0x0038
struct FEOSEcomQueryOffersOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UB9D[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OverrideCatalogNamespace;                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomQueryEntitlementsOptions
// 0x0040
struct FEOSEcomQueryEntitlementsOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OWAH[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSEcomEntitlementName>             EntitlementNames;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIncludeRedeemed;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAVR[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomQueryOwnershipTokenOptions
// 0x0050
struct FEOSEcomQueryOwnershipTokenOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62WI[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             CatalogItemIds;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSGA[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CatalogNamespace;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomQueryOwnershipOptions
// 0x0048
struct FEOSEcomQueryOwnershipOptions
{
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LB1Z[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             CatalogItemIds;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     CatalogNamespace;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCatalogRelease
// 0x0040
struct FEOSEcomCatalogRelease
{
	unsigned char                                      UnknownData_UJ08[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             CompatibleAppIds;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGKH[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             CompatiblePlatforms;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ReleaseNote;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomKeyImageInfo
// 0x0030
struct FEOSEcomKeyImageInfo
{
	unsigned char                                      UnknownData_8HQE[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Type;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomCatalogOffer
// 0x00B8
struct FEOSEcomCatalogOffer
{
	unsigned char                                      UnknownData_PS4D[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ServerIndex;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CatalogNamespace;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleText;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DescriptionText;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LongDescriptionText;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TechnicalDetailsText;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  PriceResult;                                               // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49DS[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            OriginalPrice;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            CurrentPrice;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountPercentage;                                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NHMP[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExpirationTimestamp;                                       // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasedCount;                                            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchaseLimit;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAvailableForPurchase;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXYQ[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSEcomCatalogItem
// 0x00A0
struct FEOSEcomCatalogItem
{
	unsigned char                                      UnknownData_RN71[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CatalogNamespace;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomEntitlementName                     EntitlementName;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     TitleText;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DescriptionText;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LongDescriptionText;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TechnicalDetailsText;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeveloperText;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEEcomItemType                          ItemType;                                                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_423W[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EntitlementEndTimestamp;                                   // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomEntitlement
// 0x0050
struct FEOSEcomEntitlement
{
	unsigned char                                      UnknownData_0D39[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEcomEntitlementName                     EntitlementName;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEOSEcomEntitlementId                       EntitlementId;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     CatalogItemId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerIndex;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRedeemed;                                                 // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_93MU[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EndTimestamp;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSEcomHTransaction
// 0x0008
struct FEOSEcomHTransaction
{
	unsigned char                                      UnknownData_H295[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsAddNotifyFriendsUpdateOptions
// 0x0004
struct FEOSFriendsAddNotifyFriendsUpdateOptions
{
	unsigned char                                      UnknownData_E8C0[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsGetStatusOptions
// 0x0048
struct FEOSFriendsGetStatusOptions
{
	unsigned char                                      UnknownData_A9TZ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGK4[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsGetFriendAtIndexOptions
// 0x002C
struct FEOSFriendsGetFriendAtIndexOptions
{
	unsigned char                                      UnknownData_658E[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N684[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSFriendsGetFriendsCountOptions
// 0x0028
struct FEOSFriendsGetFriendsCountOptions
{
	unsigned char                                      UnknownData_D6P9[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NOIR[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsDeleteFriendOptions
// 0x0048
struct FEOSFriendsDeleteFriendOptions
{
	unsigned char                                      UnknownData_WXMC[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0PR[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsRejectInviteOptions
// 0x0048
struct FEOSFriendsRejectInviteOptions
{
	unsigned char                                      UnknownData_MNQ0[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CMWA[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsAcceptInviteOptions
// 0x0048
struct FEOSFriendsAcceptInviteOptions
{
	unsigned char                                      UnknownData_6J88[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30TW[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsSendInviteOptions
// 0x0048
struct FEOSFriendsSendInviteOptions
{
	unsigned char                                      UnknownData_QTOY[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9G7J[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSFriendsQueryFriendsOptions
// 0x0028
struct FEOSFriendsQueryFriendsOptions
{
	unsigned char                                      UnknownData_QUQ5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WFRM[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardRecordByUserIdOptions
// 0x0028
struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions
{
	unsigned char                                      UnknownData_PG3W[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_28DC[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardRecordByIndexOptions
// 0x0008
struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions
{
	unsigned char                                      UnknownData_96TL[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LeaderboardRecordIndex;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsGetLeaderboardRecordCountOptions
// 0x0004
struct FEOSLeaderboardsGetLeaderboardRecordCountOptions
{
	unsigned char                                      UnknownData_EFES[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsLeaderboardRecord
// 0x0040
struct FEOSLeaderboardsLeaderboardRecord
{
	unsigned char                                      UnknownData_KK1S[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUNL[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Rank;                                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserDisplayName;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsQueryLeaderboardRanksOptions
// 0x0040
struct FEOSLeaderboardsQueryLeaderboardRanksOptions
{
	unsigned char                                      UnknownData_RCWK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL23[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions
// 0x0038
struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions
{
	unsigned char                                      UnknownData_171C[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5EPM[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions
// 0x0018
struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions
{
	unsigned char                                      UnknownData_H4BC[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LeaderboardUserScoreIndex;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsGetLeaderboardUserScoreCountOptions
// 0x0018
struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions
{
	unsigned char                                      UnknownData_P3IV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsLeaderboardUserScore
// 0x002C
struct FEOSLeaderboardsLeaderboardUserScore
{
	unsigned char                                      UnknownData_68DT[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RJ92[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Score;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsUserScoresQueryStatInfo
// 0x0020
struct FEOSLeaderboardsUserScoresQueryStatInfo
{
	unsigned char                                      UnknownData_PLNT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELeaderboardAggregation                Aggregation;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5KY9[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsQueryLeaderboardUserScoresOptions
// 0x0070
struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions
{
	unsigned char                                      UnknownData_XXQQ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSProductUserId>                   UserIds;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEOSLeaderboardsUserScoresQueryStatInfo> StatInfo;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StartTime;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0048(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QP8K[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions
// 0x0018
struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions
{
	unsigned char                                      UnknownData_A928[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions
// 0x0008
struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions
{
	unsigned char                                      UnknownData_1I7Z[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LeaderboardIndex;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsGetLeaderboardDefinitionCountOptions
// 0x0004
struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions
{
	unsigned char                                      UnknownData_4HLT[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLeaderboardsDefinition
// 0x0050
struct FEOSLeaderboardsDefinition
{
	unsigned char                                      UnknownData_UCVP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatName;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELeaderboardAggregation                Aggregation;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N9IA[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartTime;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLeaderboardsQueryLeaderboardDefinitionsOptions
// 0x0050
struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions
{
	unsigned char                                      UnknownData_USRV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartTime;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0028(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NEQJ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSHLobbySearch
// 0x0008
struct FEOSHLobbySearch
{
	unsigned char                                      UnknownData_7BA3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySearchCopySearchResultByIndexOptions
// 0x0008
struct FEOSLobbySearchCopySearchResultByIndexOptions
{
	unsigned char                                      UnknownData_11VF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LobbyIndex;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbySearchGetSearchResultCountOptions
// 0x0004
struct FEOSLobbySearchGetSearchResultCountOptions
{
	unsigned char                                      UnknownData_ZUVR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySearchSetMaxResultsOptions
// 0x0008
struct FEOSLobbySearchSetMaxResultsOptions
{
	unsigned char                                      UnknownData_58PB[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxResults;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbySearchRemoveParameterOptions
// 0x0020
struct FEOSLobbySearchRemoveParameterOptions
{
	unsigned char                                      UnknownData_PB2A[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EDD3[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAttributeData
// 0x0028
struct FEOSLobbyAttributeData
{
	unsigned char                                      UnknownData_O4Z3[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySearchSetParameterOptions
// 0x0038
struct FEOSLobbySearchSetParameterOptions
{
	unsigned char                                      UnknownData_CB6F[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSLobbyAttributeData                      Parameter;                                                 // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZK6[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySearchSetTargetUserIdOptions
// 0x0028
struct FEOSLobbySearchSetTargetUserIdOptions
{
	unsigned char                                      UnknownData_FW3R[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8XW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySearchSetLobbyIdOptions
// 0x0010
struct FEOSLobbySearchSetLobbyIdOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbySearchFindOptions
// 0x0028
struct FEOSLobbySearchFindOptions
{
	unsigned char                                      UnknownData_6PEQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEVL[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyDetailsGetMemberByIndexOptions
// 0x0008
struct FEOSLobbyDetailsGetMemberByIndexOptions
{
	unsigned char                                      UnknownData_0C23[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MemberIndex;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDetailsGetMemberCountOptions
// 0x0004
struct FEOSLobbyDetailsGetMemberCountOptions
{
	unsigned char                                      UnknownData_73ZD[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyDetailsCopyMemberAttributeByKeyOptions
// 0x0038
struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions
{
	unsigned char                                      UnknownData_XK4V[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGXV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AttrKey;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDetailsCopyMemberAttributeByIndexOptions
// 0x002C
struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions
{
	unsigned char                                      UnknownData_ZHLO[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANNV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttrIndex;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDetailsGetMemberAttributeCountOptions
// 0x0028
struct FEOSLobbyDetailsGetMemberAttributeCountOptions
{
	unsigned char                                      UnknownData_35H5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDY4[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyDetailsCopyAttributeByKeyOptions
// 0x0018
struct FEOSLobbyDetailsCopyAttributeByKeyOptions
{
	unsigned char                                      UnknownData_OFKP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AttrKey;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDetailsCopyAttributeByIndexOptions
// 0x0008
struct FEOSLobbyDetailsCopyAttributeByIndexOptions
{
	unsigned char                                      UnknownData_ZTGP[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttrIndex;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDetailsGetAttributeCountOptions
// 0x0004
struct FEOSLobbyDetailsGetAttributeCountOptions
{
	unsigned char                                      UnknownData_WUJM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyDetailsCopyInfoOptions
// 0x0004
struct FEOSLobbyDetailsCopyInfoOptions
{
	unsigned char                                      UnknownData_G2VC[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyDetailsGetLobbyOwnerOptions
// 0x0004
struct FEOSLobbyDetailsGetLobbyOwnerOptions
{
	unsigned char                                      UnknownData_1ZQH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyModificationRemoveMemberAttributeOptions
// 0x0018
struct FEOSLobbyModificationRemoveMemberAttributeOptions
{
	unsigned char                                      UnknownData_OY9I[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyModificationAddMemberAttributeOptions
// 0x0038
struct FEOSLobbyModificationAddMemberAttributeOptions
{
	unsigned char                                      UnknownData_KC8R[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSLobbyAttributeData                      Attribute;                                                 // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NQB[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyModificationRemoveAttributeOptions
// 0x0018
struct FEOSLobbyModificationRemoveAttributeOptions
{
	unsigned char                                      UnknownData_D0BX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyModificationAddAttributeOptions
// 0x0038
struct FEOSLobbyModificationAddAttributeOptions
{
	unsigned char                                      UnknownData_OQC3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSLobbyAttributeData                      Attribute;                                                 // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RCUP[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyModificationSetInvitesAllowedOptions
// 0x0008
struct FEOSLobbyModificationSetInvitesAllowedOptions
{
	unsigned char                                      UnknownData_5UP8[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInvitesAllowed;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48OD[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyModificationSetMaxMembersOptions
// 0x0008
struct FEOSLobbyModificationSetMaxMembersOptions
{
	unsigned char                                      UnknownData_LZUO[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxMembers;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyModificationSetPermissionLevelOptions
// 0x0008
struct FEOSLobbyModificationSetPermissionLevelOptions
{
	unsigned char                                      UnknownData_GJH3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSELobbyPermissionLevel                  PermissionLevel;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YR8K[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAttribute
// 0x0038
struct FEOSLobbyAttribute
{
	unsigned char                                      UnknownData_E0RU[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSLobbyAttributeData                      Data;                                                      // 0x0008(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visbility;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JVUB[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyModificationSetBucketIdOptions
// 0x0018
struct FEOSLobbyModificationSetBucketIdOptions
{
	unsigned char                                      UnknownData_QC3A[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BucketId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyCopyLobbyDetailsHandleOptions
// 0x0038
struct FEOSLobbyCopyLobbyDetailsHandleOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53PM[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyGetInviteIdByIndexOptions
// 0x002C
struct FEOSLobbyGetInviteIdByIndexOptions
{
	unsigned char                                      UnknownData_GMRM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6R48[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyGetInviteCountOptions
// 0x0028
struct FEOSLobbyGetInviteCountOptions
{
	unsigned char                                      UnknownData_FI4K[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XF0M[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyQueryInvitesOptions
// 0x0028
struct FEOSLobbyQueryInvitesOptions
{
	unsigned char                                      UnknownData_NNPY[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ITYC[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyRejectInviteOptions
// 0x0040
struct FEOSLobbyRejectInviteOptions
{
	unsigned char                                      UnknownData_1RNC[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0018(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYC1[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbySendInviteOptions
// 0x0058
struct FEOSLobbySendInviteOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MOF5[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyCreateLobbySearchOptions
// 0x0008
struct FEOSLobbyCreateLobbySearchOptions
{
	unsigned char                                      UnknownData_N7XN[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxResults;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyRTCRoomConnectionChangedOptions
// 0x0038
struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SOE[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyIsRTCRoomConnectedOptions
// 0x0038
struct FEOSLobbyIsRTCRoomConnectedOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSV4[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyGetRTCRoomNameOptions
// 0x0038
struct FEOSLobbyGetRTCRoomNameOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L334[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions
// 0x0008
struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions
{
	struct FEOSUIEventId                               UiEventId;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyCopyLobbyDetailsHandleByInviteIdOptions
// 0x0018
struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions
{
	unsigned char                                      UnknownData_NMRM[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InviteId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyJoinLobbyAcceptedOptions
// 0x0004
struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions
{
	unsigned char                                      UnknownData_AYNB[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyInviteAcceptedOptions
// 0x0004
struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions
{
	unsigned char                                      UnknownData_5J57[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyInviteReceivedOptions
// 0x0010
struct FEOSLobbyAddNotifyLobbyInviteReceivedOptions
{
	unsigned char                                      UnknownData_8ZKE[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyMemberStatusReceivedOptions
// 0x0010
struct FEOSLobbyAddNotifyLobbyMemberStatusReceivedOptions
{
	unsigned char                                      UnknownData_DONI[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyMemberUpdateReceivedOptions
// 0x0010
struct FEOSLobbyAddNotifyLobbyMemberUpdateReceivedOptions
{
	unsigned char                                      UnknownData_ATWY[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyUpdateReceivedOptions
// 0x0010
struct FEOSLobbyAddNotifyLobbyUpdateReceivedOptions
{
	unsigned char                                      UnknownData_5BME[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyKickMemberOptions
// 0x0058
struct FEOSLobbyKickMemberOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76MQ[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyPromoteMemberOptions
// 0x0058
struct FEOSLobbyPromoteMemberOptions
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0031(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4DE4[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSHLobbyModification
// 0x0008
struct FEOSHLobbyModification
{
	unsigned char                                      UnknownData_KIDV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyUpdateLobbyOptions
// 0x0010
struct FEOSLobbyUpdateLobbyOptions
{
	unsigned char                                      UnknownData_C4B8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSHLobbyModification                      LobbyModificationHandle;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyUpdateLobbyModificationOptions
// 0x0038
struct FEOSLobbyUpdateLobbyModificationOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P0RB[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyLeaveLobbyOptions
// 0x0038
struct FEOSLobbyLeaveLobbyOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDPQ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHLobbyDetails
// 0x0008
struct FEOSHLobbyDetails
{
	unsigned char                                      UnknownData_5C5L[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyLocalRTCOptions
// 0x0008
struct FEOSLobbyLocalRTCOptions
{
	int                                                Flags;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseManualAudioInput;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseManualAudioOutput;                                     // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalAudioDeviceInputStartsMuted;                         // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBVQ[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyJoinLobbyOptions
// 0x0038
struct FEOSLobbyJoinLobbyOptions
{
	struct FEOSHLobbyDetails                           LobbyDetailsHandle;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPresenceEnabled;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJJE[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSLobbyLocalRTCOptions                    LocalRTCOptions;                                           // 0x002C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5PB0[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSLobbyDestroyLobbyOptions
// 0x0038
struct FEOSLobbyDestroyLobbyOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9QP[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyCreateLobbyOptions
// 0x0060
struct FEOSLobbyCreateLobbyOptions
{
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0000(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TOI2[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxLobbyMembers;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyPermissionLevel                  PermissionLevel;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPresenceEnabled;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XF1P[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BucketId;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableHostMigration;                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRTCRoom;                                            // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EP5C[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSLobbyLocalRTCOptions                    LocalRTCOptions;                                           // 0x0044(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YE4V[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyId;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSLobbyDetailsInfo
// 0x0058
struct FEOSLobbyDetailsInfo
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LobbyOwnerUserId;                                          // 0x0010(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyPermissionLevel                  PermissionLevel;                                           // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKHW[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AvailableSlots;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q0TH[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BucketId;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowHostMigration;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRTCRoomEnabled;                                           // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7H1E[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSMetricsEndPlayerSessionOptions
// 0x0038
struct FEOSMetricsEndPlayerSessionOptions
{
	unsigned char                                      UnknownData_ER7C[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSEMetricsAccountIdType                  AccountIdType;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           Epic;                                                      // 0x0005(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIU1[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     External;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSMetricsBeginPlayerSessionOptions
// 0x0070
struct FEOSMetricsBeginPlayerSessionOptions
{
	unsigned char                                      UnknownData_1LWZ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSEMetricsAccountIdType                  AccountIdType;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           Epic;                                                      // 0x0005(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P043[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     External;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEUserControllerType                    ControllerType;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VMEZ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerIp;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionId;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSModsUpdateModOptions
// 0x0080
struct FEOSModsUpdateModOptions
{
	unsigned char                                      UnknownData_DYOS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZK9R[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSModIdentifier                           Mod;                                                       // 0x0028(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSModsModInfo
// 0x0020
struct FEOSModsModInfo
{
	unsigned char                                      UnknownData_48JP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSModIdentifier>                   Mods;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEModEnumerationType                    Type;                                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5IKM[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSModsCopyModInfoOptions
// 0x0028
struct FEOSModsCopyModInfoOptions
{
	unsigned char                                      UnknownData_S84E[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEModEnumerationType                    Type;                                                      // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R3H3[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSModsEnumerateModsOptions
// 0x0028
struct FEOSModsEnumerateModsOptions
{
	unsigned char                                      UnknownData_ENIS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEModEnumerationType                    Type;                                                      // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3AYQ[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSModsUninstallModOptions
// 0x0080
struct FEOSModsUninstallModOptions
{
	unsigned char                                      UnknownData_94ZQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_461W[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSModIdentifier                           Mod;                                                       // 0x0028(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSModsInstallModOptions
// 0x0088
struct FEOSModsInstallModOptions
{
	unsigned char                                      UnknownData_QB0Y[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIVX[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSModIdentifier                           Mod;                                                       // 0x0028(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bRemoveAfterExit;                                          // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_384A[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PAddNotifyIncomingPacketQueueFullOptions
// 0x0004
struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions
{
	unsigned char                                      UnknownData_5GA5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PPacketQueueInfo
// 0x0060
struct FEOSP2PPacketQueueInfo
{
	struct FString                                     IncomingPacketQueueMaxSizeBytes;                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IncomingPacketQueueCurrentSizeBytes;                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IncomingPacketQueueCurrentPacketCount;                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutgoingPacketQueueMaxSizeBytes;                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutgoingPacketQueueCurrentSizeBytes;                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutgoingPacketQueueCurrentPacketCount;                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PGetPacketQueueInfoOptions
// 0x0004
struct FEOSP2PGetPacketQueueInfoOptions
{
	unsigned char                                      UnknownData_C6LR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PSetPacketQueueSizeOptions
// 0x0028
struct FEOSP2PSetPacketQueueSizeOptions
{
	unsigned char                                      UnknownData_I0B4[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IncomingPacketQueueMaxSizeBytes;                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutgoingPacketQueueMaxSizeBytes;                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PGetPortRangeOptions
// 0x0004
struct FEOSP2PGetPortRangeOptions
{
	unsigned char                                      UnknownData_53YQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PSetPortRangeOptions
// 0x000C
struct FEOSP2PSetPortRangeOptions
{
	unsigned char                                      UnknownData_392V[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Port;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAdditionalPortsToTry;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PGetRelayControlOptions
// 0x0004
struct FEOSP2PGetRelayControlOptions
{
	unsigned char                                      UnknownData_Y5PH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PSetRelayControlOptions
// 0x0008
struct FEOSP2PSetRelayControlOptions
{
	unsigned char                                      UnknownData_CB65[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSERelayControl                          RelayControl;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6MTI[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PGetNATTypeOptions
// 0x0004
struct FEOSP2PGetNATTypeOptions
{
	unsigned char                                      UnknownData_L7C6[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PQueryNATTypeOptions
// 0x0004
struct FEOSP2PQueryNATTypeOptions
{
	unsigned char                                      UnknownData_Q1PG[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSP2PCloseConnectionsOptions
// 0x0040
struct FEOSP2PCloseConnectionsOptions
{
	unsigned char                                      UnknownData_MA82[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ARLK[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PCloseConnectionOptions
// 0x0060
struct FEOSP2PCloseConnectionOptions
{
	unsigned char                                      UnknownData_Y33G[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           RemoteUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BZT[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PAcceptConnectionOptions
// 0x0060
struct FEOSP2PAcceptConnectionOptions
{
	unsigned char                                      UnknownData_ZXII[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           RemoteUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A0CD[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSP2PAddNotifyPeerConnectionClosedOptions
// 0x0040
struct FEOSP2PAddNotifyPeerConnectionClosedOptions
{
	unsigned char                                      UnknownData_4B80[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2TLU[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSP2PSocketId                             SocketId;                                                  // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSStatsGetStatCountOptions
// 0x0028
struct FEOSStatsGetStatCountOptions
{
	unsigned char                                      UnknownData_7HLS[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8W5G[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsStat
// 0x0040
struct FEOSStatsStat
{
	unsigned char                                      UnknownData_6NE8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartTime;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CC6U[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsQueryStatsOptions
// 0x0080
struct FEOSStatsQueryStatsOptions
{
	unsigned char                                      UnknownData_YFW8[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BO41[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartTime;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StatNames;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKFR[0x4];                                     // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x005C(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QG82[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsIngestData
// 0x0020
struct FEOSStatsIngestData
{
	unsigned char                                      UnknownData_HB4W[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IngestAmount;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9L6N[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSStatsIngestStatOptions
// 0x0060
struct FEOSStatsIngestStatOptions
{
	unsigned char                                      UnknownData_ZK1N[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NF2U[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEOSStatsIngestData>                 Stats;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KM43[0x4];                                     // 0x0038(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           TargetUserId;                                              // 0x003C(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A7FU[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageDeleteCacheOptions
// 0x0028
struct FEOSTitleStorageDeleteCacheOptions
{
	unsigned char                                      UnknownData_M9TV[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWR6[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageReadFileOptions
// 0x0058
struct FEOSTitleStorageReadFileOptions
{
	unsigned char                                      UnknownData_EEM1[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SL9M[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SaveFileName;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJI1[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageReadFileDataCallbackInfo
// 0x0058
struct FEOSTitleStorageReadFileDataCallbackInfo
{
	unsigned char                                      UnknownData_ME1J[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5JJ9[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFileSizeBytes;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLastChunk;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1KFD[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataChunkLengthBytes;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_24JJ[0xC];                                     // 0x004C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageCopyFileMetadataByFilenameOptions
// 0x0038
struct FEOSTitleStorageCopyFileMetadataByFilenameOptions
{
	unsigned char                                      UnknownData_NRU1[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZO75[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageCopyFileMetadataAtIndexOptions
// 0x002C
struct FEOSTitleStorageCopyFileMetadataAtIndexOptions
{
	unsigned char                                      UnknownData_WDDV[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PNT9[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageGetFileMetadataCountOptions
// 0x0028
struct FEOSTitleStorageGetFileMetadataCountOptions
{
	unsigned char                                      UnknownData_MC5I[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DF82[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageQueryFileListOptions
// 0x0038
struct FEOSTitleStorageQueryFileListOptions
{
	unsigned char                                      UnknownData_TAUR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MONY[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ListOfTags;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageQueryFileOptions
// 0x0038
struct FEOSTitleStorageQueryFileOptions
{
	unsigned char                                      UnknownData_KJ6Z[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F37N[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Filename;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSTitleStorageFileMetadata
// 0x0028
struct FEOSTitleStorageFileMetadata
{
	unsigned char                                      UnknownData_QEXR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FileSizeBytes;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MD5Hash;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSPageQuery
// 0x000C
struct FEOSPageQuery
{
	unsigned char                                      UnknownData_RSR8[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartIndex;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSHRTCAudio
// 0x0008
struct FEOSHRTCAudio
{
	unsigned char                                      UnknownData_I7M0[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSTitleStorageFileTransferRequestHandle
// 0x0008
struct FEOSTitleStorageFileTransferRequestHandle
{
	unsigned char                                      UnknownData_KN76[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIAddNotifyDisplaySettingsUpdatedOptions
// 0x0004
struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions
{
	unsigned char                                      UnknownData_MABH[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIAcknowledgeEventIdOptions
// 0x0018
struct FEOSUIAcknowledgeEventIdOptions
{
	unsigned char                                      UnknownData_05IV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSUIEventId                               UiEventId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  Result;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQ3V[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUISetDisplayPreferenceOptions
// 0x0008
struct FEOSUISetDisplayPreferenceOptions
{
	unsigned char                                      UnknownData_7J1A[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSUIENotificationLocation                NotificationLocation;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JK6I[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIGetToggleFriendsKeyOptions
// 0x0004
struct FEOSUIGetToggleFriendsKeyOptions
{
	unsigned char                                      UnknownData_1T9R[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUISetToggleFriendsKeyOptions
// 0x0008
struct FEOSUISetToggleFriendsKeyOptions
{
	unsigned char                                      UnknownData_XF9B[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                keyCombination;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUIGetFriendsVisibleOptions
// 0x0028
struct FEOSUIGetFriendsVisibleOptions
{
	unsigned char                                      UnknownData_Z5EX[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W7AG[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIHideFriendsOptions
// 0x0028
struct FEOSUIHideFriendsOptions
{
	unsigned char                                      UnknownData_V0OJ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VW1Y[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUIShowFriendsOptions
// 0x0028
struct FEOSUIShowFriendsOptions
{
	unsigned char                                      UnknownData_4ZRE[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GTYU[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfoCopyExternalUserInfoByAccountIdOptions
// 0x0058
struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions
{
	unsigned char                                      UnknownData_8A13[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Q6Q[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountId;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserInfoCopyExternalUserInfoByAccountTypeOptions
// 0x0048
struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions
{
	unsigned char                                      UnknownData_U1R7[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountType;                                               // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GBJI[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfoCopyExternalUserInfoByIndexOptions
// 0x004C
struct FEOSUserInfoCopyExternalUserInfoByIndexOptions
{
	unsigned char                                      UnknownData_73FB[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NJWD[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserInfoGetExternalUserInfoCountOptions
// 0x0048
struct FEOSUserInfoGetExternalUserInfoCountOptions
{
	unsigned char                                      UnknownData_NTP1[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXPH[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfoExternalUserInfo
// 0x0028
struct FEOSUserInfoExternalUserInfo
{
	unsigned char                                      UnknownData_F4S7[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	EOSCore_EEOSEExternalAccountType                   AccountType;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TBV[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserInfoCopyUserInfoOptions
// 0x0048
struct FEOSUserInfoCopyUserInfoOptions
{
	unsigned char                                      UnknownData_3674[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZSZ[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfo
// 0x0068
struct FEOSUserInfo
{
	unsigned char                                      UnknownData_KVSU[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           UserId;                                                    // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3PI[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Country;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreferredLanguage;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Nickname;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByExternalAccountOptions
// 0x0040
struct FEOSUserInfoQueryUserInfoByExternalAccountOptions
{
	unsigned char                                      UnknownData_WHHQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_117U[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExternalAccountId;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalAccountType                   AccountType;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZ4N[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByDisplayNameOptions
// 0x0038
struct FEOSUserInfoQueryUserInfoByDisplayNameOptions
{
	unsigned char                                      UnknownData_29ZI[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZAV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EOSCore.EOSUserInfoQueryUserInfoOptions
// 0x0048
struct FEOSUserInfoQueryUserInfoOptions
{
	unsigned char                                      UnknownData_LCAZ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0004(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           TargetUserId;                                              // 0x0025(0x0021) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7RQG[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
