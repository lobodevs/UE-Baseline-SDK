#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "MarkerSyncAnimPosition.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PoseSnapshot;
}
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimInstance : public _Script_CoreUObject::Object {
    private: char pad_28[0x298]; public:
    _Script_Engine::Skeleton*& get_CurrentSkeleton();
    void* get_RootMotionMode();
    bool get_bUseMultiThreadedAnimationUpdate();
    void set_bUseMultiThreadedAnimationUpdate(bool value);
    bool get_bUsingCopyPoseFromMesh();
    void set_bUsingCopyPoseFromMesh(bool value);
    bool get_bReceiveNotifiesFromLinkedInstances();
    void set_bReceiveNotifiesFromLinkedInstances(bool value);
    bool get_bPropagateNotifiesToLinkedInstances();
    void set_bPropagateNotifiesToLinkedInstances(bool value);
    bool get_bQueueMontageEvents();
    void set_bQueueMontageEvents(bool value);
    void* get_OnMontageBlendingOut();
    void* get_OnMontageStarted();
    void* get_OnMontageEnded();
    void* get_OnAllMontageInstancesEnded();
    void* get_NotifyQueue();
    void* get_ActiveAnimNotifyState();
    static _Script_CoreUObject::Class* static_class();
    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    void UnlinkAnimClassLayers(void* InClass);
    _Script_Engine::Pawn* TryGetPawnOwner();
    void StopSlotAnimation(float InBlendOutTime, void* SlotNodeName);
    void SnapshotPose(_Script_Engine::PoseSnapshot& Snapshot);
    void SetRootMotionMode(void* Value);
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);
    void SetPropagateNotifiesToLinkedInstances(bool bSet);
    void SetMorphTarget(void* MorphTargetName, float Value);
    void SavePoseSnapshot(void* SnapshotName);
    void ResetDynamics(void* InTeleportType);
    _Script_Engine::AnimMontage* PlaySlotAnimationAsDynamicMontage(_Script_Engine::AnimSequenceBase* Asset, void* SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    float PlaySlotAnimation(_Script_Engine::AnimSequenceBase* Asset, void* SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount);
    void Montage_StopGroupByName(float InBlendOutTime, void* GroupName);
    void Montage_Stop(float InBlendOutTime, _Script_Engine::AnimMontage* Montage);
    void Montage_SetPosition(_Script_Engine::AnimMontage* Montage, float NewPosition);
    void Montage_SetPlayRate(_Script_Engine::AnimMontage* Montage, float NewPlayRate);
    void Montage_SetNextSection(void* SectionNameToChange, void* NextSection, _Script_Engine::AnimMontage* Montage);
    void Montage_Resume(_Script_Engine::AnimMontage* Montage);
    float Montage_Play(_Script_Engine::AnimMontage* MontageToPlay, float InPlayRate, void* ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    void Montage_Pause(_Script_Engine::AnimMontage* Montage);
    void Montage_JumpToSectionsEnd(void* SectionName, _Script_Engine::AnimMontage* Montage);
    void Montage_JumpToSection(void* SectionName, _Script_Engine::AnimMontage* Montage);
    bool Montage_IsPlaying(_Script_Engine::AnimMontage* Montage);
    bool Montage_IsActive(_Script_Engine::AnimMontage* Montage);
    float Montage_GetPosition(_Script_Engine::AnimMontage* Montage);
    float Montage_GetPlayRate(_Script_Engine::AnimMontage* Montage);
    bool Montage_GetIsStopped(_Script_Engine::AnimMontage* Montage);
    void* Montage_GetCurrentSection(_Script_Engine::AnimMontage* Montage);
    float Montage_GetBlendTime(_Script_Engine::AnimMontage* Montage);
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    void LinkAnimGraphByTag(void* InTag, void* InClass);
    void LinkAnimClassLayers(void* InClass);
    bool IsSyncGroupBetweenMarkers(void* InSyncGroupName, void* PreviousMarker, void* NextMarker, bool bRespectMarkerOrder);
    bool IsPlayingSlotAnimation(_Script_Engine::AnimSequenceBase* Asset, void* SlotNodeName);
    bool IsAnyMontagePlaying();
    bool HasMarkerBeenHitThisFrame(void* SyncGroup, void* MarkerName);
    bool GetTimeToClosestMarker(void* SyncGroup, void* MarkerName, float& OutMarkerTime);
    _Script_Engine::MarkerSyncAnimPosition GetSyncGroupPosition(void* InSyncGroupName);
    float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex);
    float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex);
    bool GetReceiveNotifiesFromLinkedInstances();
    bool GetPropagateNotifiesToLinkedInstances();
    _Script_Engine::SkeletalMeshComponent* GetOwningComponent();
    _Script_Engine::Actor* GetOwningActor();
    void GetLinkedAnimLayerInstancesByGroup(void* InGroup, void*& OutLinkedInstances);
    _Script_Engine::AnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(void* InGroup, void* InClass);
    _Script_Engine::AnimInstance* GetLinkedAnimLayerInstanceByGroup(void* InGroup);
    _Script_Engine::AnimInstance* GetLinkedAnimLayerInstanceByClass(void* InClass);
    void GetLinkedAnimGraphInstancesByTag(void* InTag, void*& OutLinkedInstances);
    _Script_Engine::AnimInstance* GetLinkedAnimGraphInstanceByTag(void* InTag);
    float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex);
    float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex);
    float GetInstanceMachineWeight(int32_t MachineIndex);
    float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex);
    float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex);
    float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex);
    float GetCurveValue(void* CurveName);
    void* GetCurrentStateName(int32_t MachineIndex);
    _Script_Engine::AnimMontage* GetCurrentActiveMontage();
    void GetAllCurveNames(void*& OutNames);
    void GetActiveCurveNames(void* CurveType, void*& OutNames);
    void ClearMorphTargets();
    float CalculateDirection(_Script_CoreUObject::Vector& Velocity, _Script_CoreUObject::Rotator& BaseRotation);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintPostEvaluateAnimation();
    void BlueprintLinkedAnimationLayersInitialized();
    void BlueprintInitializeAnimation();
    void BlueprintBeginPlay();
}; // Size: 0x2c0
#pragma pack(pop)
}
