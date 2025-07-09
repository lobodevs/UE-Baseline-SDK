#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DirectionalLightComponent : public LightComponent {
    private: char pad_330[0xc0]; public:
    float& get_ShadowCascadeBiasDistribution();
    bool get_bEnableLightShaftOcclusion();
    void set_bEnableLightShaftOcclusion(bool value);
    float& get_OcclusionMaskDarkness();
    float& get_OcclusionDepthRange();
    void* get_LightShaftOverrideDirection();
    float& get_WholeSceneDynamicShadowRadius();
    float& get_DynamicShadowDistanceMovableLight();
    float& get_DynamicShadowDistanceStationaryLight();
    int32_t& get_DynamicShadowCascades();
    float& get_CascadeDistributionExponent();
    float& get_CascadeTransitionFraction();
    float& get_ShadowDistanceFadeoutFraction();
    bool get_bUseInsetShadowsForMovableObjects();
    void set_bUseInsetShadowsForMovableObjects(bool value);
    int32_t& get_FarShadowCascadeCount();
    float& get_FarShadowDistance();
    float& get_DistanceFieldShadowDistance();
    float& get_LightSourceAngle();
    float& get_LightSourceSoftAngle();
    float& get_ShadowSourceAngleFactor();
    float& get_TraceDistance();
    bool get_bUsedAsAtmosphereSunLight();
    void set_bUsedAsAtmosphereSunLight(bool value);
    int32_t& get_AtmosphereSunLightIndex();
    void* get_AtmosphereSunDiskColorScale();
    bool get_bPerPixelAtmosphereTransmittance();
    void set_bPerPixelAtmosphereTransmittance(bool value);
    bool get_bCastShadowsOnClouds();
    void set_bCastShadowsOnClouds(bool value);
    bool get_bCastShadowsOnAtmosphere();
    void set_bCastShadowsOnAtmosphere(bool value);
    bool get_bCastCloudShadows();
    void set_bCastCloudShadows(bool value);
    float& get_CloudShadowStrength();
    float& get_CloudShadowOnAtmosphereStrength();
    float& get_CloudShadowOnSurfaceStrength();
    float& get_CloudShadowDepthBias();
    float& get_CloudShadowExtent();
    float& get_CloudShadowMapResolutionScale();
    float& get_CloudShadowRaySampleCountScale();
    void* get_CloudScatteredLuminanceScale();
    void* get_LightmassSettings();
    bool get_bCastModulatedShadows();
    void set_bCastModulatedShadows(bool value);
    void* get_ModulatedShadowColor();
    float& get_ShadowAmount();
    static _Script_CoreUObject::Class* static_class();
    void SetShadowDistanceFadeoutFraction(float NewValue);
    void SetShadowAmount(float NewValue);
    void SetOcclusionMaskDarkness(float NewValue);
    void SetLightShaftOverrideDirection(_Script_CoreUObject::Vector NewValue);
    void SetEnableLightShaftOcclusion(bool bNewValue);
    void SetDynamicShadowDistanceStationaryLight(float NewValue);
    void SetDynamicShadowDistanceMovableLight(float NewValue);
    void SetDynamicShadowCascades(int32_t NewValue);
    void SetCascadeTransitionFraction(float NewValue);
    void SetCascadeDistributionExponent(float NewValue);
    void SetAtmosphereSunLightIndex(int32_t NewValue);
    void SetAtmosphereSunLight(bool bNewValue);
}; // Size: 0x3f0
#pragma pack(pop)
}
