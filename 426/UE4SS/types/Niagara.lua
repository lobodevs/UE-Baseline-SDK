---@meta

---@class ANiagaraActor : AActor
---@field NiagaraComponent UNiagaraComponent
---@field bDestroyOnSystemFinish boolean
local ANiagaraActor = {}

---@param bShouldDestroyOnSystemFinish boolean
function ANiagaraActor:SetDestroyOnSystemFinish(bShouldDestroyOnSystemFinish) end
---@param FinishedComponent UNiagaraComponent
function ANiagaraActor:OnNiagaraSystemFinished(FinishedComponent) end


---@class ANiagaraPreviewBase : AActor
local ANiagaraPreviewBase = {}

---@param InSystem UNiagaraSystem
function ANiagaraPreviewBase:SetSystem(InSystem) end
---@param InXAxisText FText
---@param InYAxisText FText
function ANiagaraPreviewBase:SetLabelText(InXAxisText, InYAxisText) end


---@class ANiagaraPreviewGrid : AActor
---@field System UNiagaraSystem
---@field ResetMode ENiagaraPreviewGridResetMode
---@field PreviewAxisX UNiagaraPreviewAxis
---@field PreviewAxisY UNiagaraPreviewAxis
---@field PreviewClass TSubclassOf<ANiagaraPreviewBase>
---@field SpacingX float
---@field SpacingY float
---@field NumX int32
---@field NumY int32
---@field PreviewComponents TArray<UChildActorComponent>
local ANiagaraPreviewGrid = {}

---@param bPaused boolean
function ANiagaraPreviewGrid:SetPaused(bPaused) end
---@param OutPreviews TArray<UNiagaraComponent>
function ANiagaraPreviewGrid:GetPreviews(OutPreviews) end
function ANiagaraPreviewGrid:DeactivatePreviews() end
---@param bReset boolean
function ANiagaraPreviewGrid:ActivatePreviews(bReset) end


---@class FBasicParticleData
---@field Position FVector
---@field Size float
---@field Velocity FVector
local FBasicParticleData = {}



---@class FEmitterCompiledScriptPair
local FEmitterCompiledScriptPair = {}


---@class FMeshTriCoordinate
---@field Tri int32
---@field BaryCoord FVector
local FMeshTriCoordinate = {}



---@class FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field BoolChannel FMovieSceneBoolChannel
local FMovieSceneNiagaraBoolParameterSectionTemplate = {}



---@class FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field RedChannel FMovieSceneFloatChannel
---@field GreenChannel FMovieSceneFloatChannel
---@field BlueChannel FMovieSceneFloatChannel
---@field AlphaChannel FMovieSceneFloatChannel
local FMovieSceneNiagaraColorParameterSectionTemplate = {}



---@class FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field FloatChannel FMovieSceneFloatChannel
local FMovieSceneNiagaraFloatParameterSectionTemplate = {}



---@class FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field IntegerChannel FMovieSceneIntegerChannel
local FMovieSceneNiagaraIntegerParameterSectionTemplate = {}



---@class FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
---@field Parameter FNiagaraVariable
local FMovieSceneNiagaraParameterSectionTemplate = {}



---@class FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
---@field SpawnSectionStartFrame FFrameNumber
---@field SpawnSectionEndFrame FFrameNumber
---@field SpawnSectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior
---@field SpawnSectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior
---@field SpawnSectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior
---@field AgeUpdateMode ENiagaraAgeUpdateMode
local FMovieSceneNiagaraSystemTrackImplementation = {}



---@class FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
local FMovieSceneNiagaraSystemTrackTemplate = {}


---@class FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field VectorChannels FMovieSceneFloatChannel
---@field ChannelsUsed int32
local FMovieSceneNiagaraVectorParameterSectionTemplate = {}



---@class FNCPool
---@field FreeElements TArray<FNCPoolElement>
---@field InUseComponents_Auto TArray<UNiagaraComponent>
---@field InUseComponents_Manual TArray<UNiagaraComponent>
local FNCPool = {}



---@class FNCPoolElement
---@field Component UNiagaraComponent
local FNCPoolElement = {}



---@class FNDIStaticMeshSectionFilter
---@field AllowedMaterialSlots TArray<int32>
local FNDIStaticMeshSectionFilter = {}



---@class FNiagaraBool
---@field Value int32
local FNiagaraBool = {}



---@class FNiagaraBoundParameter
---@field Parameter FNiagaraVariable
---@field SrcOffset int32
---@field DestOffset int32
local FNiagaraBoundParameter = {}



---@class FNiagaraCollisionEventPayload
---@field CollisionPos FVector
---@field CollisionNormal FVector
---@field CollisionVelocity FVector
---@field ParticleIndex int32
---@field PhysicalMaterialIndex int32
local FNiagaraCollisionEventPayload = {}



---@class FNiagaraCompileHashVisitorDebugInfo
---@field Object FString
---@field PropertyKeys TArray<FString>
---@field PropertyValues TArray<FString>
local FNiagaraCompileHashVisitorDebugInfo = {}



---@class FNiagaraComponentPropertyBinding
---@field AttributeBinding FNiagaraVariableAttributeBinding
---@field PropertyName FName
---@field PropertyType FNiagaraTypeDefinition
---@field MetadataSetterName FName
---@field WritableValue FNiagaraVariable
local FNiagaraComponentPropertyBinding = {}



---@class FNiagaraDataSetCompiledData
---@field Variables TArray<FNiagaraVariable>
---@field VariableLayouts TArray<FNiagaraVariableLayoutInfo>
---@field ID FNiagaraDataSetID
---@field TotalFloatComponents uint32
---@field TotalInt32Components uint32
---@field TotalHalfComponents uint32
---@field bRequiresPersistentIDs boolean
---@field SimTarget ENiagaraSimTarget
local FNiagaraDataSetCompiledData = {}



---@class FNiagaraDataSetID
---@field Name FName
---@field Type ENiagaraDataSetType
local FNiagaraDataSetID = {}



---@class FNiagaraDataSetProperties
---@field ID FNiagaraDataSetID
---@field Variables TArray<FNiagaraVariable>
local FNiagaraDataSetProperties = {}



---@class FNiagaraDetailsLevelScaleOverrides
---@field Low float
---@field Medium float
---@field High float
---@field Epic float
---@field Cine float
local FNiagaraDetailsLevelScaleOverrides = {}



---@class FNiagaraDeviceProfileStateEntry
---@field ProfileName FName
---@field QualityLevelMask uint32
---@field SetQualityLevelMask uint32
local FNiagaraDeviceProfileStateEntry = {}



---@class FNiagaraEmitterCompiledData
---@field SpawnAttributes TArray<FName>
---@field EmitterSpawnIntervalVar FNiagaraVariable
---@field EmitterInterpSpawnStartDTVar FNiagaraVariable
---@field EmitterSpawnGroupVar FNiagaraVariable
---@field EmitterAgeVar FNiagaraVariable
---@field EmitterRandomSeedVar FNiagaraVariable
---@field EmitterInstanceSeedVar FNiagaraVariable
---@field EmitterTotalSpawnedParticlesVar FNiagaraVariable
---@field DataSetCompiledData FNiagaraDataSetCompiledData
local FNiagaraEmitterCompiledData = {}



---@class FNiagaraEmitterHandle
---@field ID FGuid
---@field IdName FName
---@field bIsEnabled boolean
---@field Name FName
---@field Instance UNiagaraEmitter
local FNiagaraEmitterHandle = {}



---@class FNiagaraEmitterNameSettingsRef
---@field SystemName FName
---@field EmitterName FString
local FNiagaraEmitterNameSettingsRef = {}



---@class FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
---@field bOverrideSpawnCountScale boolean
local FNiagaraEmitterScalabilityOverride = {}



