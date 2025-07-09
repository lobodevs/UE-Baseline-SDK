#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LocalLightComponent : public LightComponent {
    private: char pad_330[0x10]; public:
    void* get_IntensityUnits();
    float& get_Radius();
    float& get_AttenuationRadius();
    void* get_LightmassSettings();
    static _Script_CoreUObject::Class* static_class();
    void SetIntensityUnits(void* NewIntensityUnits);
    void SetAttenuationRadius(float NewRadius);
    float GetUnitsConversionFactor(void* SrcUnits, void* TargetUnits, float CosHalfConeAngle);
}; // Size: 0x340
#pragma pack(pop)
}
