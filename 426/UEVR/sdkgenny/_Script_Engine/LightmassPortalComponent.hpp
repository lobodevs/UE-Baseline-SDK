#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightmassPortalComponent : public SceneComponent {
    _Script_Engine::BoxComponent*& get_PreviewBox();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
