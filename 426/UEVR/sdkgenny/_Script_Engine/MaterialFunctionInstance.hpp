#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialFunctionInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialFunctionInstance : public MaterialFunctionInterface {
    private: char pad_40[0x80]; public:
    _Script_Engine::MaterialFunctionInterface*& get_Parent();
    _Script_Engine::MaterialFunctionInterface*& get_Base();
    void* get_ScalarParameterValues();
    void* get_VectorParameterValues();
    void* get_TextureParameterValues();
    void* get_FontParameterValues();
    void* get_StaticSwitchParameterValues();
    void* get_StaticComponentMaskParameterValues();
    void* get_RuntimeVirtualTextureParameterValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
