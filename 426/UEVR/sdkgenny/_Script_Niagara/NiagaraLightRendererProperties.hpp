#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraLightRendererProperties : public NiagaraRendererProperties {
    private: char pad_80[0x258]; public:
    bool get_bUseInverseSquaredFalloff();
    void set_bUseInverseSquaredFalloff(bool value);
    bool get_bAffectsTranslucency();
    void set_bAffectsTranslucency(bool value);
    float& get_RadiusScale();
    void* get_ColorAdd();
    void* get_LightRenderingEnabledBinding();
    void* get_LightExponentBinding();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_RadiusBinding();
    void* get_VolumetricScatteringBinding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d8
#pragma pack(pop)
}
