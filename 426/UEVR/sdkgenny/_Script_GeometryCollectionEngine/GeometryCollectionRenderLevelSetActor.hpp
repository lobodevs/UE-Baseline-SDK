#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct VolumeTexture;
}
namespace _Script_Engine {
struct Material;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionRenderLevelSetActor : public _Script_Engine::Actor {
    private: char pad_220[0xa0]; public:
    _Script_Engine::VolumeTexture*& get_TargetVolumeTexture();
    _Script_Engine::Material*& get_RayMarchMaterial();
    float& get_SurfaceTolerance();
    float& get_Isovalue();
    bool get_Enabled();
    void set_Enabled(bool value);
    bool get_RenderVolumeBoundingBox();
    void set_RenderVolumeBoundingBox(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c0
#pragma pack(pop)
}
