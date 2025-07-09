#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_CustomProperty : public AnimNode_Base {
    private: char pad_10[0x48]; public:
    void* get_SourcePropertyNames();
    void* get_DestPropertyNames();
    _Script_CoreUObject::Object*& get_TargetInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
