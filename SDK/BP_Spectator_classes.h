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

// BlueprintGeneratedClass BP_Spectator.BP_Spectator_C
// 0x00F1 (FullSize[0x0371] - InheritedSize[0x0280])
class ABP_Spectator_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoipManagerComponent*                       VoipManager;                                               // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Sphere1;                                                   // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Sphere;                                                    // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundChatSounds_C*                          SoundChatSounds;                                           // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlarmsWidgetSize_C*                         AlarmsWidgetSize;                                          // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFootprintComponent_C*                       FootprintComponent;                                        // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UATPCCameraComponent*                        ATPCCamera;                                                // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_distance_53E7CC384B3361E71E46DB96F09DA0D2;      // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_53E7CC384B3361E71E46DB96F09DA0D2;    // 0x02DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K7EL[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerIndex;                                               // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2IIS[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SelectedActor;                                             // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Block_;                                                    // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowVoice;                                                // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DBGJ[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoipAudioComponent*                         VoipAudio;                                                 // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               VoiceActive_;                                              // 0x0308(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_84H2[0x7];                                     // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       MyCharForIgnore;                                           // 0x0310(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD_PropHunt_C*                             As_HUD_Prop_Hunt;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              XAxis;                                                     // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YAxis;                                                     // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                            // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CustomOffset;                                              // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StandartOffset;                                            // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sensivity;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               YaNajalNaknopky;                                           // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9UHK[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ProgBarTimer;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         As_Survivor_Master_BP;                                     // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialVignette2;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialBlur;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Invert_Mouse_Y_;                                           // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spectator.BP_Spectator_C");
		return ptr;
	}



	void SetAvatarsToBanner(class UW_Banner_C* Banner, class ASurvivorMasterBP_C* Survivor);
	void GetNext_IgnoreMeStart(class ASurvivorMasterBP_C** Survivor, class USceneComponent** DefaultPointProp, class AKillerMasterBP_C** Killer);
	void GetPrevProphunt(class AActor** Ac, class USceneComponent** DefaultPointProp);
	void GetNextProphunt(class APawn** Player, class USceneComponent** DefaultPointProp);
	void GetPrev(class AActor** Ac, class USceneComponent** DefaultPointProp);
	void GetNext(class ASurvivorMasterBP_C** Survivor, class USceneComponent** DefaultPointProp, class AKillerMasterBP_C** Killer);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_Previous_Player_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Next_Player_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void _Pick_Up_Survivor_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void NicknameRotationUpdate();
	void ReceiveTick(float DeltaSeconds);
	void NextSurvCustomChange();
	void DetachAndFade();
	void SwitchSpectator(bool Spectating_);
	void EndSpectate();
	void ExitColl();
	void ReceivePossessed(class AController* NewController);
	void InitVoice();
	void BndEvt__VoipManager_K2Node_ComponentBoundEvent_4_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel);
	void ServVoiceProc(TArray<unsigned char> CompressedVoiceData);
	void ReceiveVoice(TArray<unsigned char> CompressedVoiceData);
	void SendVoiceStatusServer(bool VoiceActive_);
	void ReceiveDestroyed();
	void ExecuteE();
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
	void CameraChair();
	void SurvOnChairCamera();
	void GetNameSurvWidget();
	void ClientDestroySpectatorUI();
	void SelfHelp_MULTI();
	void SelfHelp_SERV();
	void ProgressBar();
	void StartProgressbar();
	void CamShake();
	void ExecuteUbergraph_BP_Spectator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
