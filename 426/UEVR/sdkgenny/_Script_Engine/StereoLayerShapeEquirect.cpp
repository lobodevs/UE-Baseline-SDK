#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EquirectProps.hpp"
#include "StereoLayerShape.hpp"
#include "StereoLayerShapeEquirect.hpp"
void* _Script_Engine::StereoLayerShapeEquirect::get_LeftUVRect() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::StereoLayerShapeEquirect::get_RightUVRect() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::StereoLayerShapeEquirect::get_LeftScale() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::StereoLayerShapeEquirect::get_RightScale() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::StereoLayerShapeEquirect::get_LeftBias() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::StereoLayerShapeEquirect::get_RightBias() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_Engine::StereoLayerShapeEquirect::SetEquirectProps(_Script_Engine::EquirectProps InScaleBiases) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::StereoLayerShapeEquirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StereoLayerShapeEquirect");
    return result;
}
