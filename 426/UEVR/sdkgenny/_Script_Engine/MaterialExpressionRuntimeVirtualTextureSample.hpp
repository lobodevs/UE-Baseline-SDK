#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_Engine {
struct RuntimeVirtualTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionRuntimeVirtualTextureSample : public MaterialExpression {
    private: char pad_40[0x50]; public:
    void* get_Coordinates();
    void* get_WorldPosition();
    void* get_MipValue();
    _Script_Engine::RuntimeVirtualTexture*& get_VirtualTexture();
    void* get_MaterialType();
    bool get_bSinglePhysicalSpace();
    void set_bSinglePhysicalSpace(bool value);
    bool get_bAdaptive();
    void set_bAdaptive(bool value);
    void* get_MipValueMode();
    void* get_TextureAddressMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
