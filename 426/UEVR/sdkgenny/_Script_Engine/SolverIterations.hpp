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
struct SolverIterations {
    private: char pad_0[0x1c]; public:
    float& get_FixedTimeStep();
    int32_t& get_SolverIterations();
    int32_t& get_JointIterations();
    int32_t& get_CollisionIterations();
    int32_t& get_SolverPushOutIterations();
    int32_t& get_JointPushOutIterations();
    int32_t& get_CollisionPushOutIterations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
