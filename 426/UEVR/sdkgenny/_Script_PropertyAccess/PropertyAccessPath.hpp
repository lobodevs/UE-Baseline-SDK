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
struct PropertyAccessPath {
    private: char pad_0[0xc]; public:
    int32_t& get_PathSegmentStartIndex();
    int32_t& get_PathSegmentCount();
    bool get_bHasEvents();
    void set_bHasEvents(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
