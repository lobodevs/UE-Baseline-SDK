#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct DirectionalLight;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Engine_EngineSky_BP_Sky_Sphere {
#pragma pack(push, 1)
struct BP_Sky_Sphere_C : public _Script_Engine::Actor {
    private: char pad_220[0xa0]; public:
    _Script_Engine::StaticMeshComponent*& get_SkySphereMesh();
    _Script_Engine::SceneComponent*& get_Base();
    _Script_Engine::MaterialInstanceDynamic*& get_Sky_material();
    bool get_Refresh_material();
    void set_Refresh_material(bool value);
    _Script_Engine::DirectionalLight*& get_Directional_light_actor();
    bool get_Colors_determined_by_sun_position();
    void set_Colors_determined_by_sun_position(bool value);
    float& get_Sun_height();
    float& get_Sun_brightness();
    float& get_Horizon_falloff();
    void* get_Zenith_color();
    void* get_Horizon_color();
    void* get_Cloud_color();
    void* get_Overall_Color();
    float& get_Cloud_speed();
    float& get_Cloud_opacity();
    float& get_Stars_brightness();
    _Script_Engine::CurveLinearColor*& get_Horizon_color_curve();
    _Script_Engine::CurveLinearColor*& get_Zenith_color_curve();
    _Script_Engine::CurveLinearColor*& get_Cloud_color_curve();
    static _Script_CoreUObject::Class* static_class();
    void RefreshMaterial();
    void UpdateSunDirection();
    void UserConstructionScript0();
}; // Size: 0x2c0
#pragma pack(pop)
}
