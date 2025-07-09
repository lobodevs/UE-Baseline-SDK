#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct TemplateSequenceBindingOverrideData {
    private: char pad_0[0xc]; public:
    void* get_Object();
    bool get_bOverridesDefault();
    void set_bOverridesDefault(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
