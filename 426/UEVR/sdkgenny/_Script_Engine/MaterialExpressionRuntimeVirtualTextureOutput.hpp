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
struct MaterialExpressionRuntimeVirtualTextureOutput : public MaterialExpressionCustomOutput {
    private: char pad_40[0x90]; public:
    void* get_BaseColor();
    void* get_Specular();
    void* get_Roughness();
    void* get_Normal();
    void* get_WorldHeight();
    void* get_Opacity();
    void* get_Mask();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
