#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct FXSystemComponent;
}
namespace _Script_NiagaraAnimNotifies {
#pragma pack(push, 1)
struct AnimNotify_PlayNiagaraEffect : public _Script_Engine::AnimNotify {
    private: char pad_38[0x58]; public:
    _Script_Niagara::NiagaraSystem*& get_Template();
    void* get_LocationOffset();
    void* get_RotationOffset();
    void* get_Scale();
    bool get_bAbsoluteScale();
    void set_bAbsoluteScale(bool value);
    bool get_Attached();
    void set_Attached(bool value);
    void* get_SocketName();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::FXSystemComponent* GetSpawnedEffect();
}; // Size: 0x90
#pragma pack(pop)
}
