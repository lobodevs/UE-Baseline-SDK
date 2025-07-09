#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsConstraintTemplate : public _Script_CoreUObject::Object {
    private: char pad_28[0x2e0]; public:
    void* get_DefaultInstance();
    void* get_ProfileHandles();
    void* get_DefaultProfile();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x308
#pragma pack(pop)
}
