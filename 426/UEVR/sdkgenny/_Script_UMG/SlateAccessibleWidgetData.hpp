#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SlateAccessibleWidgetData : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    bool get_bCanChildrenBeAccessible();
    void set_bCanChildrenBeAccessible(bool value);
    void* get_AccessibleBehavior();
    void* get_AccessibleSummaryBehavior();
    void* get_AccessibleText();
    void* get_AccessibleTextDelegate();
    void* get_AccessibleSummaryText();
    void* get_AccessibleSummaryTextDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
