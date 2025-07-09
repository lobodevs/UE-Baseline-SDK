#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_ConvertLocalToComponentSpace : public AnimNode_Base {
    private: char pad_10[0x10]; public:
    void* get_LocalPose();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
