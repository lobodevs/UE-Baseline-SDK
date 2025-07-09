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
struct ChaosPhysicsSettings {
    private: char pad_0[0x3]; public:
    void* get_DefaultThreadingModel();
    void* get_DedicatedThreadTickMode();
    void* get_DedicatedThreadBufferMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
