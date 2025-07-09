#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ChaosEventListenerComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosGameplayEventDispatcher : public ChaosEventListenerComponent {
    private: char pad_b8[0x1b8]; public:
    void* get_CollisionEventRegistrations();
    void* get_BreakEventRegistrations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
