#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NiagaraShader {
#pragma pack(push, 1)
struct SimulationStageMetaData {
    private: char pad_0[0x30]; public:
    void* get_SimulationStageName();
    void* get_IterationSource();
    bool get_bSpawnOnly();
    void set_bSpawnOnly(bool value);
    bool get_bWritesParticles();
    void set_bWritesParticles(bool value);
    bool get_bPartialParticleUpdate();
    void set_bPartialParticleUpdate(bool value);
    void* get_OutputDestinations();
    int32_t& get_MinStage();
    int32_t& get_MaxStage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
