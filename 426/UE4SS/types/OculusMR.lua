---@meta

---@class AOculusMR_CastingCameraActor : ASceneCapture2D
---@field VRNotificationComponent UVRNotificationsComponent
---@field CameraColorTexture UTexture2D
---@field CameraDepthTexture UTexture2D
---@field PlaneMeshComponent UOculusMR_PlaneMeshComponent
---@field ChromaKeyMaterial UMaterial
---@field OpaqueColoredMaterial UMaterial
---@field ChromaKeyMaterialInstance UMaterialInstanceDynamic
---@field CameraFrameMaterialInstance UMaterialInstanceDynamic
---@field BackdropMaterialInstance UMaterialInstanceDynamic
---@field DefaultTexture_White UTexture2D
---@field BackgroundRenderTargets TArray<UTextureRenderTarget2D>
---@field ForegroundCaptureActor ASceneCapture2D
---@field ForegroundRenderTargets TArray<UTextureRenderTarget2D>
---@field PoseTimes TArray<double>
---@field MRSettings UOculusMR_Settings
---@field MRState UOculusMR_State
local AOculusMR_CastingCameraActor = {}



---@class FOculusMR_PlaneMeshTriangle
---@field Vertex0 FVector
---@field UV0 FVector2D
---@field Vertex1 FVector
---@field UV1 FVector2D
---@field Vertex2 FVector
---@field UV2 FVector2D
local FOculusMR_PlaneMeshTriangle = {}



---@class FTrackedCamera
---@field Index int32
---@field Name FString
---@field UpdateTime double
---@field FieldOfView float
---@field SizeX int32
---@field SizeY int32
---@field AttachedTrackedDevice ETrackedDeviceType
---@field CalibratedRotation FRotator
---@field CalibratedOffset FVector
---@field UserRotation FRotator
---@field UserOffset FVector
---@field RawRotation FRotator
---@field RawOffset FVector
local FTrackedCamera = {}



---@class UOculusMRFunctionLibrary : UBlueprintFunctionLibrary
local UOculusMRFunctionLibrary = {}

---@param Component USceneComponent
---@return boolean
function UOculusMRFunctionLibrary:SetTrackingReferenceComponent(Component) end
---@param ScalingFactor float
---@return boolean
function UOculusMRFunctionLibrary:SetMrcScalingFactor(ScalingFactor) end
---@return boolean
function UOculusMRFunctionLibrary:IsMrcEnabled() end
---@return boolean
function UOculusMRFunctionLibrary:IsMrcActive() end
---@return USceneComponent
function UOculusMRFunctionLibrary:GetTrackingReferenceComponent() end
---@return UOculusMR_Settings
function UOculusMRFunctionLibrary:GetOculusMRSettings() end
---@return float
function UOculusMRFunctionLibrary:GetMrcScalingFactor() end


---@class UOculusMR_PlaneMeshComponent : UMeshComponent
local UOculusMR_PlaneMeshComponent = {}

---@param Triangles TArray<FOculusMR_PlaneMeshTriangle>
---@return boolean
function UOculusMR_PlaneMeshComponent:SetCustomMeshTriangles(Triangles) end
function UOculusMR_PlaneMeshComponent:ClearCustomMeshTriangles() end
---@param Triangles TArray<FOculusMR_PlaneMeshTriangle>
function UOculusMR_PlaneMeshComponent:AddCustomMeshTriangles(Triangles) end


---@class UOculusMR_Settings : UObject
---@field ClippingReference EOculusMR_ClippingReference
---@field bUseTrackedCameraResolution boolean
---@field WidthPerView int32
---@field HeightPerView int32
---@field CastingLatency float
---@field BackdropColor FColor
---@field HandPoseStateLatency float
---@field ChromaKeyColor FColor
---@field ChromaKeySimilarity float
---@field ChromaKeySmoothRange float
---@field ChromaKeySpillRange float
---@field ExternalCompositionPostProcessEffects EOculusMR_PostProcessEffects
---@field bIsCasting boolean
---@field CompositionMethod EOculusMR_CompositionMethod
---@field CapturingCamera EOculusMR_CameraDeviceEnum
local UOculusMR_Settings = {}

---@param Val boolean
function UOculusMR_Settings:SetIsCasting(Val) end
---@param Val EOculusMR_CompositionMethod
function UOculusMR_Settings:SetCompositionMethod(Val) end
---@param Val EOculusMR_CameraDeviceEnum
function UOculusMR_Settings:SetCapturingCamera(Val) end
function UOculusMR_Settings:SaveToIni() end
function UOculusMR_Settings:LoadFromIni() end
---@return boolean
function UOculusMR_Settings:GetIsCasting() end
---@return EOculusMR_CompositionMethod
function UOculusMR_Settings:GetCompositionMethod() end
---@return EOculusMR_CameraDeviceEnum
function UOculusMR_Settings:GetCapturingCamera() end
---@return int32
function UOculusMR_Settings:GetBindToTrackedCameraIndex() end
---@param InTrackedCameraIndex int32
function UOculusMR_Settings:BindToTrackedCameraIndexIfAvailable(InTrackedCameraIndex) end


---@class UOculusMR_State : UObject
---@field TrackedCamera FTrackedCamera
---@field TrackingReferenceComponent USceneComponent
---@field ScalingFactor double
---@field ChangeCameraStateRequested boolean
---@field BindToTrackedCameraIndexRequested boolean
local UOculusMR_State = {}



