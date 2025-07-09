#include "..\FUObjectArray.hpp"
#include "BP_Sky_Sphere_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CurveLinearColor.hpp"
#include "..\_Script_Engine\DirectionalLight.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_SkySphereMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x220);
}
void _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::UpdateSunDirection() {
    return;
}
_Script_Engine::SceneComponent*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Base() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
void _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::set_Refresh_material(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Sky_material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x230);
}
void _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::set_Colors_determined_by_sun_position(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Refresh_material() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
_Script_Engine::DirectionalLight*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Directional_light_actor() {
    return *(_Script_Engine::DirectionalLight**)((uintptr_t)this + 0x240);
}
bool _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Colors_determined_by_sun_position() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
float& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Sun_height() {
    return *(float*)((uintptr_t)this + 0x24c);
}
float& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Sun_brightness() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Horizon_falloff() {
    return *(float*)((uintptr_t)this + 0x254);
}
void* _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Zenith_color() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Horizon_color() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Cloud_color() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Overall_Color() {
    return (void*)((uintptr_t)this + 0x288);
}
float& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Cloud_speed() {
    return *(float*)((uintptr_t)this + 0x298);
}
float& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Cloud_opacity() {
    return *(float*)((uintptr_t)this + 0x29c);
}
float& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Stars_brightness() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
_Script_Engine::CurveLinearColor*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Horizon_color_curve() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::CurveLinearColor*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Zenith_color_curve() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::CurveLinearColor*& _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::get_Cloud_color_curve() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C");
    return result;
}
void _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::RefreshMaterial() {
    return;
}
void _Engine_EngineSky_BP_Sky_Sphere::BP_Sky_Sphere_C::UserConstructionScript0() {
    return;
}
