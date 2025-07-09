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
struct EquirectProps {
    private: char pad_0[0x48]; public:
    void* get_LeftUVRect();
    void* get_RightUVRect();
    void* get_LeftScale();
    void* get_RightScale();
    void* get_LeftBias();
    void* get_RightBias();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
