#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\LocalPlayer.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "UserWidget.hpp"
#include "WidgetComponent.hpp"
_Script_Engine::BodySetup*& _Script_UMG::WidgetComponent::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x4d8);
}
bool _Script_UMG::WidgetComponent::get_bRedrawRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x481 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetComponent::get_Space() {
    return (void*)((uintptr_t)this + 0x468);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_OpaqueMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x4f0);
}
void* _Script_UMG::WidgetComponent::get_TimingPolicy() {
    return (void*)((uintptr_t)this + 0x469);
}
void* _Script_UMG::WidgetComponent::get_WidgetClass() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Script_UMG::WidgetComponent::get_DrawSize() {
    return (void*)((uintptr_t)this + 0x478);
}
bool _Script_UMG::WidgetComponent::get_bManuallyRedraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
bool _Script_UMG::WidgetComponent::get_bApplyGammaCorrection() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a7 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bManuallyRedraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::WidgetComponent::set_bRedrawRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x481 + 0);
    *(uint8_t*)((uintptr_t)this + 0x481 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_GeometryMode() {
    return (void*)((uintptr_t)this + 0x530);
}
float& _Script_UMG::WidgetComponent::get_RedrawTime() {
    return *(float*)((uintptr_t)this + 0x484);
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetComponent::GetDrawSize() {
    return;
}
void* _Script_UMG::WidgetComponent::get_CurrentDrawSize() {
    return (void*)((uintptr_t)this + 0x490);
}
bool _Script_UMG::WidgetComponent::get_bDrawAtDesiredSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::SetWindowVisibility(void* InVisibility) {
    return;
}
void _Script_UMG::WidgetComponent::set_bDrawAtDesiredSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_Pivot() {
    return (void*)((uintptr_t)this + 0x49c);
}
void _Script_UMG::WidgetComponent::SetWidget(_Script_UMG::UserWidget* Widget) {
    return;
}
bool _Script_UMG::WidgetComponent::get_bReceiveHardwareInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a4 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bReceiveHardwareInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::WidgetComponent::set_TickWhenOffscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bWindowFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a5 + 0)) & 1 != 0;
}
_Script_Engine::LocalPlayer*& _Script_UMG::WidgetComponent::get_OwnerPlayer() {
    return *(_Script_Engine::LocalPlayer**)((uintptr_t)this + 0x4a8);
}
void _Script_UMG::WidgetComponent::set_bWindowFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_WindowVisibility() {
    return (void*)((uintptr_t)this + 0x4a6);
}
void _Script_UMG::WidgetComponent::set_bApplyGammaCorrection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::WidgetComponent::SetDrawSize(_Script_CoreUObject::Vector2D Size) {
    return;
}
void* _Script_UMG::WidgetComponent::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Script_UMG::WidgetComponent::get_TintColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x4c0);
}
float& _Script_UMG::WidgetComponent::get_OpacityFromTexture() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
void* _Script_UMG::WidgetComponent::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x4d4);
}
bool _Script_UMG::WidgetComponent::get_bIsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d5 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bIsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_TickWhenOffscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d6 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bAddedToScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x520 + 0);
    *(uint8_t*)((uintptr_t)this + 0x520 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_TranslucentMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x4e0);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_TranslucentMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x4e8);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_OpaqueMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_MaskedMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x500);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_MaskedMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x508);
}
void _Script_UMG::WidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
    return;
}
_Script_Engine::TextureRenderTarget2D*& _Script_UMG::WidgetComponent::get_RenderTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x510);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_UMG::WidgetComponent::get_MaterialInstance() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x518);
}
bool _Script_UMG::WidgetComponent::get_bAddedToScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x520 + 0)) & 1 != 0;
}
bool _Script_UMG::WidgetComponent::get_bEditTimeUsable() {
    return (*(uint8_t*)((uintptr_t)this + 0x521 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bEditTimeUsable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x521 + 0);
    *(uint8_t*)((uintptr_t)this + 0x521 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_SharedLayerName() {
    return (void*)((uintptr_t)this + 0x524);
}
int32_t& _Script_UMG::WidgetComponent::get_LayerZOrder() {
    return *(int32_t*)((uintptr_t)this + 0x52c);
}
float& _Script_UMG::WidgetComponent::get_CylinderArcAngle() {
    return *(float*)((uintptr_t)this + 0x534);
}
void* _Script_UMG::WidgetComponent::get_TickMode() {
    return (void*)((uintptr_t)this + 0x538);
}
_Script_UMG::UserWidget*& _Script_UMG::WidgetComponent::get_Widget() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x560);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetComponent");
    return result;
}
void _Script_UMG::WidgetComponent::SetWindowFocusable(bool bInWindowFocusable) {
    return;
}
void _Script_UMG::WidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen) {
    return;
}
void _Script_UMG::WidgetComponent::SetWidgetSpace(void* NewSpace) {
    return;
}
bool _Script_UMG::WidgetComponent::GetManuallyRedraw() {
    return;
}
void _Script_UMG::WidgetComponent::SetTwoSided(bool bWantTwoSided) {
    return;
}
void _Script_UMG::WidgetComponent::SetTintColorAndOpacity(_Script_CoreUObject::LinearColor NewTintColorAndOpacity) {
    return;
}
void _Script_UMG::WidgetComponent::SetTickMode(void* InTickMode) {
    return;
}
void _Script_UMG::WidgetComponent::SetRedrawTime(float InRedrawTime) {
    return;
}
void _Script_UMG::WidgetComponent::SetPivot(_Script_CoreUObject::Vector2D& InPivot) {
    return;
}
void _Script_UMG::WidgetComponent::SetOwnerPlayer(_Script_Engine::LocalPlayer* LocalPlayer) {
    return;
}
void _Script_UMG::WidgetComponent::SetGeometryMode(void* InGeometryMode) {
    return;
}
void _Script_UMG::WidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize) {
    return;
}
void _Script_UMG::WidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle) {
    return;
}
void _Script_UMG::WidgetComponent::SetBackgroundColor(_Script_CoreUObject::LinearColor NewBackgroundColor) {
    return;
}
void _Script_UMG::WidgetComponent::RequestRedraw() {
    return;
}
bool _Script_UMG::WidgetComponent::IsWidgetVisible() {
    return;
}
void* _Script_UMG::WidgetComponent::GetWindowVisiblility() {
    return;
}
bool _Script_UMG::WidgetComponent::GetWindowFocusable() {
    return;
}
void* _Script_UMG::WidgetComponent::GetWidgetSpace() {
    return;
}
_Script_UMG::UserWidget* _Script_UMG::WidgetComponent::GetWidget() {
    return;
}
_Script_UMG::UserWidget* _Script_UMG::WidgetComponent::GetUserWidgetObject() {
    return;
}
bool _Script_UMG::WidgetComponent::GetTwoSided() {
    return;
}
bool _Script_UMG::WidgetComponent::GetTickWhenOffscreen() {
    return;
}
_Script_Engine::TextureRenderTarget2D* _Script_UMG::WidgetComponent::GetRenderTarget() {
    return;
}
float _Script_UMG::WidgetComponent::GetRedrawTime() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetComponent::GetPivot() {
    return;
}
_Script_Engine::LocalPlayer* _Script_UMG::WidgetComponent::GetOwnerPlayer() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::WidgetComponent::GetMaterialInstance() {
    return;
}
void* _Script_UMG::WidgetComponent::GetGeometryMode() {
    return;
}
bool _Script_UMG::WidgetComponent::GetDrawAtDesiredSize() {
    return;
}
float _Script_UMG::WidgetComponent::GetCylinderArcAngle() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetComponent::GetCurrentDrawSize() {
    return;
}
