#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshLODInfo {
    private: char pad_0[0xb8]; public:
    void* get_ScreenSize();
    float& get_LODHysteresis();
    void* get_LODMaterialMap();
    void* get_BuildSettings();
    void* get_ReductionSettings();
    void* get_BonesToRemove();
    void* get_BonesToPrioritize();
    float& get_WeightOfPrioritization();
    _Script_Engine::AnimSequence*& get_BakePose();
    _Script_Engine::AnimSequence*& get_BakePoseOverride();
    void* get_SourceImportFilename();
    void* get_SkinCacheUsage();
    bool get_bHasBeenSimplified();
    void set_bHasBeenSimplified(bool value);
    bool get_bHasPerLODVertexColors();
    void set_bHasPerLODVertexColors(bool value);
    bool get_bAllowCPUAccess();
    void set_bAllowCPUAccess(bool value);
    bool get_bSupportUniformlyDistributedSampling();
    void set_bSupportUniformlyDistributedSampling(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
