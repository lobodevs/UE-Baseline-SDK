#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RuntimeVirtualTexture.hpp"
#include "RuntimeVirtualTextureComponent.hpp"
#include "SceneComponent.hpp"
#include "VirtualTextureBuilder.hpp"
void* _Script_Engine::RuntimeVirtualTextureComponent::get_BoundsAlignActor() {
    return (void*)((uintptr_t)this + 0x1f8);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bSetBoundsButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bSetBoundsButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bSnapBoundsToLandscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x221 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bSnapBoundsToLandscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x221 + 0);
    *(uint8_t*)((uintptr_t)this + 0x221 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::RuntimeVirtualTexture*& _Script_Engine::RuntimeVirtualTextureComponent::get_VirtualTexture() {
    return *(_Script_Engine::RuntimeVirtualTexture**)((uintptr_t)this + 0x228);
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bEnableScalability(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bEnableScalability() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bEnableCompressCrunch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RuntimeVirtualTextureComponent::get_ScalabilityGroup() {
    return (void*)((uintptr_t)this + 0x234);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bHidePrimitives() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bHidePrimitives(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::VirtualTextureBuilder*& _Script_Engine::RuntimeVirtualTextureComponent::get_StreamingTexture() {
    return *(_Script_Engine::VirtualTextureBuilder**)((uintptr_t)this + 0x240);
}
int32_t& _Script_Engine::RuntimeVirtualTextureComponent::get_StreamLowMips() {
    return *(int32_t*)((uintptr_t)this + 0x248);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bBuildStreamingMipsButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bBuildStreamingMipsButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bEnableCompressCrunch() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 1 != 0;
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bUseStreamingLowMipsInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x24e + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bUseStreamingLowMipsInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24e + 0);
    *(uint8_t*)((uintptr_t)this + 0x24e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTextureComponent::get_bBuildDebugStreamingMips() {
    return (*(uint8_t*)((uintptr_t)this + 0x24f + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTextureComponent::set_bBuildDebugStreamingMips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24f + 0);
    *(uint8_t*)((uintptr_t)this + 0x24f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::RuntimeVirtualTextureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RuntimeVirtualTextureComponent");
    return result;
}
void _Script_Engine::RuntimeVirtualTextureComponent::Invalidate(_Script_CoreUObject::BoxSphereBounds& WorldBounds) {
    return;
}
