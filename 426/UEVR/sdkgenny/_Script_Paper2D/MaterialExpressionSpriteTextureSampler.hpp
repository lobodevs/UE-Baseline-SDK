#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MaterialExpressionTextureSampleParameter2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct MaterialExpressionSpriteTextureSampler : public _Script_Engine::MaterialExpressionTextureSampleParameter2D {
    private: char pad_80[0x20]; public:
    bool get_bSampleAdditionalTextures();
    void set_bSampleAdditionalTextures(bool value);
    int32_t& get_AdditionalSlotIndex();
    void* get_SlotDisplayName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
