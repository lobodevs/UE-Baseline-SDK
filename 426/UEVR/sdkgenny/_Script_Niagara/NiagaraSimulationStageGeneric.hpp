#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraSimulationStageBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSimulationStageGeneric : public NiagaraSimulationStageBase {
    private: char pad_40[0x30]; public:
    void* get_IterationSource();
    int32_t& get_Iterations();
    bool get_bSpawnOnly();
    void set_bSpawnOnly(bool value);
    bool get_bDisablePartialParticleUpdate();
    void set_bDisablePartialParticleUpdate(bool value);
    void* get_DataInterface();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
