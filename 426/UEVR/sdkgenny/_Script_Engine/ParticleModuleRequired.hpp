#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModule.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleRequired : public ParticleModule {
    private: char pad_30[0x110]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    float& get_MinFacingCameraBlendDistance();
    float& get_MaxFacingCameraBlendDistance();
    void* get_EmitterOrigin();
    void* get_EmitterRotation();
    void* get_ScreenAlignment();
    bool get_bUseLocalSpace();
    void set_bUseLocalSpace(bool value);
    bool get_bKillOnDeactivate();
    void set_bKillOnDeactivate(bool value);
    bool get_bKillOnCompleted();
    void set_bKillOnCompleted(bool value);
    void* get_SortMode();
    bool get_bUseLegacyEmitterTime();
    void set_bUseLegacyEmitterTime(bool value);
    bool get_bRemoveHMDRoll();
    void set_bRemoveHMDRoll(bool value);
    bool get_bEmitterDurationUseRange();
    void set_bEmitterDurationUseRange(bool value);
    float& get_EmitterDuration();
    void* get_SpawnRate();
    void* get_BurstList();
    float& get_EmitterDelay();
    float& get_EmitterDelayLow();
    bool get_bDelayFirstLoopOnly();
    void set_bDelayFirstLoopOnly(bool value);
    void* get_InterpolationMethod();
    bool get_bScaleUV();
    void set_bScaleUV(bool value);
    bool get_bEmitterDelayUseRange();
    void set_bEmitterDelayUseRange(bool value);
    void* get_ParticleBurstMethod();
    bool get_bOverrideSystemMacroUV();
    void set_bOverrideSystemMacroUV(bool value);
    bool get_bUseMaxDrawCount();
    void set_bUseMaxDrawCount(bool value);
    void* get_OpacitySourceMode();
    void* get_EmitterNormalsMode();
    bool get_bOrbitModuleAffectsVelocityAlignment();
    void set_bOrbitModuleAffectsVelocityAlignment(bool value);
    int32_t& get_SubImages_Horizontal();
    int32_t& get_SubImages_Vertical();
    float& get_RandomImageTime();
    int32_t& get_RandomImageChanges();
    void* get_MacroUVPosition();
    float& get_MacroUVRadius();
    void* get_UVFlippingMode();
    void* get_BoundingMode();
    bool get_bDurationRecalcEachLoop();
    void set_bDurationRecalcEachLoop(bool value);
    void* get_NormalsSphereCenter();
    float& get_AlphaThreshold();
    int32_t& get_EmitterLoops();
    _Script_Engine::Texture2D*& get_CutoutTexture();
    int32_t& get_MaxDrawCount();
    float& get_EmitterDurationLow();
    void* get_NormalsCylinderDirection();
    void* get_NamedMaterialOverrides();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
