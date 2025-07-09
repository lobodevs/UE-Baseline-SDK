#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct URL {
    private: char pad_0[0x68]; public:
    void* get_Protocol();
    void* get_Host();
    int32_t& get_Port();
    int32_t& get_Valid();
    void* get_Map();
    void* get_RedirectURL();
    void* get_Op();
    void* get_Portal();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
