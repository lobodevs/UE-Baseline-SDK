#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SkinnedMeshComponent.hpp"
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_ClothingSystemRuntimeInterface {
struct ClothingSimulationInteractor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PoseSnapshot;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshComponent : public SkinnedMeshComponent {
    private: char pad_690[0x840]; public:
    void* get_AnimBlueprintGeneratedClass();
    void* get_AnimClass();
    _Script_Engine::AnimInstance*& get_AnimScriptInstance();
    _Script_Engine::AnimInstance*& get_PostProcessAnimInstance();
    void* get_AnimationData();
    void* get_RootBoneTranslation();
    void* get_LineCheckBoundsScale();
    void* get_LinkedInstances();
    void* get_CachedBoneSpaceTransforms();
    void* get_CachedComponentSpaceTransforms();
    float& get_GlobalAnimRateScale();
    void* get_KinematicBonesUpdateType();
    void* get_PhysicsTransformUpdateMode();
    void* get_AnimationMode();
    bool get_bDisablePostProcessBlueprint();
    void set_bDisablePostProcessBlueprint(bool value);
    bool get_bUpdateOverlapsOnAnimationFinalize();
    void set_bUpdateOverlapsOnAnimationFinalize(bool value);
    bool get_bHasValidBodies();
    void set_bHasValidBodies(bool value);
    bool get_bBlendPhysics();
    void set_bBlendPhysics(bool value);
    bool get_bEnablePhysicsOnDedicatedServer();
    void set_bEnablePhysicsOnDedicatedServer(bool value);
    bool get_bUpdateJointsFromAnimation();
    void set_bUpdateJointsFromAnimation(bool value);
    bool get_bDisableClothSimulation();
    void set_bDisableClothSimulation(bool value);
    bool get_bDisableRigidBodyAnimNode();
    void set_bDisableRigidBodyAnimNode(bool value);
    bool get_bAllowAnimCurveEvaluation();
    void set_bAllowAnimCurveEvaluation(bool value);
    bool get_bDisableAnimCurves();
    void set_bDisableAnimCurves(bool value);
    bool get_bCollideWithEnvironment();
    void set_bCollideWithEnvironment(bool value);
    bool get_bCollideWithAttachedChildren();
    void set_bCollideWithAttachedChildren(bool value);
    bool get_bLocalSpaceSimulation();
    void set_bLocalSpaceSimulation(bool value);
    bool get_bResetAfterTeleport();
    void set_bResetAfterTeleport(bool value);
    bool get_bDeferKinematicBoneUpdate();
    void set_bDeferKinematicBoneUpdate(bool value);
    bool get_bNoSkeletonUpdate();
    void set_bNoSkeletonUpdate(bool value);
    bool get_bPauseAnims();
    void set_bPauseAnims(bool value);
    bool get_bUseRefPoseOnInitAnim();
    void set_bUseRefPoseOnInitAnim(bool value);
    bool get_bEnablePerPolyCollision();
    void set_bEnablePerPolyCollision(bool value);
    bool get_bForceRefpose();
    void set_bForceRefpose(bool value);
    bool get_bOnlyAllowAutonomousTickPose();
    void set_bOnlyAllowAutonomousTickPose(bool value);
    bool get_bIsAutonomousTickPose();
    void set_bIsAutonomousTickPose(bool value);
    bool get_bOldForceRefPose();
    void set_bOldForceRefPose(bool value);
    bool get_bShowPrePhysBones();
    void set_bShowPrePhysBones(bool value);
    bool get_bRequiredBonesUpToDate();
    void set_bRequiredBonesUpToDate(bool value);
    bool get_bAnimTreeInitialised();
    void set_bAnimTreeInitialised(bool value);
    bool get_bIncludeComponentLocationIntoBounds();
    void set_bIncludeComponentLocationIntoBounds(bool value);
    bool get_bEnableLineCheckWithBounds();
    void set_bEnableLineCheckWithBounds(bool value);
    bool get_bUseBendingElements();
    void set_bUseBendingElements(bool value);
    bool get_bUseTetrahedralConstraints();
    void set_bUseTetrahedralConstraints(bool value);
    bool get_bUseThinShellVolumeConstraints();
    void set_bUseThinShellVolumeConstraints(bool value);
    bool get_bUseSelfCollisions();
    void set_bUseSelfCollisions(bool value);
    bool get_bUseContinuousCollisionDetection();
    void set_bUseContinuousCollisionDetection(bool value);
    bool get_bPropagateCurvesToSlaves();
    void set_bPropagateCurvesToSlaves(bool value);
    bool get_bSkipKinematicUpdateWhenInterpolating();
    void set_bSkipKinematicUpdateWhenInterpolating(bool value);
    bool get_bSkipBoundsUpdateWhenInterpolating();
    void set_bSkipBoundsUpdateWhenInterpolating(bool value);
    bool get_bNeedsQueuedAnimEventsDispatched();
    void set_bNeedsQueuedAnimEventsDispatched(bool value);
    void* get_CachedAnimCurveUidVersion();
    void* get_MassMode();
    float& get_UniformMass();
    float& get_TotalMass();
    float& get_Density();
    float& get_MinPerParticleMass();
    float& get_ClothBlendWeight();
    float& get_EdgeStiffness();
    float& get_BendingStiffness();
    float& get_AreaStiffness();
    float& get_VolumeStiffness();
    float& get_StrainLimitingStiffness();
    float& get_ShapeTargetStiffness();
    bool get_bWaitForParallelClothTask();
    void set_bWaitForParallelClothTask(bool value);
    void* get_DisallowedAnimCurves();
    _Script_Engine::BodySetup*& get_BodySetup();
    void* get_OnConstraintBroken();
    void* get_ClothingSimulationFactory();
    float& get_TeleportDistanceThreshold();
    float& get_TeleportRotationThreshold();
    void* get_LastPoseTickFrame();
    _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor*& get_ClothingInteractor();
    void* get_OnAnimInitialized();
    static _Script_CoreUObject::Class* static_class();
    void UnlinkAnimClassLayers(void* InClass);
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    void ToggleDisablePostProcessBlueprint();
    void TermBodiesBelow(void* ParentBoneName);
    void SuspendClothingSimulation();
    void Stop();
    void SnapshotPose(_Script_Engine::PoseSnapshot& Snapshot);
    void SetUpdateClothInEditor(bool NewUpdateState);
    void SetUpdateAnimationInEditor(bool NewUpdateState);
    void SetTeleportRotationThreshold(float Threshold);
    void SetTeleportDistanceThreshold(float Threshold);
    void SetPosition(float InPos, bool bFireNotifies);
    void SetPlayRate(float Rate);
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, void* BoneName, bool bIncludeSelf);
    void SetMorphTarget(void* MorphTargetName, float Value, bool bRemoveZeroWeight);
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, void* BoneName, bool bIncludeSelf);
    void SetEnableBodyGravity(bool bEnableGravity, void* BoneName);
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
    void SetDisableAnimCurves(bool bInDisableAnimCurves);
    void SetConstraintProfileForAll(void* ProfileName, bool bDefaultIfNotFound);
    void SetConstraintProfile(void* JointName, void* ProfileName, bool bDefaultIfNotFound);
    void SetClothMaxDistanceScale(float Scale);
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, void* BoneName);
    void SetAnimClass(void* NewClass);
    void SetAnimationMode(void* InAnimationMode);
    void SetAnimation(_Script_Engine::AnimationAsset* NewAnimToPlay);
    void SetAngularLimits(void* InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
    void SetAllowedAnimCurvesEvaluation(void*& List, bool bAllow);
    void SetAllowAnimCurveEvaluation(bool bInAllow);
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    void SetAllBodiesBelowSimulatePhysics(void*& InBoneName, bool bNewSimulate, bool bIncludeSelf);
    void SetAllBodiesBelowPhysicsBlendWeight(void*& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
    void ResumeClothingSimulation();
    void ResetClothTeleportMode();
    void ResetAnimInstanceDynamics(void* InTeleportType);
    void ResetAllowedAnimCurveEvaluation();
    void ResetAllBodiesSimulatePhysics();
    void PlayAnimation(_Script_Engine::AnimationAsset* NewAnimToPlay, bool bLooping);
    void Play(bool bLooping);
    void OverrideAnimationData(_Script_Engine::AnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    void LinkAnimGraphByTag(void* InTag, void* InClass);
    void LinkAnimClassLayers(void* InClass);
    bool K2_GetClosestPointOnPhysicsAsset(_Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector& ClosestWorldPosition, _Script_CoreUObject::Vector& Normal, void*& BoneName, float& Distance);
    bool IsPlaying();
    bool IsClothingSimulationSuspended();
    bool IsBodyGravityEnabled(void* BoneName);
    bool HasValidAnimationInstance();
    float GetTeleportRotationThreshold();
    float GetTeleportDistanceThreshold();
    bool GetStringAttribute_Ref(void*& BoneName, void*& AttributeName, void*& OutValue, void* LookupType);
    bool GetStringAttribute(void*& BoneName, void*& AttributeName, void* DefaultValue, void*& OutValue, void* LookupType);
    _Script_CoreUObject::Vector GetSkeletalCenterOfMass();
    _Script_Engine::AnimInstance* GetPostProcessInstance();
    float GetPosition();
    float GetPlayRate();
    float GetMorphTarget(void* MorphTargetName);
    _Script_Engine::AnimInstance* GetLinkedAnimLayerInstanceByGroup(void* InGroup);
    _Script_Engine::AnimInstance* GetLinkedAnimLayerInstanceByClass(void* InClass);
    void GetLinkedAnimGraphInstancesByTag(void* InTag, void*& OutLinkedInstances);
    _Script_Engine::AnimInstance* GetLinkedAnimGraphInstanceByTag(void* InTag);
    bool GetIntegerAttribute_Ref(void*& BoneName, void*& AttributeName, int32_t& OutValue, void* LookupType);
    bool GetIntegerAttribute(void*& BoneName, void*& AttributeName, int32_t DefaultValue, int32_t& OutValue, void* LookupType);
    bool GetFloatAttribute_Ref(void*& BoneName, void*& AttributeName, float& OutValue, void* LookupType);
    bool GetFloatAttribute(void*& BoneName, void*& AttributeName, float DefaultValue, float& OutValue, void* LookupType);
    bool GetDisablePostProcessBlueprint();
    bool GetDisableAnimCurves();
    void GetCurrentJointAngles(void* InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);
    float GetClothMaxDistanceScale();
    _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor* GetClothingSimulationInteractor();
    float GetBoneMass(void* BoneName, bool bScaleMass);
    _Script_Engine::AnimInstance* GetAnimInstance();
    void* GetAnimClass();
    void* GetAnimationMode();
    bool GetAllowRigidBodyAnimNode();
    bool GetAllowedAnimCurveEvaluate();
    void ForceClothNextUpdateTeleportAndReset();
    void ForceClothNextUpdateTeleport();
    void* FindConstraintBoneName(int32_t ConstraintIndex);
    void ClearMorphTargets();
    void BreakConstraint(_Script_CoreUObject::Vector Impulse, _Script_CoreUObject::Vector HitLocation, void* InBoneName);
    void BindClothToMasterPoseComponent();
    void AllowAnimCurveEvaluation(void* NameOfCurve, bool bAllow);
    void AddImpulseToAllBodiesBelow(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange, bool bIncludeSelf);
    void AddForceToAllBodiesBelow(_Script_CoreUObject::Vector Force, void* BoneName, bool bAccelChange, bool bIncludeSelf);
    void AccumulateAllBodiesBelowPhysicsBlendWeight(void*& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
}; // Size: 0xed0
#pragma pack(pop)
}
