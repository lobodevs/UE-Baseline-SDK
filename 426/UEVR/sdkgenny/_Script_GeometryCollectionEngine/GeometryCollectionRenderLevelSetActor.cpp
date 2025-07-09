#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Material.hpp"
#include "..\_Script_Engine\VolumeTexture.hpp"
#include "GeometryCollectionRenderLevelSetActor.hpp"
bool _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::get_RenderVolumeBoundingBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x239 + 0)) & 1 != 0;
}
_Script_Engine::VolumeTexture*& _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::get_TargetVolumeTexture() {
    return *(_Script_Engine::VolumeTexture**)((uintptr_t)this + 0x220);
}
_Script_Engine::Material*& _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::get_RayMarchMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x228);
}
void _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::get_SurfaceTolerance() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::get_Isovalue() {
    return *(float*)((uintptr_t)this + 0x234);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::set_RenderVolumeBoundingBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x239 + 0);
    *(uint8_t*)((uintptr_t)this + 0x239 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
    return result;
}
