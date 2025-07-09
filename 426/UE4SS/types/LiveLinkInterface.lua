---@meta

---@class FCachedSubjectFrame
local FCachedSubjectFrame = {}


---@class FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData
---@field Transforms TArray<FTransform>
local FLiveLinkAnimationFrameData = {}



---@class FLiveLinkBaseBlueprintData
local FLiveLinkBaseBlueprintData = {}


---@class FLiveLinkBaseFrameData
---@field WorldTime FLiveLinkWorldTime
---@field MetaData FLiveLinkMetaData
---@field PropertyValues TArray<float>
local FLiveLinkBaseFrameData = {}



---@class FLiveLinkBaseStaticData
---@field PropertyNames TArray<FName>
local FLiveLinkBaseStaticData = {}



---@class FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData
---@field StaticData FLiveLinkBaseStaticData
---@field FrameData FLiveLinkBaseFrameData
local FLiveLinkBasicBlueprintData = {}



---@class FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData
---@field StaticData FLiveLinkCameraStaticData
---@field FrameData FLiveLinkCameraFrameData
local FLiveLinkCameraBlueprintData = {}



---@class FLiveLinkCameraFrameData : FLiveLinkTransformFrameData
---@field FieldOfView float
---@field AspectRatio float
---@field FocalLength float
---@field Aperture float
---@field FocusDistance float
---@field ProjectionMode ELiveLinkCameraProjectionMode
local FLiveLinkCameraFrameData = {}



---@class FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
---@field bIsFieldOfViewSupported boolean
---@field bIsAspectRatioSupported boolean
---@field bIsFocalLengthSupported boolean
---@field bIsProjectionModeSupported boolean
---@field FilmBackWidth float
---@field FilmBackHeight float
---@field bIsApertureSupported boolean
---@field bIsFocusDistanceSupported boolean
local FLiveLinkCameraStaticData = {}



---@class FLiveLinkCurveConversionSettings
---@field CurveConversionAssetMap TMap<FString, FSoftObjectPath>
local FLiveLinkCurveConversionSettings = {}



---@class FLiveLinkCurveElement
---@field CurveName FName
---@field CurveValue float
local FLiveLinkCurveElement = {}



---@class FLiveLinkFrameData
---@field Transforms TArray<FTransform>
---@field CurveElements TArray<FLiveLinkCurveElement>
---@field WorldTime FLiveLinkWorldTime
---@field MetaData FLiveLinkMetaData
local FLiveLinkFrameData = {}



---@class FLiveLinkFrameRate : FFrameRate
local FLiveLinkFrameRate = {}


---@class FLiveLinkInterpolationSettings
---@field bUseInterpolation boolean
---@field InterpolationOffset float
local FLiveLinkInterpolationSettings = {}



---@class FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData
---@field StaticData FLiveLinkLightStaticData
---@field FrameData FLiveLinkLightFrameData
local FLiveLinkLightBlueprintData = {}



---@class FLiveLinkLightFrameData : FLiveLinkTransformFrameData
---@field Temperature float
---@field Intensity float
---@field LightColor FColor
---@field InnerConeAngle float
---@field OuterConeAngle float
---@field AttenuationRadius float
---@field SourceRadius float
---@field SoftSourceRadius float
---@field SourceLength float
local FLiveLinkLightFrameData = {}



---@class FLiveLinkLightStaticData : FLiveLinkTransformStaticData
---@field bIsTemperatureSupported boolean
---@field bIsIntensitySupported boolean
---@field bIsLightColorSupported boolean
---@field bIsInnerConeAngleSupported boolean
---@field bIsOuterConeAngleSupported boolean
---@field bIsAttenuationRadiusSupported boolean
---@field bIsSourceLenghtSupported boolean
---@field bIsSourceRadiusSupported boolean
---@field bIsSoftSourceRadiusSupported boolean
local FLiveLinkLightStaticData = {}



---@class FLiveLinkMetaData
---@field StringMetadata TMap<FName, FString>
---@field SceneTime FQualifiedFrameTime
local FLiveLinkMetaData = {}



---@class FLiveLinkRefSkeleton
---@field BoneNames TArray<FName>
---@field BoneParents TArray<int32>
local FLiveLinkRefSkeleton = {}



---@class FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData
---@field BoneNames TArray<FName>
---@field BoneParents TArray<int32>
local FLiveLinkSkeletonStaticData = {}



---@class FLiveLinkSourceBufferManagementSettings
---@field bValidEngineTimeEnabled boolean
---@field ValidEngineTime float
---@field EngineTimeOffset float
---@field EngineTimeClockOffset double
---@field bGenerateSubFrame boolean
---@field DetectedFrameRate FFrameRate
---@field bUseTimecodeSmoothLatest boolean
---@field SourceTimecodeFrameRate FFrameRate
---@field bValidTimecodeFrameEnabled boolean
---@field ValidTimecodeFrame int32
---@field TimecodeFrameOffset float
---@field TimecodeClockOffset double
---@field LatestOffset int32
---@field MaxNumberOfFrameToBuffered int32
---@field bKeepAtLeastOneFrame boolean
local FLiveLinkSourceBufferManagementSettings = {}



