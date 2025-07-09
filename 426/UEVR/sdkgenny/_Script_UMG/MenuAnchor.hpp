#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MenuAnchor : public ContentWidget {
    private: char pad_120[0x50]; public:
    void* get_MenuClass();
    void* get_OnGetMenuContentEvent();
    void* get_OnGetUserMenuContentEvent();
    void* get_Placement();
    bool get_bFitInWindow();
    void set_bFitInWindow(bool value);
    bool get_ShouldDeferPaintingAfterWindowContent();
    void set_ShouldDeferPaintingAfterWindowContent(bool value);
    bool get_UseApplicationMenuStack();
    void set_UseApplicationMenuStack(bool value);
    void* get_OnMenuOpenChanged();
    static _Script_CoreUObject::Class* static_class();
    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void SetPlacement(void* InPlacement);
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    _Script_CoreUObject::Vector2D GetMenuPosition();
    void FitInWindow(bool bFit);
    void Close();
}; // Size: 0x170
#pragma pack(pop)
}