---@class FNiagaraEmitterScalabilityOverrides
---@field Overrides TArray<FNiagaraEmitterScalabilityOverride>
local FNiagaraEmitterScalabilityOverrides = {}



---@class FNiagaraEmitterScalabilitySettings
---@field Platforms FNiagaraPlatformSet
---@field bScaleSpawnCount boolean
---@field SpawnCountScale float
local FNiagaraEmitterScalabilitySettings = {}



---@class FNiagaraEmitterScalabilitySettingsArray
---@field Settings TArray<FNiagaraEmitterScalabilitySettings>
local FNiagaraEmitterScalabilitySettingsArray = {}



---@class FNiagaraEmitterScriptProperties
---@field Script UNiagaraScript
---@field EventReceivers TArray<FNiagaraEventReceiverProperties>
---@field EventGenerators TArray<FNiagaraEventGeneratorProperties>
local FNiagaraEmitterScriptProperties = {}



---@class FNiagaraEventGeneratorProperties
---@field MaxEventsPerFrame int32
---@field ID FName
---@field DataSetCompiledData FNiagaraDataSetCompiledData
local FNiagaraEventGeneratorProperties = {}



---@class FNiagaraEventReceiverProperties
---@field Name FName
---@field SourceEventGenerator FName
---@field SourceEmitter FName
local FNiagaraEventReceiverProperties = {}



---@class FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
---@field ExecutionMode EScriptExecutionMode
---@field SpawnNumber uint32
---@field MaxEventsPerFrame uint32
---@field SourceEmitterID FGuid
---@field SourceEventName FName
---@field bRandomSpawnNumber boolean
---@field MinSpawnNumber uint32
local FNiagaraEventScriptProperties = {}



---@class FNiagaraFloat
---@field Value float
local FNiagaraFloat = {}



---@class FNiagaraFunctionSignature
---@field Name FName
---@field Inputs TArray<FNiagaraVariable>
---@field Outputs TArray<FNiagaraVariable>
---@field OwnerName FName
---@field bRequiresContext boolean
---@field bRequiresExecPin boolean
---@field bMemberFunction boolean
---@field bExperimental boolean
---@field bSupportsCPU boolean
---@field bSupportsGPU boolean
---@field bWriteFunction boolean
---@field bSoftDeprecatedFunction boolean
---@field ModuleUsageBitmask int32
---@field ContextStageMinIndex int32
---@field ContextStageMaxIndex int32
---@field FunctionSpecifiers TMap<FName, FName>
local FNiagaraFunctionSignature = {}



---@class FNiagaraGraphViewSettings
---@field Location FVector2D
---@field Zoom float
---@field bIsValid boolean
local FNiagaraGraphViewSettings = {}



---@class FNiagaraHalf
---@field Value uint16
local FNiagaraHalf = {}



---@class FNiagaraHalfVector2
---@field X uint16
---@field Y uint16
local FNiagaraHalfVector2 = {}



---@class FNiagaraHalfVector3
---@field X uint16
---@field Y uint16
---@field Z uint16
local FNiagaraHalfVector3 = {}



---@class FNiagaraHalfVector4
---@field X uint16
---@field Y uint16
---@field Z uint16
---@field W uint16
local FNiagaraHalfVector4 = {}



---@class FNiagaraID
---@field Index int32
---@field AcquireTag int32
local FNiagaraID = {}



---@class FNiagaraInputConditionMetadata
---@field InputName FName
---@field TargetValues TArray<FString>
local FNiagaraInputConditionMetadata = {}



---@class FNiagaraInt32
---@field Value int32
local FNiagaraInt32 = {}



---@class FNiagaraMaterialAttributeBinding
---@field MaterialParameterName FName
---@field NiagaraVariable FNiagaraVariableBase
---@field ResolvedNiagaraVariable FNiagaraVariableBase
---@field NiagaraChildVariable FNiagaraVariableBase
local FNiagaraMaterialAttributeBinding = {}



---@class FNiagaraMaterialOverride
---@field Material UMaterialInterface
---@field MaterialSubIndex uint32
---@field EmitterRendererProperty UNiagaraRendererProperties
local FNiagaraMaterialOverride = {}



---@class FNiagaraMatrix
---@field Row0 FVector4
---@field Row1 FVector4
---@field Row2 FVector4
---@field Row3 FVector4
local FNiagaraMatrix = {}



---@class FNiagaraMeshMaterialOverride
---@field ExplicitMat UMaterialInterface
---@field UserParamBinding FNiagaraUserParameterBinding
local FNiagaraMeshMaterialOverride = {}



---@class FNiagaraModuleDependency
---@field ID FName
---@field Type ENiagaraModuleDependencyType
---@field ScriptConstraint ENiagaraModuleDependencyScriptConstraint
---@field Description FText
local FNiagaraModuleDependency = {}



---@class FNiagaraNumeric
local FNiagaraNumeric = {}


---@class FNiagaraParameterDataSetBinding
---@field ParameterOffset int32
---@field DataSetComponentOffset int32
local FNiagaraParameterDataSetBinding = {}



---@class FNiagaraParameterDataSetBindingCollection
---@field FloatOffsets TArray<FNiagaraParameterDataSetBinding>
---@field Int32Offsets TArray<FNiagaraParameterDataSetBinding>
local FNiagaraParameterDataSetBindingCollection = {}



---@class FNiagaraParameterMap
local FNiagaraParameterMap = {}


---@class FNiagaraParameterScopeInfo
---@field Scope ENiagaraParameterScope
---@field NamespaceString FString
local FNiagaraParameterScopeInfo = {}



---@class FNiagaraParameterStore
---@field Owner UObject
---@field SortedParameterOffsets TArray<FNiagaraVariableWithOffset>
---@field ParameterData TArray<uint8>
---@field DataInterfaces TArray<UNiagaraDataInterface>
---@field UObjects TArray<UObject>
local FNiagaraParameterStore = {}



---@class FNiagaraParameters
---@field Parameters TArray<FNiagaraVariable>
local FNiagaraParameters = {}



---@class FNiagaraPlatformSet
---@field QualityLevelMask int32
---@field DeviceProfileStates TArray<FNiagaraDeviceProfileStateEntry>
---@field CVarConditions TArray<FNiagaraPlatformSetCVarCondition>
local FNiagaraPlatformSet = {}



---@class FNiagaraPlatformSetCVarCondition
---@field CVarName FName
---@field Value boolean
---@field MinInt int32
---@field MaxInt int32
---@field MinFloat float
---@field MaxFloat float
---@field bUseMinInt boolean
---@field bUseMaxInt boolean
---@field bUseMinFloat boolean
---@field bUseMaxFloat boolean
local FNiagaraPlatformSetCVarCondition = {}



---@class FNiagaraPlatformSetConflictEntry
---@field ProfileName FName
---@field QualityLevelMask int32
local FNiagaraPlatformSetConflictEntry = {}



---@class FNiagaraPlatformSetConflictInfo
---@field SetAIndex int32
---@field SetBIndex int32
---@field Conflicts TArray<FNiagaraPlatformSetConflictEntry>
local FNiagaraPlatformSetConflictInfo = {}



---@class FNiagaraRandInfo
---@field Seed1 int32
---@field Seed2 int32
---@field Seed3 int32
local FNiagaraRandInfo = {}



---@class FNiagaraRibbonUVSettings
---@field LeadingEdgeMode ENiagaraRibbonUVEdgeMode
---@field TrailingEdgeMode ENiagaraRibbonUVEdgeMode
---@field DistributionMode ENiagaraRibbonUVDistributionMode
---@field TilingLength float
---@field Offset FVector2D
---@field Scale FVector2D
---@field bEnablePerParticleUOverride boolean
---@field bEnablePerParticleVRangeOverride boolean
local FNiagaraRibbonUVSettings = {}



