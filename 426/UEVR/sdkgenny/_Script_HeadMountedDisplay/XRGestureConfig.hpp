#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct XRGestureConfig {
    private: char pad_0[0x6]; public:
    bool get_bTap();
    void set_bTap(bool value);
    bool get_bHold();
    void set_bHold(bool value);
    void* get_AxisGesture();
    bool get_bNavigationAxisX();
    void set_bNavigationAxisX(bool value);
    bool get_bNavigationAxisY();
    void set_bNavigationAxisY(bool value);
    bool get_bNavigationAxisZ();
    void set_bNavigationAxisZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6
#pragma pack(pop)
}
