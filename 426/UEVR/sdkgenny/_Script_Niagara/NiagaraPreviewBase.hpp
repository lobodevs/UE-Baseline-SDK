#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPreviewBase : public _Script_Engine::Actor {
    static _Script_CoreUObject::Class* static_class();
    void SetSystem(_Script_Niagara::NiagaraSystem* InSystem);
    void SetLabelText(void*& InXAxisText, void*& InYAxisText);
}; // Size: 0x220
#pragma pack(pop)
}
