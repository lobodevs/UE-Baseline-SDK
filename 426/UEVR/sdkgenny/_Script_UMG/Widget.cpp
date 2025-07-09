#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\GameInstance.hpp"
#include "..\_Script_Engine\LocalPlayer.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "PanelSlot.hpp"
#include "PanelWidget.hpp"
#include "SlateAccessibleWidgetData.hpp"
#include "Visual.hpp"
#include "Widget.hpp"
#include "WidgetNavigation.hpp"
#include "WidgetTransform.hpp"
void* _Script_UMG::Widget::get_ToolTipWidgetDelegate() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_UMG::Widget::InvalidateLayoutAndVolatility() {
    return;
}
_Script_UMG::PanelSlot*& _Script_UMG::Widget::get_Slot() {
    return *(_Script_UMG::PanelSlot**)((uintptr_t)this + 0x28);
}
void* _Script_UMG::Widget::get_ToolTipTextDelegate() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_UMG::Widget::get_bIsEnabledDelegate() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_UMG::Widget::HasAnyUserFocus() {
    return;
}
void* _Script_UMG::Widget::get_RenderTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_UMG::Widget::get_ToolTipText() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_UMG::Widget*& _Script_UMG::Widget::get_ToolTipWidget() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x68);
}
void* _Script_UMG::Widget::get_VisibilityDelegate() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_UMG::Widget::get_RenderTransformPivot() {
    return (void*)((uintptr_t)this + 0xac);
}
bool _Script_UMG::Widget::get_bIsVariable() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_UMG::Widget::set_bIsVariable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::Widget::get_bCreatedByConstructionScript() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 2 != 0;
}
void _Script_UMG::Widget::set_bCreatedByConstructionScript(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_UMG::Widget::HasUserFocusedDescendants(_Script_Engine::PlayerController* PlayerController) {
    return;
}
bool _Script_UMG::Widget::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 4 != 0;
}
void _Script_UMG::Widget::SetNavigationRuleCustomBoundary(void* Direction, void* InCustomDelegate) {
    return;
}
void _Script_UMG::Widget::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_SlateCore::Geometry _Script_UMG::Widget::GetTickSpaceGeometry() {
    return;
}
bool _Script_UMG::Widget::get_bOverride_Cursor() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 8 != 0;
}
void _Script_UMG::Widget::set_bOverride_Cursor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_UMG::Widget::SetToolTipText(void*& InToolTipText) {
    return;
}
_Script_SlateCore::Geometry _Script_UMG::Widget::GetPaintSpaceGeometry() {
    return;
}
_Script_UMG::SlateAccessibleWidgetData*& _Script_UMG::Widget::get_AccessibleWidgetData() {
    return *(_Script_UMG::SlateAccessibleWidgetData**)((uintptr_t)this + 0xb8);
}
bool _Script_UMG::Widget::get_bIsVolatile() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_UMG::Widget::set_bIsVolatile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::Widget::ResetCursor() {
    return;
}
void _Script_UMG::Widget::SetAllNavigationRules(void* Rule, void* WidgetToFocus) {
    return;
}
void* _Script_UMG::Widget::get_Cursor() {
    return (void*)((uintptr_t)this + 0xc1);
}
bool _Script_UMG::Widget::HasUserFocus(_Script_Engine::PlayerController* PlayerController) {
    return;
}
_Script_Engine::GameInstance* _Script_UMG::Widget::GetGameInstance() {
    return;
}
void* _Script_UMG::Widget::get_Clipping() {
    return (void*)((uintptr_t)this + 0xc2);
}
void _Script_UMG::Widget::SetNavigationRuleCustom(void* Direction, void* InCustomDelegate) {
    return;
}
void* _Script_UMG::Widget::get_Visibility() {
    return (void*)((uintptr_t)this + 0xc3);
}
float& _Script_UMG::Widget::get_RenderOpacity() {
    return *(float*)((uintptr_t)this + 0xc4);
}
bool _Script_UMG::Widget::HasMouseCapture() {
    return;
}
_Script_UMG::WidgetNavigation*& _Script_UMG::Widget::get_Navigation() {
    return *(_Script_UMG::WidgetNavigation**)((uintptr_t)this + 0xc8);
}
void* _Script_UMG::Widget::get_FlowDirectionPreference() {
    return (void*)((uintptr_t)this + 0xd0);
}
void _Script_UMG::Widget::SetNavigationRule(void* Direction, void* Rule, void* WidgetToFocus) {
    return;
}
void* _Script_UMG::Widget::get_NativeBindings() {
    return (void*)((uintptr_t)this + 0xf8);
}
void _Script_UMG::Widget::SetFocus() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::Widget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Widget");
    return result;
}
void _Script_UMG::Widget::SetVisibility(void* InVisibility) {
    return;
}
void _Script_UMG::Widget::SetUserFocus(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Script_UMG::Widget::SetToolTip(_Script_UMG::Widget* Widget) {
    return;
}
void _Script_UMG::Widget::SetCursor(void* InCursor) {
    return;
}
void _Script_UMG::Widget::SetRenderTranslation(_Script_CoreUObject::Vector2D Translation) {
    return;
}
void _Script_UMG::Widget::SetRenderTransformPivot(_Script_CoreUObject::Vector2D Pivot) {
    return;
}
void _Script_UMG::Widget::SetRenderTransformAngle(float Angle) {
    return;
}
void _Script_UMG::Widget::SetRenderTransform(_Script_UMG::WidgetTransform InTransform) {
    return;
}
bool _Script_UMG::Widget::IsVisible() {
    return;
}
void _Script_UMG::Widget::SetRenderShear(_Script_CoreUObject::Vector2D Shear) {
    return;
}
bool _Script_UMG::Widget::HasFocusedDescendants() {
    return;
}
void _Script_UMG::Widget::SetRenderScale(_Script_CoreUObject::Vector2D Scale) {
    return;
}
void _Script_UMG::Widget::SetRenderOpacity(float InOpacity) {
    return;
}
void _Script_UMG::Widget::SetNavigationRuleExplicit(void* Direction, _Script_UMG::Widget* InWidget) {
    return;
}
void _Script_UMG::Widget::SetNavigationRuleBase(void* Direction, void* Rule) {
    return;
}
void _Script_UMG::Widget::SetKeyboardFocus() {
    return;
}
void _Script_UMG::Widget::SetIsEnabled(bool bInIsEnabled) {
    return;
}
void _Script_UMG::Widget::SetClipping(void* InClipping) {
    return;
}
bool _Script_UMG::Widget::IsHovered() {
    return;
}
void _Script_UMG::Widget::RemoveFromParent() {
    return;
}
bool _Script_UMG::Widget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex) {
    return;
}
bool _Script_UMG::Widget::HasKeyboardFocus() {
    return;
}
void* _Script_UMG::Widget::GetVisibility() {
    return;
}
float _Script_UMG::Widget::GetRenderTransformAngle() {
    return;
}
float _Script_UMG::Widget::GetRenderOpacity() {
    return;
}
_Script_UMG::PanelWidget* _Script_UMG::Widget::GetParent() {
    return;
}
_Script_Engine::PlayerController* _Script_UMG::Widget::GetOwningPlayer() {
    return;
}
_Script_Engine::LocalPlayer* _Script_UMG::Widget::GetOwningLocalPlayer() {
    return;
}
bool _Script_UMG::Widget::GetIsEnabled() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::Widget::GetDesiredSize() {
    return;
}
void* _Script_UMG::Widget::GetClipping() {
    return;
}
_Script_SlateCore::Geometry _Script_UMG::Widget::GetCachedGeometry() {
    return;
}
void* _Script_UMG::Widget::GetAccessibleText() {
    return;
}
void* _Script_UMG::Widget::GetAccessibleSummaryText() {
    return;
}
void _Script_UMG::Widget::ForceVolatile(bool bForce) {
    return;
}
void _Script_UMG::Widget::ForceLayoutPrepass() {
    return;
}
