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
struct ChaosTrailingEventData {
    private: char pad_0[0x2c]; public:
    void* get_Location();
    void* get_Velocity();
    void* get_AngularVelocity();
    float& get_Mass();
    int32_t& get_ParticleIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
