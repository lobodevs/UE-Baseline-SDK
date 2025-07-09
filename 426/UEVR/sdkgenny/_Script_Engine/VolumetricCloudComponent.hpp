#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VolumetricCloudComponent : public SceneComponent {
    private: char pad_200[0x40]; public:
    float& get_LayerBottomAltitude();
    float& get_LayerHeight();
    float& get_TracingStartMaxDistance();
    float& get_TracingMaxDistance();
    float& get_PlanetRadius();
    void* get_GroundAlbedo();
    _Script_Engine::MaterialInterface*& get_Material();
    bool get_bUsePerSampleAtmosphericLightTransmittance();
    void set_bUsePerSampleAtmosphericLightTransmittance(bool value);
    float& get_SkyLightCloudBottomOcclusion();
    float& get_ViewSampleCountScale();
    float& get_ReflectionSampleCountScale();
    float& get_ShadowViewSampleCountScale();
    float& get_ShadowReflectionSampleCountScale();
    float& get_ShadowTracingDistance();
    static _Script_CoreUObject::Class* static_class();
    void SetViewSampleCountScale(float NewValue);
    void SetTracingStartMaxDistance(float NewValue);
    void SetTracingMaxDistance(float NewValue);
    void SetSkyLightCloudBottomOcclusion(float NewValue);
    void SetShadowViewSampleCountScale(float NewValue);
    void SetShadowTracingDistance(float NewValue);
    void SetShadowReflectionSampleCountScale(float NewValue);
    void SetReflectionSampleCountScale(float NewValue);
    void SetPlanetRadius(float NewValue);
    void SetMaterial(_Script_Engine::MaterialInterface* NewValue);
    void SetLayerHeight(float NewValue);
    void SetLayerBottomAltitude(float NewValue);
    void SetGroundAlbedo(_Script_CoreUObject::Color NewValue);
    void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue);
}; // Size: 0x240
#pragma pack(pop)
}
