#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosEventListenerComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
