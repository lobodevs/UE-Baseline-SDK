#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "KShapeElem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KTaperedCapsuleElem : public KShapeElem {
    private: char pad_30[0x28]; public:
    void* get_Center();
    void* get_Rotation();
    float& get_Radius0();
    float& get_Radius1();
    float& get_Length();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
