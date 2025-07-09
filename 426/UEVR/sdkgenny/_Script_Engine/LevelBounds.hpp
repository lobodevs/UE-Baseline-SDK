#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelBounds : public Actor {
    private: char pad_220[0x10]; public:
    _Script_Engine::BoxComponent*& get_BoxComponent();
    bool get_bAutoUpdateBounds();
    void set_bAutoUpdateBounds(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
