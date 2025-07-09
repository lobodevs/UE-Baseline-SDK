#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Paper2D {
struct PaperTerrainSplineComponent;
}
namespace _Script_Paper2D {
struct PaperTerrainComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTerrainActor : public _Script_Engine::Actor {
    private: char pad_220[0x18]; public:
    _Script_Engine::SceneComponent*& get_DummyRoot();
    _Script_Paper2D::PaperTerrainSplineComponent*& get_SplineComponent();
    _Script_Paper2D::PaperTerrainComponent*& get_RenderComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
