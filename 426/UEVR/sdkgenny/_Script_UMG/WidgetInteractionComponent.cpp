#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "Widget.hpp"
#include "WidgetComponent.hpp"
#include "WidgetInteractionComponent.hpp"
void* _Script_UMG::WidgetInteractionComponent::get_OnHoveredWidgetChanged() {
    return (void*)((uintptr_t)this + 0x1f8);
}
int32_t& _Script_UMG::WidgetInteractionComponent::get_VirtualUserIndex() {
    return *(int32_t*)((uintptr_t)this + 0x218);
}
bool _Script_UMG::WidgetInteractionComponent::PressKey(_Script_InputCore::Key Key, bool bRepeat) {
    return;
}
int32_t& _Script_UMG::WidgetInteractionComponent::get_PointerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x21c);
}
bool _Script_UMG::WidgetInteractionComponent::get_bEnableHitTesting() {
    return (*(uint8_t*)((uintptr_t)this + 0x229 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetInteractionComponent::get_TraceChannel() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Script_UMG::WidgetInteractionComponent::get_InteractionDistance() {
    return *(float*)((uintptr_t)this + 0x224);
}
void _Script_UMG::WidgetInteractionComponent::SetCustomHitResult(_Script_Engine::HitResult& HitResult) {
    return;
}
void _Script_UMG::WidgetInteractionComponent::set_bEnableHitTesting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x229 + 0);
    *(uint8_t*)((uintptr_t)this + 0x229 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetInteractionComponent::get_InteractionSource() {
    return (void*)((uintptr_t)this + 0x228);
}
bool _Script_UMG::WidgetInteractionComponent::get_bShowDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x22a + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bShowDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22a + 0);
    *(uint8_t*)((uintptr_t)this + 0x22a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::WidgetInteractionComponent::get_DebugSphereLineThickness() {
    return *(float*)((uintptr_t)this + 0x22c);
}
float& _Script_UMG::WidgetInteractionComponent::get_DebugLineThickness() {
    return *(float*)((uintptr_t)this + 0x230);
}
void* _Script_UMG::WidgetInteractionComponent::get_DebugColor() {
    return (void*)((uintptr_t)this + 0x234);
}
void* _Script_UMG::WidgetInteractionComponent::get_CustomHitResult() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_UMG::WidgetInteractionComponent::get_LocalHitLocation() {
    return (void*)((uintptr_t)this + 0x34c);
}
void* _Script_UMG::WidgetInteractionComponent::get_LastLocalHitLocation() {
    return (void*)((uintptr_t)this + 0x354);
}
_Script_UMG::WidgetComponent*& _Script_UMG::WidgetInteractionComponent::get_HoveredWidgetComponent() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x360);
}
void* _Script_UMG::WidgetInteractionComponent::get_LastHitResult() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Script_UMG::WidgetInteractionComponent::get_bIsHoveredWidgetInteractable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f4 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bIsHoveredWidgetInteractable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetInteractionComponent::get_bIsHoveredWidgetFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f5 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bIsHoveredWidgetFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetInteractionComponent::get_bIsHoveredWidgetHitTestVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f6 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetInteractionComponent::set_bIsHoveredWidgetHitTestVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetInteractionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetInteractionComponent");
    return result;
}
void _Script_UMG::WidgetInteractionComponent::SetFocus(_Script_UMG::Widget* FocusWidget) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::SendKeyChar(void* Characters, bool bRepeat) {
    return;
}
void _Script_UMG::WidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
    return;
}
void _Script_UMG::WidgetInteractionComponent::ReleasePointerKey(_Script_InputCore::Key Key) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::ReleaseKey(_Script_InputCore::Key Key) {
    return;
}
void _Script_UMG::WidgetInteractionComponent::PressPointerKey(_Script_InputCore::Key Key) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::IsOverHitTestVisibleWidget() {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::PressAndReleaseKey(_Script_InputCore::Key Key) {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::IsOverInteractableWidget() {
    return;
}
bool _Script_UMG::WidgetInteractionComponent::IsOverFocusableWidget() {
    return;
}
_Script_UMG::WidgetComponent* _Script_UMG::WidgetInteractionComponent::GetHoveredWidgetComponent() {
    return;
}
_Script_Engine::HitResult _Script_UMG::WidgetInteractionComponent::GetLastHitResult() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetInteractionComponent::Get2DHitLocation() {
    return;
}
