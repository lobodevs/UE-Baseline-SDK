#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StaticParameterBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticTerrainLayerWeightParameter : public StaticParameterBase {
    private: char pad_24[0x8]; public:
    int32_t& get_WeightmapIndex();
    bool get_bWeightBasedBlend();
    void set_bWeightBasedBlend(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
