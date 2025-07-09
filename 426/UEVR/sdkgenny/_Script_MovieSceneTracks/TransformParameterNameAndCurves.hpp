#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct TransformParameterNameAndCurves {
    private: char pad_0[0x5a8]; public:
    void* get_ParameterName();
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5a8
#pragma pack(pop)
}
