#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ShapeComponent : public PrimitiveComponent {
    private: char pad_440[0x20]; public:
    _Script_Engine::BodySetup*& get_ShapeBodySetup();
    void* get_AreaClass();
    void* get_ShapeColor();
    bool get_bDrawOnlyIfSelected();
    void set_bDrawOnlyIfSelected(bool value);
    bool get_bShouldCollideWhenPlacing();
    void set_bShouldCollideWhenPlacing(bool value);
    bool get_bDynamicObstacle();
    void set_bDynamicObstacle(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x460
#pragma pack(pop)
}
