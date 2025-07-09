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
struct StaticComponentMaskParameter : public StaticParameterBase {
    private: char pad_24[0x4]; public:
    bool get_R();
    void set_R(bool value);
    bool get_G();
    void set_G(bool value);
    bool get_B();
    void set_B(bool value);
    bool get_A();
    void set_A(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