---@class FLiveLinkSourceDebugInfo
---@field SubjectName FLiveLinkSubjectName
---@field SnapshotIndex int32
---@field NumberOfBufferAtSnapshot int32
local FLiveLinkSourceDebugInfo = {}



---@class FLiveLinkSourceHandle
local FLiveLinkSourceHandle = {}


---@class FLiveLinkSourcePreset
---@field Guid FGuid
---@field Settings ULiveLinkSourceSettings
---@field SourceType FText
local FLiveLinkSourcePreset = {}



---@class FLiveLinkSubjectKey
---@field Source FGuid
---@field SubjectName FLiveLinkSubjectName
local FLiveLinkSubjectKey = {}



---@class FLiveLinkSubjectName
---@field Name FName
local FLiveLinkSubjectName = {}



---@class FLiveLinkSubjectPreset
---@field Key FLiveLinkSubjectKey
---@field Role TSubclassOf<ULiveLinkRole>
---@field Settings ULiveLinkSubjectSettings
---@field VirtualSubject ULiveLinkVirtualSubject
---@field bEnabled boolean
local FLiveLinkSubjectPreset = {}



---@class FLiveLinkSubjectRepresentation
---@field Subject FLiveLinkSubjectName
---@field Role TSubclassOf<ULiveLinkRole>
local FLiveLinkSubjectRepresentation = {}



---@class FLiveLinkTime
---@field WorldTime double
---@field SceneTime FQualifiedFrameTime
local FLiveLinkTime = {}



---@class FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED
local FLiveLinkTimeCode = {}


---@class FLiveLinkTimeCode_Base_DEPRECATED
---@field Seconds int32
---@field Frames int32
---@field FrameRate FLiveLinkFrameRate
local FLiveLinkTimeCode_Base_DEPRECATED = {}



---@class FLiveLinkTimeSynchronizationSettings
---@field FrameRate FFrameRate
---@field FrameOffset FFrameNumber
local FLiveLinkTimeSynchronizationSettings = {}



---@class FLiveLinkTransform
local FLiveLinkTransform = {}


---@class FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData
---@field StaticData FLiveLinkTransformStaticData
---@field FrameData FLiveLinkTransformFrameData
local FLiveLinkTransformBlueprintData = {}



---@class FLiveLinkTransformFrameData : FLiveLinkBaseFrameData
---@field Transform FTransform
local FLiveLinkTransformFrameData = {}



---@class FLiveLinkTransformStaticData : FLiveLinkBaseStaticData
local FLiveLinkTransformStaticData = {}


---@class FLiveLinkWorldTime
---@field Time double
---@field Offset double
local FLiveLinkWorldTime = {}



---@class FSubjectFrameHandle : FLiveLinkBaseBlueprintData
local FSubjectFrameHandle = {}


---@class FSubjectMetadata
---@field StringMetadata TMap<FName, FString>
---@field SceneTimecode FTimecode
---@field SceneFramerate FFrameRate
local FSubjectMetadata = {}



---@class ULiveLinkAnimationRole : ULiveLinkBasicRole
local ULiveLinkAnimationRole = {}


---@class ULiveLinkBasicRole : ULiveLinkRole
local ULiveLinkBasicRole = {}


---@class ULiveLinkCameraRole : ULiveLinkTransformRole
local ULiveLinkCameraRole = {}


---@class ULiveLinkController : UObject
local ULiveLinkController = {}


---@class ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings
---@field CurveConversionSettings FLiveLinkCurveConversionSettings
local ULiveLinkCurveRemapSettings = {}



---@class ULiveLinkFrameInterpolationProcessor : UObject
local ULiveLinkFrameInterpolationProcessor = {}


---@class ULiveLinkFramePreProcessor : UObject
local ULiveLinkFramePreProcessor = {}


---@class ULiveLinkFrameTranslator : UObject
local ULiveLinkFrameTranslator = {}


---@class ULiveLinkLightRole : ULiveLinkTransformRole
local ULiveLinkLightRole = {}


---@class ULiveLinkRole : UObject
local ULiveLinkRole = {}


---@class ULiveLinkSourceFactory : UObject
local ULiveLinkSourceFactory = {}


---@class ULiveLinkSourceSettings : UObject
---@field Mode ELiveLinkSourceMode
---@field BufferSettings FLiveLinkSourceBufferManagementSettings
---@field ConnectionString FString
---@field Factory TSubclassOf<ULiveLinkSourceFactory>
local ULiveLinkSourceSettings = {}



---@class ULiveLinkSubjectSettings : UObject
---@field PreProcessors TArray<ULiveLinkFramePreProcessor>
---@field InterpolationProcessor ULiveLinkFrameInterpolationProcessor
---@field Translators TArray<ULiveLinkFrameTranslator>
---@field Role TSubclassOf<ULiveLinkRole>
---@field FrameRate FFrameRate
---@field bRebroadcastSubject boolean
local ULiveLinkSubjectSettings = {}



---@class ULiveLinkTransformRole : ULiveLinkBasicRole
local ULiveLinkTransformRole = {}


---@class ULiveLinkVirtualSubject : UObject
---@field Role TSubclassOf<ULiveLinkRole>
---@field Subjects TArray<FLiveLinkSubjectName>
---@field FrameTranslators TArray<ULiveLinkFrameTranslator>
local ULiveLinkVirtualSubject = {}



