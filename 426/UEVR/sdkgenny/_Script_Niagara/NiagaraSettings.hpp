#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_Niagara {
struct NiagaraEffectType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x88]; public:
    void* get_DefaultEffectType();
    void* get_QualityLevels();
    void* get_ComponentRendererWarningsPerClass();
    void* get_DefaultRenderTargetFormat();
    void* get_DefaultGridFormat();
    _Script_Niagara::NiagaraEffectType*& get_DefaultEffectTypePtr();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
