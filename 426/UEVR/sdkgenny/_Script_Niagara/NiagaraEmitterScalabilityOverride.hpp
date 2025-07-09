#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraEmitterScalabilitySettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEmitterScalabilityOverride : public NiagaraEmitterScalabilitySettings {
    private: char pad_38[0x8]; public:
    bool get_bOverrideSpawnCountScale();
    void set_bOverrideSpawnCountScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
