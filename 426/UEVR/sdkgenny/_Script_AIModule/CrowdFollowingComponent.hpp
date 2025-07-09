#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PathFollowingComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct CrowdFollowingComponent : public PathFollowingComponent {
    private: char pad_250[0x48]; public:
    void* get_CrowdAgentMoveDirection();
    static _Script_CoreUObject::Class* static_class();
    void SuspendCrowdSteering(bool bSuspend);
}; // Size: 0x298
#pragma pack(pop)
}
