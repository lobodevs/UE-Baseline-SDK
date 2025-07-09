#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionCustomOutput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionSingleLayerWaterMaterialOutput : public MaterialExpressionCustomOutput {
    private: char pad_40[0x50]; public:
    void* get_ScatteringCoefficients();
    void* get_AbsorptionCoefficients();
    void* get_PhaseG();
    void* get_ColorScaleBehindWater();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
