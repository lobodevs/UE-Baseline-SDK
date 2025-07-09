#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct CapturedPropSegment {
    private: char pad_0[0x28]; public:
    void* get_PropertyName();
    int32_t& get_PropertyIndex();
    void* get_ComponentName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
