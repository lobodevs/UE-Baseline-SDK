#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextureLODSettings.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DeviceProfile : public TextureLODSettings {
    private: char pad_38[0x70]; public:
    void* get_DeviceType();
    void* get_BaseProfileName();
    _Script_CoreUObject::Object*& get_Parent();
    void* get_CVars();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
