#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraRibbonRendererProperties : public NiagaraRendererProperties {
    private: char pad_80[0x758]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_MaterialUserParamBinding();
    void* get_FacingMode();
    void* get_UV0Settings();
    void* get_UV1Settings();
    void* get_DrawDirection();
    float& get_CurveTension();
    void* get_TessellationMode();
    int32_t& get_TessellationFactor();
    bool get_bUseConstantFactor();
    void set_bUseConstantFactor(bool value);
    float& get_TessellationAngle();
    bool get_bScreenSpaceTessellation();
    void set_bScreenSpaceTessellation(bool value);
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_VelocityBinding();
    void* get_NormalizedAgeBinding();
    void* get_RibbonTwistBinding();
    void* get_RibbonWidthBinding();
    void* get_RibbonFacingBinding();
    void* get_RibbonIdBinding();
    void* get_RibbonLinkOrderBinding();
    void* get_MaterialRandomBinding();
    void* get_DynamicMaterialBinding();
    void* get_DynamicMaterial1Binding();
    void* get_DynamicMaterial2Binding();
    void* get_DynamicMaterial3Binding();
    void* get_U0OverrideBinding();
    void* get_V0RangeOverrideBinding();
    void* get_U1OverrideBinding();
    void* get_V1RangeOverrideBinding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x7d8
#pragma pack(pop)
}
