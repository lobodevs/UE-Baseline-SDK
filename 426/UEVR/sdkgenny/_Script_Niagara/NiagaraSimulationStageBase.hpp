#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NiagaraCore\NiagaraMergeable.hpp"
namespace _Script_Niagara {
struct NiagaraScript;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSimulationStageBase : public _Script_NiagaraCore::NiagaraMergeable {
    private: char pad_28[0x18]; public:
    _Script_Niagara::NiagaraScript*& get_Script();
    void* get_SimulationStageName();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