---@class FNiagaraScalabilityManager
---@field EffectType UNiagaraEffectType
---@field ManagedComponents TArray<UNiagaraComponent>
local FNiagaraScalabilityManager = {}



---@class FNiagaraScriptDataInterfaceCompileInfo
---@field Name FName
---@field UserPtrIdx int32
---@field Type FNiagaraTypeDefinition
---@field RegisteredParameterMapRead FName
---@field RegisteredParameterMapWrite FName
---@field bIsPlaceholder boolean
local FNiagaraScriptDataInterfaceCompileInfo = {}



---@class FNiagaraScriptDataInterfaceInfo
---@field DataInterface UNiagaraDataInterface
---@field Name FName
---@field UserPtrIdx int32
---@field Type FNiagaraTypeDefinition
---@field RegisteredParameterMapRead FName
---@field RegisteredParameterMapWrite FName
local FNiagaraScriptDataInterfaceInfo = {}



---@class FNiagaraScriptDataUsageInfo
---@field bReadsAttributeData boolean
local FNiagaraScriptDataUsageInfo = {}



---@class FNiagaraScriptExecutionPaddingInfo
---@field SrcOffset uint16
---@field DestOffset uint16
---@field SrcSize uint16
---@field DestSize uint16
local FNiagaraScriptExecutionPaddingInfo = {}



---@class FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
---@field ParameterSize int32
---@field PaddedParameterSize uint32
---@field PaddingInfo TArray<FNiagaraScriptExecutionPaddingInfo>
---@field bInitialized boolean
local FNiagaraScriptExecutionParameterStore = {}



---@class FNiagaraScriptHighlight
---@field Color FLinearColor
---@field DisplayName FText
local FNiagaraScriptHighlight = {}



---@class FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
local FNiagaraScriptInstanceParameterStore = {}


---@class FNiagaraScriptVariableBinding
---@field Name FName
local FNiagaraScriptVariableBinding = {}



---@class FNiagaraSpawnInfo
---@field Count int32
---@field InterpStartDt float
---@field IntervalDt float
---@field SpawnGroup int32
local FNiagaraSpawnInfo = {}



---@class FNiagaraStatScope
---@field FullName FName
---@field FriendlyName FName
local FNiagaraStatScope = {}



---@class FNiagaraSystemCompileRequest
---@field RootObjects TArray<UObject>
local FNiagaraSystemCompileRequest = {}



---@class FNiagaraSystemCompiledData
---@field InstanceParamStore FNiagaraParameterStore
---@field DataSetCompiledData FNiagaraDataSetCompiledData
---@field SpawnInstanceParamsDataSetCompiledData FNiagaraDataSetCompiledData
---@field UpdateInstanceParamsDataSetCompiledData FNiagaraDataSetCompiledData
---@field SpawnInstanceGlobalBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceSystemBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceOwnerBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceEmitterBindings TArray<FNiagaraParameterDataSetBindingCollection>
---@field UpdateInstanceGlobalBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceSystemBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceOwnerBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceEmitterBindings TArray<FNiagaraParameterDataSetBindingCollection>
local FNiagaraSystemCompiledData = {}



---@class FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
---@field bOverrideDistanceSettings boolean
---@field bOverrideInstanceCountSettings boolean
---@field bOverridePerSystemInstanceCountSettings boolean
---@field bOverrideTimeSinceRendererSettings boolean
local FNiagaraSystemScalabilityOverride = {}



---@class FNiagaraSystemScalabilityOverrides
---@field Overrides TArray<FNiagaraSystemScalabilityOverride>
local FNiagaraSystemScalabilityOverrides = {}



---@class FNiagaraSystemScalabilitySettings
---@field Platforms FNiagaraPlatformSet
---@field bCullByDistance boolean
---@field bCullMaxInstanceCount boolean
---@field bCullPerSystemMaxInstanceCount boolean
---@field bCullByMaxTimeWithoutRender boolean
---@field MaxDistance float
---@field MaxInstances int32
---@field MaxSystemInstances int32
---@field MaxTimeWithoutRender float
local FNiagaraSystemScalabilitySettings = {}



---@class FNiagaraSystemScalabilitySettingsArray
---@field Settings TArray<FNiagaraSystemScalabilitySettings>
local FNiagaraSystemScalabilitySettingsArray = {}



---@class FNiagaraSystemUpdateContext
---@field ComponentsToReset TArray<UNiagaraComponent>
---@field ComponentsToReInit TArray<UNiagaraComponent>
---@field ComponentsToNotifySimDestroy TArray<UNiagaraComponent>
---@field SystemSimsToDestroy TArray<UNiagaraSystem>
local FNiagaraSystemUpdateContext = {}



---@class FNiagaraTypeDefinition
---@field ClassStructOrEnum UObject
---@field UnderlyingType uint16
local FNiagaraTypeDefinition = {}



---@class FNiagaraTypeDefinitionHandle
---@field RegisteredTypeIndex int32
local FNiagaraTypeDefinitionHandle = {}



---@class FNiagaraTypeLayoutInfo
---@field FloatComponentByteOffsets TArray<uint32>
---@field FloatComponentRegisterOffsets TArray<uint32>
---@field Int32ComponentByteOffsets TArray<uint32>
---@field Int32ComponentRegisterOffsets TArray<uint32>
---@field HalfComponentByteOffsets TArray<uint32>
---@field HalfComponentRegisterOffsets TArray<uint32>
local FNiagaraTypeLayoutInfo = {}



---@class FNiagaraUserParameterBinding
---@field Parameter FNiagaraVariable
local FNiagaraUserParameterBinding = {}



---@class FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
---@field UserParameterRedirects TMap<FNiagaraVariable, FNiagaraVariable>
local FNiagaraUserRedirectionParameterStore = {}



---@class FNiagaraVMExecutableData
---@field ByteCode TArray<uint8>
---@field OptimizedByteCode TArray<uint8>
---@field NumTempRegisters int32
---@field NumUserPtrs int32
---@field ScriptLiterals TArray<uint8>
---@field Attributes TArray<FNiagaraVariable>
---@field DataUsage FNiagaraScriptDataUsageInfo
---@field DataInterfaceInfo TArray<FNiagaraScriptDataInterfaceCompileInfo>
---@field CalledVMExternalFunctions TArray<FVMExternalFunctionBindingInfo>
---@field ReadDataSets TArray<FNiagaraDataSetID>
---@field WriteDataSets TArray<FNiagaraDataSetProperties>
---@field StatScopes TArray<FNiagaraStatScope>
---@field DIParamInfo TArray<FNiagaraDataInterfaceGPUParamInfo>
---@field LastCompileStatus ENiagaraScriptCompileStatus
---@field SimulationStageMetaData TArray<FSimulationStageMetaData>
---@field bReadsSignificanceIndex boolean
local FNiagaraVMExecutableData = {}



---@class FNiagaraVMExecutableDataId
---@field CompilerVersionID FGuid
---@field ScriptUsageType ENiagaraScriptUsage
---@field ScriptUsageTypeID FGuid
---@field bUsesRapidIterationParams boolean
---@field bInterpolatedSpawn boolean
---@field bRequiresPersistentIDs boolean
---@field BaseScriptID FGuid
---@field BaseScriptCompileHash FNiagaraCompileHash
local FNiagaraVMExecutableDataId = {}



---@class FNiagaraVariable : FNiagaraVariableBase
---@field VarData TArray<uint8>
local FNiagaraVariable = {}



---@class FNiagaraVariableAttributeBinding
---@field ParamMapVariable FNiagaraVariableBase
---@field DataSetVariable FNiagaraVariable
---@field RootVariable FNiagaraVariable
---@field BindingSourceMode ENiagaraBindingSource
---@field bBindingExistsOnSource boolean
---@field bIsCachedParticleValue boolean
local FNiagaraVariableAttributeBinding = {}



