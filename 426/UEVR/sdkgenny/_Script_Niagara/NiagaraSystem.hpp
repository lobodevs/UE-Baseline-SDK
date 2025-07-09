#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\FXSystemAsset.hpp"
namespace _Script_Niagara {
struct NiagaraEffectType;
}
namespace _Script_Niagara {
struct NiagaraScript;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSystem : public _Script_Engine::FXSystemAsset {
    private: char pad_30[0x450]; public:
    bool get_bDumpDebugSystemInfo();
    void set_bDumpDebugSystemInfo(bool value);
    bool get_bDumpDebugEmitterInfo();
    void set_bDumpDebugEmitterInfo(bool value);
    bool get_bRequireCurrentFrameData();
    void set_bRequireCurrentFrameData(bool value);
    bool get_bFixedBounds();
    void set_bFixedBounds(bool value);
    _Script_Niagara::NiagaraEffectType*& get_EffectType();
    bool get_bOverrideScalabilitySettings();
    void set_bOverrideScalabilitySettings(bool value);
    void* get_ScalabilityOverrides();
    void* get_SystemScalabilityOverrides();
    void* get_EmitterHandles();
    void* get_ParameterCollectionOverrides();
    _Script_Niagara::NiagaraScript*& get_SystemSpawnScript();
    _Script_Niagara::NiagaraScript*& get_SystemUpdateScript();
    void* get_SystemCompiledData();
    void* get_ExposedParameters();
    void* get_FixedBounds();
    bool get_bAutoDeactivate();
    void set_bAutoDeactivate(bool value);
    float& get_WarmupTime();
    int32_t& get_WarmupTickCount();
    float& get_WarmupTickDelta();
    bool get_bHasSystemScriptDIsWithPerInstanceData();
    void set_bHasSystemScriptDIsWithPerInstanceData(bool value);
    void* get_UserDINamesReadInSystemScripts();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x480
#pragma pack(pop)
}
