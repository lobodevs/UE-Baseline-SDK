#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraParticleCallbackHandler : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void ReceiveParticleData(void*& Data, _Script_Niagara::NiagaraSystem* NiagaraSystem);
}; // Size: 0x28
#pragma pack(pop)
}
