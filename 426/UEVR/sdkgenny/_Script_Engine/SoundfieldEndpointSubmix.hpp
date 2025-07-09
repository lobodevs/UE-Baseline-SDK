#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundSubmixBase.hpp"
namespace _Script_AudioExtensions {
struct SoundfieldEndpointSettingsBase;
}
namespace _Script_AudioExtensions {
struct SoundfieldEncodingSettingsBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundfieldEndpointSubmix : public SoundSubmixBase {
    private: char pad_38[0x38]; public:
    void* get_SoundfieldEndpointType();
    void* get_EndpointSettingsClass();
    _Script_AudioExtensions::SoundfieldEndpointSettingsBase*& get_EndpointSettings();
    void* get_EncodingSettingsClass();
    _Script_AudioExtensions::SoundfieldEncodingSettingsBase*& get_EncodingSettings();
    void* get_SoundfieldEffectChain();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
