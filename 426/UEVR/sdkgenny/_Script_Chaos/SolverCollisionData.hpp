#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Chaos {
#pragma pack(push, 1)
struct SolverCollisionData {
    private: char pad_0[0x6c]; public:
    void* get_Location();
    void* get_AccumulatedImpulse();
    void* get_Normal();
    void* get_Velocity1();
    void* get_Velocity2();
    void* get_AngularVelocity1();
    void* get_AngularVelocity2();
    float& get_Mass1();
    float& get_Mass2();
    int32_t& get_ParticleIndex();
    int32_t& get_LevelsetIndex();
    int32_t& get_ParticleIndexMesh();
    int32_t& get_LevelsetIndexMesh();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6c
#pragma pack(pop)
}
