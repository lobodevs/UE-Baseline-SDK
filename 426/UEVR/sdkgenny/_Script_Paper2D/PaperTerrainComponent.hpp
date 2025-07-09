#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Paper2D {
struct PaperTerrainMaterial;
}
namespace _Script_Paper2D {
struct PaperTerrainSplineComponent;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTerrainComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_440[0x60]; public:
    _Script_Paper2D::PaperTerrainMaterial*& get_TerrainMaterial();
    bool get_bClosedSpline();
    void set_bClosedSpline(bool value);
    bool get_bFilledSpline();
    void set_bFilledSpline(bool value);
    _Script_Paper2D::PaperTerrainSplineComponent*& get_AssociatedSpline();
    int32_t& get_RandomSeed();
    float& get_SegmentOverlapAmount();
    void* get_TerrainColor();
    int32_t& get_ReparamStepsPerSegment();
    void* get_SpriteCollisionDomain();
    float& get_CollisionThickness();
    _Script_Engine::BodySetup*& get_CachedBodySetup();
    static _Script_CoreUObject::Class* static_class();
    void SetTerrainColor(_Script_CoreUObject::LinearColor NewColor);
}; // Size: 0x4a0
#pragma pack(pop)
}
