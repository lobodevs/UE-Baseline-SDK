#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsConstraintProfileHandle {
    private: char pad_0[0x114]; public:
    void* get_ProfileProperties();
    void* get_ProfileName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x114
#pragma pack(pop)
}
