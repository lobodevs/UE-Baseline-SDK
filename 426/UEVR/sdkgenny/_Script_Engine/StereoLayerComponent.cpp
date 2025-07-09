#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box2D.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "EquirectProps.hpp"
#include "SceneComponent.hpp"
#include "StereoLayerComponent.hpp"
#include "StereoLayerShape.hpp"
#include "Texture.hpp"
bool _Script_Engine::StereoLayerComponent::get_bNoAlphaChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 4 != 0;
}
bool _Script_Engine::StereoLayerComponent::get_bLiveTexture() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
bool _Script_Engine::StereoLayerComponent::get_bSupportsDepth() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 2 != 0;
}
void _Script_Engine::StereoLayerComponent::set_bLiveTexture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::StereoLayerComponent::set_bSupportsDepth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::StereoLayerComponent::set_bNoAlphaChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::Texture*& _Script_Engine::StereoLayerComponent::get_Texture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x200);
}
_Script_Engine::Texture*& _Script_Engine::StereoLayerComponent::get_LeftTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x208);
}
bool _Script_Engine::StereoLayerComponent::get_bQuadPreserveTextureRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_Engine::StereoLayerComponent::set_bQuadPreserveTextureRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StereoLayerComponent::get_QuadSize() {
    return (void*)((uintptr_t)this + 0x214);
}
void* _Script_Engine::StereoLayerComponent::get_UVRect() {
    return (void*)((uintptr_t)this + 0x21c);
}
float& _Script_Engine::StereoLayerComponent::get_CylinderRadius() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::StereoLayerComponent::get_CylinderOverlayArc() {
    return *(float*)((uintptr_t)this + 0x234);
}
int32_t& _Script_Engine::StereoLayerComponent::get_CylinderHeight() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
void* _Script_Engine::StereoLayerComponent::get_EquirectProps() {
    return (void*)((uintptr_t)this + 0x23c);
}
void* _Script_Engine::StereoLayerComponent::get_StereoLayerType() {
    return (void*)((uintptr_t)this + 0x284);
}
void* _Script_Engine::StereoLayerComponent::get_StereoLayerShape() {
    return (void*)((uintptr_t)this + 0x285);
}
_Script_Engine::StereoLayerShape*& _Script_Engine::StereoLayerComponent::get_Shape() {
    return *(_Script_Engine::StereoLayerShape**)((uintptr_t)this + 0x288);
}
void _Script_Engine::StereoLayerComponent::SetTexture(_Script_Engine::Texture* InTexture) {
    return;
}
int32_t& _Script_Engine::StereoLayerComponent::get_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x290);
}
_Script_Engine::Texture* _Script_Engine::StereoLayerComponent::GetLeftTexture() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::StereoLayerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StereoLayerComponent");
    return result;
}
void _Script_Engine::StereoLayerComponent::SetUVRect(_Script_CoreUObject::Box2D InUVRect) {
    return;
}
void _Script_Engine::StereoLayerComponent::SetQuadSize(_Script_CoreUObject::Vector2D InQuadSize) {
    return;
}
void _Script_Engine::StereoLayerComponent::SetPriority(int32_t InPriority) {
    return;
}
void _Script_Engine::StereoLayerComponent::SetLeftTexture(_Script_Engine::Texture* InTexture) {
    return;
}
void _Script_Engine::StereoLayerComponent::SetEquirectProps(_Script_Engine::EquirectProps InScaleBiases) {
    return;
}
void _Script_Engine::StereoLayerComponent::MarkTextureForUpdate() {
    return;
}
_Script_CoreUObject::Box2D _Script_Engine::StereoLayerComponent::GetUVRect() {
    return;
}
_Script_Engine::Texture* _Script_Engine::StereoLayerComponent::GetTexture() {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::StereoLayerComponent::GetQuadSize() {
    return;
}
int32_t _Script_Engine::StereoLayerComponent::GetPriority() {
    return;
}
