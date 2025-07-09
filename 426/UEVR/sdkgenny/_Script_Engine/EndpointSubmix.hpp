#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundSubmixBase.hpp"
namespace _Script_AudioExtensions {
struct AudioEndpointSettingsBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EndpointSubmix : public SoundSubmixBase {
    private: char pad_38[0x18]; public:
    void* get_EndpointType();
    void* get_EndpointSettingsClass();
    _Script_AudioExtensions::AudioEndpointSettingsBase*& get_EndpointSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
