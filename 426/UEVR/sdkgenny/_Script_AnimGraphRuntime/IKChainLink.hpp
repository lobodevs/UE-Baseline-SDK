#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct IKChainLink {
    private: char pad_0[0x3c]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}
