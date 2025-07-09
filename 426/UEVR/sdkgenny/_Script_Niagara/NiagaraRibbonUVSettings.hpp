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
struct NiagaraRibbonUVSettings {
    private: char pad_0[0x24]; public:
    void* get_LeadingEdgeMode();
    void* get_TrailingEdgeMode();
    void* get_DistributionMode();
    float& get_TilingLength();
    void* get_Offset();
    void* get_Scale();
    bool get_bEnablePerParticleUOverride();
    void set_bEnablePerParticleUOverride(bool value);
    bool get_bEnablePerParticleVRangeOverride();
    void set_bEnablePerParticleVRangeOverride(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
