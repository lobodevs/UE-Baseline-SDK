---@meta

---@class FOculusCapsuleCollider
---@field Capsule UCapsuleComponent
---@field BoneId EBone
local FOculusCapsuleCollider = {}



---@class UOculusHandComponent : UPoseableMeshComponent
---@field SkeletonType EOculusHandType
---@field MeshType EOculusHandType
---@field ConfidenceBehavior EConfidenceBehavior
---@field SystemGestureBehavior ESystemGestureBehavior
---@field SystemGestureMaterial UMaterialInterface
---@field bInitializePhysics boolean
---@field bUpdateHandScale boolean
---@field MaterialOverride UMaterialInterface
---@field BoneNameMappings TMap<EBone, FName>
---@field CollisionCapsules TArray<FOculusCapsuleCollider>
---@field bSkeletalMeshInitialized boolean
local UOculusHandComponent = {}



---@class UOculusInputFunctionLibrary : UBlueprintFunctionLibrary
local UOculusInputFunctionLibrary = {}

---@param DeviceHand EOculusHandType
---@param ControllerIndex int32
---@return boolean
function UOculusInputFunctionLibrary:IsPointerPoseValid(DeviceHand, ControllerIndex) end
---@return boolean
function UOculusInputFunctionLibrary:IsHandTrackingEnabled() end
---@param SkeletonType EOculusHandType
---@param HandComponent USkinnedMeshComponent
---@param WorldToMeters float
---@return TArray<FOculusCapsuleCollider>
function UOculusInputFunctionLibrary:InitializeHandPhysics(SkeletonType, HandComponent, WorldToMeters) end
---@param DeviceHand EOculusHandType
---@param ControllerIndex int32
---@return ETrackingConfidence
function UOculusInputFunctionLibrary:GetTrackingConfidence(DeviceHand, ControllerIndex) end
---@param DeviceHand EOculusHandType
---@param ControllerIndex int32
---@return FTransform
function UOculusInputFunctionLibrary:GetPointerPose(DeviceHand, ControllerIndex) end
---@param HandSkeletalMesh USkeletalMesh
---@param SkeletonType EOculusHandType
---@param MeshType EOculusHandType
---@param WorldToMeters float
---@return boolean
function UOculusInputFunctionLibrary:GetHandSkeletalMesh(HandSkeletalMesh, SkeletonType, MeshType, WorldToMeters) end
---@param DeviceHand EOculusHandType
---@param ControllerIndex int32
---@return float
function UOculusInputFunctionLibrary:GetHandScale(DeviceHand, ControllerIndex) end
---@param ControllerIndex int32
---@return EOculusHandType
function UOculusInputFunctionLibrary:GetDominantHand(ControllerIndex) end
---@param DeviceHand EOculusHandType
---@param BoneId EBone
---@param ControllerIndex int32
---@return FQuat
function UOculusInputFunctionLibrary:GetBoneRotation(DeviceHand, BoneId, ControllerIndex) end
---@param BoneId EBone
---@return FString
function UOculusInputFunctionLibrary:GetBoneName(BoneId) end


