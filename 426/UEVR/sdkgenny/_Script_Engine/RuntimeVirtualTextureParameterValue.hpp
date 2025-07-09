#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct RuntimeVirtualTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RuntimeVirtualTextureParameterValue {
    private: char pad_0[0x28]; public:
    void* get_ParameterInfo();
    _Script_Engine::RuntimeVirtualTexture*& get_ParameterValue();
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
