#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct PolyglotTextData {
    private: char pad_0[0xb8]; public:
    void* get_Category();
    void* get_NativeCulture();
    void* get_Namespace();
    void* get_Key();
    void* get_NativeString();
    void* get_LocalizedStrings();
    bool get_bIsMinimalPatch();
    void set_bIsMinimalPatch(bool value);
    void* get_CachedText();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
