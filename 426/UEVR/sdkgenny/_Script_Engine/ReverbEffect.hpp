#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReverbEffect : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    bool get_bBypassEarlyReflections();
    void set_bBypassEarlyReflections(bool value);
    float& get_ReflectionsDelay();
    float& get_GainHF();
    float& get_ReflectionsGain();
    bool get_bBypassLateReflections();
    void set_bBypassLateReflections(bool value);
    float& get_LateDelay();
    float& get_DecayTime();
    float& get_Density();
    float& get_Diffusion();
    float& get_AirAbsorptionGainHF();
    float& get_DecayHFRatio();
    float& get_LateGain();
    float& get_Gain();
    float& get_RoomRolloffFactor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
