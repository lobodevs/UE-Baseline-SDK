#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NetworkSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x20]; public:
    bool get_bVerifyPeer();
    void set_bVerifyPeer(bool value);
    bool get_bEnableMultiplayerWorldOriginRebasing();
    void set_bEnableMultiplayerWorldOriginRebasing(bool value);
    int32_t& get_MaxRepArraySize();
    int32_t& get_MaxRepArrayMemory();
    void* get_NetworkEmulationProfiles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
