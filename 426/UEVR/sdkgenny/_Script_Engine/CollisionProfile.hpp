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
struct CollisionProfile : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x138]; public:
    void* get_Profiles();
    void* get_DefaultChannelResponses();
    void* get_EditProfiles();
    void* get_ProfileRedirects();
    void* get_CollisionChannelRedirects();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
