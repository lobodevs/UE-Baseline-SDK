#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavMeshBoundsVolume : public _Script_Engine::Volume {
    private: char pad_258[0x8]; public:
    void* get_SupportedAgents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x260
#pragma pack(pop)
}
