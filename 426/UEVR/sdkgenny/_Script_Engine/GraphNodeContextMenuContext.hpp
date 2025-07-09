#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Blueprint;
}
namespace _Script_Engine {
struct EdGraph;
}
namespace _Script_Engine {
struct EdGraphNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GraphNodeContextMenuContext : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    _Script_Engine::Blueprint*& get_Blueprint();
    _Script_Engine::EdGraph*& get_Graph();
    _Script_Engine::EdGraphNode*& get_Node();
    bool get_bIsDebugging();
    void set_bIsDebugging(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
