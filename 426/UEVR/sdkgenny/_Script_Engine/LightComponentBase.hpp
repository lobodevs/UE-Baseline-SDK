#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightComponentBase : public SceneComponent {
    private: char pad_200[0x30]; public:
    void* get_LightGuid();
    float& get_Brightness();
    float& get_Intensity();
    void* get_LightColor();
    bool get_bAffectsWorld();
    void set_bAffectsWorld(bool value);
    bool get_CastShadows();
    void set_CastShadows(bool value);
    bool get_CastStaticShadows();
    void set_CastStaticShadows(bool value);
    bool get_CastDynamicShadows();
    void set_CastDynamicShadows(bool value);
    bool get_bAffectTranslucentLighting();
    void set_bAffectTranslucentLighting(bool value);
    bool get_bTransmission();
    void set_bTransmission(bool value);
    bool get_bCastVolumetricShadow();
    void set_bCastVolumetricShadow(bool value);
    bool get_bCastDeepShadow();
    void set_bCastDeepShadow(bool value);
    bool get_bCastRaytracedShadow();
    void set_bCastRaytracedShadow(bool value);
    bool get_bAffectReflection();
    void set_bAffectReflection(bool value);
    bool get_bAffectGlobalIllumination();
    void set_bAffectGlobalIllumination(bool value);
    float& get_DeepShadowLayerDistribution();
    float& get_IndirectLightingIntensity();
    float& get_VolumetricScatteringIntensity();
    int32_t& get_SamplesPerPixel();
    static _Script_CoreUObject::Class* static_class();
    void SetSamplesPerPixel(int32_t NewValue);
    void SetCastVolumetricShadow(bool bNewValue);
    void SetCastShadows(bool bNewValue);
    void SetCastRaytracedShadow(bool bNewValue);
    void SetCastDeepShadow(bool bNewValue);
    void SetAffectReflection(bool bNewValue);
    void SetAffectGlobalIllumination(bool bNewValue);
    _Script_CoreUObject::LinearColor GetLightColor();
}; // Size: 0x230
#pragma pack(pop)
}
