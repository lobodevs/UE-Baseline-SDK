#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AIController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct DetourCrowdAIController : public AIController {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x328
#pragma pack(pop)
}
