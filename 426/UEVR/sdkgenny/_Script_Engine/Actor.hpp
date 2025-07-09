#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct InputComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ActorComponent;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Actor : public _Script_CoreUObject::Object {
    private: char pad_28[0x1f8]; public:
    void* get_PrimaryActorTick();
    bool get_bNetTemporary();
    void set_bNetTemporary(bool value);
    bool get_bNetStartup();
    void set_bNetStartup(bool value);
    bool get_bOnlyRelevantToOwner();
    void set_bOnlyRelevantToOwner(bool value);
    bool get_bAlwaysRelevant();
    void set_bAlwaysRelevant(bool value);
    bool get_bReplicateMovement();
    void set_bReplicateMovement(bool value);
    bool get_bHidden();
    void set_bHidden(bool value);
    bool get_bTearOff();
    void set_bTearOff(bool value);
    bool get_bExchangedRoles();
    void set_bExchangedRoles(bool value);
    bool get_bNetLoadOnClient();
    void set_bNetLoadOnClient(bool value);
    bool get_bNetUseOwnerRelevancy();
    void set_bNetUseOwnerRelevancy(bool value);
    bool get_bRelevantForNetworkReplays();
    void set_bRelevantForNetworkReplays(bool value);
    bool get_bRelevantForLevelBounds();
    void set_bRelevantForLevelBounds(bool value);
    bool get_bReplayRewindable();
    void set_bReplayRewindable(bool value);
    bool get_bAllowTickBeforeBeginPlay();
    void set_bAllowTickBeforeBeginPlay(bool value);
    bool get_bAutoDestroyWhenFinished();
    void set_bAutoDestroyWhenFinished(bool value);
    bool get_bCanBeDamaged();
    void set_bCanBeDamaged(bool value);
    bool get_bBlockInput();
    void set_bBlockInput(bool value);
    bool get_bCollideWhenPlacing();
    void set_bCollideWhenPlacing(bool value);
    bool get_bFindCameraComponentWhenViewTarget();
    void set_bFindCameraComponentWhenViewTarget(bool value);
    bool get_bGenerateOverlapEventsDuringLevelStreaming();
    void set_bGenerateOverlapEventsDuringLevelStreaming(bool value);
    bool get_bIgnoresOriginShifting();
    void set_bIgnoresOriginShifting(bool value);
    bool get_bEnableAutoLODGeneration();
    void set_bEnableAutoLODGeneration(bool value);
    bool get_bIsEditorOnlyActor();
    void set_bIsEditorOnlyActor(bool value);
    bool get_bActorSeamlessTraveled();
    void set_bActorSeamlessTraveled(bool value);
    bool get_bReplicates();
    void set_bReplicates(bool value);
    bool get_bCanBeInCluster();
    void set_bCanBeInCluster(bool value);
    bool get_bAllowReceiveTickEventOnDedicatedServer();
    void set_bAllowReceiveTickEventOnDedicatedServer(bool value);
    bool get_bActorEnableCollision();
    void set_bActorEnableCollision(bool value);
    bool get_bActorIsBeingDestroyed();
    void set_bActorIsBeingDestroyed(bool value);
    void* get_UpdateOverlapsMethodDuringLevelStreaming();
    void* get_DefaultUpdateOverlapsMethodDuringLevelStreaming();
    void* get_RemoteRole();
    void* get_ReplicatedMovement();
    float& get_InitialLifeSpan();
    float& get_CustomTimeDilation();
    void* get_AttachmentReplication();
    _Script_Engine::Actor*& get_Owner();
    void* get_NetDriverName();
    void* get_Role();
    void* get_NetDormancy();
    void* get_SpawnCollisionHandlingMethod();
    void* get_AutoReceiveInput();
    int32_t& get_InputPriority();
    _Script_Engine::InputComponent*& get_InputComponent();
    float& get_NetCullDistanceSquared();
    int32_t& get_NetTag();
    float& get_NetUpdateFrequency();
    float& get_MinNetUpdateFrequency();
    float& get_NetPriority();
    _Script_Engine::Pawn*& get_Instigator();
    void* get_Children();
    _Script_Engine::SceneComponent*& get_RootComponent();
    void* get_ControllingMatineeActors();
    void* get_Layers();
    void* get_ParentComponent();
    void* get_Tags();
    void* get_OnTakeAnyDamage();
    void* get_OnTakePointDamage();
    void* get_OnTakeRadialDamage();
    void* get_OnActorBeginOverlap();
    void* get_OnActorEndOverlap();
    void* get_OnBeginCursorOver();
    void* get_OnEndCursorOver();
    void* get_OnClicked();
    void* get_OnReleased();
    void* get_OnInputTouchBegin();
    void* get_OnInputTouchEnd();
    void* get_OnInputTouchEnter();
    void* get_OnInputTouchLeave();
    void* get_OnActorHit();
    void* get_OnDestroyed();
    void* get_OnEndPlay();
    void* get_InstanceComponents();
    void* get_BlueprintCreatedComponents();
    static _Script_CoreUObject::Class* static_class();
    bool WasRecentlyRendered(float Tolerance);
    void UserConstructionScript();
    void TearOff();
    void SnapRootComponentTo(_Script_Engine::Actor* InParentActor, void* InSocketName);
    void SetTickGroup(void* NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetReplicates(bool bInReplicates);
    void SetReplicateMovement(bool bInReplicateMovement);
    void SetOwner(_Script_Engine::Actor* NewOwner);
    void SetNetDormancy(void* NewDormancy);
    void SetLifeSpan(float InLifespan);
    void SetAutoDestroyWhenFinished(bool bVal);
    void SetActorTickInterval(float TickInterval);
    void SetActorTickEnabled(bool bEnabled);
    void SetActorScale3D(_Script_CoreUObject::Vector NewScale3D);
    void SetActorRelativeScale3D(_Script_CoreUObject::Vector NewRelativeScale);
    void SetActorHiddenInGame(bool bNewHidden);
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    void RemoveTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveRadialDamage(float DamageReceived, _Script_Engine::DamageType* DamageType, _Script_CoreUObject::Vector Origin, _Script_Engine::HitResult& HitInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void ReceivePointDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_Engine::PrimitiveComponent* HitComponent, void* BoneName, _Script_CoreUObject::Vector ShotFromDirection, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser, _Script_Engine::HitResult& HitInfo);
    void ReceiveHit(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void ReceiveEndPlay(void* EndPlayReason);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void ReceiveActorOnReleased(_Script_InputCore::Key ButtonReleased);
    void ReceiveActorOnInputTouchLeave(void* FingerIndex);
    void ReceiveActorOnInputTouchEnter(void* FingerIndex);
    void ReceiveActorOnInputTouchEnd(void* FingerIndex);
    void ReceiveActorOnInputTouchBegin(void* FingerIndex);
    void ReceiveActorOnClicked(_Script_InputCore::Key ButtonPressed);
    void ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveActorEndCursorOver();
    void ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveActorBeginCursorOver();
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups);
    void OnRep_ReplicateMovement();
    void OnRep_ReplicatedMovement();
    void OnRep_Owner();
    void OnRep_Instigator();
    void OnRep_AttachmentReplication();
    void MakeNoise(float Loudness, _Script_Engine::Pawn* NoiseInstigator, _Script_CoreUObject::Vector NoiseLocation, float MaxRange, void* Tag);
    _Script_Engine::MaterialInstanceDynamic* MakeMIDForMaterial(_Script_Engine::MaterialInterface* Parent);
    bool K2_TeleportTo(_Script_CoreUObject::Vector DestLocation, _Script_CoreUObject::Rotator DestRotation);
    bool K2_SetActorTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorRotation(_Script_CoreUObject::Rotator NewRotation, bool bTeleportPhysics);
    void K2_SetActorRelativeTransform(_Script_CoreUObject::Transform& NewRelativeTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeRotation(_Script_CoreUObject::Rotator NewRelativeRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeLocation(_Script_CoreUObject::Vector NewRelativeLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocation(_Script_CoreUObject::Vector NewLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_OnReset();
    void K2_OnEndViewTarget(_Script_Engine::PlayerController* PC);
    void K2_OnBecomeViewTarget(_Script_Engine::PlayerController* PC);
    _Script_Engine::SceneComponent* K2_GetRootComponent();
    void* K2_GetComponentsByClass(void* ComponentClass);
    _Script_CoreUObject::Rotator K2_GetActorRotation();
    _Script_CoreUObject::Vector K2_GetActorLocation();
    void K2_DetachFromActor(void* LocationRule, void* RotationRule, void* ScaleRule);
    void K2_DestroyComponent(_Script_Engine::ActorComponent* Component);
    void K2_DestroyActor();
    void K2_AttachToComponent(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachToActor(_Script_Engine::Actor* ParentActor, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentToActor(_Script_Engine::Actor* InParentActor, void* InSocketName, void* AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentTo(_Script_Engine::SceneComponent* InParent, void* InSocketName, void* AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AddActorWorldTransformKeepScale(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldTransform(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    bool IsOverlappingActor(_Script_Engine::Actor* Other);
    bool IsChildActor();
    bool IsActorTickEnabled();
    bool IsActorBeingDestroyed();
    bool HasAuthority();
    float GetVerticalDistanceTo(_Script_Engine::Actor* OtherActor);
    _Script_CoreUObject::Vector GetVelocity();
    _Script_CoreUObject::Transform GetTransform();
    bool GetTickableWhenPaused();
    float GetSquaredDistanceTo(_Script_Engine::Actor* OtherActor);
    void* GetRemoteRole();
    _Script_Engine::ChildActorComponent* GetParentComponent();
    _Script_Engine::Actor* GetParentActor();
    _Script_Engine::Actor* GetOwner();
    void GetOverlappingComponents(void*& OverlappingComponents);
    void GetOverlappingActors(void*& OverlappingActors, void* ClassFilter);
    void* GetLocalRole();
    float GetLifeSpan();
    _Script_Engine::Controller* GetInstigatorController();
    _Script_Engine::Pawn* GetInstigator();
    _Script_CoreUObject::Vector GetInputVectorAxisValue(_Script_InputCore::Key InputAxisKey);
    float GetInputAxisValue(void* InputAxisName);
    float GetInputAxisKeyValue(_Script_InputCore::Key InputAxisKey);
    float GetHorizontalDotProductTo(_Script_Engine::Actor* OtherActor);
    float GetHorizontalDistanceTo(_Script_Engine::Actor* OtherActor);
    float GetGameTimeSinceCreation();
    float GetDotProductTo(_Script_Engine::Actor* OtherActor);
    float GetDistanceTo(_Script_Engine::Actor* OtherActor);
    void* GetComponentsByTag(void* ComponentClass, void* Tag);
    void* GetComponentsByInterface(void* Interface);
    _Script_Engine::ActorComponent* GetComponentByClass(void* ComponentClass);
    void* GetAttachParentSocketName();
    _Script_Engine::Actor* GetAttachParentActor();
    void GetAttachedActors(void*& OutActors, bool bResetArray);
    void GetAllChildActors(void*& ChildActors, bool bIncludeDescendants);
    _Script_CoreUObject::Vector GetActorUpVector();
    float GetActorTimeDilation();
    float GetActorTickInterval();
    _Script_CoreUObject::Vector GetActorScale3D();
    _Script_CoreUObject::Vector GetActorRightVector();
    _Script_CoreUObject::Vector GetActorRelativeScale3D();
    _Script_CoreUObject::Vector GetActorForwardVector();
    void GetActorEyesViewPoint(_Script_CoreUObject::Vector& OutLocation, _Script_CoreUObject::Rotator& OutRotation);
    bool GetActorEnableCollision();
    void GetActorBounds(bool bOnlyCollidingComponents, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& BoxExtent, bool bIncludeFromChildActors);
    void ForceNetUpdate();
    void FlushNetDormancy();
    void FinishAddComponent(_Script_Engine::ActorComponent* Component, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform);
    void EnableInput(_Script_Engine::PlayerController* PlayerController);
    void DisableInput(_Script_Engine::PlayerController* PlayerController);
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    void AddTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor);
    _Script_Engine::ActorComponent* AddComponentByClass(void* Class, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, bool bDeferredFinish);
    _Script_Engine::ActorComponent* AddComponent(void* TemplateName, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_CoreUObject::Object* ComponentTemplateContext, bool bDeferredFinish);
    bool ActorHasTag(void* Tag);
}; // Size: 0x220
#pragma pack(pop)
}
