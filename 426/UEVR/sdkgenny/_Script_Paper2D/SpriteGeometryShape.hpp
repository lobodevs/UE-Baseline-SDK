#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct SpriteGeometryShape {
    private: char pad_0[0x30]; public:
    void* get_ShapeType();
    void* get_Vertices();
    void* get_BoxSize();
    void* get_BoxPosition();
    float& get_Rotation();
    bool get_bNegativeWinding();
    void set_bNegativeWinding(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
