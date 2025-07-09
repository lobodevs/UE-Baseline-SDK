#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEmitterCompiledData {
    private: char pad_0[0x130]; public:
    void* get_SpawnAttributes();
    void* get_EmitterSpawnIntervalVar();
    void* get_EmitterInterpSpawnStartDTVar();
    void* get_EmitterSpawnGroupVar();
    void* get_EmitterAgeVar();
    void* get_EmitterRandomSeedVar();
    void* get_EmitterInstanceSeedVar();
    void* get_EmitterTotalSpawnedParticlesVar();
    void* get_DataSetCompiledData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
