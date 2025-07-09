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
struct MeshSimplificationSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x8]; public:
    void* get_MeshReductionModuleName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
