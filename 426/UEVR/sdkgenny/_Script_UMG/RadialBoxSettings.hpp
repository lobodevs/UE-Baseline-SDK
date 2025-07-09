#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RadialBoxSettings {
    private: char pad_0[0xc]; public:
    bool get_bDistributeItemsEvenly();
    void set_bDistributeItemsEvenly(bool value);
    float& get_AngleBetweenItems();
    float& get_StartingAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
