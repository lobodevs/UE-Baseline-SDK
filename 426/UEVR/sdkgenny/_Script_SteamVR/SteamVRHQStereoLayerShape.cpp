#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StereoLayerShapeQuad.hpp"
#include "SteamVRHQStereoLayerShape.hpp"
bool _Script_SteamVR::SteamVRHQStereoLayerShape::get_bCurved() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
float& _Script_SteamVR::SteamVRHQStereoLayerShape::get_AutoCurveMaxDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_SteamVR::SteamVRHQStereoLayerShape::set_bCurved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamVR::SteamVRHQStereoLayerShape::get_bAntiAlias() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_SteamVR::SteamVRHQStereoLayerShape::set_bAntiAlias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SteamVR::SteamVRHQStereoLayerShape::get_AutoCurveMinDistance() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void _Script_SteamVR::SteamVRHQStereoLayerShape::SetCurved(bool InCurved) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamVR::SteamVRHQStereoLayerShape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamVR.SteamVRHQStereoLayerShape");
    return result;
}
void _Script_SteamVR::SteamVRHQStereoLayerShape::SetAutoCurveMinDistance(float InDistance) {
    return;
}
void _Script_SteamVR::SteamVRHQStereoLayerShape::SetAutoCurveMaxDistance(float InDistance) {
    return;
}
void _Script_SteamVR::SteamVRHQStereoLayerShape::SetAntiAlias(bool InAntiAlias) {
    return;
}