---@class FNiagaraVariableBase
---@field Name FName
---@field TypeDefHandle FNiagaraTypeDefinitionHandle
local FNiagaraVariableBase = {}



---@class FNiagaraVariableDataInterfaceBinding
---@field BoundVariable FNiagaraVariable
local FNiagaraVariableDataInterfaceBinding = {}



---@class FNiagaraVariableInfo
---@field Variable FNiagaraVariable
---@field Definition FText
---@field DataInterface UNiagaraDataInterface
local FNiagaraVariableInfo = {}



---@class FNiagaraVariableLayoutInfo
---@field FloatComponentStart uint32
---@field Int32ComponentStart uint32
---@field HalfComponentStart uint32
---@field LayoutInfo FNiagaraTypeLayoutInfo
local FNiagaraVariableLayoutInfo = {}



---@class FNiagaraVariableMetaData
---@field Description FText
---@field CategoryName FText
---@field bAdvancedDisplay boolean
---@field EditorSortPriority int32
---@field bInlineEditConditionToggle boolean
---@field EditCondition FNiagaraInputConditionMetadata
---@field VisibleCondition FNiagaraInputConditionMetadata
---@field PropertyMetaData TMap<FName, FString>
---@field ParentAttribute FName
---@field ScopeName FName
---@field Usage ENiagaraScriptParameterUsage
---@field bIsStaticSwitch boolean
---@field StaticSwitchDefaultValue int32
---@field bAddedToNodeGraphDeepCopy boolean
---@field bOutputIsPersistent boolean
---@field CachedNamespacelessVariableName FName
---@field bCreatedInSystemEditor boolean
---@field bUseLegacyNameString boolean
local FNiagaraVariableMetaData = {}



---@class FNiagaraVariableWithOffset : FNiagaraVariableBase
---@field Offset int32
local FNiagaraVariableWithOffset = {}



---@class FNiagaraVariant
---@field Object UObject
---@field DataInterface UNiagaraDataInterface
---@field Bytes TArray<uint8>
---@field CurrentMode ENiagaraVariantMode
local FNiagaraVariant = {}



---@class FNiagaraWorldManagerTickFunction : FTickFunction
local FNiagaraWorldManagerTickFunction = {}


---@class FVMExternalFunctionBindingInfo
---@field Name FName
---@field OwnerName FName
---@field InputParamLocations TArray<boolean>
---@field NumOutputs int32
---@field FunctionSpecifiers TArray<FVMFunctionSpecifier>
local FVMExternalFunctionBindingInfo = {}



---@class FVMFunctionSpecifier
---@field Key FName
---@field Value FName
local FVMFunctionSpecifier = {}



---@class INiagaraParticleCallbackHandler : IInterface
local INiagaraParticleCallbackHandler = {}

---@param Data TArray<FBasicParticleData>
---@param NiagaraSystem UNiagaraSystem
function INiagaraParticleCallbackHandler:ReceiveParticleData(Data, NiagaraSystem) end


---@class UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack
local UMovieSceneNiagaraBoolParameterTrack = {}


---@class UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack
local UMovieSceneNiagaraColorParameterTrack = {}


---@class UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack
local UMovieSceneNiagaraFloatParameterTrack = {}


---@class UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack
local UMovieSceneNiagaraIntegerParameterTrack = {}


---@class UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack
---@field Parameter FNiagaraVariable
local UMovieSceneNiagaraParameterTrack = {}



---@class UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
---@field SectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior
---@field SectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior
---@field SectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior
---@field AgeUpdateMode ENiagaraAgeUpdateMode
local UMovieSceneNiagaraSystemSpawnSection = {}



---@class UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack
local UMovieSceneNiagaraSystemTrack = {}


---@class UMovieSceneNiagaraTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneNiagaraTrack = {}



---@class UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack
---@field ChannelsUsed int32
local UMovieSceneNiagaraVectorParameterTrack = {}



---@class UNiagaraComponent : UFXSystemComponent
---@field Asset UNiagaraSystem
---@field TickBehavior ENiagaraTickBehavior
---@field OverrideParameters FNiagaraUserRedirectionParameterStore
---@field bForceSolo boolean
---@field bEnableGpuComputeDebug boolean
---@field bAutoDestroy boolean
---@field bRenderingEnabled boolean
---@field bAutoManageAttachment boolean
---@field bAutoAttachWeldSimulatedBodies boolean
---@field MaxTimeBeforeForceUpdateTransform float
---@field EmitterMaterials TArray<FNiagaraMaterialOverride>
---@field OnSystemFinished FNiagaraComponentOnSystemFinished
---@field AutoAttachParent TWeakObjectPtr<USceneComponent>
---@field AutoAttachSocketName FName
---@field AutoAttachLocationRule EAttachmentRule
---@field AutoAttachRotationRule EAttachmentRule
---@field AutoAttachScaleRule EAttachmentRule
local UNiagaraComponent = {}

