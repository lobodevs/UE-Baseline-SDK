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
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkyAtmosphereComponent : public SceneComponent {
    private: char pad_200[0xd0]; public:
    void* get_TransformMode();
    float& get_BottomRadius();
    void* get_GroundAlbedo();
    float& get_AtmosphereHeight();
    float& get_MultiScatteringFactor();
    float& get_TraceSampleCountScale();
    float& get_RayleighScatteringScale();
    void* get_RayleighScattering();
    float& get_RayleighExponentialDistribution();
    float& get_MieScatteringScale();
    void* get_MieScattering();
    float& get_MieAbsorptionScale();
    void* get_MieAbsorption();
    float& get_MieAnisotropy();
    float& get_MieExponentialDistribution();
    float& get_OtherAbsorptionScale();
    void* get_OtherAbsorption();
    void* get_OtherTentDistribution();
    void* get_SkyLuminanceFactor();
    float& get_AerialPespectiveViewDistanceScale();
    float& get_HeightFogContribution();
    float& get_TransmittanceMinLightElevationAngle();
    float& get_AerialPerspectiveStartDepth();
    void* get_bStaticLightingBuiltGUID();
    static _Script_CoreUObject::Class* static_class();
    void SetSkyLuminanceFactor(_Script_CoreUObject::LinearColor NewValue);
    void SetRayleighScatteringScale(float NewValue);
    void SetRayleighScattering(_Script_CoreUObject::LinearColor NewValue);
    void SetRayleighExponentialDistribution(float NewValue);
    void SetOtherAbsorptionScale(float NewValue);
    void SetOtherAbsorption(_Script_CoreUObject::LinearColor NewValue);
    void SetMieScatteringScale(float NewValue);
    void SetMieScattering(_Script_CoreUObject::LinearColor NewValue);
    void SetMieExponentialDistribution(float NewValue);
    void SetMieAnisotropy(float NewValue);
    void SetMieAbsorptionScale(float NewValue);
    void SetMieAbsorption(_Script_CoreUObject::LinearColor NewValue);
    void SetHeightFogContribution(float NewValue);
    void SetAerialPespectiveViewDistanceScale(float NewValue);
    void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, _Script_CoreUObject::Vector& LightDirection);
}; // Size: 0x2d0
#pragma pack(pop)
}
