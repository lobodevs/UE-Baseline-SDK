#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Niagara {
struct NiagaraSignificanceHandler;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEffectType : public _Script_CoreUObject::Object {
    private: char pad_28[0xe8]; public:
    void* get_UpdateFrequency();
    void* get_CullReaction();
    _Script_Niagara::NiagaraSignificanceHandler*& get_SignificanceHandler();
    void* get_DetailLevelScalabilitySettings();
    void* get_SystemScalabilitySettings();
    void* get_EmitterScalabilitySettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
