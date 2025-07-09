#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct MonoWaveTableSynthPreset : public _Script_CoreUObject::Object {
    private: char pad_28[0x148]; public:
    void* get_PresetName();
    bool get_bLockKeyframesToGridBool();
    void set_bLockKeyframesToGridBool(bool value);
    int32_t& get_LockKeyframesToGrid();
    int32_t& get_WaveTableResolution();
    void* get_WaveTable();
    bool get_bNormalizeWaveTables();
    void set_bNormalizeWaveTables(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
