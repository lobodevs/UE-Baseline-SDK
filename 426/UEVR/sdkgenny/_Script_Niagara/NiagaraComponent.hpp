#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\FXSystemComponent.hpp"
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_CoreUObject {
struct Vector4;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_Engine {
struct TextureRenderTarget;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Quat;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Niagara {
struct NiagaraDataInterface;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraComponent : public _Script_Engine::FXSystemComponent {
    private: char pad_440[0x1b0]; public:
    _Script_Niagara::NiagaraSystem*& get_Asset();
    void* get_TickBehavior();
    void* get_OverrideParameters();
    bool get_bForceSolo();
    void set_bForceSolo(bool value);
    bool get_bEnableGpuComputeDebug();
    void set_bEnableGpuComputeDebug(bool value);
    bool get_bAutoDestroy();
    void set_bAutoDestroy(bool value);
    bool get_bRenderingEnabled();
    void set_bRenderingEnabled(bool value);
    bool get_bAutoManageAttachment();
    void set_bAutoManageAttachment(bool value);
    bool get_bAutoAttachWeldSimulatedBodies();
    void set_bAutoAttachWeldSimulatedBodies(bool value);
    float& get_MaxTimeBeforeForceUpdateTransform();
    void* get_EmitterMaterials();
    void* get_OnSystemFinished();
    void* get_AutoAttachParent();
    void* get_AutoAttachSocketName();
    void* get_AutoAttachLocationRule();
    void* get_AutoAttachRotationRule();
    void* get_AutoAttachScaleRule();
    static _Script_CoreUObject::Class* static_class();
    void SetVariableVec4(void* InVariableName, _Script_CoreUObject::Vector4& InValue);
    void SetVariableVec3(void* InVariableName, _Script_CoreUObject::Vector InValue);
    void SetVariableVec2(void* InVariableName, _Script_CoreUObject::Vector2D InValue);
    void SetVariableTextureRenderTarget(void* InVariableName, _Script_Engine::TextureRenderTarget* TextureRenderTarget);
    void SetVariableQuat(void* InVariableName, _Script_CoreUObject::Quat& InValue);
    void SetVariableObject(void* InVariableName, _Script_CoreUObject::Object* Object);
    void SetVariableMaterial(void* InVariableName, _Script_Engine::MaterialInterface* Object);
    void SetVariableLinearColor(void* InVariableName, _Script_CoreUObject::LinearColor& InValue);
    void SetVariableInt(void* InVariableName, int32_t InValue);
    void SetVariableFloat(void* InVariableName, float InValue);
    void SetVariableBool(void* InVariableName, bool InValue);
    void SetVariableActor(void* InVariableName, _Script_Engine::Actor* Actor);
    void SetTickBehavior(void* NewTickBehavior);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(void* InVariableName, _Script_CoreUObject::Vector4& InValue);
    void SetNiagaraVariableVec3(void* InVariableName, _Script_CoreUObject::Vector InValue);
    void SetNiagaraVariableVec2(void* InVariableName, _Script_CoreUObject::Vector2D InValue);
    void SetNiagaraVariableQuat(void* InVariableName, _Script_CoreUObject::Quat& InValue);
    void SetNiagaraVariableObject(void* InVariableName, _Script_CoreUObject::Object* Object);
    void SetNiagaraVariableLinearColor(void* InVariableName, _Script_CoreUObject::LinearColor& InValue);
    void SetNiagaraVariableInt(void* InVariableName, int32_t InValue);
    void SetNiagaraVariableFloat(void* InVariableName, float InValue);
    void SetNiagaraVariableBool(void* InVariableName, bool InValue);
    void SetNiagaraVariableActor(void* InVariableName, _Script_Engine::Actor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetGpuComputeDebug(bool bEnableDebug);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(_Script_Niagara::NiagaraSystem* InAsset);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(void* InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    void* GetTickBehavior();
    float GetSeekDelta();
    bool GetPreviewLODDistanceEnabled();
    int32_t GetPreviewLODDistance();
    void* GetNiagaraParticleValueVec3_DebugOnly(void* InEmitterName, void* InValueName);
    void* GetNiagaraParticleValues_DebugOnly(void* InEmitterName, void* InValueName);
    void* GetNiagaraParticlePositions_DebugOnly(void* InEmitterName);
    float GetMaxSimTime();
    bool GetForceSolo();
    float GetDesiredAge();
    _Script_Niagara::NiagaraDataInterface* GetDataInterface(void* Name);
    _Script_Niagara::NiagaraSystem* GetAsset();
    void* GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
}; // Size: 0x5f0
#pragma pack(pop)
}
