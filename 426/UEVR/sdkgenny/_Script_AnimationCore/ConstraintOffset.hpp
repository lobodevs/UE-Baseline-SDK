#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct ConstraintOffset {
    private: char pad_0[0x60]; public:
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    void* get_Parent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
