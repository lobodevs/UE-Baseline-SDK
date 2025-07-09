#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NiagaraAnimNotifies {
#pragma pack(push, 1)
struct AnimNotifyState_TimedNiagaraEffect : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x30]; public:
    _Script_Niagara::NiagaraSystem*& get_Template();
    void* get_SocketName();
    void* get_LocationOffset();
    void* get_RotationOffset();
    bool get_bDestroyAtEnd();
    void set_bDestroyAtEnd(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
