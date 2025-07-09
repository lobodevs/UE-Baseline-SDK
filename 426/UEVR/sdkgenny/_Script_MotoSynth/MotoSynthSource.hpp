#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MotoSynth {
#pragma pack(push, 1)
struct MotoSynthSource : public _Script_CoreUObject::Object {
    private: char pad_28[0xd0]; public:
    bool get_bConvertTo8Bit();
    void set_bConvertTo8Bit(bool value);
    float& get_DownSampleFactor();
    void* get_RPMCurve();
    void* get_SourceData();
    void* get_SourceDataPCM();
    int32_t& get_SourceSampleRate();
    void* get_GrainTable();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
