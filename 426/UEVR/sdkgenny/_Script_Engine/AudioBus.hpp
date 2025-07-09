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
struct AudioBus : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    void* get_AudioBusChannels();
    bool get_bIsAutomatic();
    void set_bIsAutomatic(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
