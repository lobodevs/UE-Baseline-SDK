#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioExtensions\SoundfieldEncodingSettingsBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SoundFields {
#pragma pack(push, 1)
struct AmbisonicsEncodingSettings : public _Script_AudioExtensions::SoundfieldEncodingSettingsBase {
    private: char pad_28[0x8]; public:
    int32_t& get_AmbisonicsOrder();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
