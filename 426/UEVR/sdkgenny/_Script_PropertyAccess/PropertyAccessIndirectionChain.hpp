#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PropertyAccess {
#pragma pack(push, 1)
struct PropertyAccessIndirectionChain {
    private: char pad_0[0x30]; public:
    void* get_Property();
    int32_t& get_IndirectionStartIndex();
    int32_t& get_IndirectionEndIndex();
    int32_t& get_EventId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
