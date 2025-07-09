#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DemoNetDriver : public NetDriver {
    private: char pad_748[0xb78]; public:
    void* get_RollbackNetStartupActors();
    float& get_CheckpointSaveMaxMSPerFrame();
    void* get_MulticastRecordOptions();
    bool get_bIsLocalReplay();
    void set_bIsLocalReplay(bool value);
    void* get_SpectatorControllers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x12c0
#pragma pack(pop)
}
