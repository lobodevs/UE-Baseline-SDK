#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StereoLayerShape.hpp"
#include "StereoLayerShapeCylinder.hpp"
float& _Script_Engine::StereoLayerShapeCylinder::get_Radius() {
    return *(float*)((uintptr_t)this + 0x28);
}
void _Script_Engine::StereoLayerShapeCylinder::SetHeight(int32_t InHeight) {
    return;
}
float& _Script_Engine::StereoLayerShapeCylinder::get_OverlayArc() {
    return *(float*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Engine::StereoLayerShapeCylinder::get_Height() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::StereoLayerShapeCylinder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StereoLayerShapeCylinder");
    return result;
}
void _Script_Engine::StereoLayerShapeCylinder::SetRadius(float InRadius) {
    return;
}
void _Script_Engine::StereoLayerShapeCylinder::SetOverlayArc(float InOverlayArc) {
    return;
}
