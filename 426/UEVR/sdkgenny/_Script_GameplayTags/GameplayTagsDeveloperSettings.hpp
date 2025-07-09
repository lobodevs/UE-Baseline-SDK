#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagsDeveloperSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x18]; public:
    void* get_DeveloperConfigName();
    void* get_FavoriteTagSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
