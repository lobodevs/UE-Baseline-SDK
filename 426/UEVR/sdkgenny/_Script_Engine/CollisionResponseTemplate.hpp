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
struct CollisionResponseTemplate {
    private: char pad_0[0x48]; public:
    void* get_Name();
    void* get_CollisionEnabled();
    bool get_bCanModify();
    void set_bCanModify(bool value);
    void* get_ObjectTypeName();
    void* get_CustomResponses();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
