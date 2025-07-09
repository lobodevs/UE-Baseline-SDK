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
struct Vector2DParameterNameAndCurves {
    private: char pad_0[0x148]; public:
    void* get_ParameterName();
    void* get_XCurve();
    void* get_YCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
