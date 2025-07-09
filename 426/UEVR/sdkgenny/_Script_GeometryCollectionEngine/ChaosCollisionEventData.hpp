#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct ChaosCollisionEventData {
    private: char pad_0[0x58]; public:
    void* get_Location();
    void* get_Normal();
    void* get_Velocity1();
    void* get_Velocity2();
    float& get_Mass1();
    float& get_Mass2();
    void* get_Impulse();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
