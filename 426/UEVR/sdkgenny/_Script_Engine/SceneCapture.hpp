#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCapture : public Actor {
    private: char pad_220[0x10]; public:
    _Script_Engine::StaticMeshComponent*& get_MeshComp();
    _Script_Engine::SceneComponent*& get_SceneComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
