#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovementProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavAgentProperties : public MovementProperties {
    private: char pad_1[0x2f]; public:
    float& get_AgentRadius();
    float& get_AgentHeight();
    float& get_AgentStepHeight();
    float& get_NavWalkingSearchHeightScale();
    void* get_PreferredNavData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
