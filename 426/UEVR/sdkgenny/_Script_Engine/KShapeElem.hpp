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
struct KShapeElem {
    private: char pad_0[0x30]; public:
    float& get_RestOffset();
    void* get_Name();
    bool get_bContributeToMass();
    void set_bContributeToMass(bool value);
    void* get_CollisionEnabled();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
