#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_LinkedAnimGraph.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_LinkedAnimLayer : public AnimNode_LinkedAnimGraph {
    private: char pad_a0[0x10]; public:
    void* get_Interface();
    void* get_Layer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