---@param InVariableName FName
---@param InValue FVector4
function UNiagaraComponent:SetVariableVec4(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector
function UNiagaraComponent:SetVariableVec3(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector2D
function UNiagaraComponent:SetVariableVec2(InVariableName, InValue) end
---@param InVariableName FName
---@param TextureRenderTarget UTextureRenderTarget
function UNiagaraComponent:SetVariableTextureRenderTarget(InVariableName, TextureRenderTarget) end
---@param InVariableName FName
---@param InValue FQuat
function UNiagaraComponent:SetVariableQuat(InVariableName, InValue) end
---@param InVariableName FName
---@param Object UObject
function UNiagaraComponent:SetVariableObject(InVariableName, Object) end
---@param InVariableName FName
---@param Object UMaterialInterface
function UNiagaraComponent:SetVariableMaterial(InVariableName, Object) end
---@param InVariableName FName
---@param InValue FLinearColor
function UNiagaraComponent:SetVariableLinearColor(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue int32
function UNiagaraComponent:SetVariableInt(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue float
function UNiagaraComponent:SetVariableFloat(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue boolean
function UNiagaraComponent:SetVariableBool(InVariableName, InValue) end
---@param InVariableName FName
---@param Actor AActor
function UNiagaraComponent:SetVariableActor(InVariableName, Actor) end
---@param NewTickBehavior ENiagaraTickBehavior
function UNiagaraComponent:SetTickBehavior(NewTickBehavior) end
---@param InSeekDelta float
function UNiagaraComponent:SetSeekDelta(InSeekDelta) end
---@param bInRenderingEnabled boolean
function UNiagaraComponent:SetRenderingEnabled(bInRenderingEnabled) end
---@param bEnablePreviewLODDistance boolean
---@param PreviewLODDistance float
function UNiagaraComponent:SetPreviewLODDistance(bEnablePreviewLODDistance, PreviewLODDistance) end
---@param bInPaused boolean
function UNiagaraComponent:SetPaused(bInPaused) end
---@param InVariableName FString
---@param InValue FVector4
function UNiagaraComponent:SetNiagaraVariableVec4(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector
function UNiagaraComponent:SetNiagaraVariableVec3(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector2D
function UNiagaraComponent:SetNiagaraVariableVec2(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FQuat
function UNiagaraComponent:SetNiagaraVariableQuat(InVariableName, InValue) end
---@param InVariableName FString
---@param Object UObject
function UNiagaraComponent:SetNiagaraVariableObject(InVariableName, Object) end
---@param InVariableName FString
---@param InValue FLinearColor
function UNiagaraComponent:SetNiagaraVariableLinearColor(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue int32
function UNiagaraComponent:SetNiagaraVariableInt(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue float
function UNiagaraComponent:SetNiagaraVariableFloat(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue boolean
function UNiagaraComponent:SetNiagaraVariableBool(InVariableName, InValue) end
---@param InVariableName FString
---@param Actor AActor
function UNiagaraComponent:SetNiagaraVariableActor(InVariableName, Actor) end
---@param InMaxTime float
function UNiagaraComponent:SetMaxSimTime(InMaxTime) end
---@param bEnableDebug boolean
function UNiagaraComponent:SetGpuComputeDebug(bEnableDebug) end
---@param bInForceSolo boolean
function UNiagaraComponent:SetForceSolo(bInForceSolo) end
---@param InDesiredAge float
function UNiagaraComponent:SetDesiredAge(InDesiredAge) end
---@param bInCanRenderWhileSeeking boolean
function UNiagaraComponent:SetCanRenderWhileSeeking(bInCanRenderWhileSeeking) end
---@param bInAutoDestroy boolean
function UNiagaraComponent:SetAutoDestroy(bInAutoDestroy) end
---@param InAsset UNiagaraSystem
function UNiagaraComponent:SetAsset(InAsset) end
---@param bAllow boolean
function UNiagaraComponent:SetAllowScalability(bAllow) end
---@param InAgeUpdateMode ENiagaraAgeUpdateMode
function UNiagaraComponent:SetAgeUpdateMode(InAgeUpdateMode) end
---@param InDesiredAge float
function UNiagaraComponent:SeekToDesiredAge(InDesiredAge) end
function UNiagaraComponent:ResetSystem() end
function UNiagaraComponent:ReinitializeSystem() end
---@return boolean
function UNiagaraComponent:IsPaused() end
---@return ENiagaraTickBehavior
function UNiagaraComponent:GetTickBehavior() end
---@return float
function UNiagaraComponent:GetSeekDelta() end
---@return boolean
function UNiagaraComponent:GetPreviewLODDistanceEnabled() end
---@return int32
function UNiagaraComponent:GetPreviewLODDistance() end
---@param InEmitterName FString
---@param InValueName FString
---@return TArray<FVector>
function UNiagaraComponent:GetNiagaraParticleValueVec3_DebugOnly(InEmitterName, InValueName) end
---@param InEmitterName FString
---@param InValueName FString
---@return TArray<float>
function UNiagaraComponent:GetNiagaraParticleValues_DebugOnly(InEmitterName, InValueName) end
---@param InEmitterName FString
---@return TArray<FVector>
function UNiagaraComponent:GetNiagaraParticlePositions_DebugOnly(InEmitterName) end
---@return float
function UNiagaraComponent:GetMaxSimTime() end
---@return boolean
function UNiagaraComponent:GetForceSolo() end
---@return float
function UNiagaraComponent:GetDesiredAge() end
---@param Name FString
---@return UNiagaraDataInterface
function UNiagaraComponent:GetDataInterface(Name) end
---@return UNiagaraSystem
function UNiagaraComponent:GetAsset() end
---@return ENiagaraAgeUpdateMode
function UNiagaraComponent:GetAgeUpdateMode() end
---@param SimulateTime float
---@param TickDeltaSeconds float
function UNiagaraComponent:AdvanceSimulationByTime(SimulateTime, TickDeltaSeconds) end
---@param TickCount int32
---@param TickDeltaSeconds float
function UNiagaraComponent:AdvanceSimulation(TickCount, TickDeltaSeconds) end


---@class UNiagaraComponentPool : UObject
---@field WorldParticleSystemPools TMap<UNiagaraSystem, FNCPool>
local UNiagaraComponentPool = {}



---@class UNiagaraComponentRendererProperties : UNiagaraRendererProperties
---@field ComponentType TSubclassOf<USceneComponent>
---@field ComponentCountLimit uint32
---@field EnabledBinding FNiagaraVariableAttributeBinding
---@field bAssignComponentsOnParticleID boolean
---@field bOnlyCreateComponentsOnParticleSpawn boolean
---@field TemplateComponent USceneComponent
---@field PropertyBindings TArray<FNiagaraComponentPropertyBinding>
local UNiagaraComponentRendererProperties = {}



---@class UNiagaraComponentSettings : UObject
---@field SuppressActivationList TSet<FName>
---@field ForceAutoPooolingList TSet<FName>
---@field SuppressEmitterList TSet<FNiagaraEmitterNameSettingsRef>
local UNiagaraComponentSettings = {}



---@class UNiagaraConvertInPlaceUtilityBase : UObject
local UNiagaraConvertInPlaceUtilityBase = {}


---@class UNiagaraDataInterface : UNiagaraDataInterfaceBase
local UNiagaraDataInterface = {}


---@class UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface
---@field Texture UTexture2DArray
local UNiagaraDataInterface2DArrayTexture = {}



---@class UNiagaraDataInterfaceArray : UNiagaraDataInterface
---@field MaxElements int32
local UNiagaraDataInterfaceArray = {}



---@class UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray
---@field BoolData TArray<boolean>
local UNiagaraDataInterfaceArrayBool = {}



---@class UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray
---@field ColorData TArray<FLinearColor>
local UNiagaraDataInterfaceArrayColor = {}



---@class UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray
---@field FloatData TArray<float>
local UNiagaraDataInterfaceArrayFloat = {}



---@class UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray
---@field FloatData TArray<FVector2D>
local UNiagaraDataInterfaceArrayFloat2 = {}



---@class UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray
---@field FloatData TArray<FVector>
local UNiagaraDataInterfaceArrayFloat3 = {}



---@class UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray
---@field FloatData TArray<FVector4>
local UNiagaraDataInterfaceArrayFloat4 = {}



---@class UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary
local UNiagaraDataInterfaceArrayFunctionLibrary = {}

---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector4>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector4(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector2D>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector2D(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FQuat>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayQuat(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<int32>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayInt32(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<float>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayFloat(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FLinearColor>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayColor(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<boolean>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayBool(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector4>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector4(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector2D>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector2D(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FQuat>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayQuat(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<int32>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayInt32(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<float>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayFloat(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FLinearColor>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayColor(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<boolean>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayBool(NiagaraSystem, OverrideName) end


---@class UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray
---@field IntData TArray<int32>
local UNiagaraDataInterfaceArrayInt32 = {}



---@class UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray
---@field QuatData TArray<FQuat>
local UNiagaraDataInterfaceArrayQuat = {}



---@class UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
---@field Submix USoundSubmix
---@field Resolution int32
---@field ScopeInMilliseconds float
local UNiagaraDataInterfaceAudioOscilloscope = {}



---@class UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface
---@field SoundToPlay USoundBase
---@field Attenuation USoundAttenuation
---@field Concurrency USoundConcurrency
---@field ParameterNames TArray<FName>
---@field bLimitPlaysPerTick boolean
---@field MaxPlaysPerTick int32
---@field bStopWhenComponentIsDestroyed boolean
local UNiagaraDataInterfaceAudioPlayer = {}



---@class UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
---@field Resolution int32
---@field MinimumFrequency float
---@field MaximumFrequency float
---@field NoiseFloorDb float
local UNiagaraDataInterfaceAudioSpectrum = {}



---@class UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface
---@field Submix USoundSubmix
local UNiagaraDataInterfaceAudioSubmix = {}



---@class UNiagaraDataInterfaceCamera : UNiagaraDataInterface
---@field PlayerControllerIndex int32
---@field bRequireCurrentFrameData boolean
local UNiagaraDataInterfaceCamera = {}



---@class UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface
local UNiagaraDataInterfaceCollisionQuery = {}


---@class UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase
---@field RedCurve FRichCurve
---@field GreenCurve FRichCurve
---@field BlueCurve FRichCurve
---@field AlphaCurve FRichCurve
local UNiagaraDataInterfaceColorCurve = {}



---@class UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface
---@field Seed uint32
local UNiagaraDataInterfaceCurlNoise = {}



---@class UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase
---@field Curve FRichCurve
local UNiagaraDataInterfaceCurve = {}



---@class UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
---@field ShaderLUT TArray<float>
---@field LUTMinTime float
---@field LUTMaxTime float
---@field LUTInvTimeRange float
---@field LUTNumSamplesMinusOne float
---@field bUseLUT boolean
---@field bExposeCurve boolean
---@field ExposedName FName
---@field ExposedTexture UTexture2D
local UNiagaraDataInterfaceCurveBase = {}



---@class UNiagaraDataInterfaceExport : UNiagaraDataInterface
---@field CallbackHandlerParameter FNiagaraUserParameterBinding
---@field GPUAllocationMode ENDIExport_GPUAllocationMode
---@field GPUAllocationFixedSize int32
---@field GPUAllocationPerParticleSize float
local UNiagaraDataInterfaceExport = {}



---@class UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface
local UNiagaraDataInterfaceGBuffer = {}


---@class UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
---@field NumCellsX int32
---@field NumCellsY int32
---@field NumCellsMaxAxis int32
---@field NumAttributes int32
---@field SetGridFromMaxAxis boolean
---@field WorldBBoxSize FVector2D
local UNiagaraDataInterfaceGrid2D = {}



---@class UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field OverrideBufferFormat ENiagaraGpuBufferFormat
---@field bOverrideFormat boolean
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2DArray>
local UNiagaraDataInterfaceGrid2DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
function UNiagaraDataInterfaceGrid2DCollection:GetTextureSize(Component, SizeX, SizeY) end
---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
function UNiagaraDataInterfaceGrid2DCollection:GetRawTextureSize(Component, SizeX, SizeY) end
---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param AttributeIndex int32
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillTexture2D(Component, Dest, AttributeIndex) end
---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param TilesX int32
---@param TilesY int32
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillRawTexture2D(Component, Dest, TilesX, TilesY) end


---@class UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D
---@field EmitterName FString
---@field DIName FString
local UNiagaraDataInterfaceGrid2DCollectionReader = {}



---@class UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
---@field NumCells FIntVector
---@field CellSize float
---@field NumCellsMaxAxis int32
---@field SetResolutionMethod ESetResolutionMethod
---@field WorldBBoxSize FVector
local UNiagaraDataInterfaceGrid3D = {}



---@class UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D
---@field NumAttributes int32
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field BufferFormat ENiagaraGpuBufferFormat
local UNiagaraDataInterfaceGrid3DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
---@param SizeZ int32
function UNiagaraDataInterfaceGrid3DCollection:GetTextureSize(Component, SizeX, SizeY, SizeZ) end
---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
---@param SizeZ int32
function UNiagaraDataInterfaceGrid3DCollection:GetRawTextureSize(Component, SizeX, SizeY, SizeZ) end
---@param Component UNiagaraComponent
---@param Dest UVolumeTexture
---@param AttributeIndex int32
---@return boolean
function UNiagaraDataInterfaceGrid3DCollection:FillVolumeTexture(Component, Dest, AttributeIndex) end
---@param Component UNiagaraComponent
---@param Dest UVolumeTexture
---@param TilesX int32
---@param TilesY int32
---@param TileZ int32
---@return boolean
function UNiagaraDataInterfaceGrid3DCollection:FillRawVolumeTexture(Component, Dest, TilesX, TilesY, TileZ) end


---@class UNiagaraDataInterfaceLandscape : UNiagaraDataInterface
---@field SourceLandscape AActor
local UNiagaraDataInterfaceLandscape = {}



---@class UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D
---@field MaxNeighborsPerCell uint32
local UNiagaraDataInterfaceNeighborGrid3D = {}



---@class UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface
local UNiagaraDataInterfaceOcclusion = {}


---@class UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase
---@field EmitterName FString
local UNiagaraDataInterfaceParticleRead = {}



---@class UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface
---@field Platforms FNiagaraPlatformSet
local UNiagaraDataInterfacePlatformSet = {}



---@class UNiagaraDataInterfaceRWBase : UNiagaraDataInterface
---@field OutputShaderStages TSet<int32>
---@field IterationShaderStages TSet<int32>
local UNiagaraDataInterfaceRWBase = {}



---@class UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase
---@field Size FIntPoint
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2D>
local UNiagaraDataInterfaceRenderTarget2D = {}



---@class UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase
---@field Size FIntVector
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2DArray>
local UNiagaraDataInterfaceRenderTarget2DArray = {}



---@class UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase
---@field Size FIntVector
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTargetVolume>
local UNiagaraDataInterfaceRenderTargetVolume = {}



---@class UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface
local UNiagaraDataInterfaceSimpleCounter = {}


---@class UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
---@field SourceMode ENDISkeletalMesh_SourceMode
---@field Source AActor
---@field MeshUserParameter FNiagaraUserParameterBinding
---@field SourceComponent USkeletalMeshComponent
---@field SkinningMode ENDISkeletalMesh_SkinningMode
---@field SamplingRegions TArray<FName>
---@field WholeMeshLOD int32
---@field FilteredBones TArray<FName>
---@field FilteredSockets TArray<FName>
---@field ExcludeBoneName FName
---@field bExcludeBone boolean
---@field bRequireCurrentFrameData boolean
local UNiagaraDataInterfaceSkeletalMesh = {}



---@class UNiagaraDataInterfaceSpline : UNiagaraDataInterface
---@field Source AActor
local UNiagaraDataInterfaceSpline = {}



---@class UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
---@field SourceMode ENDIStaticMesh_SourceMode
---@field DefaultMesh UStaticMesh
---@field Source AActor
---@field SourceComponent UStaticMeshComponent
---@field SectionFilter FNDIStaticMeshSectionFilter
---@field bUsePhysicsBodyVelocity boolean
---@field FilteredSockets TArray<FName>
local UNiagaraDataInterfaceStaticMesh = {}



---@class UNiagaraDataInterfaceTexture : UNiagaraDataInterface
---@field Texture UTexture
local UNiagaraDataInterfaceTexture = {}



---@class UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
local UNiagaraDataInterfaceVector2DCurve = {}



---@class UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
---@field ZCurve FRichCurve
---@field WCurve FRichCurve
local UNiagaraDataInterfaceVector4Curve = {}



---@class UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
---@field ZCurve FRichCurve
local UNiagaraDataInterfaceVectorCurve = {}



---@class UNiagaraDataInterfaceVectorField : UNiagaraDataInterface
---@field Field UVectorField
---@field bTileX boolean
---@field bTileY boolean
---@field bTileZ boolean
local UNiagaraDataInterfaceVectorField = {}



---@class UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface
---@field Texture UVolumeTexture
local UNiagaraDataInterfaceVolumeTexture = {}



---@class UNiagaraEditorDataBase : UObject
local UNiagaraEditorDataBase = {}


---@class UNiagaraEffectType : UObject
---@field UpdateFrequency ENiagaraScalabilityUpdateFrequency
---@field CullReaction ENiagaraCullReaction
---@field SignificanceHandler UNiagaraSignificanceHandler
---@field DetailLevelScalabilitySettings TArray<FNiagaraSystemScalabilitySettings>
---@field SystemScalabilitySettings FNiagaraSystemScalabilitySettingsArray
---@field EmitterScalabilitySettings FNiagaraEmitterScalabilitySettingsArray
local UNiagaraEffectType = {}



---@class UNiagaraEmitter : UObject
---@field bLocalSpace boolean
---@field bDeterminism boolean
---@field RandomSeed int32
---@field AllocationMode EParticleAllocationMode
---@field PreAllocationCount int32
---@field UpdateScriptProps FNiagaraEmitterScriptProperties
---@field SpawnScriptProps FNiagaraEmitterScriptProperties
---@field SimTarget ENiagaraSimTarget
---@field FixedBounds FBox
---@field MinDetailLevel int32
---@field MaxDetailLevel int32
---@field GlobalSpawnCountScaleOverrides FNiagaraDetailsLevelScaleOverrides
---@field Platforms FNiagaraPlatformSet
---@field ScalabilityOverrides FNiagaraEmitterScalabilityOverrides
---@field bInterpolatedSpawning boolean
---@field bFixedBounds boolean
---@field bUseMinDetailLevel boolean
---@field bUseMaxDetailLevel boolean
---@field bOverrideGlobalSpawnCountScale boolean
---@field bRequiresPersistentIDs boolean
---@field bCombineEventSpawn boolean
---@field MaxDeltaTimePerTick float
---@field DefaultShaderStageIndex uint32
---@field MaxUpdateIterations uint32
---@field SpawnStages TSet<uint32>
---@field bSimulationStagesEnabled boolean
---@field bDeprecatedShaderStagesEnabled boolean
---@field bLimitDeltaTime boolean
---@field UniqueEmitterName FString
---@field RendererProperties TArray<UNiagaraRendererProperties>
---@field EventHandlerScriptProps TArray<FNiagaraEventScriptProperties>
---@field SimulationStages TArray<UNiagaraSimulationStageBase>
---@field GPUComputeScript UNiagaraScript
---@field SharedEventGeneratorIds TArray<FName>
local UNiagaraEmitter = {}



---@class UNiagaraEventReceiverEmitterAction : UObject
local UNiagaraEventReceiverEmitterAction = {}


---@class UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction
---@field NumParticles uint32
local UNiagaraEventReceiverEmitterAction_SpawnParticles = {}



---@class UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
local UNiagaraFunctionLibrary = {}

---@param SystemTemplate UNiagaraSystem
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param bAutoDestroy boolean
---@param bAutoActivate boolean
---@param PoolingMethod ENCPoolMethod
---@param bPreCullCheck boolean
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAttached(SystemTemplate, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end
---@param WorldContextObject UObject
---@param SystemTemplate UNiagaraSystem
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
---@param bAutoDestroy boolean
---@param bAutoActivate boolean
---@param PoolingMethod ENCPoolMethod
---@param bPreCullCheck boolean
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAtLocation(WorldContextObject, SystemTemplate, Location, Rotation, Scale, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UVolumeTexture
function UNiagaraFunctionLibrary:SetVolumeTextureObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UTexture
function UNiagaraFunctionLibrary:SetTextureObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param SamplingRegions TArray<FName>
function UNiagaraFunctionLibrary:SetSkeletalMeshDataInterfaceSamplingRegions(NiagaraSystem, OverrideName, SamplingRegions) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param StaticMeshComponent UStaticMeshComponent
function UNiagaraFunctionLibrary:OverrideSystemUserVariableStaticMeshComponent(NiagaraSystem, OverrideName, StaticMeshComponent) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param StaticMesh UStaticMesh
function UNiagaraFunctionLibrary:OverrideSystemUserVariableStaticMesh(NiagaraSystem, OverrideName, StaticMesh) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param SkeletalMeshComponent USkeletalMeshComponent
function UNiagaraFunctionLibrary:OverrideSystemUserVariableSkeletalMeshComponent(NiagaraSystem, OverrideName, SkeletalMeshComponent) end
---@param WorldContextObject UObject
---@param Collection UNiagaraParameterCollection
---@return UNiagaraParameterCollectionInstance
function UNiagaraFunctionLibrary:GetNiagaraParameterCollection(WorldContextObject, Collection) end


---@class UNiagaraLightRendererProperties : UNiagaraRendererProperties
---@field bUseInverseSquaredFalloff boolean
---@field bAffectsTranslucency boolean
---@field RadiusScale float
---@field ColorAdd FVector
---@field LightRenderingEnabledBinding FNiagaraVariableAttributeBinding
---@field LightExponentBinding FNiagaraVariableAttributeBinding
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field RadiusBinding FNiagaraVariableAttributeBinding
---@field VolumetricScatteringBinding FNiagaraVariableAttributeBinding
local UNiagaraLightRendererProperties = {}



---@class UNiagaraMeshRendererProperties : UNiagaraRendererProperties
---@field ParticleMesh UStaticMesh
---@field SortMode ENiagaraSortMode
---@field bOverrideMaterials boolean
---@field bSortOnlyWhenTranslucent boolean
---@field OverrideMaterials TArray<FNiagaraMeshMaterialOverride>
---@field SubImageSize FVector2D
---@field bSubImageBlend boolean
---@field FacingMode ENiagaraMeshFacingMode
---@field bLockedAxisEnable boolean
---@field LockedAxis FVector
---@field LockedAxisSpace ENiagaraMeshLockedAxisSpace
---@field PivotOffset FVector
---@field PivotOffsetSpace ENiagaraMeshPivotOffsetSpace
---@field bEnableFrustumCulling boolean
---@field bEnableCameraDistanceCulling boolean
---@field MinCameraDistance float
---@field MaxCameraDistance float
---@field RendererVisibility uint32
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field MeshOrientationBinding FNiagaraVariableAttributeBinding
---@field ScaleBinding FNiagaraVariableAttributeBinding
---@field SubImageIndexBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field CustomSortingBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field CameraOffsetBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
local UNiagaraMeshRendererProperties = {}



---@class UNiagaraMessageDataBase : UObject
local UNiagaraMessageDataBase = {}


---@class UNiagaraParameterCollection : UObject
---@field Namespace FName
---@field Parameters TArray<FNiagaraVariable>
---@field SourceMaterialCollection UMaterialParameterCollection
---@field DefaultInstance UNiagaraParameterCollectionInstance
---@field CompileId FGuid
local UNiagaraParameterCollection = {}



---@class UNiagaraParameterCollectionInstance : UObject
---@field Collection UNiagaraParameterCollection
---@field OverridenParameters TArray<FNiagaraVariable>
---@field ParameterStorage FNiagaraParameterStore
local UNiagaraParameterCollectionInstance = {}

---@param InVariableName FString
---@param InValue FVector
function UNiagaraParameterCollectionInstance:SetVectorParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector4
function UNiagaraParameterCollectionInstance:SetVector4Parameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector2D
function UNiagaraParameterCollectionInstance:SetVector2DParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FQuat
function UNiagaraParameterCollectionInstance:SetQuatParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue int32
function UNiagaraParameterCollectionInstance:SetIntParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue float
function UNiagaraParameterCollectionInstance:SetFloatParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FLinearColor
function UNiagaraParameterCollectionInstance:SetColorParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue boolean
function UNiagaraParameterCollectionInstance:SetBoolParameter(InVariableName, InValue) end
---@param InVariableName FString
---@return FVector
function UNiagaraParameterCollectionInstance:GetVectorParameter(InVariableName) end
---@param InVariableName FString
---@return FVector4
function UNiagaraParameterCollectionInstance:GetVector4Parameter(InVariableName) end
---@param InVariableName FString
---@return FVector2D
function UNiagaraParameterCollectionInstance:GetVector2DParameter(InVariableName) end
---@param InVariableName FString
---@return FQuat
function UNiagaraParameterCollectionInstance:GetQuatParameter(InVariableName) end
---@param InVariableName FString
---@return int32
function UNiagaraParameterCollectionInstance:GetIntParameter(InVariableName) end
---@param InVariableName FString
---@return float
function UNiagaraParameterCollectionInstance:GetFloatParameter(InVariableName) end
---@param InVariableName FString
---@return FLinearColor
function UNiagaraParameterCollectionInstance:GetColorParameter(InVariableName) end
---@param InVariableName FString
---@return boolean
function UNiagaraParameterCollectionInstance:GetBoolParameter(InVariableName) end


---@class UNiagaraPrecompileContainer : UObject
---@field Scripts TArray<UNiagaraScript>
---@field System UNiagaraSystem
local UNiagaraPrecompileContainer = {}



---@class UNiagaraPreviewAxis : UObject
local UNiagaraPreviewAxis = {}

---@return int32
function UNiagaraPreviewAxis:Num() end
---@param PreviewComponent UNiagaraComponent
---@param PreviewIndex int32
---@param bIsXAxis boolean
---@param OutLabelText FString
function UNiagaraPreviewAxis:ApplyToPreview(PreviewComponent, PreviewIndex, bIsXAxis, OutLabelText) end


---@class UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis
---@field Param FName
---@field Count int32
local UNiagaraPreviewAxis_InterpParamBase = {}



---@class UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase
---@field Min float
---@field Max float
local UNiagaraPreviewAxis_InterpParamFloat = {}



---@class UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase
---@field Min int32
---@field Max int32
local UNiagaraPreviewAxis_InterpParamInt32 = {}



---@class UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase
---@field Min FLinearColor
---@field Max FLinearColor
local UNiagaraPreviewAxis_InterpParamLinearColor = {}



---@class UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector
---@field Max FVector
local UNiagaraPreviewAxis_InterpParamVector = {}



---@class UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector2D
---@field Max FVector2D
local UNiagaraPreviewAxis_InterpParamVector2D = {}



---@class UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector4
---@field Max FVector4
local UNiagaraPreviewAxis_InterpParamVector4 = {}



---@class UNiagaraRendererProperties : UNiagaraMergeable
---@field Platforms FNiagaraPlatformSet
---@field SortOrderHint int32
---@field bIsEnabled boolean
---@field bMotionBlurEnabled boolean
local UNiagaraRendererProperties = {}



---@class UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
---@field Material UMaterialInterface
---@field MaterialUserParamBinding FNiagaraUserParameterBinding
---@field FacingMode ENiagaraRibbonFacingMode
---@field UV0Settings FNiagaraRibbonUVSettings
---@field UV1Settings FNiagaraRibbonUVSettings
---@field DrawDirection ENiagaraRibbonDrawDirection
---@field CurveTension float
---@field TessellationMode ENiagaraRibbonTessellationMode
---@field TessellationFactor int32
---@field bUseConstantFactor boolean
---@field TessellationAngle float
---@field bScreenSpaceTessellation boolean
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field RibbonTwistBinding FNiagaraVariableAttributeBinding
---@field RibbonWidthBinding FNiagaraVariableAttributeBinding
---@field RibbonFacingBinding FNiagaraVariableAttributeBinding
---@field RibbonIdBinding FNiagaraVariableAttributeBinding
---@field RibbonLinkOrderBinding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field U0OverrideBinding FNiagaraVariableAttributeBinding
---@field V0RangeOverrideBinding FNiagaraVariableAttributeBinding
---@field U1OverrideBinding FNiagaraVariableAttributeBinding
---@field V1RangeOverrideBinding FNiagaraVariableAttributeBinding
local UNiagaraRibbonRendererProperties = {}



---@class UNiagaraScript : UNiagaraScriptBase
---@field Usage ENiagaraScriptUsage
---@field UsageIndex int32
---@field UsageId FGuid
---@field RapidIterationParameters FNiagaraParameterStore
---@field ScriptExecutionParamStore FNiagaraScriptExecutionParameterStore
---@field ScriptExecutionBoundParameters TArray<FNiagaraBoundParameter>
---@field CachedScriptVMId FNiagaraVMExecutableDataId
---@field CachedScriptVM FNiagaraVMExecutableData
---@field CachedParameterCollectionReferences TArray<UNiagaraParameterCollection>
---@field CachedDefaultDataInterfaces TArray<FNiagaraScriptDataInterfaceInfo>
local UNiagaraScript = {}

function UNiagaraScript:RaiseOnGPUCompilationComplete() end


---@class UNiagaraScriptSourceBase : UObject
local UNiagaraScriptSourceBase = {}


---@class UNiagaraSettings : UDeveloperSettings
---@field DefaultEffectType FSoftObjectPath
---@field QualityLevels TArray<FText>
---@field ComponentRendererWarningsPerClass TMap<FString, FText>
---@field DefaultRenderTargetFormat ETextureRenderTargetFormat
---@field DefaultGridFormat ENiagaraGpuBufferFormat
---@field DefaultEffectTypePtr UNiagaraEffectType
local UNiagaraSettings = {}



---@class UNiagaraSignificanceHandler : UObject
local UNiagaraSignificanceHandler = {}


---@class UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler
local UNiagaraSignificanceHandlerAge = {}


---@class UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler
local UNiagaraSignificanceHandlerDistance = {}


---@class UNiagaraSimulationStageBase : UNiagaraMergeable
---@field Script UNiagaraScript
---@field SimulationStageName FName
---@field bEnabled boolean
local UNiagaraSimulationStageBase = {}



---@class UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase
---@field IterationSource ENiagaraIterationSource
---@field Iterations int32
---@field bSpawnOnly boolean
---@field bDisablePartialParticleUpdate boolean
---@field DataInterface FNiagaraVariableDataInterfaceBinding
local UNiagaraSimulationStageGeneric = {}



---@class UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
---@field Material UMaterialInterface
---@field SourceMode ENiagaraRendererSourceDataMode
---@field MaterialUserParamBinding FNiagaraUserParameterBinding
---@field Alignment ENiagaraSpriteAlignment
---@field FacingMode ENiagaraSpriteFacingMode
---@field PivotInUVSpace FVector2D
---@field SortMode ENiagaraSortMode
---@field SubImageSize FVector2D
---@field bSubImageBlend boolean
---@field bRemoveHMDRollInVR boolean
---@field bSortOnlyWhenTranslucent boolean
---@field bGpuLowLatencyTranslucency boolean
---@field MinFacingCameraBlendDistance float
---@field MaxFacingCameraBlendDistance float
---@field bEnableCameraDistanceCulling boolean
---@field MinCameraDistance float
---@field MaxCameraDistance float
---@field RendererVisibility uint32
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field SpriteRotationBinding FNiagaraVariableAttributeBinding
---@field SpriteSizeBinding FNiagaraVariableAttributeBinding
---@field SpriteFacingBinding FNiagaraVariableAttributeBinding
---@field SpriteAlignmentBinding FNiagaraVariableAttributeBinding
---@field SubImageIndexBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field CameraOffsetBinding FNiagaraVariableAttributeBinding
---@field UVScaleBinding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field CustomSortingBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
---@field MaterialParameterBindings TArray<FNiagaraMaterialAttributeBinding>
local UNiagaraSpriteRendererProperties = {}



---@class UNiagaraSystem : UFXSystemAsset
---@field bDumpDebugSystemInfo boolean
---@field bDumpDebugEmitterInfo boolean
---@field bRequireCurrentFrameData boolean
---@field bFixedBounds boolean
---@field EffectType UNiagaraEffectType
---@field bOverrideScalabilitySettings boolean
---@field ScalabilityOverrides TArray<FNiagaraSystemScalabilityOverride>
---@field SystemScalabilityOverrides FNiagaraSystemScalabilityOverrides
---@field EmitterHandles TArray<FNiagaraEmitterHandle>
---@field ParameterCollectionOverrides TArray<UNiagaraParameterCollectionInstance>
---@field SystemSpawnScript UNiagaraScript
---@field SystemUpdateScript UNiagaraScript
---@field SystemCompiledData FNiagaraSystemCompiledData
---@field ExposedParameters FNiagaraUserRedirectionParameterStore
---@field FixedBounds FBox
---@field bAutoDeactivate boolean
---@field WarmupTime float
---@field WarmupTickCount int32
---@field WarmupTickDelta float
---@field bHasSystemScriptDIsWithPerInstanceData boolean
---@field UserDINamesReadInSystemScripts TArray<FName>
local UNiagaraSystem = {}



