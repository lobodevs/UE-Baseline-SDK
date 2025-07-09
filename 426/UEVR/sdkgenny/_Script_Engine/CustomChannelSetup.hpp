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
struct CustomChannelSetup {
    private: char pad_0[0xc]; public:
    void* get_Channel();
    void* get_DefaultResponse();
    bool get_bTraceType();
    void set_bTraceType(bool value);
    bool get_bStaticObject();
    void set_bStaticObject(bool value);
    void* get_Name();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
