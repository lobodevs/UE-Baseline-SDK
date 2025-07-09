#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraSystemScalabilitySettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSystemScalabilityOverride : public NiagaraSystemScalabilitySettings {
    private: char pad_48[0x8]; public:
    bool get_bOverrideDistanceSettings();
    void set_bOverrideDistanceSettings(bool value);
    bool get_bOverrideInstanceCountSettings();
    void set_bOverrideInstanceCountSettings(bool value);
    bool get_bOverridePerSystemInstanceCountSettings();
    void set_bOverridePerSystemInstanceCountSettings(bool value);
    bool get_bOverrideTimeSinceRendererSettings();
    void set_bOverrideTimeSinceRendererSettings(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
