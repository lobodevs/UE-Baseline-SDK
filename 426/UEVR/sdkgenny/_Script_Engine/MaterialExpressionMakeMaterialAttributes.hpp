#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionMakeMaterialAttributes : public MaterialExpression {
    private: char pad_40[0x230]; public:
    void* get_BaseColor();
    void* get_Metallic();
    void* get_Specular();
    void* get_Roughness();
    void* get_Anisotropy();
    void* get_EmissiveColor();
    void* get_Opacity();
    void* get_OpacityMask();
    void* get_Normal();
    void* get_Tangent();
    void* get_WorldPositionOffset();
    void* get_WorldDisplacement();
    void* get_TessellationMultiplier();
    void* get_SubsurfaceColor();
    void* get_ClearCoat();
    void* get_ClearCoatRoughness();
    void* get_AmbientOcclusion();
    void* get_Refraction();
    void* get_CustomizedUVs();
    void* get_PixelDepthOffset();
    void* get_ShadingModel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
