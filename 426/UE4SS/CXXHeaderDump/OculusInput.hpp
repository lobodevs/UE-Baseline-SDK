#ifndef UE4SS_SDK_OculusInput_HPP
#define UE4SS_SDK_OculusInput_HPP

#include "OculusInput_enums.hpp"

struct FOculusCapsuleCollider
{
    class UCapsuleComponent* Capsule;                                                 // 0x0000 (size: 0x8)
    EBone BoneId;                                                                     // 0x0008 (size: 0x1)

}; // Size: 0x10

class UOculusHandComponent : public UPoseableMeshComponent
{
    EOculusHandType SkeletonType;                                                     // 0x07E8 (size: 0x1)
    EOculusHandType MeshType;                                                         // 0x07E9 (size: 0x1)
    EConfidenceBehavior ConfidenceBehavior;                                           // 0x07EA (size: 0x1)
    ESystemGestureBehavior SystemGestureBehavior;                                     // 0x07EB (size: 0x1)
    class UMaterialInterface* SystemGestureMaterial;                                  // 0x07F0 (size: 0x8)
    bool bInitializePhysics;                                                          // 0x07F8 (size: 0x1)
    bool bUpdateHandScale;                                                            // 0x07F9 (size: 0x1)
    class UMaterialInterface* MaterialOverride;                                       // 0x0800 (size: 0x8)
    TMap<class EBone, class FName> BoneNameMappings;                                  // 0x0808 (size: 0x50)
    TArray<FOculusCapsuleCollider> CollisionCapsules;                                 // 0x0858 (size: 0x10)
    bool bSkeletalMeshInitialized;                                                    // 0x0868 (size: 0x1)

}; // Size: 0x880

class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsPointerPoseValid(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    bool IsHandTrackingEnabled();
    TArray<FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, const float WorldToMeters);
    ETrackingConfidence GetTrackingConfidence(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    FTransform GetPointerPose(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, const float WorldToMeters);
    float GetHandScale(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    EOculusHandType GetDominantHand(const int32 ControllerIndex);
    FQuat GetBoneRotation(const EOculusHandType DeviceHand, const EBone BoneId, const int32 ControllerIndex);
    FString GetBoneName(EBone BoneId);
}; // Size: 0x28

#endif
