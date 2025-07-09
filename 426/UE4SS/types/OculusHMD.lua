---@meta

---@class FGuardianTestResult
---@field IsTriggering boolean
---@field DeviceType ETrackedDeviceType
---@field ClosestDistance float
---@field ClosestPoint FVector
---@field ClosestPointNormal FVector
local FGuardianTestResult = {}



---@class FHmdUserProfile
---@field Name FString
---@field Gender FString
---@field PlayerHeight float
---@field EyeHeight float
---@field IPD float
---@field NeckToEyeDistance FVector2D
---@field ExtraFields TArray<FHmdUserProfileField>
local FHmdUserProfile = {}



---@class FHmdUserProfileField
---@field FieldName FString
---@field FieldValue FString
local FHmdUserProfileField = {}



---@class FOculusSplashDesc
---@field TexturePath FSoftObjectPath
---@field TransformInMeters FTransform
---@field QuadSizeInMeters FVector2D
---@field DeltaRotation FQuat
---@field TextureOffset FVector2D
---@field TextureScale FVector2D
---@field bNoAlphaChannel boolean
local FOculusSplashDesc = {}



---@class UOculusFunctionLibrary : UBlueprintFunctionLibrary
local UOculusFunctionLibrary = {}

---@param recenterMode boolean
function UOculusFunctionLibrary:SetReorientHMDOnControllerRecenter(recenterMode) end
---@param PosScale3D FVector
function UOculusFunctionLibrary:SetPositionScale3D(PosScale3D) end
---@param GuardianVisible boolean
function UOculusFunctionLibrary:SetGuardianVisibility(GuardianVisible) end
---@param Level EFixedFoveatedRenderingLevel
---@param isDynamic boolean
function UOculusFunctionLibrary:SetFixedFoveatedRenderingLevel(Level, isDynamic) end
---@param RequestedFrequency float
function UOculusFunctionLibrary:SetDisplayFrequency(RequestedFrequency) end
---@param CPULevel int32
---@param GPULevel int32
function UOculusFunctionLibrary:SetCPUAndGPULevels(CPULevel, GPULevel) end
---@param ColorScale FLinearColor
---@param ColorOffset FLinearColor
---@param bApplyToAllLayers boolean
function UOculusFunctionLibrary:SetColorScaleAndOffset(ColorScale, ColorOffset, bApplyToAllLayers) end
---@param ColorSpace EColorSpace
function UOculusFunctionLibrary:SetClientColorDesc(ColorSpace) end
---@param BaseRot FRotator
---@param PosOffset FVector
---@param Options EOrientPositionSelector::Type
function UOculusFunctionLibrary:SetBaseRotationAndPositionOffset(BaseRot, PosOffset, Options) end
---@param Rotation FRotator
---@param BaseOffsetInMeters FVector
---@param Options EOrientPositionSelector::Type
function UOculusFunctionLibrary:SetBaseRotationAndBaseOffsetInMeters(Rotation, BaseOffsetInMeters, Options) end
---@return boolean
function UOculusFunctionLibrary:IsGuardianDisplayed() end
---@return boolean
function UOculusFunctionLibrary:IsGuardianConfigured() end
---@param DeviceType ETrackedDeviceType
---@return boolean
function UOculusFunctionLibrary:IsDeviceTracked(DeviceType) end
---@return boolean
function UOculusFunctionLibrary:HasSystemOverlayPresent() end
---@return boolean
function UOculusFunctionLibrary:HasInputFocus() end
---@param Profile FHmdUserProfile
---@return boolean
function UOculusFunctionLibrary:GetUserProfile(Profile) end
---@return boolean
function UOculusFunctionLibrary:GetSystemHmd3DofModeEnabled() end
---@param AngularAcceleration FVector
---@param LinearAcceleration FVector
---@param AngularVelocity FVector
---@param LinearVelocity FVector
---@param TimeInSeconds float
---@param DeviceType ETrackedDeviceType
function UOculusFunctionLibrary:GetRawSensorData(AngularAcceleration, LinearAcceleration, AngularVelocity, LinearVelocity, TimeInSeconds, DeviceType) end
---@param DeviceRotation FRotator
---@param DevicePosition FVector
---@param NeckPosition FVector
---@param bUseOrienationForPlayerCamera boolean
---@param bUsePositionForPlayerCamera boolean
---@param PositionScale FVector
function UOculusFunctionLibrary:GetPose(DeviceRotation, DevicePosition, NeckPosition, bUseOrienationForPlayerCamera, bUsePositionForPlayerCamera, PositionScale) end
---@param Point FVector
---@param BoundaryType EBoundaryType
---@return FGuardianTestResult
function UOculusFunctionLibrary:GetPointGuardianIntersection(Point, BoundaryType) end
---@return FTransform
function UOculusFunctionLibrary:GetPlayAreaTransform() end
---@param DeviceType ETrackedDeviceType
---@param BoundaryType EBoundaryType
---@return FGuardianTestResult
function UOculusFunctionLibrary:GetNodeGuardianIntersection(DeviceType, BoundaryType) end
---@return EColorSpace
function UOculusFunctionLibrary:GetHmdColorDesc() end
---@param BoundaryType EBoundaryType
---@param UsePawnSpace boolean
---@return TArray<FVector>
function UOculusFunctionLibrary:GetGuardianPoints(BoundaryType, UsePawnSpace) end
---@param BoundaryType EBoundaryType
---@return FVector
function UOculusFunctionLibrary:GetGuardianDimensions(BoundaryType) end
---@param IsGPUAvailable boolean
---@param GPUUtilization float
function UOculusFunctionLibrary:GetGPUUtilization(IsGPUAvailable, GPUUtilization) end
---@return float
function UOculusFunctionLibrary:GetGPUFrameTime() end
---@return EFixedFoveatedRenderingLevel
function UOculusFunctionLibrary:GetFixedFoveatedRenderingLevel() end
---@return EOculusDeviceType
function UOculusFunctionLibrary:GetDeviceType() end
---@return FString
function UOculusFunctionLibrary:GetDeviceName() end
---@return float
function UOculusFunctionLibrary:GetCurrentDisplayFrequency() end
---@param OutRot FRotator
---@param OutPosOffset FVector
function UOculusFunctionLibrary:GetBaseRotationAndPositionOffset(OutRot, OutPosOffset) end
---@param OutRotation FRotator
---@param OutBaseOffsetInMeters FVector
function UOculusFunctionLibrary:GetBaseRotationAndBaseOffsetInMeters(OutRotation, OutBaseOffsetInMeters) end
---@return TArray<float>
function UOculusFunctionLibrary:GetAvailableDisplayFrequencies() end
---@param bPositionTracking boolean
function UOculusFunctionLibrary:EnablePositionTracking(bPositionTracking) end
---@param bOrientationTracking boolean
function UOculusFunctionLibrary:EnableOrientationTracking(bOrientationTracking) end
function UOculusFunctionLibrary:ClearLoadingSplashScreens() end
---@param Texture UTexture2D
---@param TranslationInMeters FVector
---@param Rotation FRotator
---@param SizeInMeters FVector2D
---@param DeltaRotation FRotator
---@param bClearBeforeAdd boolean
function UOculusFunctionLibrary:AddLoadingSplashScreen(Texture, TranslationInMeters, Rotation, SizeInMeters, DeltaRotation, bClearBeforeAdd) end


---@class UOculusHMDRuntimeSettings : UObject
---@field bAutoEnabled boolean
---@field SplashDescs TArray<FOculusSplashDesc>
---@field bEnableSpecificColorGamut boolean
---@field ColorSpace EColorSpace
---@field bSupportsDash boolean
---@field bCompositesDepth boolean
---@field bHQDistortion boolean
---@field PixelDensityMin float
---@field PixelDensityMax float
---@field CPULevel int32
---@field GPULevel int32
---@field FFRLevel EFixedFoveatedRenderingLevel
---@field FFRDynamic boolean
---@field bChromaCorrection boolean
---@field bRecenterHMDWithController boolean
---@field bFocusAware boolean
---@field bRequiresSystemKeyboard boolean
---@field HandTrackingSupport EHandTrackingSupport
local UOculusHMDRuntimeSettings = {}



---@class UOculusResourceHolder : UObject
---@field PokeAHoleMaterial UMaterial
local UOculusResourceHolder = {}



---@class UOculusSceneCaptureCubemap : UObject
---@field CaptureComponents TArray<USceneCaptureComponent2D>
local UOculusSceneCaptureCubemap = {}



