#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelWidget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_SlateCore {
struct Margin;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ScrollBox : public PanelWidget {
    private: char pad_120[0x760]; public:
    void* get_WidgetStyle();
    void* get_WidgetBarStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_BarStyle();
    void* get_Orientation();
    void* get_ScrollBarVisibility();
    void* get_ConsumeMouseWheel();
    void* get_ScrollbarThickness();
    void* get_ScrollbarPadding();
    bool get_AlwaysShowScrollbar();
    void set_AlwaysShowScrollbar(bool value);
    bool get_AlwaysShowScrollbarTrack();
    void set_AlwaysShowScrollbarTrack(bool value);
    bool get_AllowOverscroll();
    void set_AllowOverscroll(bool value);
    bool get_bAnimateWheelScrolling();
    void set_bAnimateWheelScrolling(bool value);
    void* get_NavigationDestination();
    float& get_NavigationScrollPadding();
    void* get_ScrollWhenFocusChanges();
    bool get_bAllowRightClickDragScrolling();
    void set_bAllowRightClickDragScrolling(bool value);
    float& get_WheelScrollMultiplier();
    void* get_OnUserScrolled();
    static _Script_CoreUObject::Class* static_class();
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollOffset(float NewScrollOffset);
    void SetScrollbarVisibility(void* NewScrollBarVisibility);
    void SetScrollbarThickness(_Script_CoreUObject::Vector2D& NewScrollbarThickness);
    void SetScrollbarPadding(_Script_SlateCore::Margin& NewScrollbarPadding);
    void SetOrientation(void* NewOrientation);
    void SetConsumeMouseWheel(void* NewConsumeMouseWheel);
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void SetAllowOverscroll(bool NewAllowOverscroll);
    void ScrollWidgetIntoView(_Script_UMG::Widget* WidgetToFind, bool AnimateScroll, void* ScrollDestination, float Padding);
    void ScrollToStart();
    void ScrollToEnd();
    float GetViewOffsetFraction();
    float GetScrollOffsetOfEnd();
    float GetScrollOffset();
    void EndInertialScrolling();
}; // Size: 0x880
#pragma pack(pop)
}
